/*
 * XREFs of HalpKsrCallbackRoutine @ 0x140700AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSetShutdownResetHandler @ 0x1405425D8 (HalpSetShutdownResetHandler.c)
 */

void __fastcall HalpKsrCallbackRoutine(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  int v4; // edx
  void (__fastcall __noreturn *v5)(__int64, __int64, __int64, __int64, volatile signed __int32 *); // rcx

  if ( !(_DWORD)Argument1 )
    goto LABEL_6;
  v3 = (_DWORD)Argument1 - 1;
  if ( v3 )
  {
    v4 = v3 - 2;
    if ( v4 )
    {
      if ( v4 != 1 )
        return;
      goto LABEL_5;
    }
LABEL_6:
    v5 = HalpShutdownReset;
    goto LABEL_7;
  }
LABEL_5:
  v5 = 0LL;
LABEL_7:
  HalpSetShutdownResetHandler((__int64)v5);
}
