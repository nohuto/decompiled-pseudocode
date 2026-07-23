/*
 * XREFs of TpCallbackReleaseSemaphoreOnCompletion @ 0x18015DBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackReleaseSemaphoreOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        HANDLE Semaphore,
        ULONG ReleaseCount)
{
  if ( Instance && (char *)Semaphore - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ReleaseCount && !Instance->Semaphore )
  {
    Instance->CallbackEpilogFlags |= 8u;
    Instance->Semaphore = (unsigned int)Semaphore;
    Instance->SemaphoreReleaseCount = ReleaseCount;
  }
  else
  {
    TppRaiseInvalidParameter();
  }
}
