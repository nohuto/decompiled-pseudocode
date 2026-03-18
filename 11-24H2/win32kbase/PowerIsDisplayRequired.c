/*
 * XREFs of PowerIsDisplayRequired @ 0x1400EE150
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1400EDFA0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x1400EE1C0 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 */

__int64 __fastcall PowerIsDisplayRequired(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 UserSessionState; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 0LL;
  UserSessionState = W32GetUserSessionState(a1);
  v4 = W32GetUserSessionState(v3);
  CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v4 + 3064), 0LL, &v6);
  if ( v6 > *(_QWORD *)(UserSessionState + 2856) )
    LOBYTE(v1) = *(_DWORD *)(UserSessionState + 2888) > 0;
  return v1;
}
