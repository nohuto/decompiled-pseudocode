/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     NtGdiCreateRectRgn @ 0x140039620 (NtGdiCreateRectRgn.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x14003D278 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     GreCreateRectRgn @ 0x1400EF5F0 (GreCreateRectRgn.c)
 *     EngCreateClip @ 0x1400F8300 (EngCreateClip.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401549C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, 0x70u);
  return this;
}
