/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x140071470
 * Callers:
 *     <none>
 * Callees:
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071494 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(FxInterrupt **SyncContext)
{
  *((_DWORD *)SyncContext + 2) = FxInterrupt::InterruptEnableInvokeCallback(*SyncContext);
  return 1;
}
