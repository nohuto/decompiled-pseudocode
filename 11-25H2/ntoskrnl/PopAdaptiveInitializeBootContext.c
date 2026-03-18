/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140C223B8
 * Callers:
 *     PopInitializeAdpm @ 0x140C22450 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C1E064 (PopDiagTraceAdaptiveBootOverride.c)
 */

__int64 PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v1 = *(_QWORD *)(v0 + 240);
  if ( (*(_DWORD *)(v1 + 3856) & 2) != 0 )
  {
    qword_140FD7240 = *(_QWORD *)(v1 + 3912);
    PopDiagTraceAdaptiveBootOverride(qword_140FD7240 & 7, (qword_140FD7240 & 8) != 0);
    byte_140FD7239 = 1;
    if ( (qword_140FD7240 & 7) != 0 )
      PopAdaptiveBootContext = 1;
  }
  v3 = 0;
  if ( PopAdaptiveBootContext )
    v3 = 2;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, (__int64)&v3);
}
