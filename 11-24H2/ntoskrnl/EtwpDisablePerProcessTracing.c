/*
 * XREFs of EtwpDisablePerProcessTracing @ 0x1407AA548
 * Callers:
 *     EtwpEnableDisableUMGL @ 0x140A15A4C (EtwpEnableDisableUMGL.c)
 *     EtwpDisableTraceProviders @ 0x140A166D4 (EtwpDisableTraceProviders.c)
 * Callees:
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 */

__int64 __fastcall EtwpDisablePerProcessTracing(int a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v3 = 0;
  v2 = a1;
  return PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v2);
}
