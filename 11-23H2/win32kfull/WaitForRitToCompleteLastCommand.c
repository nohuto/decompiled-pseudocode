/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C001CB28
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C001C580 (EditionDeactivateMitInput.c)
 *     EditionActivateMitInput @ 0x1C001C980 (EditionActivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  while ( (unsigned int)ObWaitForSingleObject(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(1LL, 0LL);
}
