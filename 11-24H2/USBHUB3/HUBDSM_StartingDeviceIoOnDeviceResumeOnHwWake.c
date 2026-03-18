/*
 * XREFs of HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x140024D30
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x140028BAC (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake(__int64 a1)
{
  HUBUCX_StartDeviceIoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
