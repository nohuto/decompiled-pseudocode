/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400F5E98
 * Callers:
 *     VidMmCloseAllocation @ 0x14003BEA0 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x14003E2E0 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x140039838 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        char a3,
        struct VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v11; // ebx
  struct _KTHREAD **v12; // rdi
  struct DXGPROCESS *v14; // [rsp+58h] [rbp+10h] BYREF

  ExWaitForRundownProtectionRelease(a2 + 29);
  Current = DXGPROCESS::GetCurrent();
  v11 = 0;
  v14 = Current;
  if ( Current )
  {
    v12 = (struct _KTHREAD **)((char *)Current + 184);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12[1] != KeGetCurrentThread() )
        goto LABEL_4;
    }
    else if ( v12[1] != KeGetCurrentThread() )
    {
LABEL_4:
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v12);
      goto LABEL_5;
    }
    v14 = 0LL;
  }
LABEL_5:
  if ( a4 )
    *a4 = 0LL;
  if ( (int)VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)a2, a4, a3, a5, a6) < 0 )
    v11 = -1071775486;
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14);
  return v11;
}
