/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18002ED5C
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18002EC88 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x18002F99C (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18006F408 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x18002659C (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v2; // rdx

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 200, 0LL, 0);
  *((_QWORD *)this + 29) &= v2;
  return this;
}
