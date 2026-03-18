/*
 * XREFs of ??1CSecondaryD2DBitmap@@UEAA@XZ @ 0x18021684C
 * Callers:
 *     ??_ECSecondaryCrossAdapterDirectBitmap@@UEAAPEAXI@Z @ 0x180216810 (--_ECSecondaryCrossAdapterDirectBitmap@@UEAAPEAXI@Z.c)
 *     ??1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ @ 0x1802E3734 (--1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CSecondaryD2DBitmap::~CSecondaryD2DBitmap(FastRegion::CRegion **this)
{
  FastRegion::CRegion::FreeMemory(this + 32);
  CD2DBitmap::~CD2DBitmap((CD2DBitmap *)this);
}
