/*
 * XREFs of HalpCmcInitializePolling @ 0x14053C494
 * Callers:
 *     HalpInitializeCmc @ 0x140B3BAE8 (HalpInitializeCmc.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x14047BDE4 (HalpCmcInitializeErrorPacketContents.c)
 */

void __fastcall HalpCmcInitializePolling(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // ecx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
  if ( !HalpCmcPollingInitialized )
  {
    HalpCmcErrorPacket = (__int64)&HalpCmcReserveErrorPacket;
    HalpCmcInitializeErrorPacketContents((GUID *)&HalpCmcReserveErrorPacket);
    v3 = *(_DWORD *)(a1 + 52);
    qword_140E0FD70 = (__int64)HalpCmcDeferredRoutine;
    qword_140E0FDA8 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140E0FD18 = 8LL;
    qword_140E0FD28 = (__int64)&qword_140E0FD20;
    qword_140E0FD20 = (__int64)&qword_140E0FD20;
    dword_140E0FD58 = 275;
    qword_140E0FD78 = (__int64)&HalpCmcContext;
    qword_140E0FD90 = 0LL;
    qword_140E0FD68 = 0LL;
    qword_140E0FDB0 = (__int64)&HalpCmcContext;
    qword_140E0FD98 = 0LL;
    qword_140E0FD30 = 0LL;
    dword_140E0FD54 = 0;
    word_140E0FD50 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KeReleaseSpinLock(&HalpCmcFallbackLock, v2);
}
