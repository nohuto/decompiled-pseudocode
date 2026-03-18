/*
 * XREFs of _DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY @ 0x14018BAE4
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY(PVOID *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1232), *a1);
}
