/*
 * XREFs of ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x1801A4FEC
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?allocate@?$allocator@I@std@@QEAAPEAI_K@Z @ 0x1801A50DC (-allocate@-$allocator@I@std@@QEAAPEAI_K@Z.c)
 *     ?_Change_array@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@_K1@Z @ 0x1802A6450 (-_Change_array@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$a.c)
 *     ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1802C33C0 (-_Calculate_growth@-$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  char *v11; // rax
  char *v12; // rdi
  char *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
         a1,
         v7 + 1);
  v11 = (char *)std::allocator<unsigned int>::allocate(v10, v9);
  v12 = v11;
  v19 = v11;
  try
  {
    v13 = &v11[4 * v6];
    *(_DWORD *)v13 = *a3;
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 4;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(4 * v9));
    throw;
  }
  return result;
}
