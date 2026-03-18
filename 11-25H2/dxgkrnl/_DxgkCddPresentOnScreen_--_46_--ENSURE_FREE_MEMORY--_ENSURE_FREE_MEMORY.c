/*
 * XREFs of _DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY @ 0x140189894
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY(PVOID *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1200), *a1);
}
