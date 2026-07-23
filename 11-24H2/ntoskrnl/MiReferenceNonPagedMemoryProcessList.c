/*
 * XREFs of MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38
 * Callers:
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceNonPagedMemoryProcessList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  void *i; // rcx
  __int64 result; // rax
  void *v6; // r14
  _DWORD *v7; // rcx
  __int64 v8; // r12
  char *Pool; // rax
  char *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned __int64 v20; // r15
  char *v21; // rax
  char *v22; // r14
  __int64 v23; // r8
  PVOID Object[2]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v25; // [rsp+30h] [rbp-49h]
  __int128 v26; // [rsp+40h] [rbp-39h]
  __int128 v27; // [rsp+50h] [rbp-29h]
  __int128 v28; // [rsp+60h] [rbp-19h]
  __int128 v29; // [rsp+70h] [rbp-9h]
  __int128 v30; // [rsp+80h] [rbp+7h]
  __int128 v31; // [rsp+90h] [rbp+17h]

  memset_0(Object, 0, 0x80uLL);
  v2 = 0LL;
  v3 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  for ( i = 0LL; ; i = v6 )
  {
    result = PsGetNextProcess(i);
    v6 = (void *)result;
    if ( !result )
      break;
    if ( MiGetProcessPartition(result) == *(_QWORD *)(a1 + 48) )
    {
      if ( v7[375] )
      {
        ObfReferenceObjectWithTag(v7, 0x72506D4Du);
        Object[v3++] = v6;
        if ( v3 == 16 )
        {
          v8 = *(_QWORD *)(a1 + 64) + 16LL;
          Pool = (char *)MiAllocatePool(0x40uLL, 8 * v8, 1667450189);
          v10 = Pool;
          if ( !Pool )
          {
            do
              result = ObfDereferenceObjectWithTag(Object[v2++], 0x72506D4Du);
            while ( v2 < 0x10 );
            return result;
          }
          v11 = *(_QWORD *)(a1 + 64);
          if ( v11 )
          {
            memmove(Pool, *(const void **)(a1 + 72), 8 * v11);
            ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
          }
          v12 = *(_QWORD *)(a1 + 64);
          v3 = 0LL;
          v13 = v25;
          *(_OWORD *)&v10[8 * v12] = *(_OWORD *)Object;
          v14 = v26;
          *(_OWORD *)&v10[8 * v12 + 16] = v13;
          v15 = v27;
          *(_OWORD *)&v10[8 * v12 + 32] = v14;
          v16 = v28;
          *(_OWORD *)&v10[8 * v12 + 48] = v15;
          v17 = v29;
          *(_OWORD *)&v10[8 * v12 + 64] = v16;
          v18 = v30;
          *(_OWORD *)&v10[8 * v12 + 80] = v17;
          v19 = v31;
          *(_OWORD *)&v10[8 * v12 + 96] = v18;
          *(_OWORD *)&v10[8 * v12 + 112] = v19;
          *(_QWORD *)(a1 + 64) = v8;
          *(_QWORD *)(a1 + 72) = v10;
        }
      }
    }
  }
  if ( v3 )
  {
    v20 = v3 + *(_QWORD *)(a1 + 64);
    v21 = (char *)MiAllocatePool(0x40uLL, 8 * v20, 1667450189);
    v22 = v21;
    if ( v21 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        memmove(v21, *(const void **)(a1 + 72), 8 * v23);
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      }
      result = (__int64)memmove(&v22[8 * *(_QWORD *)(a1 + 64)], Object, 8 * v3);
      *(_QWORD *)(a1 + 64) = v20;
      *(_QWORD *)(a1 + 72) = v22;
    }
    else
    {
      do
        result = ObfDereferenceObjectWithTag(Object[v2++], 0x72506D4Du);
      while ( v2 < v3 );
    }
  }
  return result;
}
