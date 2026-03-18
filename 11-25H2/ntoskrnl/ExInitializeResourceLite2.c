/*
 * XREFs of ExInitializeResourceLite2 @ 0x1402D6940
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1402D67D4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x1406130F0 (DifExInitializeResourceLiteWrapper.c)
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140C114A0 (PnpInitPhase0.c)
 *     PpInitializeBootDDB @ 0x140C12D78 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140C143CC (PiSwInit.c)
 *     PipDmgInitPhaseZero @ 0x140C14610 (PipDmgInitPhaseZero.c)
 *     PopInitializeAdpm @ 0x140C22450 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140C2659C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140C29D48 (SepRmDbInitialization.c)
 *     WMIInitialize @ 0x140C2B4B8 (WMIInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C2F5EC (ExpInitSystemPhase0.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1402D65D0 (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x14048A9EC (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048AA78 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x14048AB4C (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140644218 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall ExInitializeResourceLite2(_QWORD *a1, int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  KSPIN_LOCK *v7; // rsi
  __int64 v8; // r14
  int RecordedStackTraceIndex; // ebp

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
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v7, v8);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v4) = RecordedStackTraceIndex;
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
