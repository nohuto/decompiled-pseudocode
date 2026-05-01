/*
 * XREFs of ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1804321E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804320BC (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x18043901C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyWindowWrapper::v_HandleActivationRequested(LegacyWindowWrapper *this)
{
  unsigned int Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 585) )
  {
    *((_BYTE *)this + 585) = 1;
    Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((char *)this + 624);
    LegacyWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
