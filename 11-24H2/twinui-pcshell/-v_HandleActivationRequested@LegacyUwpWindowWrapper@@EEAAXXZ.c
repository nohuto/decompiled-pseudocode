/*
 * XREFs of ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x180437F50
 * Callers:
 *     <none>
 * Callees:
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x180437E2C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18043901C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::v_HandleActivationRequested(LegacyUwpWindowWrapper *this)
{
  int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 593) )
  {
    *((_BYTE *)this + 593) = 1;
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((char *)this + 616);
    LegacyUwpWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
