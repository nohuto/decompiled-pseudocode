/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x14043B4CC
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140377E10 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140377FD4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PnpDeviceCompletionRoutine @ 0x14043B090 (PnpDeviceCompletionRoutine.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405A9540 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
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
