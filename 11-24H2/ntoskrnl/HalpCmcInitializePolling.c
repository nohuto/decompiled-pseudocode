/*
 * XREFs of HalpCmcInitializePolling @ 0x14053C5C4
 * Callers:
 *     HalpInitializeCmc @ 0x140B4DB28 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x140477E78 (HalpCmcInitializeErrorPacketContents.c)
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
    qword_140E10170 = (__int64)HalpCmcDeferredRoutine;
    qword_140E101A8 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140E10118 = 8LL;
    qword_140E10128 = (__int64)&qword_140E10120;
    qword_140E10120 = (__int64)&qword_140E10120;
    dword_140E10158 = 275;
    qword_140E10178 = (__int64)&HalpCmcContext;
    qword_140E10190 = 0LL;
    qword_140E10168 = 0LL;
    qword_140E101B0 = (__int64)&HalpCmcContext;
    qword_140E10198 = 0LL;
    qword_140E10130 = 0LL;
    dword_140E10154 = 0;
    word_140E10150 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KeReleaseSpinLock(&HalpCmcFallbackLock, v2);
}
