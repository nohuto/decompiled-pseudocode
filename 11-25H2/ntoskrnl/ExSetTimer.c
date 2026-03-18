/*
 * XREFs of ExSetTimer @ 0x140370E10
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8718 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x14065CC70 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14065CCCC (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     HalpRegisterPmuNotification @ 0x1406F6E1C (HalpRegisterPmuNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     WdipTimeoutCheckRoutine @ 0x140A42BB0 (WdipTimeoutCheckRoutine.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    v6 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&v6, 0LL);
  }
  if ( a3 < 0 )
  {
    BugCheckParameter3[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, a4, 0LL);
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
