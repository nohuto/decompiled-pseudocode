/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140C335CC
 * Callers:
 *     PopInitializeAdpm @ 0x140C33664 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C2F160 (PopDiagTraceAdaptiveBootOverride.c)
 */

__int64 PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rcx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  if ( (*(_DWORD *)(v0 + 3856) & 2) != 0 )
  {
    qword_140FD71F0 = *(_QWORD *)(v0 + 3912);
    PopDiagTraceAdaptiveBootOverride(qword_140FD71F0 & 7, (qword_140FD71F0 & 8) != 0);
    byte_140FD71E9 = 1;
    if ( (qword_140FD71F0 & 7) != 0 )
      PopAdaptiveBootContext = 1;
  }
  v2 = 0;
  if ( PopAdaptiveBootContext )
    v2 = 2;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, (__int64)&v2);
}
