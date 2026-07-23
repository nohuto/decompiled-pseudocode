/*
 * XREFs of PspAllocatePartition @ 0x14077AAAC
 * Callers:
 *     PsCreatePartition @ 0x14077A930 (PsCreatePartition.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspAddPartitionToGlobalList @ 0x1405E3F5C (PspAddPartitionToGlobalList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspClosePartitionHandle @ 0x14077AD40 (PspClosePartitionHandle.c)
 *     PspCreatePartitionSystemProcess @ 0x14077AD78 (PspCreatePartitionSystemProcess.c)
 *     ExpPartitionInitialize @ 0x1407C02D4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x1407C0484 (ExpPartitionStart.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+60h] [rbp-41h] BYREF
  __int64 v19; // [rsp+68h] [rbp-39h]
  _OWORD v20[3]; // [rsp+70h] [rbp-31h] BYREF

  v18 = 0LL;
  v8 = a4;
  v9 = a1;
  LOBYTE(a1) = a3;
  LOBYTE(a4) = a3;
  v19 = a7;
  memset(v20, 0, sizeof(v20));
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
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v20);
    Object = PspCreatePartitionSystemProcess(120LL, 128LL);
    KiUnstackDetachProcess((__int64)v20, 0, v15, v16);
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
      Object = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&v18);
      if ( Object >= 0 )
      {
        v13 = (_QWORD *)v19;
        v14 = v18;
        *a6 = 0LL;
        *v13 = v14;
        return 0;
      }
    }
  }
  return (unsigned int)Object;
}
