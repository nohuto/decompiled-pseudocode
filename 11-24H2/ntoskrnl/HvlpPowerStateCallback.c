/*
 * XREFs of HvlpPowerStateCallback @ 0x1404C3D00
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCheckTscSync @ 0x14058B060 (HvlpCheckTscSync.c)
 */

void __fastcall HvlpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 && (_DWORD)Argument2 == 1 )
    HvlpCheckTscSync(CallbackContext);
}
