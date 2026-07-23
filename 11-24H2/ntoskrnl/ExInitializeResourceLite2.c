/*
 * XREFs of ExInitializeResourceLite2 @ 0x1403EAA00
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1403EA890 (CcAllocateInitializeBcb.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x14061D670 (DifExInitializeResourceLiteWrapper.c)
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140C24640 (PnpInitPhase0.c)
 *     PpInitializeBootDDB @ 0x140C25E38 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140C274AC (PiSwInit.c)
 *     PipDmgInitPhaseZero @ 0x140C276F0 (PipDmgInitPhaseZero.c)
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C3585C (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140C399AC (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140C3D180 (SepRmDbInitialization.c)
 *     WMIInitialize @ 0x140C3E8F0 (WMIInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140C42A18 (ExpInitSystemPhase0.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1403EAD8C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x1404850C0 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048514C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140485220 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14064E868 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
