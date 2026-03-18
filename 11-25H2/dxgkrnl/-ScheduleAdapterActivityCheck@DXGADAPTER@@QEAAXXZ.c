/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003E1D0
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140013DA0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003EB70 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(struct _KTHREAD **this)
{
  struct _KTHREAD **v2; // rax
  struct _KTHREAD ***v3; // rcx
  struct _KTHREAD *v4; // rdx
  struct _KTHREAD *v5; // rcx
  char v6[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v7 = (char *)(this + 461);
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[462] == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( this[462] != KeGetCurrentThread() )
LABEL_5:
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v6);
LABEL_6:
  *((_QWORD *)this[448] + 49) = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this[448] + 49) += this[441];
  v2 = (struct _KTHREAD **)((char *)this[448] + 400);
  if ( !*v2 )
  {
    v3 = (struct _KTHREAD ***)(this + 459);
    v4 = this[459];
    if ( *((struct _KTHREAD ***)v4 + 1) != this + 459 )
      __fastfail(3u);
    *v2 = v4;
    v2[1] = (struct _KTHREAD *)v3;
    *((_QWORD *)v4 + 1) = v2;
    *v3 = v2;
  }
  if ( !*((_BYTE *)this + 3660) )
  {
    v5 = this[391];
    *((_BYTE *)this + 3660) = 1;
    VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
      *((VIDMM_EXPORT **)v5 + 92),
      *((struct VIDMM_MONITORED_FENCE_STORAGE **)v5 + 93),
      1);
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v6);
}
