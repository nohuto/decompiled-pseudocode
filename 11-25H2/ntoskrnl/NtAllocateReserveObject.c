/*
 * XREFs of NtAllocateReserveObject @ 0x140A4E490
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, int a2, signed int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 result; // rax
  _DWORD *v7; // rbx
  int inserted; // edx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v11 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (unsigned int)a3 > 1 )
    return 3221225485LL;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + a3),
             a2,
             PreviousMode,
             v10,
             PspMemoryReserveObjectSizes[a3],
             0,
             0,
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v7 = Object;
    memset_0(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v7[6] = 4;
      *((_QWORD *)v7 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v7 + 9) = v7;
      *((_BYTE *)v7 + 80) = 0;
    }
    inserted = ObInsertObjectEx((char *)v7, 0LL, 983043, 0, 0, 0LL, (__int64)&v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
    return (unsigned int)inserted;
  }
  return result;
}
