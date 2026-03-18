/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401839C8
 * Callers:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183100 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x140183508 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x14004651C (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_D3DDDI_NATIVEFENCEINFO@@7@Z @ 0x14005FAF0 (-VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_S.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005FB74 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1401A26E8 (-DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z.c)
 *     ?DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z @ 0x1401A2DB8 (-DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x140394950 (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct DXGDEVICE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int8 *a5,
        bool a6,
        bool a7)
{
  char v7; // di
  bool v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rax
  char *v17; // r12
  char *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  int SyncObject; // eax
  __int64 v24; // r15
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int NativeFence; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // r15d
  __int64 v35; // r14
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v36; // rax
  ADAPTER_RENDER *v37; // rcx
  int CpuEvent; // eax
  char *v39; // rsi
  char *v40; // rbx
  char **v41; // rax
  bool v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D0h]
  char *v44; // [rsp+60h] [rbp-A0h]
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // [rsp+68h] [rbp-98h]
  __int128 v46; // [rsp+70h] [rbp-90h] BYREF
  __int128 v47; // [rsp+80h] [rbp-80h]
  _QWORD v48[10]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-20h] BYREF
  int v50; // [rsp+E8h] [rbp-18h]
  _DWORD v51[31]; // [rsp+ECh] [rbp-14h] BYREF
  _QWORD v52[14]; // [rsp+170h] [rbp+70h] BYREF

  v7 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1859;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_pVidSchSyncObject", 1859LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 103) & 2) != 0 )
    goto LABEL_51;
  v44 = 0LL;
  memset(v48, 0, sizeof(v48));
  memset(v52, 0, sizeof(v52));
  v12 = (*((_DWORD *)a2 + 102) & 4) != 0;
  CurrentValueStorage = 0LL;
  if ( (unsigned int)(*((_DWORD *)a2 + 101) - 5) <= 2 )
    CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(a2);
  if ( *((_DWORD *)a2 + 101) != 7 )
  {
    if ( a6 )
    {
      v19 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 105) = 1;
      v20 = 0xFFFFFFFFLL;
      *((_BYTE *)this + 96) = 1;
      *((_DWORD *)this + 25) = 2;
      LOBYTE(v20) = *((_BYTE *)a2 + 408) & 1;
      v44 = (char *)this + 56;
      result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                 *(VIDMM_EXPORT **)(v19 + 760),
                 (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
                 v20,
                 (*((_DWORD *)a2 + 103) & 0x20) != 0,
                 v42,
                 (unsigned int)-!v12,
                 1);
      if ( (int)result < 0 )
        return result;
      if ( a4 )
        v21 = *((_QWORD *)a4 + 4);
      else
        v21 = 0LL;
      *((_QWORD *)this + 10) = v21;
      v17 = (char *)v52;
      LODWORD(v52[2]) = *((_DWORD *)a2 + 53);
      v52[0] = *((_QWORD *)a2 + 27);
      goto LABEL_22;
    }
    v18 = (char *)a2 + 208;
LABEL_16:
    v17 = 0LL;
    goto LABEL_23;
  }
  if ( a7 )
  {
    *((_BYTE *)this + 104) = 1;
    v18 = (char *)v48;
    HIDWORD(v48[0]) = *((_DWORD *)a2 + 76);
    v48[1] = *((_QWORD *)a2 + 36);
    LODWORD(v48[0]) = 5;
    goto LABEL_16;
  }
  v13 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 96) = 1;
  v14 = 0xFFFFFFFFLL;
  *((_DWORD *)this + 25) = 2;
  LOBYTE(v14) = *((_BYTE *)a2 + 408) & 1;
  v44 = (char *)this + 56;
  result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
             *(VIDMM_EXPORT **)(v13 + 760),
             (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
             v14,
             (*((_DWORD *)a2 + 103) & 0x20) != 0,
             v42,
             (unsigned int)-!v12,
             1);
  if ( (int)result < 0 )
    return result;
  if ( a4 )
    v16 = *((_QWORD *)a4 + 4);
  else
    v16 = 0LL;
  *((_QWORD *)this + 10) = v16;
  v17 = (char *)a2 + 288;
LABEL_22:
  v18 = 0LL;
LABEL_23:
  v22 = 0LL;
  if ( (*((_DWORD *)a2 + 102) & 4) != 0 )
    v22 = *((_QWORD *)a2 + 55);
  SyncObject = VIDSCH_EXPORT::VidSchCreateSyncObject(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 736LL),
                 *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                 (__int64)a2,
                 (__int64)v18,
                 *((_DWORD *)a2 + 100),
                 v22,
                 v43,
                 (__int64)this + 32,
                 (__int64)CurrentValueStorage,
                 (__int64)v17,
                 (__int64)v44);
  LODWORD(v24) = SyncObject;
  if ( SyncObject < 0 )
  {
    WdLogSingleEntry2(3LL, a2, SyncObject);
    WdLogGlobalForLineNumber = 1993;
    return (unsigned int)v24;
  }
  if ( !g_NativeFenceDebugTest && (*((_DWORD *)a2 + 101) == 7 && !*((_BYTE *)this + 104) || *((_BYTE *)this + 105)) )
  {
    memset(v51, 0, sizeof(v51));
    v49 = *((_QWORD *)this + 4);
    v50 = *((_DWORD *)v17 + 3);
    if ( a5 )
    {
      v25 = *((_OWORD *)a5 + 1);
      *(_OWORD *)&v51[5] = *(_OWORD *)a5;
      v26 = *((_OWORD *)a5 + 2);
      *(_OWORD *)&v51[9] = v25;
      v27 = *((_OWORD *)a5 + 3);
      *(_OWORD *)&v51[13] = v26;
      *(_OWORD *)&v51[17] = v27;
    }
    NativeFence = ADAPTER_RENDER::DdiCreateNativeFence(
                    *((ADAPTER_RENDER **)this + 2),
                    (struct _DXGKARG_CREATENATIVEFENCE *)&v49);
    v24 = NativeFence;
    if ( NativeFence < 0 )
    {
      WdLogSingleEntry2(2LL, a3, NativeFence);
      WdLogGlobalForLineNumber = 2018;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DXGDEVICE: 0x%I64x | DdiCreateNativeFence failed with Status = 0x%I64x",
        (__int64)a3,
        v24,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v24;
    }
    v29 = *((_QWORD *)this + 2);
    v30 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 6) = v49;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v29 + 736) + 8LL) + 1104LL))(v30);
    if ( a5 )
    {
      v31 = *(_OWORD *)&v51[9];
      *(_OWORD *)a5 = *(_OWORD *)&v51[5];
      v32 = *(_OWORD *)&v51[13];
      *((_OWORD *)a5 + 1) = v31;
      v33 = *(_OWORD *)&v51[17];
      *((_OWORD *)a5 + 2) = v32;
      *((_OWORD *)a5 + 3) = v33;
    }
  }
  v34 = *((_DWORD *)a2 + 102);
  if ( (v34 & 0x100) != 0 && a3 )
  {
    v35 = *((_QWORD *)a3 + 5);
    if ( (*(_DWORD *)(v35 + 408) & 0x100) != 0 )
    {
      v36 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)*((_QWORD *)a2 + 27);
      *((_QWORD *)this + 5) = v36;
    }
    else
    {
      v36 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)operator new(0x28uLL, 0x4B677844u, 64LL);
      *((_QWORD *)this + 5) = v36;
      if ( !v36 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 2045;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for m_pKmdSignalCpuEvent",
          2045LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
    }
    DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v36);
    v46 = 0LL;
    v47 = 0LL;
    if ( (v34 & 0x10) == 0 )
    {
      v37 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v46 + 1) = *((_QWORD *)this + 5);
      *(_QWORD *)&v46 = *((_QWORD *)a3 + 77);
      CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v37, (struct _DXGKARG_CREATECPUEVENT *)&v46);
      LODWORD(v24) = CpuEvent;
      if ( CpuEvent < 0 )
      {
        WdLogSingleEntry2(3LL, a2, CpuEvent);
        WdLogGlobalForLineNumber = 2068;
        return (unsigned int)v24;
      }
    }
    if ( (*(_DWORD *)(v35 + 408) & 0x100) != 0 )
    {
      **((_QWORD **)this + 5) = *(_QWORD *)(*(_QWORD *)(v35 + 592) + 592LL) + 160LL;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = *((_QWORD *)a2 + 11);
      **((_QWORD **)this + 5) = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = *((_QWORD *)&v47 + 1);
    *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = a2;
  }
LABEL_51:
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  ADAPTER_RENDER::AddSyncObject(*((ADAPTER_RENDER **)this + 2), this);
  *((_BYTE *)this + 24) = 1;
  *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 102) & 4) != 0;
  if ( (*((_BYTE *)a2 + 408) & 1) != 0 || (*((_DWORD *)a2 + 103) & 0x20) != 0 )
    v7 = 1;
  *((_BYTE *)this + 27) = v7;
  if ( (*((_DWORD *)a2 + 102) & 4) != 0 )
  {
    v39 = (char *)a2 + 424;
    v40 = (char *)this + 112;
    v41 = (char **)*((_QWORD *)v39 + 1);
    if ( *v41 != v39 )
      __fastfail(3u);
    *(_QWORD *)v40 = v39;
    *((_QWORD *)v40 + 1) = v41;
    *v41 = v40;
    *((_QWORD *)v39 + 1) = v40;
  }
  return 0LL;
}
