/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C0010BB0
 * Callers:
 *     KeyboardStart @ 0x1C0001F70 (KeyboardStart.c)
 *     KeyboardClassPower @ 0x1C00031A0 (KeyboardClassPower.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005F80 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C0010B50 (KeyboardClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 288),
           (PREQUEST_POWER_COMPLETE)KeyboardClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
