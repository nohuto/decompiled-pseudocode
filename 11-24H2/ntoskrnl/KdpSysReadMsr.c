/*
 * XREFs of KdpSysReadMsr @ 0x1405B02B0
 * Callers:
 *     KdSystemDebugControl @ 0x14073A4B0 (KdSystemDebugControl.c)
 *     KdpReadMachineSpecificRegister @ 0x140B77764 (KdpReadMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
