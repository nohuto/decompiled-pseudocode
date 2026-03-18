/*
 * XREFs of ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x18022FF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x180259398 (--1CDDASwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::`vector deleting destructor'(CDDASwapChain *this, char a2)
{
  CDDASwapChain::~CDDASwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
