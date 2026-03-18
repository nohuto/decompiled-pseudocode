/*
 * XREFs of ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x1802245C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x18024DEC8 (--1CDDASwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::`vector deleting destructor'(CDDASwapChain *this, char a2)
{
  CDDASwapChain::~CDDASwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
