/*
 * XREFs of TpCallbackReleaseMutexOnCompletion @ 0x18015DBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackReleaseMutexOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Mutex)
{
  if ( !Instance || (char *)Mutex - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || Instance->Mutex )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    Instance->CallbackEpilogFlags |= 2u;
    Instance->Mutex = (unsigned int)Mutex;
  }
}
