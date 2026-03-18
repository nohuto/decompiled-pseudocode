/*
 * XREFs of ??_ECLegacySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802C9B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x1801FB9F0 (--1CSwapChainBuffer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

FastRegion::CRegion **__fastcall CLegacySwapChainBuffer::`vector deleting destructor'(
        FastRegion::CRegion **this,
        char a2)
{
  *this = (FastRegion::CRegion *)&CLegacySwapChainBuffer::`vftable';
  CSwapChainBuffer::~CSwapChainBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
