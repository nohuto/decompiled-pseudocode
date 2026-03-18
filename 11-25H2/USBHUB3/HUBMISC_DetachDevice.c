/*
 * XREFs of HUBMISC_DetachDevice @ 0x14002FB38
 * Callers:
 *     HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x1400126C0 (HUBPSM30_DetachingDeviceFromPortOnOverCurrent.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1400126F0 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x140012720 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_DetachingDeviceOnCleanup @ 0x140012750 (HUBPSM20_DetachingDeviceOnCleanup.c)
 *     HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest @ 0x140013AF0 (HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1400143D0 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_DetachDevice(unsigned __int16 *a1)
{
  __int64 result; // rax

  HUBSM_AddEvent(*((_QWORD *)a1 + 166) + 504LL, 4038);
  result = *((unsigned int *)a1 + 334);
  if ( (result & 2) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1 + 424LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1[100]);
  return result;
}
