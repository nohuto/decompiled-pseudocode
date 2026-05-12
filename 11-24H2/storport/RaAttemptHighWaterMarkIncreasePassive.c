/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x14003E1B0
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x14003E1D0 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 76, 0);
  RaAttemptHighWaterMarkIncrease((PVOID)Context);
}
