/*
 * XREFs of ?Free@CCpuMemoryBufferFactory@@UEAAX_K@Z @ 0x140045EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCpuMemoryBufferFactory::Free(void **this, void *a2, int a3)
{
  AERTFree(a2, this[2], a3);
}
