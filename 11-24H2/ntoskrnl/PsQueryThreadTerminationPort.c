/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1406FC8B0
 * Callers:
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
