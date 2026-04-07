/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Do_call @ 0x1800A3C40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

void std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Do_call()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A1,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v0);
}
