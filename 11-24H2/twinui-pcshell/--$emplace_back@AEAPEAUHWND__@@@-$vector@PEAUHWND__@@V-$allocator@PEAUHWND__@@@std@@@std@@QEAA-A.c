/*
 * XREFs of ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x1802C62A8
 * Callers:
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x1801F2814 (_lambda_cab7c03a2b5ac7190be81e45414ea272_--operator().c)
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___ @ 0x1804A4870 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___.c)
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804ABBE8 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1801E6010 (--$_Emplace_reallocate@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AE.c)
 */

char *__fastcall std::vector<HWND__ *>::emplace_back<HWND__ * &>(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<HWND__ *>::_Emplace_reallocate<HWND__ *>((const void **)a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 8;
  return (char *)v4;
}
