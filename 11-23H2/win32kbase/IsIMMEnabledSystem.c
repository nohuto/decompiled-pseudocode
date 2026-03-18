/*
 * XREFs of IsIMMEnabledSystem @ 0x1C007C5D0
 * Callers:
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C00CD7C8 (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 __fastcall IsIMMEnabledSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
