/*
 * XREFs of ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x1802CAFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802CAFA0 (--1CConversionSwapChain@@UEAA@XZ.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::`vector deleting destructor'(
        CConversionSwapChain *this,
        char a2)
{
  CConversionSwapChain::~CConversionSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
