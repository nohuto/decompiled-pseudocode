/*
 * XREFs of ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180246820
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180246938 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::SetDrawingRegionComplex(
        __int64 a1,
        HWND a2,
        const RECT *a3,
        __int64 a4)
{
  BOOL v8; // ebx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = IsRectEmpty(a3);
  CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(a1, a2, a3, a4);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", v8 ? HANDLE_FLAG_PROTECT_FROM_CLOSE : 0) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1D9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
}
