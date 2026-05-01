/*
 * XREFs of ?v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804380F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804457C0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LegacyUwpWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  HWND v4; // rsi
  int result; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  v4 = (HWND)*(int *)(a1 + 296);
  result = LegacyUwpWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(a1 + 616, a2);
  if ( !a2 )
  {
    if ( v4 )
      return PostMessageW(v4, 0x10u, 0LL, 0LL);
  }
  return result;
}
