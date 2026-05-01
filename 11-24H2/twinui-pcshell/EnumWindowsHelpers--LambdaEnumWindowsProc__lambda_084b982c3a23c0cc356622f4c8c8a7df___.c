/*
 * XREFs of EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___ @ 0x1804A4870
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x1802C62A8 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A.c)
 */

_BOOL8 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___(
        HWND a1,
        __int64 a2)
{
  __int64 v2; // rdi
  HWND v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v5 = a1;
  if ( GetAncestor(a1, 3u) != **(HWND **)v2 )
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(v2 + 8), &v5);
  **(_DWORD **)a2 = 0;
  return **(_DWORD **)a2 >= 0;
}
