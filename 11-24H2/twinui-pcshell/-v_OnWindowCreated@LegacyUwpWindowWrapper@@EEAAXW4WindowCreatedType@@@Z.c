/*
 * XREFs of ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180437FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x180437D60 (-SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x180437E2C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18043901C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_DWORD *)(a1 + 616) )
  {
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 593) = 1;
    }
    else
    {
      LegacyUwpWindowWrapper::SendViewStateToWindow((LegacyUwpWindowWrapper *)(a1 - 8), 0);
      Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility(a1 + 616);
      LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
    }
  }
  else
  {
    PostMessageW((HWND)*(int *)(a1 + 296), 0x10u, 0LL, 0LL);
  }
}
