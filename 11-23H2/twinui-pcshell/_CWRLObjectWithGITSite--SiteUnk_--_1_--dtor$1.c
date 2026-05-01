/*
 * XREFs of _CWRLObjectWithGITSite::SiteUnk_::_1_::dtor$1 @ 0x1802C76DF
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompareToItemData@@QEAA@XZ @ 0x1800C8F40 (--1CompareToItemData@@QEAA@XZ.c)
 */

void __fastcall CWRLObjectWithGITSite::SiteUnk_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    CompareToItemData::~CompareToItemData(*(CompareToItemData **)(a2 + 72));
  }
}
