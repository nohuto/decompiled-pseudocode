/*
 * XREFs of ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x1801A8784
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x180080F80 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x1801A88D4 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorderStyle(
        TouchKeyboardExperienceManager *this,
        HWND hwnd,
        const struct KBViewInfo *a3,
        __int64 a4)
{
  int v4; // ebx
  int v7; // eax
  const char *v9; // r9
  HRESULT v10; // ebx
  __int64 v12; // rdx
  int pvAttribute; // [rsp+20h] [rbp-40h] BYREF
  unsigned int BorderColor; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = *((_DWORD *)a3 + 40);
  v17 = 0LL;
  v16[1] = 1504;
  v15[0] = 19LL;
  v7 = 5;
  v15[2] = 16LL;
  if ( v4 != 1 )
    v7 = 0;
  v16[0] = v7;
  v15[1] = v16;
  if ( !(unsigned int)SetWindowCompositionAttribute(hwnd, v15, a3, a4) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x15F6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v9);
  pvAttribute = (v4 == 1) + 1;
  v10 = DwmSetWindowAttribute(hwnd, 0x21u, &pvAttribute, 4u);
  if ( v10 < 0 )
  {
    v12 = 5636LL;
  }
  else
  {
    BorderColor = TouchKeyboardExperienceManager::GetBorderColor(this, a3);
    v10 = DwmSetWindowAttribute(hwnd, 0x22u, &BorderColor, 4u);
    if ( v10 >= 0 )
      return 0LL;
    v12 = 5641LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
