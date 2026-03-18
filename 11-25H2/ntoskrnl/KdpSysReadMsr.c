/*
 * XREFs of KdpSysReadMsr @ 0x1405AC920
 * Callers:
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     KdpReadMachineSpecificRegister @ 0x140B67764 (KdpReadMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
