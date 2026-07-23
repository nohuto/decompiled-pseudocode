/*
 * XREFs of NtAllocateReserveObject @ 0x140A48760
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  NTSTATUS result; // eax
  _DWORD *v7; // rbx
  NTSTATUS inserted; // edx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = Type;
  v11 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MemoryReserveHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)MemoryReserveHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (unsigned int)Type > MemoryReserveIoCompletion )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + (int)Type),
             (int)ObjectAttributes,
             PreviousMode,
             v10,
             PspMemoryReserveObjectSizes[Type],
             0,
             0,
             &Object,
             0LL);
  if ( result >= 0 )
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
    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v7, 0LL, 983043, 0, 0, 0LL, (__int64)&v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v11;
    return inserted;
  }
  return result;
}
