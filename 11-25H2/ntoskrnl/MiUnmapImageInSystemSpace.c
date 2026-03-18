/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140944164
 * Callers:
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x140943A6C (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace(v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
