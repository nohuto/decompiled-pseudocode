/*
 * XREFs of CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_InitCoro$2 @ 0x180632A78
 * Callers:
 *     ?LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@3@@Z @ 0x180632E48 (-LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@winrt@@V-$basic_str.c)
 * Callees:
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x180632B20 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CopilotHotkeyManager::LaunchCustomUriForResultsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rcx

  *(_QWORD *)(a2 + 209) = a6;
  *(_OWORD *)(a2 + 217) = 0LL;
  *(_QWORD *)(a2 + 233) = 0LL;
  *(_QWORD *)(a2 + 241) = 0LL;
  *(_OWORD *)(a2 + 217) = *(_OWORD *)a4;
  *(_OWORD *)(a2 + 233) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_WORD *)a4 = 0;
  v7 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 249) = v7;
  *(_QWORD *)a2 = CopilotHotkeyManager::LaunchCustomUriForResultsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 208) = 0;
  return CopilotHotkeyManager::LaunchCustomUriForResultsAsync__ResumeCoro_1(a2);
}
