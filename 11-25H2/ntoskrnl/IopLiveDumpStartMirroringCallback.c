/*
 * XREFs of IopLiveDumpStartMirroringCallback @ 0x140599A80
 * Callers:
 *     <none>
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x14059FC50 (IopLiveDumpTraceNoArgs.c)
 */

__int64 IopLiveDumpStartMirroringCallback()
{
  __int64 v0; // rcx
  bool v1; // zf
  __int64 *v2; // rcx

  if ( IopLiveDumpIsTracingEnabled() )
  {
    v1 = (*(_DWORD *)(v0 + 80) & 1) == 0;
    v2 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_START;
    if ( v1 )
      v2 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_START;
    IopLiveDumpTraceNoArgs(v2);
  }
  return 0LL;
}
