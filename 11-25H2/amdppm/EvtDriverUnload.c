/*
 * XREFs of EvtDriverUnload @ 0x140023B20
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x140024138 (wil_UninitializeFeatureStaging.c)
 */

__int64 EvtDriverUnload()
{
  REGHANDLE v0; // rcx

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1400140F8 = 0;
    EtwUnregister(v0);
    EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink);
    ProcLibEtwRegistered = 0;
  }
  return wil_UninitializeFeatureStaging();
}
