/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1403C8384 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpSegLfhVsCommit @ 0x1403C9230 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1403C9338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403CA5D0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1404202E0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // r11
  int v5; // ebp
  char v6; // cl
  __int64 v7; // r10
  __int64 v8; // rdi
  signed __int16 *v9; // rbx
  int v10; // r13d
  int v11; // esi
  signed __int16 *v12; // r15
  unsigned __int8 v13; // r12
  signed __int16 v14; // ax
  signed __int16 v15; // tt
  char v17; // al
  char v18; // cl
  int v19; // esi
  __int64 (__fastcall *v20)(__int64, __int64, unsigned int, _DWORD *); // rax
  unsigned int v21; // r13d
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // ebx
  char v27; // r9
  int v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-54h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  char v32; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B8h] [rbp+20h] BYREF

  v33 = a3;
  v32 = -1;
  v4 = a1;
  v28 = 0;
  v5 = 0;
  v6 = *(_BYTE *)(a2 + 38);
  v34 = 0;
  v7 = a3 >> 12 >> v6;
  v8 = 2 * v7;
  v9 = (signed __int16 *)(2 * v7 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  _m_prefetchw(v9);
  LODWORD(v30) = 0;
  v10 = -1;
  v11 = 0;
  v29 = (unsigned __int16)qword_140E27FC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12);
  v12 = &v9[((v29 + a3 - 1) >> 12 >> v6) - (unsigned int)v7 + 1];
  if ( v9 >= v12 )
    return 0LL;
  v13 = -1;
  do
  {
    while ( 1 )
    {
      v14 = *v9;
      while ( v14 > 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange16(v9, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_6;
      }
      if ( v5 )
        break;
      v5 = 1;
      v17 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *(unsigned __int8 *)(v4 + 65));
      v4 = a1;
      v13 = v17;
    }
    if ( v14 )
    {
      ++v11;
      v30 = v8 >> 1;
      if ( v10 == -1 )
        v10 = v8 >> 1;
    }
    else
    {
      --v11;
    }
    *v9 = v14 + 1;
LABEL_6:
    ++v9;
    v8 += 2LL;
  }
  while ( v9 < v12 );
  if ( v11 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount((__int64 *)v4, a2, (v11 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    v4 = a1;
  }
  if ( v10 == -1 )
  {
    if ( v5 )
      RtlpHpReleaseLockExclusive(a2 + 56, *(unsigned __int8 *)(v4 + 65), v13);
    return 0LL;
  }
  v18 = *(_BYTE *)(a2 + 38);
  v19 = v30 - v10 + 1;
  v20 = (__int64 (__fastcall *)(__int64, __int64, unsigned int, _DWORD *))(v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 24));
  v21 = v10 << 12 << v18;
  v28 = v19;
  v22 = v19 << 12 << v18;
  v23 = *(_QWORD *)v4;
  v24 = a2 + v21;
  v32 = v13;
  if ( v20 == RtlpHpSegLfhVsCommit )
    v25 = RtlpHpSegLfhVsCommit(v23, v24, v22, &v34);
  else
    v25 = guard_dispatch_icall_no_overrides(v23, v24);
  v26 = v25;
  if ( v25 < 0 )
  {
    RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v33, v29);
    RtlpHpReleaseLockExclusive(a2 + 56, *(unsigned __int8 *)(a1 + 65), v13);
    return v26;
  }
  else
  {
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v21, v22, (__int64)&v28, 1, (__int64)&v32);
    v27 = 3;
    if ( !v34 )
      v27 = 2;
    RtlpHpLfhSubsegmentPrefetchRange(a2, v21, v22, v27);
    return 0LL;
  }
}
