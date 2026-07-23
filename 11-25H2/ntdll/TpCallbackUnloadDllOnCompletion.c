/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x1800D6550
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800D60D0 (TppSimplepExecuteCallback.c)
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || Instance->DllHandle )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    Instance->CallbackEpilogFlags |= 0x80u;
    Instance->DllHandle = DllHandle;
  }
}
