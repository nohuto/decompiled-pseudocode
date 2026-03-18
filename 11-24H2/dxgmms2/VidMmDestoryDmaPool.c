/*
 * XREFs of VidMmDestoryDmaPool @ 0x14001BD90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x14001C0B0 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmDestoryDmaPool(VIDMM_DMA_POOL *a1, unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return VIDMM_DMA_POOL::`scalar deleting destructor'(a1, a2);
  return result;
}
