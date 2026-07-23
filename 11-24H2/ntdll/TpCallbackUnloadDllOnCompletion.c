/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x180085240
 * Callers:
 *     TppSimplepExecuteCallback @ 0x180084DC0 (TppSimplepExecuteCallback.c)
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || Instance->DllHandle )
  {
    TppRaiseInvalidParameter(Instance);
  }
  else
  {
    Instance->CallbackEpilogFlags |= 0x80u;
    Instance->DllHandle = DllHandle;
  }
}
