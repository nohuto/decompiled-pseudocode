/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x1404925F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  bool v6; // di

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v4 = *a2 - 1LL;
  v5 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  v6 = v4 < *v2;
  KeReleaseSpinLock(v2 + 3, v5);
  return v6;
}
