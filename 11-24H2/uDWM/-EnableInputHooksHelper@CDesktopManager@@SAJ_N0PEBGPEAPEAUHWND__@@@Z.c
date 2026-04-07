/*
 * XREFs of ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180047A34
 * Callers:
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800478B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180047A34 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180047A34 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x1800BB3EC (-SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z.c)
 */

__int64 __fastcall CDesktopManager::EnableInputHooksHelper(char a1, char a2, const unsigned __int16 *a3, HWND *a4)
{
  unsigned int v6; // esi
  HWND ForegroundWindow; // r15
  int v8; // r8d
  int v9; // r9d
  HWND WindowInBand; // rax
  HWND v11; // r14
  bool v12; // r8
  HWND v14; // rcx
  unsigned int v15; // eax
  int v16; // r9d
  HCURSOR CursorW; // rax
  bool v18; // r8
  __m128i v19; // [rsp+70h] [rbp-38h]

  v6 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    if ( a1 )
    {
      ForegroundWindow = GetForegroundWindow();
      SendNotifyMessageW(ForegroundWindow, 0x1Fu, 0LL, 0LL);
      if ( a2 )
      {
        v19.m128i_i32[3] = 0;
        v8 = 0;
        v19.m128i_i32[1] = 0;
        v9 = 0;
      }
      else
      {
        v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
        v19 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380);
        v9 = _mm_cvtsi128_si32(v19);
      }
      WindowInBand = (HWND)CreateWindowInBand(
                             136LL,
                             L"LivePreview",
                             0LL,
                             0x80000000LL,
                             v9,
                             v19.m128i_i32[1],
                             v8,
                             v19.m128i_i32[3],
                             0LL,
                             0LL,
                             g_hInstance,
                             0LL,
                             2);
      v11 = WindowInBand;
      if ( WindowInBand )
      {
        *a4 = WindowInBand;
        ChangeWindowMessageFilterEx(WindowInBand, 0x319u, 1u, 0LL);
        ChangeWindowMessageFilterEx(v11, 0x112u, 1u, 0LL);
        ChangeWindowMessageFilterEx(v11, 0x1Fu, 1u, 0LL);
        ChangeWindowMessageFilterEx(v11, 6u, 1u, 0LL);
        ChangeWindowMessageFilterEx(v11, 0x3Du, 1u, 0LL);
        if ( a2 )
          return v6;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 144) = ForegroundWindow;
        v6 = CDesktopManager::SetForegroundWindowAsync(v11, v11, v12);
        v16 = v6;
        if ( (v6 & 0x80000000) == 0 )
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
          SetCursor(CursorW);
          return v6;
        }
        v15 = 2942;
      }
      else
      {
        v6 = -2147024890;
        v15 = 2925;
        v16 = -2147024890;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180109BB0, 2LL, v16, v15, 0LL);
      CDesktopManager::EnableInputHooksHelper(0, 0, L"LivePreview", a4);
      return v6;
    }
    if ( *a4 )
    {
      LockSetForegroundWindow(2u);
      v14 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 144);
      if ( v14 )
      {
        if ( IsWindow(v14) )
          CDesktopManager::SetForegroundWindowAsync(
            *a4,
            *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 144),
            v18);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 144) = 0LL;
      }
      PostMessageW(*a4, 0x10u, 0LL, 0LL);
      *a4 = 0LL;
    }
  }
  return v6;
}
