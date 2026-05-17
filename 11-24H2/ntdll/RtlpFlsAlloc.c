/*
 * XREFs of RtlpFlsAlloc @ 0x1800B90E8
 * Callers:
 *     RtlFlsAllocEx @ 0x1800B8FD0 (RtlFlsAllocEx.c)
 *     RtlpHpEnvTlsAlloc @ 0x1800B9008 (RtlpHpEnvTlsAlloc.c)
 *     RtlFlsAlloc @ 0x1800B90C0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18008F344 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800B929C (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 */

__int64 __fastcall RtlpFlsAlloc(
        __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v6; // r15
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int i; // esi
  unsigned int *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax

  v6 = a3;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, a2, a3);
  v8 = 0;
  v9 = 8LL;
  while ( 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        goto LABEL_21;
      v11 = *(unsigned int **)(a1 + 8LL * i + 8);
      if ( !v11 )
      {
        v11 = (unsigned int *)RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::ChunkAllocate(a1 + 8, i);
        if ( !v11 )
          goto LABEL_21;
      }
      v12 = *v11;
      v13 = 1 << (i + 4);
      if ( *v11 < v13 )
        break;
    }
    while ( *(_QWORD *)&v11[6 * v12 + 4] )
      v12 = (v13 - 1) & (v12 + 1);
    ++*v11;
    v14 = v12 | (1 << (i + 4));
    if ( v14 == -1 )
    {
LABEL_21:
      v8 = -1073741801;
LABEL_22:
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v8;
    }
    v15 = v14 - 16;
    if ( v14 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v21, 0x10u);
    v22 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v21 - 4) + 8);
    if ( v22 )
      v23 = v22 + 8 * (((1 << v21) ^ 0x10u) + 2 * (((1 << v21) ^ 0x10u) + 1LL));
    else
      v23 = 8LL;
    *(_QWORD *)v23 = -1LL;
  }
  if ( v15 >= 0xFF0 )
  {
    v8 = -1073741801;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(a1 + 8, v14);
    goto LABEL_22;
  }
  _BitScanReverse(&v16, v14);
  v17 = v14 ^ (1 << v16);
  v18 = *(_QWORD *)(a1 + 8LL * (v16 - 4) + 8);
  if ( v18 )
  {
    v19 = v18 + 8 * (v17 + 2 * v17 + 3);
    v9 = v18 + 8 * (v17 + 2 * v17 + 2);
  }
  else
  {
    v19 = 16LL;
  }
  if ( !v6 )
    v6 = -1LL;
  *(_QWORD *)v9 = v6;
  *(_QWORD *)v19 = a4;
  if ( v15 > *(_DWORD *)(a1 + 88) )
    *(_DWORD *)(a1 + 88) = v15;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  *a5 = v15;
  return v8;
}
