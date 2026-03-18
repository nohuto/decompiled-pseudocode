/*
 * XREFs of HalpCmcInitializePolling @ 0x14053ECC4
 * Callers:
 *     HalpInitializeCmc @ 0x140B4BAE8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x14047CCF0 (HalpCmcInitializeErrorPacketContents.c)
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
    qword_140E0FFF0 = (__int64)HalpCmcDeferredRoutine;
    qword_140E10028 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140E0FF98 = 8LL;
    qword_140E0FFA8 = (__int64)&qword_140E0FFA0;
    qword_140E0FFA0 = (__int64)&qword_140E0FFA0;
    dword_140E0FFD8 = 275;
    qword_140E0FFF8 = (__int64)&HalpCmcContext;
    qword_140E10010 = 0LL;
    qword_140E0FFE8 = 0LL;
    qword_140E10030 = (__int64)&HalpCmcContext;
    qword_140E10018 = 0LL;
    qword_140E0FFB0 = 0LL;
    dword_140E0FFD4 = 0;
    word_140E0FFD0 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KeReleaseSpinLock(&HalpCmcFallbackLock, v2);
}
