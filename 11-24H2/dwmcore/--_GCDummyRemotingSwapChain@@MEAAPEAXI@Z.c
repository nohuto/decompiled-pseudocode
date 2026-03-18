/*
 * XREFs of ??_GCDummyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802C67B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802C66F8 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 */

CDummyRemotingSwapChain *__fastcall CDummyRemotingSwapChain::`scalar deleting destructor'(
        CDummyRemotingSwapChain *this,
        char a2)
{
  CDummyRemotingSwapChain::~CDummyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
