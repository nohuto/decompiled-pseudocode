/*
 * XREFs of EtwpDisablePerProcessTracing @ 0x1407AA688
 * Callers:
 *     EtwpEnableDisableUMGL @ 0x140A0EC2C (EtwpEnableDisableUMGL.c)
 *     EtwpDisableTraceProviders @ 0x140A0F8B4 (EtwpDisableTraceProviders.c)
 * Callees:
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 */

__int64 __fastcall EtwpDisablePerProcessTracing(int a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v3 = 0;
  v2 = a1;
  return PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v2);
}
