/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1401F5EEC
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x140049A88 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     ?VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z @ 0x14004BE80 (-VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005FB74 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x14018442C (-IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z @ 0x1401A6B34 (-DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z.c)
 *     ?GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z @ 0x1401F45B0 (-GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVADAPTER_RENDER@@@Z @ 0x1401F45E0 (-GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVA.c)
 *     ?IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x1401F4610 (-IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rsi
  DXGSYNCOBJECT *v11; // rcx
  VIDMM_EXPORT **v12; // r14
  VIDMM_EXPORT *v13; // r15
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  VIDMM_EXPORT *v15; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v16; // rax
  DXGSYNCOBJECT *v17; // rcx
  DXGSYNCOBJECT *v18; // rcx
  struct VIDMM_MONITORED_FENCE_STORAGE *NativeFenceMonitoredValueStorage; // rax
  __int64 v20; // r9
  DXGSYNCOBJECT *v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  DXGDEVICESYNCOBJECT *v24; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v25; // rax
  VIDMM_EXPORT *v26; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v27; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v28; // rax
  __int64 v29; // r9
  DXGSYNCOBJECT *v30; // rcx
  DXGSYNCOBJECT *v31; // rcx
  struct VIDMM_MONITORED_FENCE_STORAGE *v32; // rax
  __int64 v33; // r9
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  __int64 v38; // rax
  DXGPROCESSCOPYPROTECTIONMUTEX *v39; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // r9
  int v45; // r8d
  _DWORD *v46; // rcx
  struct _VIDSCH_SYNC_OBJECT *v47; // rax
  int v48; // eax
  _BYTE v49[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v50[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v51[32]; // [rsp+70h] [rbp-90h] BYREF
  void *NativeFenceDriverHandle; // [rsp+90h] [rbp-70h] BYREF
  DXGDEVICESYNCOBJECT *v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  _BYTE v57[104]; // [rsp+B8h] [rbp-48h] BYREF
  void *v58; // [rsp+120h] [rbp+20h] BYREF
  DXGDEVICESYNCOBJECT *v59; // [rsp+128h] [rbp+28h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  _BYTE v63[104]; // [rsp+148h] [rbp+48h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 218;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
      218LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  v8 = DXGSYNCOBJECT::AddReference(a2);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v8);
    WdLogGlobalForLineNumber = 231;
    return (unsigned int)v9;
  }
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 103) & 2) != 0 )
    goto LABEL_34;
  v11 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  v12 = *(VIDMM_EXPORT ***)(*((_QWORD *)this + 2) + 16LL);
  v13 = v12[95];
  if ( *((_DWORD *)v11 + 101) == 7 )
  {
    CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(v11);
    LODWORD(v9) = VIDMM_EXPORT::VidMmMapCpuVA(v13, v12[96], CurrentValueStorage, (void **)this + 7, 2u);
    if ( (int)v9 < 0 )
      return (unsigned int)v9;
    *((_QWORD *)this + 8) = *((_QWORD *)DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4)) + 1);
    v15 = v12[95];
    v16 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                    v15,
                    v12[96],
                    *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                    v16,
                    (unsigned __int64 *)this + 6,
                    a4);
    if ( (int)v9 < 0 )
      return (unsigned int)v9;
    if ( !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
            *((DXGSYNCOBJECT **)this + 4),
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      *((_QWORD *)this + 14) = *((_QWORD *)DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                             v17,
                                             (struct ADAPTER_RENDER *)v12)
                               + 1);
      NativeFenceMonitoredValueStorage = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                           v18,
                                           (struct ADAPTER_RENDER *)v12);
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      v12[95],
                      v12[96],
                      *(struct VIDMM_DEVICE **)(v20 + 792),
                      NativeFenceMonitoredValueStorage,
                      (unsigned __int64 *)this + 15,
                      a4);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      if ( !g_NativeFenceDebugTest )
      {
        memset(v57, 0, sizeof(v57));
        v21 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
        v54 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        NativeFenceDriverHandle = DXGSYNCOBJECT::GetNativeFenceDriverHandle(v21, (struct ADAPTER_RENDER *)v12);
        v55 = *((_QWORD *)this + 6);
        v56 = *((_QWORD *)this + 15);
        v53 = this;
        v23 = ADAPTER_RENDER::DdiOpenNativeFence(
                (ADAPTER_RENDER *)v12,
                (struct _DXGKARG_OPENNATIVEFENCE *)&NativeFenceDriverHandle,
                v22);
        v9 = v23;
        if ( v23 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v23);
          WdLogGlobalForLineNumber = 302;
LABEL_15:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DXGDEVICE: 0x%I64x | DdiOpenNativeFence failed with Status = 0x%I64x",
            *((_QWORD *)this + 2),
            v9,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v9;
        }
        v24 = v53;
LABEL_26:
        *((_QWORD *)this + 12) = v24;
      }
    }
  }
  else
  {
    v25 = DXGSYNCOBJECT::GetCurrentValueStorage(v11);
    LODWORD(v9) = VIDMM_EXPORT::VidMmMapCpuVA(v13, v12[96], v25, (void **)this + 7, 0);
    if ( (int)v9 < 0 )
      return (unsigned int)v9;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v26 = v12[95];
      v27 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      v26,
                      v12[96],
                      *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                      v27,
                      (unsigned __int64 *)this + 6,
                      a4);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
    }
    v28 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    v29 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 8) = *((_QWORD *)v28 + 1);
    if ( DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(
           *((DXGSYNCOBJECT **)this + 4),
           *(struct ADAPTER_RENDER **)(v29 + 16)) )
    {
      *((_QWORD *)this + 14) = *((_QWORD *)DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                             v30,
                                             (struct ADAPTER_RENDER *)v12)
                               + 1);
      v32 = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(v31, (struct ADAPTER_RENDER *)v12);
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      v12[95],
                      v12[96],
                      *(struct VIDMM_DEVICE **)(v33 + 792),
                      v32,
                      (unsigned __int64 *)this + 15,
                      a4);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      if ( !g_NativeFenceDebugTest )
      {
        memset(v63, 0, sizeof(v63));
        v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        v58 = DXGSYNCOBJECT::GetNativeFenceDriverHandle(*((DXGSYNCOBJECT **)this + 4), (struct ADAPTER_RENDER *)v12);
        v61 = *((_QWORD *)this + 6);
        v62 = *((_QWORD *)this + 15);
        v59 = this;
        v35 = ADAPTER_RENDER::DdiOpenNativeFence((ADAPTER_RENDER *)v12, (struct _DXGKARG_OPENNATIVEFENCE *)&v58, v34);
        v9 = v35;
        if ( v35 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v35);
          WdLogGlobalForLineNumber = 372;
          goto LABEL_15;
        }
        v24 = v59;
        goto LABEL_26;
      }
    }
  }
  v36 = *((_DWORD *)this + 18);
  if ( (v36 & 0x10) == 0 && (v36 & 0x40) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v49, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
    if ( VidSchSyncObject )
    {
      v38 = operator new(0x18uLL, 0x4B677844u, 64LL);
      *((_QWORD *)this + 3) = v38;
      if ( !v38 )
      {
        LODWORD(v9) = -1073741801;
        v39 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v49;
LABEL_46:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v39);
        return (unsigned int)v9;
      }
      *(_QWORD *)(v38 + 16) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                         + 8LL)
                                             + 688LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
        *((_QWORD *)this + 3));
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
  }
LABEL_34:
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v51, Current);
    v41 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 11LL, 0LL, 0);
    *((_DWORD *)this + 10) = v41;
    v42 = v41;
    if ( !v41 )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 420;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
      return (unsigned int)v9;
    }
    v43 = (v41 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 < *((_DWORD *)Current + 74) )
    {
      v44 = *((_QWORD *)Current + 35);
      v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
      if ( ((v42 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60) && (v45 & 0x2000) == 0 && (v45 & 0x1F) != 0 )
        *(_DWORD *)(v44 + 16 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    if ( (DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51), v46 = (_DWORD *)*((_QWORD *)this + 4),
                                                                     v46[101] == 7)
      && !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
            (DXGSYNCOBJECT *)v46,
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
      || DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(
           (DXGSYNCOBJECT *)v46,
           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v50, (struct DXGFASTMUTEX *const)(v46 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
      v47 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 1112LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
              *((unsigned int *)this + 10),
              (char *)this + 136,
              v47);
      v39 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v50;
      LODWORD(v9) = v48;
      if ( v48 < 0 )
        goto LABEL_46;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v50);
    }
  }
  return 0LL;
}
