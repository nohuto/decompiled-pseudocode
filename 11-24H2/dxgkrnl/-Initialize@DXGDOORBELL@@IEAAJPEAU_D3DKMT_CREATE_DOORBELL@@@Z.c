/*
 * XREFs of ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D9E74
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D7F48 (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x14004651C (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x140049A88 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DdiCreateDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDOORBELL@@@Z @ 0x1401A2968 (-DdiCreateDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDOORBELL@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Initialize(DXGDOORBELL *this, struct _D3DKMT_CREATE_DOORBELL *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // ecx
  struct DXGALLOCATION *v9; // rdx
  unsigned int v10; // ebx
  DXGALLOCATIONREFERENCE *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r8
  struct DXGGLOBAL *Global; // rax
  int FenceStorageSlot; // eax
  __int64 v29; // r14
  const wchar_t *v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v34; // eax
  HANDLE v35; // rax
  __int64 v36; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v37; // rax
  int v38; // eax
  HANDLE v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int Doorbell; // eax
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // r9
  int v54; // r8d
  bool v55; // [rsp+20h] [rbp-59h]
  __int64 v56; // [rsp+20h] [rbp-59h]
  __int64 v57; // [rsp+20h] [rbp-59h]
  __int64 v58; // [rsp+20h] [rbp-59h]
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+20h] [rbp-59h]
  unsigned __int64 v61; // [rsp+28h] [rbp-51h]
  unsigned __int64 v62; // [rsp+28h] [rbp-51h]
  _BYTE v63[24]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v64; // [rsp+68h] [rbp-11h] BYREF
  DXGDOORBELL *v65; // [rsp+70h] [rbp-9h]
  int v66; // [rsp+78h] [rbp-1h]
  int v67; // [rsp+7Ch] [rbp+3h]
  __int64 v68; // [rsp+80h] [rbp+7h]
  __int64 v69; // [rsp+88h] [rbp+Fh]
  __int64 v70; // [rsp+90h] [rbp+17h]
  int v71; // [rsp+98h] [rbp+1Fh]
  int v72; // [rsp+9Ch] [rbp+23h]
  __int64 v73; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v74; // [rsp+E8h] [rbp+6Fh] BYREF

  v3 = *((_DWORD *)a2 + 1);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 248));
  v6 = (v3 >> 6) & 0xFFFFFF;
  if ( v6 >= *(_DWORD *)(v5 + 296) )
    goto LABEL_7;
  v7 = *(_QWORD *)(v5 + 280);
  if ( ((v3 >> 25) & 0x60) != (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v8 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
  if ( !v8 )
    goto LABEL_7;
  if ( v8 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(struct DXGALLOCATION **)(v7 + 16LL * v6);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, v9);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 264));
  ExReleasePushLockSharedEx(v5 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v73 )
  {
    v10 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), *((unsigned int *)a2 + 1), -1073741811LL);
    v61 = *((unsigned int *)a2 + 1);
    v56 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3218;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x: Invalid hRingBuffer 0x%I64x specified, returning 0x%I64x",
      v56,
      v61,
      -1073741811LL,
      0LL,
      0LL);
LABEL_10:
    v11 = (DXGALLOCATIONREFERENCE *)&v73;
LABEL_11:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v11);
    return v10;
  }
  v13 = *((_QWORD *)this + 2);
  v14 = *(_QWORD *)(v73 + 8);
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( v14 != v15 )
  {
    v10 = -1073741811;
    WdLogSingleEntry4(2LL, v13, v15, v14, -1073741811LL);
    v16 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3228;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x owner Device 0x%p does not match Ring Buffer Alloc owner 0x%I64x, returning 0x%I64x",
      v16,
      *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL),
      *(_QWORD *)(v73 + 8),
      -1073741811LL,
      0LL);
    goto LABEL_10;
  }
  *((_QWORD *)this + 3) = v73;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
  v17 = *((_DWORD *)a2 + 2);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 248));
  v19 = (v17 >> 6) & 0xFFFFFF;
  if ( v19 >= *(_DWORD *)(v18 + 296) )
    goto LABEL_22;
  v20 = *(_QWORD *)(v18 + 280);
  if ( ((v17 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60) )
    goto LABEL_22;
  if ( (*(_DWORD *)(v20 + 16LL * v19 + 8) & 0x2000) != 0 )
    goto LABEL_22;
  v21 = *(_DWORD *)(v20 + 16LL * v19 + 8) & 0x1F;
  if ( !v21 )
    goto LABEL_22;
  if ( v21 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v22 = 0LL;
    goto LABEL_23;
  }
  v22 = *(struct DXGALLOCATION **)(v20 + 16LL * v19);
LABEL_23:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v22);
  _InterlockedDecrement((volatile signed __int32 *)(v18 + 264));
  ExReleasePushLockSharedEx(v18 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v74 )
  {
    v10 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), *((unsigned int *)a2 + 2), -1073741811LL);
    v62 = *((unsigned int *)a2 + 2);
    v57 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3242;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x: Invalid hRingBufferControl 0x%I64x specified, returning 0x%I64x",
      v57,
      v62,
      -1073741811LL,
      0LL,
      0LL);
LABEL_25:
    v11 = (DXGALLOCATIONREFERENCE *)&v74;
    goto LABEL_11;
  }
  v23 = *((_QWORD *)this + 2);
  v24 = *(_QWORD *)(v74 + 8);
  v25 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
  if ( v24 != v25 )
  {
    v10 = -1073741811;
    WdLogSingleEntry4(2LL, v23, v25, v24, -1073741811LL);
    v26 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3252;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x owner Device 0x%p does not match Ring Buffer Alloc owner 0x%I64x, returning 0x%I64x",
      v26,
      *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL),
      *(_QWORD *)(v74 + 8),
      -1073741811LL,
      0LL);
    goto LABEL_25;
  }
  *((_QWORD *)this + 4) = v74;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74);
  Global = DXGGLOBAL::GetGlobal();
  FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                       *((VIDMM_EXPORT **)Global + 33),
                       (DXGDOORBELL *)((char *)this + 88),
                       0LL,
                       0,
                       v55,
                       2uLL,
                       0);
  v29 = FenceStorageSlot;
  if ( FenceStorageSlot < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), FenceStorageSlot);
    v30 = L"DXGHWQUEUE 0x%I64x: Failed to allocate DoorbellStatus page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3271;
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v30, *((_QWORD *)this + 2), v29, 0LL, 0LL, 0LL);
    return (unsigned int)v29;
  }
  *((_QWORD *)this + 17) = *((_QWORD *)this + 12);
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL);
  v32 = VIDMM_EXPORT::VidMmMapCpuVA(
          *(VIDMM_EXPORT **)(v31 + 760),
          *(struct VIDMM_GLOBAL **)(v31 + 768),
          (DXGDOORBELL *)((char *)this + 88),
          (void **)this + 18,
          2u);
  v29 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v32);
    v30 = L"DXGHWQUEUE 0x%I64x: Failed to map DoorbellStatusCPUVA, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3285;
    goto LABEL_31;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v34 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
          -1LL,
          (char *)this + 56,
          0LL,
          (char *)this + 40,
          8400896,
          4);
  v29 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v34);
    v30 = L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for DoorbellCPUVA, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3301;
    goto LABEL_31;
  }
  v35 = MmSecureVirtualMemory(*((PVOID *)this + 7), *((_QWORD *)this + 5), 4u);
  *((_QWORD *)this + 8) = v35;
  if ( !v35 )
  {
    v10 = -1073741801;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741801LL);
    v58 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3314;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x: Failed to secure doorbell CPUVA, returning 0x%I64x",
      v58,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return v10;
  }
  if ( (*((_DWORD *)a2 + 3) & 1) != 0 )
  {
    v37 = DxgkGetVirtualMemoryInterface();
    v38 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v37)(
            -1LL,
            (char *)this + 72,
            0LL,
            (char *)this + 48,
            8400896,
            4);
    v29 = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v38);
      v30 = L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for SecondaryDoorbellCPUVA, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3330;
      goto LABEL_31;
    }
    v39 = MmSecureVirtualMemory(*((PVOID *)this + 9), *((_QWORD *)this + 6), 4u);
    *((_QWORD *)this + 10) = v39;
    if ( !v39 )
    {
      v10 = -1073741801;
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741801LL);
      v59 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 3343;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DXGHWQUEUE 0x%I64x: Failed to secure secondary doorbell CPUVA, returning 0x%I64x",
        v59,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      return v10;
    }
  }
  v40 = *((_QWORD *)this + 2);
  v41 = *(_QWORD *)(v40 + 16);
  if ( (*(_DWORD *)(v41 + 392) & 0x20) == 0 )
  {
    v67 = 0;
    v72 = 0;
    v64 = *(_QWORD *)(v40 + 32);
    v42 = *((_QWORD *)this + 3);
    v65 = this;
    v43 = *(_QWORD *)(v42 + 32);
    v44 = *((_QWORD *)this + 4);
    v69 = v43;
    v45 = *(_QWORD *)(v44 + 32);
    v66 = *((_DWORD *)a2 + 4);
    v68 = *((_QWORD *)a2 + 3);
    v71 = *((_DWORD *)a2 + 3);
    v70 = v45;
    Doorbell = ADAPTER_RENDER::DdiCreateDoorbell(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(v41 + 16) + 16LL),
                 (struct _DXGKARG_CREATEDOORBELL *)&v64,
                 v36);
    v29 = Doorbell;
    if ( Doorbell < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), Doorbell);
      v30 = L"DXGHWQUEUE 0x%I64x: DdiCreateDoorbell failed with status 0x%I64x";
      WdLogGlobalForLineNumber = 3365;
      goto LABEL_31;
    }
    *((_QWORD *)this + 1) = v65;
  }
  v47 = (*(__int64 (__fastcall **)(DXGDOORBELL *, struct _D3DKMT_CREATE_DOORBELL *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 736LL)
                                                                                               + 8LL)
                                                                                   + 1080LL))(
          this,
          a2);
  v48 = v47;
  if ( v47 >= 0 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 40LL);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v63,
      (struct DXGPROCESS *)v49);
    v50 = HMGRTABLE::AllocHandle(v49 + 280, this, 21LL, 0LL, 0);
    *(_DWORD *)this = v50;
    v51 = v50;
    if ( !v50 )
    {
      v10 = -1073741801;
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741801LL);
      WdLogGlobalForLineNumber = 3391;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
      return v10;
    }
    v52 = (v50 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v52 < *(_DWORD *)(v49 + 296) )
    {
      v53 = *(_QWORD *)(v49 + 280);
      v54 = *(_DWORD *)(v53 + 16 * v52 + 8);
      if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(v53 + 16 * v52 + 8) & 0x60) && (v54 & 0x2000) == 0 && (v54 & 0x1F) != 0 )
        *(_DWORD *)(v53 + 16 * (((unsigned __int64)v51 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
    result = 0LL;
    *((_BYTE *)this + 152) = 1;
  }
  else
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v47);
    v60 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 3377;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGHWQUEUE 0x%I64x: VidSchCreateDoorbell failed with status 0x%I64x",
      v60,
      v48,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v48;
  }
  return result;
}
