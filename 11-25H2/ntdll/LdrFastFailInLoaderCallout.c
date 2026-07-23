/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180111610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( LdrpProcessInitialized < 2 || LdrpLoaderLock.OwningThread == result->ClientId.UniqueThread )
    __fastfail(0x17u);
  return result;
}
