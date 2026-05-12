/*
 * XREFs of StorKsrNotificationCallback @ 0x1400C74C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorKsrNotificationCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 )
  {
    if ( (_DWORD)Argument1 == 1 )
      StorKsrPowerDown = 0;
  }
  else
  {
    StorKsrPowerDown = 1;
  }
}
