/*
 * XREFs of VidMmCreateDevice @ 0x14003FB20
 * Callers:
 *     <none>
 * Callees:
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1400BF1F8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmCreateDevice(struct VIDMM_GLOBAL *a1, struct DXGDEVICE *a2)
{
  VIDMM_DEVICE *Pool2; // rcx
  VIDMM_DEVICE *result; // rax

  Pool2 = (VIDMM_DEVICE *)ExAllocatePool2(64LL, 400LL, 942696790LL);
  result = 0LL;
  if ( Pool2 )
    return VIDMM_DEVICE::VIDMM_DEVICE(Pool2, a1, a2);
  return result;
}
