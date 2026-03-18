/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1402F8650
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1402E1780 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x1402E3A80 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1402F92F0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpSegLfhVsCommit @ 0x1403C9230 (RtlpHpSegLfhVsCommit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]

  _BitScanForward64(&v5, a3);
  v6 = a4;
  v18 = 0LL;
  v19 = 0LL;
  v8 = a2 + (unsigned int)((_DWORD)v5 << 12);
  _BitScanReverse64(&v9, a3);
  LODWORD(v9) = v9 - v5;
  v11 = ((_DWORD)v9 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v9 + 1)) - 1) << v5;
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 24), *(unsigned __int8 *)(a1 + 3), (__int64)&v18);
  v13 = a1 ^ *(_QWORD *)(a1 + 8);
  if ( a5 )
  {
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)) == RtlpHpSegLfhVsCommit )
      v14 = RtlpHpSegLfhVsCommit(v13, v8, v11, 0LL);
    else
      v14 = guard_dispatch_icall_no_overrides(v13, v8);
    v15 = v14;
    if ( v14 < 0 )
      goto LABEL_9;
    *(_QWORD *)(a2 + 16) |= v12;
    v16 = v6;
  }
  else
  {
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)) == RtlpHpSegLfhVsDecommit )
      RtlpHpSegLfhVsDecommit(v13, v8, v11);
    else
      guard_dispatch_icall_no_overrides(v13, v8);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v16 = -(int)v6;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v16);
  v15 = 0;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), &v18);
  return v15;
}
