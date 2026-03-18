/*
 * XREFs of UpdateInputSettingWnfState @ 0x14012FC70
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(__int64 a1)
{
  int v1; // edi
  __int64 UserSessionState; // rax
  char v3; // r10
  __int64 v4; // rbx
  _DWORD *v5; // r11
  _DWORD *v6; // rdx
  unsigned int i; // r9d
  __int64 v9; // rax

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = 0;
  v4 = UserSessionState;
  v5 = (_DWORD *)(UserSessionState + 18648);
  ++*(_DWORD *)(UserSessionState + 18648);
  v6 = (_DWORD *)(UserSessionState + 18652);
  for ( i = 0; i < 4; ++i )
  {
    if ( *v6 == v1 )
    {
      v3 = 1;
      v6[1] = *v5;
    }
    else if ( !v3 )
    {
      goto LABEL_4;
    }
    if ( i < 3 )
    {
      v9 = *(_QWORD *)v6;
      *(_QWORD *)v6 = *(_QWORD *)(v4 + 8LL * (i + 1) + 18652);
      *(_QWORD *)(v4 + 8LL * (i + 1) + 18652) = v9;
    }
LABEL_4:
    v6 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, v5, 36LL, 0LL, 0LL);
}
