/*
 * XREFs of RtlpFlsAlloc @ 0x1800097F8
 * Callers:
 *     RtlFlsAlloc @ 0x1800097D0 (RtlFlsAlloc.c)
 *     RtlpHpEnvTlsAlloc @ 0x1800F2190 (RtlpHpEnvTlsAlloc.c)
 *     RtlFlsAllocEx @ 0x18010FAC0 (RtlFlsAllocEx.c)
 * Callees:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800099AC (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x1800B86C4 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int i; // esi
  unsigned int *Value; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax

  RtlAcquireSRWLockExclusive(SRWLock);
  v8 = 0;
  v9 = 8LL;
  while ( 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        goto LABEL_21;
      Value = (unsigned int *)SRWLock[i + 1].Value;
      if ( !Value )
      {
        Value = (unsigned int *)RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::ChunkAllocate(&SRWLock[1], i);
        if ( !Value )
          goto LABEL_21;
      }
      v12 = *Value;
      v13 = 1 << (i + 4);
      if ( *Value < v13 )
        break;
    }
    while ( *(_QWORD *)&Value[6 * v12 + 4] )
      v12 = (v13 - 1) & (v12 + 1);
    ++*Value;
    v14 = v12 | (1 << (i + 4));
    if ( v14 == -1 )
    {
LABEL_21:
      v8 = -1073741801;
LABEL_22:
      RtlReleaseSRWLockExclusive(SRWLock);
      return v8;
    }
    v15 = v14 - 16;
    if ( v14 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v21, 0x10u);
    v22 = SRWLock[(unsigned int)(v21 - 4) + 1].Value;
    if ( v22 )
      v23 = v22 + 8 * (((1 << v21) ^ 0x10u) + 2 * (((1 << v21) ^ 0x10u) + 1LL));
    else
      v23 = 8LL;
    *(_QWORD *)v23 = -1LL;
  }
  if ( v15 >= 0xFF0 )
  {
    v8 = -1073741801;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&SRWLock[1]);
    goto LABEL_22;
  }
  _BitScanReverse(&v16, v14);
  v17 = v14 ^ (1 << v16);
  v18 = SRWLock[v16 - 3].Value;
  if ( v18 )
  {
    v19 = v18 + 8 * (v17 + 2 * v17 + 3);
    v9 = v18 + 8 * (v17 + 2 * v17 + 2);
  }
  else
  {
    v19 = 16LL;
  }
  if ( !a3 )
    a3 = -1LL;
  *(_QWORD *)v9 = a3;
  *(_QWORD *)v19 = a4;
  if ( v15 > *(_DWORD *)&SRWLock[11].0 )
    *(_DWORD *)&SRWLock[11].0 = v15;
  RtlReleaseSRWLockExclusive(SRWLock);
  *a5 = v15;
  return v8;
}
