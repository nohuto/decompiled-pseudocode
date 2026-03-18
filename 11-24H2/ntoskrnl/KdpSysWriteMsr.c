/*
 * XREFs of KdpSysWriteMsr @ 0x1405B03A4
 * Callers:
 *     KdSystemDebugControl @ 0x14073A4B0 (KdSystemDebugControl.c)
 *     KdpWriteMachineSpecificRegister @ 0x140B78A90 (KdpWriteMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
