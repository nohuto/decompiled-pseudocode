/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401EC4FC
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CA0C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  DXGPROCESS *v3; // rsi
  char *v4; // r15
  _QWORD *v5; // r13
  struct DXGDEVICE *Current; // rax
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 i; // rsi
  struct VIDMM_MULTI_ALLOC *v11; // r8
  _QWORD *v12; // rdi
  __int64 j; // rsi
  struct VIDMM_MULTI_ALLOC *v14; // r8
  DXGAUTOPUSHLOCK *v15; // rcx
  __int64 k; // rsi
  struct VIDMM_MULTI_ALLOC *v17; // r8
  __int64 m; // rsi
  __int64 n; // rdi
  struct VIDMM_MULTI_ALLOC *v20; // r8
  __int64 v21; // rdi
  int IsEnabledDeviceUsageNoInline; // [rsp+30h] [rbp-D0h]
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  DXGPROCESS *v25; // [rsp+48h] [rbp-B8h]
  _BYTE v26[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[160]; // [rsp+C0h] [rbp-40h] BYREF

  v25 = this;
  v3 = this;
  v4 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  v5 = (_QWORD *)*((_QWORD *)v3 + 40);
  *(_QWORD *)&v24 = (char *)v3 + 320;
  *((_QWORD *)&v24 + 1) = v5;
  Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v24);
  v7 = 0;
  while ( 1 )
  {
    v21 = (__int64)Current;
    if ( !Current )
    {
      v24 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      goto LABEL_35;
    }
    v8 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v21, 2, v9, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL) < 0 )
      break;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, v3);
      for ( i = *(_QWORD *)(v21 + 48); i; i = *(_QWORD *)(i + 64) )
      {
        v11 = *(struct VIDMM_MULTI_ALLOC **)(i + 24);
        if ( v11 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v8 + 760),
            *(struct VIDMM_GLOBAL **)(v8 + 768),
            v11,
            0LL,
            a2);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
        (struct _KTHREAD **)(v21 + 240));
      v12 = *(_QWORD **)(v21 + 56);
      while ( v12 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v12 + 10), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
        for ( j = v12[3]; j; j = *(_QWORD *)(j + 64) )
        {
          v14 = *(struct VIDMM_MULTI_ALLOC **)(j + 24);
          if ( v14 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v8 + 760),
              *(struct VIDMM_GLOBAL **)(v8 + 768),
              v14,
              0LL,
              a2);
        }
        v12 = (_QWORD *)v12[5];
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
      }
      v15 = (DXGAUTOPUSHLOCK *)v29;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, v3);
      for ( k = *(_QWORD *)(v21 + 48); k; k = *(_QWORD *)(k + 64) )
      {
        v17 = *(struct VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v17 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v8 + 760),
            *(struct VIDMM_GLOBAL **)(v8 + 768),
            v17,
            0LL,
            a2);
      }
      for ( m = *(_QWORD *)(v21 + 56); m; m = *(_QWORD *)(m + 40) )
      {
        for ( n = *(_QWORD *)(m + 24); n; n = *(_QWORD *)(n + 64) )
        {
          v20 = *(struct VIDMM_MULTI_ALLOC **)(n + 24);
          if ( v20 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v8 + 760),
              *(struct VIDMM_GLOBAL **)(v8 + 768),
              v20,
              0LL,
              a2);
        }
      }
      v15 = (DXGAUTOPUSHLOCK *)v30;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v15);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    v5 = (_QWORD *)*v5;
    *((_QWORD *)&v24 + 1) = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v24);
    v3 = v25;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  v24 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  v7 = -1073741130;
LABEL_35:
  KeLeaveCriticalRegion();
  return v7;
}
