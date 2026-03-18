/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x140180884
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x14004A310 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     ?VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z @ 0x14004C3D0 (-VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x140180F1C (-IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z @ 0x1401A4618 (-DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z.c)
 *     ?GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z @ 0x1401EE9A4 (-GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVADAPTER_RENDER@@@Z @ 0x1401EE9D4 (-GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVA.c)
 *     ?IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x1401EEA04 (-IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x14032CE90 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        unsigned int a4)
{
  DXGSYNCOBJECT *v8; // rcx
  VIDMM_EXPORT **v9; // r14
  VIDMM_EXPORT *v10; // r15
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v12; // rsi
  VIDMM_EXPORT *v13; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v14; // rax
  DXGSYNCOBJECT *v15; // rcx
  DXGSYNCOBJECT *v16; // rcx
  struct VIDMM_MONITORED_FENCE_STORAGE *NativeFenceMonitoredValueStorage; // rax
  __int64 v18; // r9
  DXGSYNCOBJECT *v19; // rcx
  int v20; // eax
  DXGDEVICESYNCOBJECT *v21; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v22; // rax
  VIDMM_EXPORT *v23; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v24; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v25; // rax
  __int64 v26; // r9
  DXGSYNCOBJECT *v27; // rcx
  DXGSYNCOBJECT *v28; // rcx
  struct VIDMM_MONITORED_FENCE_STORAGE *v29; // rax
  __int64 v30; // r9
  int v31; // eax
  int v32; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  __int64 v34; // r9
  __int64 v35; // rax
  DXGPROCESSCOPYPROTECTIONMUTEX *v36; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // r9
  int v42; // r8d
  _DWORD *v43; // rcx
  struct _VIDSCH_SYNC_OBJECT *v44; // rax
  int v45; // eax
  _BYTE v47[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v48[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v49[32]; // [rsp+70h] [rbp-90h] BYREF
  void *NativeFenceDriverHandle; // [rsp+90h] [rbp-70h] BYREF
  DXGDEVICESYNCOBJECT *v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  _BYTE v55[104]; // [rsp+B8h] [rbp-48h] BYREF
  void *v56; // [rsp+120h] [rbp+20h] BYREF
  DXGDEVICESYNCOBJECT *v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 v60; // [rsp+140h] [rbp+40h]
  _BYTE v61[104]; // [rsp+148h] [rbp+48h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 203;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
      203LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedAdd((volatile signed __int32 *)a2 + 6, 1u);
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 103) & 2) != 0 )
    goto LABEL_31;
  v8 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  v9 = *(VIDMM_EXPORT ***)(*((_QWORD *)this + 2) + 16LL);
  v10 = v9[95];
  if ( *((_DWORD *)v8 + 101) == 7 )
  {
    CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(v8);
    LODWORD(v12) = VIDMM_EXPORT::VidMmMapCpuVA(v10, v9[96], CurrentValueStorage, (void **)this + 7, 2u);
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
    *((_QWORD *)this + 8) = *((_QWORD *)DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4)) + 1);
    v13 = v9[95];
    v14 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v12) = VIDMM_EXPORT::VidMmMapGpuVA(
                     v13,
                     v9[96],
                     *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                     v14,
                     (unsigned __int64 *)this + 6,
                     a4);
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
    if ( !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
            *((DXGSYNCOBJECT **)this + 4),
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      *((_QWORD *)this + 14) = *((_QWORD *)DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                             v15,
                                             (struct ADAPTER_RENDER *)v9)
                               + 1);
      NativeFenceMonitoredValueStorage = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                           v16,
                                           (struct ADAPTER_RENDER *)v9);
      LODWORD(v12) = VIDMM_EXPORT::VidMmMapGpuVA(
                       v9[95],
                       v9[96],
                       *(struct VIDMM_DEVICE **)(v18 + 792),
                       NativeFenceMonitoredValueStorage,
                       (unsigned __int64 *)this + 15,
                       a4);
      if ( (int)v12 < 0 )
        return (unsigned int)v12;
      if ( !g_NativeFenceDebugTest )
      {
        memset(v55, 0, sizeof(v55));
        v19 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
        v52 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        NativeFenceDriverHandle = DXGSYNCOBJECT::GetNativeFenceDriverHandle(v19, (struct ADAPTER_RENDER *)v9);
        v53 = *((_QWORD *)this + 6);
        v54 = *((_QWORD *)this + 15);
        v51 = this;
        v20 = ADAPTER_RENDER::DdiOpenNativeFence(
                (ADAPTER_RENDER *)v9,
                (struct _DXGKARG_OPENNATIVEFENCE *)&NativeFenceDriverHandle);
        v12 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v20);
          WdLogGlobalForLineNumber = 278;
LABEL_12:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DXGDEVICE: 0x%I64x | DdiOpenNativeFence failed with Status = 0x%I64x",
            *((_QWORD *)this + 2),
            v12,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v12;
        }
        v21 = v51;
LABEL_23:
        *((_QWORD *)this + 12) = v21;
      }
    }
  }
  else
  {
    v22 = DXGSYNCOBJECT::GetCurrentValueStorage(v8);
    LODWORD(v12) = VIDMM_EXPORT::VidMmMapCpuVA(v10, v9[96], v22, (void **)this + 7, 0);
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v23 = v9[95];
      v24 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      LODWORD(v12) = VIDMM_EXPORT::VidMmMapGpuVA(
                       v23,
                       v9[96],
                       *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                       v24,
                       (unsigned __int64 *)this + 6,
                       a4);
      if ( (int)v12 < 0 )
        return (unsigned int)v12;
    }
    v25 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    v26 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 8) = *((_QWORD *)v25 + 1);
    if ( DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(
           *((DXGSYNCOBJECT **)this + 4),
           *(struct ADAPTER_RENDER **)(v26 + 16)) )
    {
      *((_QWORD *)this + 14) = *((_QWORD *)DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                             v27,
                                             (struct ADAPTER_RENDER *)v9)
                               + 1);
      v29 = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(v28, (struct ADAPTER_RENDER *)v9);
      LODWORD(v12) = VIDMM_EXPORT::VidMmMapGpuVA(
                       v9[95],
                       v9[96],
                       *(struct VIDMM_DEVICE **)(v30 + 792),
                       v29,
                       (unsigned __int64 *)this + 15,
                       a4);
      if ( (int)v12 < 0 )
        return (unsigned int)v12;
      if ( !g_NativeFenceDebugTest )
      {
        memset(v61, 0, sizeof(v61));
        v58 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        v56 = DXGSYNCOBJECT::GetNativeFenceDriverHandle(*((DXGSYNCOBJECT **)this + 4), (struct ADAPTER_RENDER *)v9);
        v59 = *((_QWORD *)this + 6);
        v60 = *((_QWORD *)this + 15);
        v57 = this;
        v31 = ADAPTER_RENDER::DdiOpenNativeFence((ADAPTER_RENDER *)v9, (struct _DXGKARG_OPENNATIVEFENCE *)&v56);
        v12 = v31;
        if ( v31 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v31);
          WdLogGlobalForLineNumber = 348;
          goto LABEL_12;
        }
        v21 = v57;
        goto LABEL_23;
      }
    }
  }
  v32 = *((_DWORD *)this + 18);
  if ( (v32 & 0x10) == 0 && (v32 & 0x40) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
    if ( VidSchSyncObject )
    {
      v35 = operator new(0x18uLL, 0x4B677844u, 64LL, v34);
      *((_QWORD *)this + 3) = v35;
      if ( !v35 )
      {
        LODWORD(v12) = -1073741801;
        v36 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v47;
LABEL_43:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v36);
        return (unsigned int)v12;
      }
      *(_QWORD *)(v35 + 16) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                         + 8LL)
                                             + 688LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
        *((_QWORD *)this + 3));
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
  }
LABEL_31:
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v49, Current);
    v38 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 11LL, 0LL, 0);
    *((_DWORD *)this + 10) = v38;
    v39 = v38;
    if ( !v38 )
    {
      LODWORD(v12) = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 396;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
      return (unsigned int)v12;
    }
    v40 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < *((_DWORD *)Current + 74) )
    {
      v41 = *((_QWORD *)Current + 35);
      v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
      if ( ((v39 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
        *(_DWORD *)(v41 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    if ( (DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49), v43 = (_DWORD *)*((_QWORD *)this + 4),
                                                                     v43[101] == 7)
      && !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
            (DXGSYNCOBJECT *)v43,
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
      || DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(
           (DXGSYNCOBJECT *)v43,
           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, (struct DXGFASTMUTEX *const)(v43 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      v44 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
      v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 1112LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
              *((unsigned int *)this + 10),
              (char *)this + 136,
              v44);
      v36 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v48;
      LODWORD(v12) = v45;
      if ( v45 < 0 )
        goto LABEL_43;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
    }
  }
  return 0LL;
}
