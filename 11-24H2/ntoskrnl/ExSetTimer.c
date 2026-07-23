/*
 * XREFs of ExSetTimer @ 0x1403B0B80
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8498 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140667030 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14066708C (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     HalpRegisterPmuNotification @ 0x14070084C (HalpRegisterPmuNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     WdipTimeoutCheckRoutine @ 0x140A3D620 (WdipTimeoutCheckRoutine.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
