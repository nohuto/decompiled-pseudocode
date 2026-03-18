/*
 * XREFs of PspAllocatePartition @ 0x14077ABFC
 * Callers:
 *     PsCreatePartition @ 0x14077AA80 (PsCreatePartition.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PspAddPartitionToGlobalList @ 0x1405E695C (PspAddPartitionToGlobalList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspClosePartitionHandle @ 0x14077AE90 (PspClosePartitionHandle.c)
 *     PspCreatePartitionSystemProcess @ 0x14077AEC8 (PspCreatePartitionSystemProcess.c)
 *     ExpPartitionInitialize @ 0x1407BFE84 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x1407C0034 (ExpPartitionStart.c)
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall PspAllocatePartition(int a1, __int64 a2, char a3, __int64 a4, char a5, _QWORD *a6, __int64 a7)
{
  __int64 v8; // r14
  int v9; // r8d
  int Object; // edi
  char v11; // si
  unsigned int v12; // r14d
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+60h] [rbp-41h] BYREF
  __int64 v17; // [rsp+68h] [rbp-39h]
  _OWORD v18[3]; // [rsp+70h] [rbp-31h] BYREF

  v16 = 0LL;
  v8 = a4;
  v9 = a1;
  LOBYTE(a1) = a3;
  LOBYTE(a4) = a3;
  v17 = a7;
  memset(v18, 0, sizeof(v18));
  Object = ObCreateObjectEx(a1, (_DWORD)PsPartitionType, v9, a4);
  if ( Object < 0 )
    return (unsigned int)Object;
  memset_0(0LL, 0, 0x90uLL);
  MEMORY[0x28] = 2LL;
  v11 = a5 & 1;
  ObfReferenceObjectWithTag(0LL, 0x64726148u);
  MEMORY[0x30] = 1LL;
  MEMORY[0x70] = 0LL;
  if ( v8 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 40)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x48] = v8;
    if ( v11 )
      goto LABEL_6;
LABEL_18:
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v18);
    Object = PspCreatePartitionSystemProcess(120LL, 128LL);
    KiUnstackDetachProcess((__int64)v18, 0);
    if ( Object < 0 )
      return (unsigned int)Object;
    v12 = a5 & 2;
    Object = ExpPartitionInitialize(0LL);
    if ( Object < 0 )
      return (unsigned int)Object;
    goto LABEL_7;
  }
  if ( !v11 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x48] = PspSystemPartition;
    goto LABEL_18;
  }
LABEL_6:
  v12 = 1;
LABEL_7:
  Object = MmCreatePartition(0LL, v12);
  if ( Object >= 0 )
  {
    PspAddPartitionToGlobalList(0LL);
    if ( v11 )
    {
      MEMORY[0x88] |= 1u;
      *a6 = 0LL;
      return 0;
    }
    Object = ExpPartitionStart(MEMORY[0x10]);
    if ( Object >= 0 )
    {
      if ( (a5 & 2) != 0 )
        MEMORY[0x88] |= 1u;
      Object = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&v16);
      if ( Object >= 0 )
      {
        v13 = (_QWORD *)v17;
        v14 = v16;
        *a6 = 0LL;
        *v13 = v14;
        return 0;
      }
    }
  }
  return (unsigned int)Object;
}
