/*
 * XREFs of KdpSysWriteMsr @ 0x1405AD314
 * Callers:
 *     KdSystemDebugControl @ 0x1407383E0 (KdSystemDebugControl.c)
 *     KdpWriteMachineSpecificRegister @ 0x140B7AA90 (KdpWriteMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
