/*
 * XREFs of UpdateTPCurrentActiveState @ 0x14012BEC0
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012C1A0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateInputSettingWnfState @ 0x14012FC70 (UpdateInputSettingWnfState.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401B1408 (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 */

__int64 __fastcall UpdateTPCurrentActiveState(__int64 a1)
{
  __int64 UserSessionState; // rsi
  int v2; // edi
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v2 = -__CFSHR__(*(_DWORD *)(UserSessionState + 16780), 5);
  UpdateMouseConnectionState();
  v3 = *(unsigned int *)(UserSessionState + 16784);
  v4 = *(_DWORD *)(UserSessionState + 16780);
  if ( (v3 & 1) != 0 )
    v5 = v4 | 0x10;
  else
    v5 = *(_DWORD *)(UserSessionState + 16780) & 0xFFFFFFEF | (4 * (~(_BYTE)v4 & 4));
  *(_DWORD *)(UserSessionState + 16780) = v5;
  *(_DWORD *)(W32GetUserSessionState(v3) + 352) = (unsigned __int8)(v5 & 0x10) >> 4;
  v7 = W32GetUserSessionState(v6);
  InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(v7 + 16768));
  CPTPProcessor::EnvironmentChanged();
  result = v2 != 0;
  if ( (*(_DWORD *)(UserSessionState + 16780) & 0x10u) >> 4 != (_DWORD)result )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
