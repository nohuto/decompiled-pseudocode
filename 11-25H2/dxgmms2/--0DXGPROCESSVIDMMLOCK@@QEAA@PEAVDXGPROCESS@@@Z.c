/*
 * XREFs of ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400393B4
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400CE1FC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct DXGPROCESS *a2)
{
  struct _KTHREAD **v3; // rdi

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    v3 = (struct _KTHREAD **)((char *)a2 + 184);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(this) )
    {
      if ( v3[1] != KeGetCurrentThread() )
        goto LABEL_4;
    }
    else if ( v3[1] != KeGetCurrentThread() )
    {
LABEL_4:
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
      return this;
    }
    *(_QWORD *)this = 0LL;
  }
  return this;
}
