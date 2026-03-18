/*
 * XREFs of ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x1802D38D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacyStereoSwapChain@@UEAA@XZ @ 0x1802D38A8 (--1CLegacyStereoSwapChain@@UEAA@XZ.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::`vector deleting destructor'(
        CLegacyStereoSwapChain *this,
        char a2)
{
  CLegacyStereoSwapChain::~CLegacyStereoSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
