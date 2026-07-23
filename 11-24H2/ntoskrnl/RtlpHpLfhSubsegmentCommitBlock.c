/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x140360750
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403605B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpSegLfhVsCommit @ 0x140360A10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1403FE590 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v5; // cl
  int v6; // r12d
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  signed __int16 *v11; // rbx
  signed __int16 *v12; // r13
  int v13; // edi
  char v14; // bp
  signed __int16 v15; // ax
  signed __int16 v16; // tt
  unsigned int v17; // edx
  char v19; // cl
  int v20; // r14d
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v22; // edx
  unsigned int v23; // r14d
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  int v29; // [rsp+40h] [rbp-58h] BYREF
  int v30; // [rsp+44h] [rbp-54h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  char v33; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+18h]
  unsigned int v35; // [rsp+B8h] [rbp+20h]

  v34 = a3;
  v30 = 0;
  v29 = 0;
  v33 = -1;
  v5 = *(_BYTE *)(a2 + 38);
  v6 = 0;
  v7 = a3 >> 12 >> v5;
  v8 = *(unsigned __int8 *)(a2 + 24);
  v31 = (unsigned __int16)qword_140E28348 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12);
  v9 = 2 * v7;
  v10 = ((a3 + v31 - 1) >> 12 >> v5) - (unsigned int)v7 + 1;
  v11 = (signed __int16 *)(2 * v7 + a2 + 8 * v8);
  _m_prefetchw(v11);
  v12 = &v11[v10];
  LODWORD(v32) = 0;
  v13 = 0;
  v35 = -1;
  if ( v11 >= v12 )
    return 0LL;
  v14 = -1;
  do
  {
    while ( 1 )
    {
      v15 = *v11;
      while ( v15 > 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange16(v11, v15 + 1, v15);
        if ( v16 == v15 )
        {
          v17 = v35;
          goto LABEL_7;
        }
      }
      if ( v6 )
        break;
      v6 = 1;
      v14 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *(unsigned __int8 *)(a1 + 65));
    }
    v17 = v35;
    if ( v15 )
    {
      ++v13;
      v32 = v9 >> 1;
      if ( v35 == -1 )
        v17 = v9 >> 1;
      v35 = v17;
    }
    else
    {
      --v13;
    }
    *v11 = v15 + 1;
LABEL_7:
    ++v11;
    v9 += 2LL;
  }
  while ( v11 < v12 );
  if ( v13 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v13 << 12 << *(_BYTE *)(a2 + 38)) / 4096, v7);
    v17 = v35;
  }
  if ( v17 == -1 )
  {
    if ( v6 )
      RtlpHpReleaseLockExclusive(a2 + 56);
    return 0LL;
  }
  v19 = *(_BYTE *)(a2 + 38);
  v20 = v32 - v17 + 1;
  v21 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
  v22 = v17 << 12 << v19;
  v30 = v20;
  v23 = v20 << 12 << v19;
  v24 = *(_QWORD *)a1;
  v25 = a2 + v22;
  v35 = v22;
  v33 = v14;
  if ( v21 == RtlpHpSegLfhVsCommit )
    v26 = RtlpHpSegLfhVsCommit(v24, v25, v23, &v29);
  else
    v26 = guard_dispatch_icall_no_overrides(v24, v25);
  v27 = v26;
  if ( v26 >= 0 )
  {
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v35, v23, &v30, 1, &v33);
    v28 = v25 + v23;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 && v25 < v28 )
    {
      do
        v25 += 4096LL;
      while ( v25 < v28 );
    }
    return 0LL;
  }
  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v34, v31);
  RtlpHpReleaseLockExclusive(a2 + 56);
  return v27;
}
