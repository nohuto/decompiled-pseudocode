/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180073540
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180073578 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
