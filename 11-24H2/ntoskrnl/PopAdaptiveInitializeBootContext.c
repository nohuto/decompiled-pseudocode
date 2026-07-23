/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140C3570C
 * Callers:
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C31280 (PopDiagTraceAdaptiveBootOverride.c)
 */

NTSTATUS PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  if ( (*(_DWORD *)(v0 + 3856) & 2) != 0 )
  {
    qword_140FD81F0 = *(_QWORD *)(v0 + 3912);
    PopDiagTraceAdaptiveBootOverride(qword_140FD81F0 & 7, (qword_140FD81F0 & 8) != 0);
    byte_140FD81E9 = 1;
    if ( (qword_140FD81F0 & 7) != 0 )
      PopAdaptiveBootContext = 1;
  }
  Buffer = 0;
  if ( PopAdaptiveBootContext )
    Buffer = 2;
  return ZwUpdateWnfStateData(&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
