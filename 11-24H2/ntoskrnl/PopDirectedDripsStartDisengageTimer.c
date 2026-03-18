/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x1405CF9E0
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403111B0 (PoFxNotifySurprisePowerOn.c)
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046D6D0 (PopDirectedDripsSetDisengageReason.c)
 */

void __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // bp
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (KSPIN_LOCK *)((char *)&unk_140F0DE08 + 160 * a1);
  v5[0] = 0LL;
  v5[1] = -1LL;
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
  if ( !KeCancelTimer2((__int64)(v1 + 3), 0LL, v3, v4) && ++*((_DWORD *)v1 + 5) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)v1);
  KeSetTimer2((__int64)(v1 + 3), -10000000LL * *((unsigned int *)v1 + 1), 0LL, (__int64)v5);
  ++*((_DWORD *)v1 + 4);
  KeReleaseSpinLock(v1 + 1, v2);
}
