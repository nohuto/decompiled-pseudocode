/*
 * XREFs of ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180632610
 * Callers:
 *     ?EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z @ 0x1806230D0 (-EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x180623144 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x18033A528 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ?TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@K@Z @ 0x180635518 (-TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA-AV-$optional@V-$basic_string@GU-$char_tra.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CopilotHotkeyManager::IsTargetAppWindow(HWND a1, void **a2)
{
  bool v3; // di
  _BYTE *v4; // rcx
  unsigned __int16 *v5; // rax
  signed __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  DWORD dwProcessId; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+48h] [rbp-20h]
  void **v13; // [rsp+50h] [rbp-18h]

  v13 = a2;
  v3 = 0;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(a1, &dwProcessId) )
  {
    CopilotHotkeyManager::TryGetAppUserModelForProcess(v11, dwProcessId);
    if ( v12 )
    {
      v4 = a2;
      if ( (unsigned __int64)a2[3] > 7 )
        v4 = *a2;
      v5 = (unsigned __int16 *)v11;
      if ( v11[3] > 7uLL )
        v5 = (unsigned __int16 *)v11[0];
      v6 = v4 - (_BYTE *)v5;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v5 + v6);
        v8 = *v5 - v7;
        if ( v8 )
          break;
        ++v5;
      }
      while ( v7 );
      v3 = v8 == 0;
    }
    std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v11);
  }
  std::wstring::_Tidy_deallocate(a2);
  return v3;
}
