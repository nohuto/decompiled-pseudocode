/*
 * XREFs of ??_ECDDisplaySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802C1C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18006935C (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CDDisplaySwapChainBuffer *__fastcall CDDisplaySwapChainBuffer::`vector deleting destructor'(
        CDDisplaySwapChainBuffer *this,
        char a2)
{
  CDDisplaySwapChainBuffer::~CDDisplaySwapChainBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
