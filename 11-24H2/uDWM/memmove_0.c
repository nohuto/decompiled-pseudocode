/*
 * XREFs of memmove_0 @ 0x1800F6384
 * Callers:
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800092E0 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180061F40 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 *     memmove_s @ 0x180089768 (memmove_s.c)
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     ??$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEAU1@00@Z @ 0x1800ABCEC (--$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
