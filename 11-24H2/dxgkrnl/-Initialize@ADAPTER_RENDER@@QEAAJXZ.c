/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D8EC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x14019C368 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x14002F680 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040354 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x140049F98 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x140075AEC (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x14019BFA4 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019F090 (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019F478 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1401A63C4 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1402F9BAC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetDriverStorePath @ 0x1403EE46C (DpiGetDriverStorePath.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  const wchar_t *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // ebx
  unsigned int VidSchSibmitDataSize; // eax
  __int64 result; // rax
  DXGADAPTER *v16; // rcx
  bool IsDxgmms2; // bl
  __int64 v18; // rdx
  const wchar_t *v19; // r9
  unsigned int *v20; // rbx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  int v25; // r13d
  unsigned int i; // r14d
  DXGADAPTER *v27; // rcx
  int v28; // eax
  unsigned int j; // esi
  DXGADAPTER *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // r12d
  DXGADAPTER *v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int16 *v38; // rsi
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _DWORD *v42; // r15
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  int *v47; // rcx
  DXGADAPTER *v48; // rcx
  unsigned int k; // ebx
  struct _DXGK_NODEMETADATA *v50; // r15
  int NodeMetadata; // r12d
  __int64 v52; // rdx
  int v53; // eax
  int v54; // edx
  __int64 v55; // r14
  DXGADAPTER *v56; // rcx
  int v57; // eax
  __int64 v58; // xmm1_8
  int v59; // eax
  __int64 v60; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  int SynchronizationObjectInternal; // eax
  __int64 v67; // rsi
  int *v68; // rcx
  unsigned int NumDifferentPhysicalAdapters; // r14d
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r12
  unsigned int *v75; // rax
  unsigned int *v76; // rsi
  unsigned int *v77; // rax
  DXGADAPTER *v78; // rcx
  int v79; // r13d
  char v80; // dl
  __int64 v81; // r14
  unsigned int *v82; // r15
  unsigned int v83; // ecx
  __int64 v84; // rbx
  const wchar_t *v85; // r9
  __int64 Flags; // [rsp+28h] [rbp-E0h]
  char v87; // [rsp+58h] [rbp-B0h]
  int v88; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v89; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v90; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v91; // [rsp+68h] [rbp-A0h]
  unsigned int v92; // [rsp+6Ch] [rbp-9Ch]
  _WORD v93[4]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v94; // [rsp+78h] [rbp-90h]
  int v95; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v96; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v97; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v98; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v99; // [rsp+90h] [rbp-78h]
  struct _DXGKARG_QUERYADAPTERINFO v100; // [rsp+98h] [rbp-70h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v101; // [rsp+C8h] [rbp-40h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v102; // [rsp+F8h] [rbp-10h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v103; // [rsp+128h] [rbp+20h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v104; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v105[24]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v106; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v107; // [rsp+1F8h] [rbp+F0h]
  int v108; // [rsp+200h] [rbp+F8h]
  wchar_t Str[264]; // [rsp+208h] [rbp+100h] BYREF

  v2 = *((_QWORD *)this + 2);
  *((_OWORD *)this + 34) = *(_OWORD *)(v2 + 1792);
  *((_OWORD *)this + 35) = *(_OWORD *)(v2 + 1824);
  *((_OWORD *)this + 36) = *(_OWORD *)(v2 + 1840);
  *((_OWORD *)this + 37) = *(_OWORD *)(v2 + 1808);
  if ( *((_WORD *)this + 296) )
  {
    v3 = *(_QWORD *)(v2 + 216);
    v95 = 520;
    if ( (int)DpiGetDriverStorePath(v3, Str, &v95) >= 0 )
    {
      v4 = wcsstr(Str, L"FileRepository");
      if ( v4 )
      {
        v5 = wcsstr(v4, L"\\");
        if ( v5 )
        {
          v6 = v5 + 1;
          if ( v6 )
          {
            if ( !wcsstr(*((const wchar_t **)this + 75), v6) )
            {
              if ( *((_WORD *)this + 280) )
              {
                *((_WORD *)this + 280) = 0;
                *((_QWORD *)this + 71) = 0LL;
              }
              if ( *((_WORD *)this + 288) )
              {
                *((_WORD *)this + 288) = 0;
                *((_QWORD *)this + 73) = 0LL;
              }
              *((_WORD *)this + 296) = 0;
              *((_QWORD *)this + 75) = 0LL;
            }
          }
        }
      }
    }
  }
  v7 = *((_QWORD *)this + 2);
  v8 = (_OWORD *)((char *)this + 320);
  *((_OWORD *)this + 38) = *(_OWORD *)(v7 + 1936);
  *((_OWORD *)this + 39) = *(_OWORD *)(v7 + 1952);
  *((_OWORD *)this + 42) = *(_OWORD *)(v7 + 1872);
  *(_OWORD *)((char *)this + 696) = *(_OWORD *)(v7 + 1896);
  *((_DWORD *)this + 172) = *(_DWORD *)(v7 + 1888);
  *((_DWORD *)this + 173) = *(_DWORD *)(v7 + 1892);
  *((_DWORD *)this + 178) = *(_DWORD *)(v7 + 1912);
  *((_DWORD *)this + 179) = *(_DWORD *)(v7 + 1916);
  *((_OWORD *)this + 40) = *(_OWORD *)(v7 + 1968);
  *((_OWORD *)this + 41) = *(_OWORD *)(v7 + 1984);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v7 + 1752),
              (struct _UNICODE_STRING *)this + 20) < 0
    || (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1768LL),
              (struct _UNICODE_STRING *)this + 26) < 0 )
  {
    v13 = -1073741438;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741438LL);
    v85 = L"Adapter 0x%I64x: Invalidly formatted user mode driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 932;
    goto LABEL_198;
  }
  if ( (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 2064LL),
              (struct _UNICODE_STRING *)this + 32) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 2080LL),
              (struct _UNICODE_STRING *)this + 33) < 0 )
  {
    v13 = -1073741438;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741438LL);
    v85 = L"Adapter 0x%I64x: Invalidly formatted user mode display driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 965;
LABEL_198:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v85, *((_QWORD *)this + 2), -1073741438LL, 0LL, 0LL, 0LL);
    return v13;
  }
  if ( *(_WORD *)v8 )
  {
    if ( **((_WORD **)this + 41) == 35 )
    {
      v9 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v9 + 2024) )
        *v8 = *(_OWORD *)(v9 + 2024);
    }
  }
  if ( *((_WORD *)this + 208) )
  {
    if ( **((_WORD **)this + 53) == 35 )
    {
      v10 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v10 + 2040) )
        *((_OWORD *)this + 26) = *(_OWORD *)(v10 + 2040);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 173);
  v11 = *((_QWORD *)this + 2);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 40LL) + 28LL);
  v89 = v12;
  if ( !*(_BYTE *)(v11 + 209) && !*((_WORD *)this + 160) && (*(_DWORD *)(v11 + 2976) & 8) == 0 )
  {
    v13 = -1073741438;
    WdLogSingleEntry2(2LL, v11, -1073741438LL);
    Flags = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 982;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x: Invalid user mode driver name, returning 0x%I64x",
      Flags,
      -1073741438LL,
      0LL,
      0LL,
      0LL);
    return v13;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1424),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    WdLogSingleEntry3(3LL, this, -1073741801LL, 0LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 992;
    return result;
  }
  *((_BYTE *)this + 1369) = 1;
  BYTE1(v88) = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v88);
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v16 + 209) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v16);
    *((_QWORD *)this + 95) = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 ? 8 : 0) + 256);
    v18 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 ? 8 : 0) + 272);
    *((_QWORD *)this + 92) = v18;
    if ( !*((_QWORD *)this + 95) || !v18 )
    {
      v13 = -1073741438;
      WdLogSingleEntry2(2LL, this, -1073741438LL);
      v19 = L"Adapter 0x%I64x: Unsupported display driver model, returning 0x%I64x";
      WdLogGlobalForLineNumber = 1021;
LABEL_68:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v19, (__int64)this, -1073741438LL, 0LL, 0LL, 0LL);
      goto LABEL_40;
    }
  }
  v20 = (unsigned int *)*((_QWORD *)this + 2);
  if ( DXGADAPTER::IsGpuVirtualAddressingSupported((DXGADAPTER *)v20) )
  {
    v21 = v20[74];
    v22 = 144 * v21;
    v91 = v21;
    if ( !is_mul_ok(v21, 0x90uLL) )
      v22 = -1LL;
    v23 = operator new[](v22, 0x4B677844u, 256LL);
    *((_QWORD *)this + 158) = v23;
    if ( !v23 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1036;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate m_pGpuMmuCaps",
        1036LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_39:
      v13 = -1073741801;
      goto LABEL_40;
    }
    v24 = 63;
    v25 = 0;
    for ( i = 0; i < (unsigned int)v21; ++i )
    {
      v27 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v21 = *((_QWORD *)this + 158) + 144LL * i;
      if ( (*((_DWORD *)v27 + 617) & 0x40) != 0 )
      {
        *(_QWORD *)&v101.Type = 13LL;
        v101.pInputData = &v96;
        *(_QWORD *)&v101.InputDataSize = 4LL;
        *(_QWORD *)&v101.Flags.0 = 0LL;
        HIDWORD(v101.hKmdProcessHandle) = 0;
        v101.pOutputData = (void *)v21;
        v101.OutputDataSize = 24;
        v96 = i;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v27, &v101) < 0 )
        {
          v13 = -1073741438;
          WdLogSingleEntry2(2LL, this, -1073741438LL);
          v19 = L"Adapter 0x%I64x: Failed to query GpuMmu caps, returning 0x%I64x";
          WdLogGlobalForLineNumber = 1065;
        }
        else
        {
          v28 = *(_DWORD *)(v21 + 8);
          if ( v25 )
          {
            if ( v28 != v25 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1083;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Virtual address bit count must be the same on all physical adapters",
                1083LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
          }
          else
          {
            v25 = *(_DWORD *)(v21 + 8);
            if ( (unsigned int)(v28 - 13) > 0x32 )
            {
              WdLogSingleEntry2(2LL, 12LL, 63LL);
              WdLogGlobalForLineNumber = 1075;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"GpuMmu.VirtualAddressBitCount is invalid. It should be from %d to %d",
                12LL,
                63LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
          }
          if ( (unsigned int)(*(_DWORD *)(v21 + 16) - 2) > 4 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1091;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"GpuMmu.PageDirectoryCount is invalid. It should be from 2 to DXGK_MAX_PAGE_TABLE_LEVEL_COUNT\n",
              1091LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v13 = -1073741438;
            goto LABEL_40;
          }
          if ( v12 < 0x5014 )
            *(_DWORD *)v21 &= ~0x20u;
          for ( j = 0; ; ++j )
          {
            if ( j >= *(_DWORD *)(v21 + 16) )
            {
              v12 = v89;
              goto LABEL_60;
            }
            *(_QWORD *)&v102.Flags.0 = 0LL;
            HIDWORD(v102.hKmdProcessHandle) = 0;
            v102.pInputData = v93;
            v30 = (DXGADAPTER *)*((_QWORD *)this + 2);
            *(_QWORD *)&v102.Type = 14LL;
            *(_QWORD *)&v102.InputDataSize = 4LL;
            v93[0] = j;
            v93[1] = i;
            v94 = (_DWORD *)(v21 + 4 * (j + 4LL * j + 6));
            v102.pOutputData = v94;
            *(_QWORD *)&v102.OutputDataSize = v89 < 0x5012 ? 16 : 20;
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v30, &v102) < 0 )
              break;
            if ( ((v94[4] - 1) & v94[4]) != 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1143;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x: Page table alignment of level %d must be power of 2",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
          }
          v13 = -1073741438;
          WdLogSingleEntry2(2LL, this, -1073741438LL);
          WdLogGlobalForLineNumber = 1138;
          v19 = L"Adapter 0x%I64x: Failed to query page table level descriptor, returning 0x%I64x";
        }
        goto LABEL_68;
      }
      *(_DWORD *)(v21 + 8) = 63;
LABEL_60:
      v31 = *(_DWORD *)(v21 + 8);
      LODWORD(v21) = v91;
      if ( v24 >= v31 )
        v24 = v31;
    }
    if ( (_DWORD)v21 )
    {
      v32 = 0LL;
      v33 = (unsigned int)v21;
      do
      {
        v32 += 144LL;
        *(_DWORD *)(v32 + *((_QWORD *)this + 158) - 136) = v24;
        --v33;
      }
      while ( v33 );
    }
  }
  if ( *(int *)(*((_QWORD *)this + 2) + 2736LL) >= 4864 )
  {
    v34 = 0;
    while ( 2 )
    {
      v35 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v91 = v34;
      if ( v34 < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v35) )
      {
        v38 = (unsigned __int16 *)(*(_QWORD *)(v36 + 2992) + 344LL * v34);
        v92 = *v38;
        v39 = v92;
        v40 = 74LL * v92;
        if ( !is_mul_ok(v92, 0x4AuLL) )
          v40 = v37;
        v41 = operator new[](v40, 0x4B677844u, 256LL);
        v94 = (_DWORD *)v41;
        v42 = (_DWORD *)v41;
        if ( !v41 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1187;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodeMetadata",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v38 + 4) = v41;
        v43 = 44 * v39;
        v99 = *((_QWORD *)this + 2);
        if ( !is_mul_ok(v39, 0x2CuLL) )
          v43 = -1LL;
        v44 = operator new[](v43, 0x4B677844u, 256LL);
        if ( !v44 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1198;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodePerfData",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v38 + 13) = v44;
        v45 = 8 * v39;
        if ( !is_mul_ok(v39, 8uLL) )
          v45 = -1LL;
        v46 = operator new[](v45, 0x4B677844u, 256LL);
        if ( !v46 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1208;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodePerfDataQueryTimes",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v38 + 14) = v46;
        v47 = (int *)*((_QWORD *)this + 2);
        if ( v47[751] >= 2400 )
        {
          v97 = v34;
          v100.pInputData = &v97;
          *(_QWORD *)&v100.Type = 26LL;
          v100.pOutputData = v38 + 92;
          *(_QWORD *)&v100.InputDataSize = 4LL;
          *(_QWORD *)&v100.Flags.0 = 0LL;
          HIDWORD(v100.hKmdProcessHandle) = 0;
          v100.OutputDataSize = 28;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v47, &v100) < 0 )
          {
            WdLogSingleEntry1(3LL, this);
            WdLogGlobalForLineNumber = 1228;
          }
          v48 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v100.pOutputData = v38 + 106;
          v100.Type = DXGKQAITYPE_GPUVERSION;
          v100.OutputDataSize = 128;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v48, &v100) < 0 )
          {
            WdLogSingleEntry1(3LL, this);
            WdLogGlobalForLineNumber = 1238;
          }
        }
        v87 = 0;
        for ( k = 0; k < v92; ++k )
        {
          v50 = (struct _DXGK_NODEMETADATA *)((char *)v42 + 74 * k);
          NodeMetadata = DXGADAPTER::DdiGetNodeMetadata(*((DXGADAPTER **)this + 2), k | (v34 << 16), v50);
          if ( NodeMetadata < 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 1249;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: Driver reported failure getting node metadata with valid parameters.",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            v13 = NodeMetadata;
            goto LABEL_40;
          }
          v52 = *((_QWORD *)this + 2);
          if ( *(_DWORD *)(v52 + 2280) >= 0x9000u )
          {
            if ( (*(_BYTE *)&v50->Flags.0 & 1) != 0 )
            {
              if ( !v50->IoMmuSupported && !*((_BYTE *)v38 + 49) )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1266;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but it doesn't support GPU VA.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (**(_DWORD **)(v52 + 3008) & 0x20000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1272;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but the OS didn't"
                   " allow HwSch to be enabled.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              *((_BYTE *)this + 1880) = 1;
            }
            v42 = v94;
            v53 = *(_DWORD *)((char *)v94 + 74 * k + 68);
            if ( (v53 & 8) != 0 )
            {
              if ( *(int *)(v52 + 3004) < 3100 )
              {
                WdLogSingleEntry1(2LL, this);
                WdLogGlobalForLineNumber = 1284;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x: UserModeSubmission is only supported on WDDM3.1 and above.",
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (v53 & 1) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1290;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support for a node which doesn't sup"
                   "port ContextScheduling.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (**(_DWORD **)(v52 + 3008) & 0x8000000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1296;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but the OS didn't allow Use"
                   "rModeSubmission to be enabled.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (*(_DWORD *)(v99 + 2464) & 0x800) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1302;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but NativeGpuFence cap is not set.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( !*(_QWORD *)(v52 + 1528)
                || !*(_QWORD *)(v52 + 1552)
                || !*(_QWORD *)(v52 + 1536)
                || !*(_QWORD *)(v52 + 1544)
                || !*(_QWORD *)(v52 + 1560) )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 1314;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Driver reports UserModeSubmission support, but does not support all relevant Doorbell DDIs.",
                  1314LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              v87 = 1;
            }
            else if ( g_NativeFenceDebugTest )
            {
              v54 = *(_DWORD *)((char *)v94 + 74 * k + 68);
              if ( (v54 & 1) != 0 )
              {
                *(_DWORD *)((char *)v94 + 74 * k + 68) = v54 | 8;
                *((_DWORD *)this + 318) |= 1u;
                *((_DWORD *)this + 319) = 512;
                *((_DWORD *)this + 320) = 512;
              }
            }
            if ( (*(_DWORD *)((char *)v42 + 74 * k + 68) & 0xFFE0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1331;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver should not set reserved bits.",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
          }
          else
          {
            v50->Flags.Value = 0;
            v42 = v94;
          }
          v55 = v99;
          if ( *((_BYTE *)v42 + 74 * k + 72) )
          {
            if ( (*(_DWORD *)(v99 + 2468) & 0x40) == 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1340;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver reported GpuMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( (*((_DWORD *)v38 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1345;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver set GpuMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( k == v38[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3041LL) )
              *((_BYTE *)v38 + 48) = 1;
            *((_BYTE *)v38 + 49) = 1;
          }
          if ( *((_BYTE *)v42 + 74 * k + 73) )
          {
            if ( (*(_DWORD *)(v55 + 2468) & 0x80u) == 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1359;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver reported IoMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( (*((_DWORD *)v38 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1364;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver set IoMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( k == v38[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3041LL) )
              *((_BYTE *)v38 + 48) = 1;
          }
          v34 = v91;
        }
        if ( !v87 )
        {
LABEL_135:
          ++v34;
          continue;
        }
        v56 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v107 = 0LL;
        v108 = 0;
        memset(&v104, 0, 24);
        v104.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS|0x20;
        v104.pOutputData = &v106;
        *(_OWORD *)&v104.OutputDataSize = 0LL;
        v104.OutputDataSize = 28;
        v106 = 0LL;
        v13 = DXGADAPTER::DdiQueryAdapterInfo(v56, &v104);
        if ( (v13 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(DWORD1(v106) - 1) > 0x3FFF )
          {
            WdLogSingleEntry2(2LL, DWORD1(v106), 0x4000LL);
            WdLogGlobalForLineNumber = 1393;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"DoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD1(v106),
              0x4000LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( (v106 & 0xFFFFFFFE) != 0 )
          {
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 1400;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"DXGKQAITYPE_USERMODESUBMISSION_CAPS: Driver should not set reserved bits, returning 0x%I64x.",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            if ( (v106 & 1) == 0 || (unsigned int)(DWORD2(v106) - 1) <= 0x3FFF )
            {
              v57 = v108;
              v58 = v107;
              *(_OWORD *)((char *)this + 1272) = v106;
              *((_QWORD *)this + 161) = v58;
              *((_DWORD *)this + 324) = v57;
              goto LABEL_135;
            }
            WdLogSingleEntry2(2LL, DWORD2(v106), 0x4000LL);
            WdLogGlobalForLineNumber = 1410;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"SecondaryDoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD2(v106),
              0x4000LL,
              0LL,
              0LL,
              0LL);
          }
LABEL_48:
          v13 = -1073741811;
          goto LABEL_40;
        }
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 1385;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Driver reported failure getting User mode submission Caps.",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_40:
        DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v88);
        return v13;
      }
      break;
    }
    if ( *(int *)(v36 + 2736) < 8960 )
      *(_DWORD *)(v36 + 2464) &= 0xFFFFF87F;
  }
  v59 = DXGADAPTER::CheckMcdmDdiSubmission(*((DXGADAPTER **)this + 2));
  if ( v59 < 0 )
  {
LABEL_159:
    v13 = v59;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    v89 = 0;
    v59 = ADAPTER_RENDER::ConfigureSysMm(this, (union SYSMM_IOMMU_STATE *)&v89);
    if ( v59 < 0 )
      goto LABEL_159;
    v60 = *((_QWORD *)this + 92);
    Global = DXGGLOBAL::GetGlobal();
    v62 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v60 + 8) + 24LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 2) + 216LL),
            (__int64)Global + 152);
    *((_QWORD *)this + 93) = v62;
    if ( !v62 )
      goto LABEL_39;
    v63 = 0LL;
    if ( (v89 & 1) != 0 )
    {
      v63 = 1LL;
      if ( (v89 & 2) != 0 )
        v63 = 3LL;
    }
    v64 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, __int64))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 8LL))(
            this,
            v63);
    *((_QWORD *)this + 96) = v64;
    if ( !v64 )
      goto LABEL_39;
  }
  memset(v105, 0, sizeof(v105));
  v105[3] |= 1u;
  LOBYTE(v65) = 1;
  v105[2] = 3;
  SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                    0LL,
                                    v65,
                                    this,
                                    v105,
                                    11,
                                    0,
                                    (char *)this + 904,
                                    0LL,
                                    0LL);
  v67 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal < 0 )
  {
    WdLogSingleEntry2(2LL, this, SynchronizationObjectInternal);
    WdLogGlobalForLineNumber = 1499;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x: CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v67,
      0LL,
      0LL,
      0LL);
    v13 = v67;
    goto LABEL_40;
  }
  v68 = (int *)*((_QWORD *)this + 2);
  if ( v68[684] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v68);
    v92 = NumDifferentPhysicalAdapters;
    v70 = 0;
    v90 = 0;
    v71 = 0LL;
    while ( v70 < NumDifferentPhysicalAdapters )
    {
      v72 = *(unsigned __int16 *)(344 * v71 + *(_QWORD *)(*((_QWORD *)this + 2) + 2992LL));
      v73 = 4 * v72;
      v74 = v72;
      if ( !is_mul_ok(v72, 4uLL) )
        v73 = -1LL;
      v75 = (unsigned int *)operator new[](v73, 0x4B677844u, 64LL);
      v76 = v75;
      if ( !v75 )
        goto LABEL_39;
      v98 = v90;
      v103.pOutputData = v75;
      v103.OutputDataSize = 4 * v72;
      v77 = &v90;
      v78 = (DXGADAPTER *)*((_QWORD *)this + 2);
      if ( NumDifferentPhysicalAdapters <= 1 )
        v77 = &v98;
      *(_QWORD *)&v103.Type = 10LL;
      *(_QWORD *)&v103.InputDataSize = 4LL;
      *(_QWORD *)&v103.Flags.0 = 0LL;
      HIDWORD(v103.hKmdProcessHandle) = 0;
      v103.pInputData = v77;
      v79 = DXGADAPTER::DdiQueryAdapterInfo(v78, &v103);
      v80 = 1;
      if ( v79 < 0 )
        goto LABEL_187;
      if ( (_DWORD)v72 )
      {
        v81 = 0LL;
        v82 = v76;
        do
        {
          v83 = *v82;
          if ( *v82 - 1 <= 0x1E || v83 >= 0x41 )
          {
            v84 = *v82;
            WdLogSingleEntry3(2LL, this, v84, v81);
            WdLogGlobalForLineNumber = 1547;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: Invalid timestamp precision. Valid domain is {0, [32-64]}. Precision=%d, Node=%d",
              (__int64)this,
              v84,
              v81,
              0LL,
              0LL);
            v80 = 0;
          }
          else if ( !v83 )
          {
            *((_BYTE *)this + 968) = 1;
          }
          ++v81;
          ++v82;
          --v74;
        }
        while ( v74 );
        if ( !v80 )
        {
LABEL_187:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v76);
          *((_BYTE *)this + 968) = 0;
          v76 = 0LL;
          if ( v79 >= 0 )
          {
            v13 = -1073741438;
            WdLogSingleEntry2(2LL, this, -1073741438LL);
            v19 = L"Adapter 0x%I64x: Precision data is bad. Returning 0x%I64x";
            WdLogGlobalForLineNumber = 1587;
            goto LABEL_68;
          }
          WdLogSingleEntry1(4LL, this);
          WdLogGlobalForLineNumber = 1579;
        }
      }
      NumDifferentPhysicalAdapters = v92;
      *(_QWORD *)(344LL * v90 + *(_QWORD *)(*((_QWORD *)this + 2) + 2992LL) + 40) = v76;
      v70 = v90 + 1;
      v90 = v70;
      v71 = v70;
    }
    if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
    {
      *((_QWORD *)this + 129) = -500000LL;
      KeInitializeTimer((PKTIMER)((char *)this + 1040));
      KeInitializeDpc((PRKDPC)((char *)this + 1104), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
    }
    if ( *((_BYTE *)this + 968) )
      KeInitializeSpinLock((PKSPIN_LOCK)this + 157);
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v88);
  return 0LL;
}
