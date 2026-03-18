/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x140011D50
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x140012850 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x140012890 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x140012CD0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x140012F80 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x140013030 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x140013B20 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2336), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return HUBSM_AddEvent(v1 + 1272, 2046);
  return result;
}
