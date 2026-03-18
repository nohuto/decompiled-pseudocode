/*
 * XREFs of HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x140026130
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CancelUCXIoctl @ 0x140026230 (HUBUCX_CancelUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_WaitingForUCXIoctlOnStopSuspend(__int64 a1)
{
  HUBUCX_CancelUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
