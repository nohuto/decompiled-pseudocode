/*
 * XREFs of ??0CWindowBorder@@IEAA@XZ @ 0x18002E62C
 * Callers:
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18002E4B0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x18002659C (--0CContainerVisual@@IEAA@XZ.c)
 */

CWindowBorder *__fastcall CWindowBorder::CWindowBorder(CWindowBorder *this)
{
  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CWindowBorder::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return this;
}
