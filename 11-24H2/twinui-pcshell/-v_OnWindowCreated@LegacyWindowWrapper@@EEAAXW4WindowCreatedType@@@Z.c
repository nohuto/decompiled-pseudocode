/*
 * XREFs of ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180432240
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x180431FF0 (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804320BC (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18043901C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LegacyWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  unsigned int Visibility; // eax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  if ( !*(_DWORD *)(a1 + 624) )
    return PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 585) = 1;
  }
  else
  {
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)(a1 - 8), 0);
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 624);
    return LegacyWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
  }
  return result;
}
