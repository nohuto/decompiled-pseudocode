/*
 * XREFs of ExSetTimer @ 0x1403C1FC0
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404FABB8 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140668740 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14066879C (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     HalpRegisterPmuNotification @ 0x140702C0C (HalpRegisterPmuNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
