/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x180223910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802C99D8 (--1CLegacySwapChain@@MEAA@XZ.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x200uLL);
  return this;
}
