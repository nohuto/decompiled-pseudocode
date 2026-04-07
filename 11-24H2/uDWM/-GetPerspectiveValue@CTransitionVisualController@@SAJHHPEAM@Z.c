/*
 * XREFs of ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18007EF90
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180042A38 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetPerspectiveValue(unsigned int a1, unsigned int a2, float *a3)
{
  __int64 v6; // rbp
  int ThemeAnimationProperty; // eax
  unsigned int v8; // ebx
  int v10; // eax
  _DWORD v11[10]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0;
  v11[0] = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
  ThemeAnimationProperty = GetThemeAnimationProperty(v6, a1, a2, 0LL, &v12, 4, v11);
  v8 = ThemeAnimationProperty;
  if ( ThemeAnimationProperty >= 0 )
  {
    if ( (v12 & 0x10) != 0 )
    {
      v10 = GetThemeAnimationProperty(v6, a1, a2, 258LL, a3, 4, v11);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v10,
          0xB10u,
          0LL);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      ThemeAnimationProperty,
      0xB06u,
      0LL);
  }
  return v8;
}
