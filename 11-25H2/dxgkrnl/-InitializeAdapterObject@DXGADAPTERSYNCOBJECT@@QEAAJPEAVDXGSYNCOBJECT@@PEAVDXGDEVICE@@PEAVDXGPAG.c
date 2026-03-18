/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401816A4
 * Callers:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140180714 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x140046B4C (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_D3DDDI_NATIVEFENCEINFO@@7@Z @ 0x14005F238 (-VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_S.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1401A01CC (-DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z.c)
 *     ?DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z @ 0x1401A089C (-DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14039E260 (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
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
  __int64 v24; // r9
  __int64 v25; // r15
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int NativeFence; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // r15d
  __int64 v36; // r14
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v37; // rax
  ADAPTER_RENDER *v38; // rcx
  int CpuEvent; // eax
  char *v40; // rsi
  char *v41; // rbx
  char **v42; // rax
  bool v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  char *v45; // [rsp+60h] [rbp-A0h]
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // [rsp+68h] [rbp-98h]
  __int128 v47; // [rsp+70h] [rbp-90h] BYREF
  __int128 v48; // [rsp+80h] [rbp-80h]
  _QWORD v49[10]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-20h] BYREF
  int v51; // [rsp+E8h] [rbp-18h]
  _DWORD v52[31]; // [rsp+ECh] [rbp-14h] BYREF
  _QWORD v53[14]; // [rsp+170h] [rbp+70h] BYREF

  v7 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1859;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_pVidSchSyncObject", 1859LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 103) & 2) != 0 )
    goto LABEL_51;
  v45 = 0LL;
  memset(v49, 0, sizeof(v49));
  memset(v53, 0, sizeof(v53));
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
      v45 = (char *)this + 56;
      result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                 *(VIDMM_EXPORT **)(v19 + 760),
                 (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
                 v20,
                 (*((_DWORD *)a2 + 103) & 0x20) != 0,
                 v43,
                 (unsigned int)-!v12,
                 1);
      if ( (int)result < 0 )
        return result;
      if ( a4 )
        v21 = *((_QWORD *)a4 + 4);
      else
        v21 = 0LL;
      *((_QWORD *)this + 10) = v21;
      v17 = (char *)v53;
      LODWORD(v53[2]) = *((_DWORD *)a2 + 53);
      v53[0] = *((_QWORD *)a2 + 27);
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
    v18 = (char *)v49;
    HIDWORD(v49[0]) = *((_DWORD *)a2 + 76);
    v49[1] = *((_QWORD *)a2 + 36);
    LODWORD(v49[0]) = 5;
    goto LABEL_16;
  }
  v13 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 96) = 1;
  v14 = 0xFFFFFFFFLL;
  *((_DWORD *)this + 25) = 2;
  LOBYTE(v14) = *((_BYTE *)a2 + 408) & 1;
  v45 = (char *)this + 56;
  result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
             *(VIDMM_EXPORT **)(v13 + 760),
             (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
             v14,
             (*((_DWORD *)a2 + 103) & 0x20) != 0,
             v43,
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
                 v44,
                 (__int64)this + 32,
                 (__int64)CurrentValueStorage,
                 (__int64)v17,
                 (__int64)v45);
  LODWORD(v25) = SyncObject;
  if ( SyncObject < 0 )
  {
    WdLogSingleEntry2(3LL, a2, SyncObject);
    WdLogGlobalForLineNumber = 1993;
    return (unsigned int)v25;
  }
  if ( !g_NativeFenceDebugTest && (*((_DWORD *)a2 + 101) == 7 && !*((_BYTE *)this + 104) || *((_BYTE *)this + 105)) )
  {
    memset(v52, 0, sizeof(v52));
    v50 = *((_QWORD *)this + 4);
    v51 = *((_DWORD *)v17 + 3);
    if ( a5 )
    {
      v26 = *((_OWORD *)a5 + 1);
      *(_OWORD *)&v52[5] = *(_OWORD *)a5;
      v27 = *((_OWORD *)a5 + 2);
      *(_OWORD *)&v52[9] = v26;
      v28 = *((_OWORD *)a5 + 3);
      *(_OWORD *)&v52[13] = v27;
      *(_OWORD *)&v52[17] = v28;
    }
    NativeFence = ADAPTER_RENDER::DdiCreateNativeFence(
                    *((ADAPTER_RENDER **)this + 2),
                    (struct _DXGKARG_CREATENATIVEFENCE *)&v50);
    v25 = NativeFence;
    if ( NativeFence < 0 )
    {
      WdLogSingleEntry2(2LL, a3, NativeFence);
      WdLogGlobalForLineNumber = 2018;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DXGDEVICE: 0x%I64x | DdiCreateNativeFence failed with Status = 0x%I64x",
        (__int64)a3,
        v25,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v25;
    }
    v30 = *((_QWORD *)this + 2);
    v31 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 6) = v50;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v30 + 736) + 8LL) + 1104LL))(v31);
    if ( a5 )
    {
      v32 = *(_OWORD *)&v52[9];
      *(_OWORD *)a5 = *(_OWORD *)&v52[5];
      v33 = *(_OWORD *)&v52[13];
      *((_OWORD *)a5 + 1) = v32;
      v34 = *(_OWORD *)&v52[17];
      *((_OWORD *)a5 + 2) = v33;
      *((_OWORD *)a5 + 3) = v34;
    }
  }
  v35 = *((_DWORD *)a2 + 102);
  if ( (v35 & 0x100) != 0 && a3 )
  {
    v36 = *((_QWORD *)a3 + 5);
    if ( (*(_DWORD *)(v36 + 408) & 0x100) != 0 )
    {
      v37 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)*((_QWORD *)a2 + 27);
      *((_QWORD *)this + 5) = v37;
    }
    else
    {
      v37 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)operator new(0x28uLL, 0x4B677844u, 64LL, v24);
      *((_QWORD *)this + 5) = v37;
      if ( !v37 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 2045;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
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
    DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v37);
    v47 = 0LL;
    v48 = 0LL;
    if ( (v35 & 0x10) == 0 )
    {
      v38 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v47 + 1) = *((_QWORD *)this + 5);
      *(_QWORD *)&v47 = *((_QWORD *)a3 + 77);
      CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v38, (struct _DXGKARG_CREATECPUEVENT *)&v47);
      LODWORD(v25) = CpuEvent;
      if ( CpuEvent < 0 )
      {
        WdLogSingleEntry2(3LL, a2, CpuEvent);
        WdLogGlobalForLineNumber = 2068;
        return (unsigned int)v25;
      }
    }
    if ( (*(_DWORD *)(v36 + 408) & 0x100) != 0 )
    {
      **((_QWORD **)this + 5) = *(_QWORD *)(*(_QWORD *)(v36 + 592) + 592LL) + 160LL;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = *((_QWORD *)a2 + 11);
      **((_QWORD **)this + 5) = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = *((_QWORD *)&v48 + 1);
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
    v40 = (char *)a2 + 424;
    v41 = (char *)this + 112;
    v42 = (char **)*((_QWORD *)v40 + 1);
    if ( *v42 != v40 )
      __fastfail(3u);
    *(_QWORD *)v41 = v40;
    *((_QWORD *)v41 + 1) = v42;
    *v42 = v41;
    *((_QWORD *)v40 + 1) = v41;
  }
  return 0LL;
}
