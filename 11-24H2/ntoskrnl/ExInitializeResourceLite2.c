/*
 * XREFs of ExInitializeResourceLite2 @ 0x140365350
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1403651D8 (CcAllocateInitializeBcb.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x14061F0B0 (DifExInitializeResourceLiteWrapper.c)
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140C22600 (PnpInitPhase0.c)
 *     PpInitializeBootDDB @ 0x140C23E08 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140C2545C (PiSwInit.c)
 *     PipDmgInitPhaseZero @ 0x140C256A0 (PipDmgInitPhaseZero.c)
 *     PopInitializeAdpm @ 0x140C33664 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C3371C (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140C3786C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140C3B028 (SepRmDbInitialization.c)
 *     WMIInitialize @ 0x140C3C798 (WMIInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C408C8 (ExpInitSystemPhase0.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1403656DC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x14048A298 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048A324 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x14048A3F8 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140650228 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall ExInitializeResourceLite2(_QWORD *a1, int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  KSPIN_LOCK *v7; // rsi
  __int64 v8; // r14
  int RecordedStackTraceIndex; // eax
  __int16 v10; // bp

  memset_0(a1, 0, 0x68uLL);
  a1[1] = a1;
  *a1 = a1;
  v4 = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v7 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v7);
        v10 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v7, v8);
      }
      else
      {
        v10 = 0;
      }
      LOWORD(v4) = v10;
    }
    v4 = (unsigned __int16)v4;
  }
  v5 = -1;
  a1[11] = v4;
  if ( a2 != -1 )
    v5 = (a2 + 3999) / 0xFA0u;
  *((_DWORD *)a1 + 21) = v5;
  ExpAddResourceToSystemResourceList(a1);
  __incgsdword(0x9058u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, a1, 0LL, 0LL);
  return 0LL;
}
