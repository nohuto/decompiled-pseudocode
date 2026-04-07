/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x180075264
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     _CAtlasedImage::Validate_::_1_::dtor$0 @ 0x1800F6840 (_CAtlasedImage--Validate_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
