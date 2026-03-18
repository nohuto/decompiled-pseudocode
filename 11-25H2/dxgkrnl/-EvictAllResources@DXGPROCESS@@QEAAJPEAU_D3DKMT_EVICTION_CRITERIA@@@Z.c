/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401E6BCC
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CCF8 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v3; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // r15
  __int64 v7; // r13
  __int64 v8; // r9
  __int64 i; // rsi
  struct VIDMM_MULTI_ALLOC *v10; // r8
  __int64 j; // rbx
  __int64 k; // rsi
  struct VIDMM_MULTI_ALLOC *v13; // r8
  struct DXGDEVICE *Current; // rax
  __int64 v15; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[160]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v5 = 0;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = (_QWORD *)*((_QWORD *)this + 40);
  v17[0] = (char *)this + 320;
  while ( 1 )
  {
    v17[1] = v6;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
    v15 = (__int64)Current;
    if ( !Current )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)this + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
      goto LABEL_19;
    }
    v7 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, v15, 2, v8, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL) < 0 )
      break;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, this);
    for ( i = *(_QWORD *)(v15 + 48); i; i = *(_QWORD *)(i + 64) )
    {
      v10 = *(struct VIDMM_MULTI_ALLOC **)(i + 24);
      if ( v10 )
        VIDMM_EXPORT::VidMmEvictAllocation(
          *(VIDMM_EXPORT **)(v7 + 760),
          *(struct VIDMM_GLOBAL **)(v7 + 768),
          v10,
          0LL,
          a2);
    }
    for ( j = *(_QWORD *)(v15 + 56); j; j = *(_QWORD *)(j + 40) )
    {
      for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 64) )
      {
        v13 = *(struct VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v13 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v7 + 760),
            *(struct VIDMM_GLOBAL **)(v7 + 768),
            v13,
            0LL,
            a2);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
    v6 = (_QWORD *)*v6;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  v5 = -1073741130;
LABEL_19:
  KeLeaveCriticalRegion();
  return v5;
}
