/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x1402F074C
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PnpDeviceCompletionRoutine @ 0x1402F0310 (PnpDeviceCompletionRoutine.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A64B0 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFindDeviceThatFailedIrp(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) < 0 )
  {
    v3 = a1 + 72LL * (v1 - 1) + 208;
    while ( v2 < v1 )
    {
      if ( (*(_BYTE *)(v3 + 3) & 2) != 0 )
        return *(_QWORD *)(v3 + 40);
      ++v2;
      v3 -= 72LL;
    }
  }
  return 0LL;
}
