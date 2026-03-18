/*
 * XREFs of MiAllocateHyperSpace @ 0x140211930
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(__int64 a1)
{
  _QWORD *MmInternal; // rbx
  unsigned __int64 result; // rax

  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping(MmInternal + 13, 3LL, a1, 4LL);
  *MmInternal = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
