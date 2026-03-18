/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x140199E78 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x14002F040 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034810 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140037274 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040964 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x14004A814 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x14007504C (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x140199AB4 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019CC40 (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019D028 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1401A3EA8 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetDriverStorePath @ 0x1403A33C8 (DpiGetDriverStorePath.c)
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
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r12d
  int v26; // r13d
  unsigned int i; // r14d
  DXGADAPTER *v28; // rcx
  int v29; // eax
  unsigned int j; // esi
  DXGADAPTER *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r12d
  DXGADAPTER *v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int16 *v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  _DWORD *v45; // r15
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r9
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  int *v51; // rcx
  DXGADAPTER *v52; // rcx
  unsigned int k; // ebx
  struct _DXGK_NODEMETADATA *v54; // r15
  int NodeMetadata; // r12d
  __int64 v56; // rdx
  int v57; // eax
  int v58; // edx
  __int64 v59; // r14
  DXGADAPTER *v60; // rcx
  int v61; // eax
  __int64 v62; // xmm1_8
  int v63; // eax
  __int64 v64; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  int SynchronizationObjectInternal; // eax
  __int64 v71; // rsi
  int *v72; // rcx
  __int64 v73; // r9
  unsigned int NumDifferentPhysicalAdapters; // r14d
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r12
  unsigned int *v80; // rax
  unsigned int *v81; // rsi
  unsigned int *v82; // rax
  DXGADAPTER *v83; // rcx
  int v84; // r13d
  char v85; // dl
  __int64 v86; // r14
  unsigned int *v87; // r15
  unsigned int v88; // ecx
  __int64 v89; // rbx
  const wchar_t *v90; // r9
  __int64 Flags; // [rsp+28h] [rbp-E0h]
  char v92; // [rsp+58h] [rbp-B0h]
  int v93; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v94; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v95; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v96; // [rsp+68h] [rbp-A0h]
  unsigned int v97; // [rsp+6Ch] [rbp-9Ch]
  _WORD v98[4]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v99; // [rsp+78h] [rbp-90h]
  int v100; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v101; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v102; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v103; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v104; // [rsp+90h] [rbp-78h]
  struct _DXGKARG_QUERYADAPTERINFO v105; // [rsp+98h] [rbp-70h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v106; // [rsp+C8h] [rbp-40h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v107; // [rsp+F8h] [rbp-10h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v108; // [rsp+128h] [rbp+20h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v109; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v110[24]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v111; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v112; // [rsp+1F8h] [rbp+F0h]
  int v113; // [rsp+200h] [rbp+F8h]
  wchar_t Str[264]; // [rsp+208h] [rbp+100h] BYREF

  v2 = *((_QWORD *)this + 2);
  *((_OWORD *)this + 34) = *(_OWORD *)(v2 + 1792);
  *((_OWORD *)this + 35) = *(_OWORD *)(v2 + 1824);
  *((_OWORD *)this + 36) = *(_OWORD *)(v2 + 1840);
  *((_OWORD *)this + 37) = *(_OWORD *)(v2 + 1808);
  if ( *((_WORD *)this + 296) )
  {
    v3 = *(_QWORD *)(v2 + 216);
    v100 = 520;
    if ( (int)DpiGetDriverStorePath(v3, Str, &v100) >= 0 )
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
    v90 = L"Adapter 0x%I64x: Invalidly formatted user mode driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 933;
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
    v90 = L"Adapter 0x%I64x: Invalidly formatted user mode display driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 966;
LABEL_198:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v90, *((_QWORD *)this + 2), -1073741438LL, 0LL, 0LL, 0LL);
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
  v94 = v12;
  if ( !*(_BYTE *)(v11 + 209) && !*((_WORD *)this + 160) && (*(_DWORD *)(v11 + 2976) & 8) == 0 )
  {
    v13 = -1073741438;
    WdLogSingleEntry2(2LL, v11, -1073741438LL);
    Flags = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 983;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    WdLogGlobalForLineNumber = 993;
    return result;
  }
  *((_BYTE *)this + 1369) = 1;
  BYTE1(v93) = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v93);
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
      WdLogGlobalForLineNumber = 1022;
LABEL_68:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, (__int64)this, -1073741438LL, 0LL, 0LL, 0LL);
      goto LABEL_40;
    }
  }
  v20 = (unsigned int *)*((_QWORD *)this + 2);
  if ( DXGADAPTER::IsGpuVirtualAddressingSupported((DXGADAPTER *)v20) )
  {
    v22 = v20[74];
    v23 = 144 * v22;
    v96 = v22;
    if ( !is_mul_ok(v22, 0x90uLL) )
      v23 = -1LL;
    v24 = operator new[](v23, 0x4B677844u, 256LL, v21);
    *((_QWORD *)this + 158) = v24;
    if ( !v24 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1037;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate m_pGpuMmuCaps",
        1037LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_39:
      v13 = -1073741801;
      goto LABEL_40;
    }
    v25 = 63;
    v26 = 0;
    for ( i = 0; i < (unsigned int)v22; ++i )
    {
      v28 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v22 = *((_QWORD *)this + 158) + 144LL * i;
      if ( (*((_DWORD *)v28 + 617) & 0x40) != 0 )
      {
        *(_QWORD *)&v106.Type = 13LL;
        v106.pInputData = &v101;
        *(_QWORD *)&v106.InputDataSize = 4LL;
        *(_QWORD *)&v106.Flags.0 = 0LL;
        HIDWORD(v106.hKmdProcessHandle) = 0;
        v106.pOutputData = (void *)v22;
        v106.OutputDataSize = 24;
        v101 = i;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v28, &v106) < 0 )
        {
          v13 = -1073741438;
          WdLogSingleEntry2(2LL, this, -1073741438LL);
          v19 = L"Adapter 0x%I64x: Failed to query GpuMmu caps, returning 0x%I64x";
          WdLogGlobalForLineNumber = 1066;
        }
        else
        {
          v29 = *(_DWORD *)(v22 + 8);
          if ( v26 )
          {
            if ( v29 != v26 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1084;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Virtual address bit count must be the same on all physical adapters",
                1084LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
          }
          else
          {
            v26 = *(_DWORD *)(v22 + 8);
            if ( (unsigned int)(v29 - 13) > 0x32 )
            {
              WdLogSingleEntry2(2LL, 12LL, 63LL);
              WdLogGlobalForLineNumber = 1076;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
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
          if ( (unsigned int)(*(_DWORD *)(v22 + 16) - 2) > 4 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1092;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"GpuMmu.PageDirectoryCount is invalid. It should be from 2 to DXGK_MAX_PAGE_TABLE_LEVEL_COUNT\n",
              1092LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v13 = -1073741438;
            goto LABEL_40;
          }
          if ( v12 < 0x5014 )
            *(_DWORD *)v22 &= ~0x20u;
          for ( j = 0; ; ++j )
          {
            if ( j >= *(_DWORD *)(v22 + 16) )
            {
              v12 = v94;
              goto LABEL_60;
            }
            *(_QWORD *)&v107.Flags.0 = 0LL;
            HIDWORD(v107.hKmdProcessHandle) = 0;
            v107.pInputData = v98;
            v31 = (DXGADAPTER *)*((_QWORD *)this + 2);
            *(_QWORD *)&v107.Type = 14LL;
            *(_QWORD *)&v107.InputDataSize = 4LL;
            v98[0] = j;
            v98[1] = i;
            v99 = (_DWORD *)(v22 + 4 * (j + 4LL * j + 6));
            v107.pOutputData = v99;
            *(_QWORD *)&v107.OutputDataSize = v94 < 0x5012 ? 16 : 20;
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v31, &v107) < 0 )
              break;
            if ( ((v99[4] - 1) & v99[4]) != 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1144;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
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
          WdLogGlobalForLineNumber = 1139;
          v19 = L"Adapter 0x%I64x: Failed to query page table level descriptor, returning 0x%I64x";
        }
        goto LABEL_68;
      }
      *(_DWORD *)(v22 + 8) = 63;
LABEL_60:
      v32 = *(_DWORD *)(v22 + 8);
      LODWORD(v22) = v96;
      if ( v25 >= v32 )
        v25 = v32;
    }
    if ( (_DWORD)v22 )
    {
      v33 = 0LL;
      v34 = (unsigned int)v22;
      do
      {
        v33 += 144LL;
        *(_DWORD *)(v33 + *((_QWORD *)this + 158) - 136) = v25;
        --v34;
      }
      while ( v34 );
    }
  }
  if ( *(int *)(*((_QWORD *)this + 2) + 2736LL) >= 4864 )
  {
    v35 = 0;
    while ( 2 )
    {
      v36 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v96 = v35;
      if ( v35 < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v36) )
      {
        v40 = (unsigned __int16 *)(*(_QWORD *)(v37 + 2992) + 344LL * v35);
        v97 = *v40;
        v41 = v97;
        v42 = 74LL * v97;
        if ( !is_mul_ok(v97, 0x4AuLL) )
          v42 = v38;
        v43 = operator new[](v42, 0x4B677844u, 256LL, v39);
        v99 = (_DWORD *)v43;
        v45 = (_DWORD *)v43;
        if ( !v43 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1188;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodeMetadata",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 4) = v43;
        v46 = 44 * v41;
        v104 = *((_QWORD *)this + 2);
        if ( !is_mul_ok(v41, 0x2CuLL) )
          v46 = -1LL;
        v47 = operator new[](v46, 0x4B677844u, 256LL, v44);
        if ( !v47 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1199;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodePerfData",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 13) = v47;
        v49 = 8 * v41;
        if ( !is_mul_ok(v41, 8uLL) )
          v49 = -1LL;
        v50 = operator new[](v49, 0x4B677844u, 256LL, v48);
        if ( !v50 )
        {
          WdLogSingleEntry1(6LL, this);
          WdLogGlobalForLineNumber = 1209;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: Failed to allocate pNodePerfDataQueryTimes",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 14) = v50;
        v51 = (int *)*((_QWORD *)this + 2);
        if ( v51[751] >= 2400 )
        {
          v102 = v35;
          v105.pInputData = &v102;
          *(_QWORD *)&v105.Type = 26LL;
          v105.pOutputData = v40 + 92;
          *(_QWORD *)&v105.InputDataSize = 4LL;
          *(_QWORD *)&v105.Flags.0 = 0LL;
          HIDWORD(v105.hKmdProcessHandle) = 0;
          v105.OutputDataSize = 28;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v51, &v105) < 0 )
          {
            WdLogSingleEntry1(3LL, this);
            WdLogGlobalForLineNumber = 1229;
          }
          v52 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v105.pOutputData = v40 + 106;
          v105.Type = DXGKQAITYPE_GPUVERSION;
          v105.OutputDataSize = 128;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v52, &v105) < 0 )
          {
            WdLogSingleEntry1(3LL, this);
            WdLogGlobalForLineNumber = 1239;
          }
        }
        v92 = 0;
        for ( k = 0; k < v97; ++k )
        {
          v54 = (struct _DXGK_NODEMETADATA *)((char *)v45 + 74 * k);
          NodeMetadata = DXGADAPTER::DdiGetNodeMetadata(*((DXGADAPTER **)this + 2), k | (v35 << 16), v54);
          if ( NodeMetadata < 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 1250;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
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
          v56 = *((_QWORD *)this + 2);
          if ( *(_DWORD *)(v56 + 2280) >= 0x9000u )
          {
            if ( (*(_BYTE *)&v54->Flags.0 & 1) != 0 )
            {
              if ( !v54->IoMmuSupported && !*((_BYTE *)v40 + 49) )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1267;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but it doesn't support GPU VA.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (**(_DWORD **)(v56 + 3008) & 0x20000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1273;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
            v45 = v99;
            v57 = *(_DWORD *)((char *)v99 + 74 * k + 68);
            if ( (v57 & 8) != 0 )
            {
              if ( *(int *)(v56 + 3004) < 3100 )
              {
                WdLogSingleEntry1(2LL, this);
                WdLogGlobalForLineNumber = 1285;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x: UserModeSubmission is only supported on WDDM3.1 and above.",
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( (v57 & 1) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1291;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
              if ( (**(_DWORD **)(v56 + 3008) & 0x8000000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1297;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
              if ( (*(_DWORD *)(v104 + 2464) & 0x800) == 0 )
              {
                WdLogSingleEntry2(2LL, this, k);
                WdLogGlobalForLineNumber = 1303;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but NativeGpuFence cap is not set.",
                  (__int64)this,
                  k,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              if ( !*(_QWORD *)(v56 + 1528)
                || !*(_QWORD *)(v56 + 1552)
                || !*(_QWORD *)(v56 + 1536)
                || !*(_QWORD *)(v56 + 1544)
                || !*(_QWORD *)(v56 + 1560) )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 1315;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Driver reports UserModeSubmission support, but does not support all relevant Doorbell DDIs.",
                  1315LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_48;
              }
              v92 = 1;
            }
            else if ( g_NativeFenceDebugTest )
            {
              v58 = *(_DWORD *)((char *)v99 + 74 * k + 68);
              if ( (v58 & 1) != 0 )
              {
                *(_DWORD *)((char *)v99 + 74 * k + 68) = v58 | 8;
                *((_DWORD *)this + 318) |= 1u;
                *((_DWORD *)this + 319) = 512;
                *((_DWORD *)this + 320) = 512;
              }
            }
            if ( (*(_DWORD *)((char *)v45 + 74 * k + 68) & 0xFFE0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1332;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
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
            v54->Flags.Value = 0;
            v45 = v99;
          }
          v59 = v104;
          if ( *((_BYTE *)v45 + 74 * k + 72) )
          {
            if ( (*(_DWORD *)(v104 + 2468) & 0x40) == 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1341;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver reported GpuMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( (*((_DWORD *)v40 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1346;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver set GpuMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( k == v40[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3041LL) )
              *((_BYTE *)v40 + 48) = 1;
            *((_BYTE *)v40 + 49) = 1;
          }
          if ( *((_BYTE *)v45 + 74 * k + 73) )
          {
            if ( (*(_DWORD *)(v59 + 2468) & 0x80u) == 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1360;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver reported IoMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( (*((_DWORD *)v40 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, k);
              WdLogGlobalForLineNumber = 1365;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Adapter 0x%I64x, Node 0x%I64x: Driver set IoMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                k,
                0LL,
                0LL,
                0LL);
              goto LABEL_48;
            }
            if ( k == v40[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3041LL) )
              *((_BYTE *)v40 + 48) = 1;
          }
          v35 = v96;
        }
        if ( !v92 )
        {
LABEL_135:
          ++v35;
          continue;
        }
        v60 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v112 = 0LL;
        v113 = 0;
        memset(&v109, 0, 24);
        v109.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS|0x20;
        v109.pOutputData = &v111;
        *(_OWORD *)&v109.OutputDataSize = 0LL;
        v109.OutputDataSize = 28;
        v111 = 0LL;
        v13 = DXGADAPTER::DdiQueryAdapterInfo(v60, &v109);
        if ( (v13 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(DWORD1(v111) - 1) > 0x3FFF )
          {
            WdLogSingleEntry2(2LL, DWORD1(v111), 0x4000LL);
            WdLogGlobalForLineNumber = 1394;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD1(v111),
              0x4000LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( (v111 & 0xFFFFFFFE) != 0 )
          {
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 1401;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
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
            if ( (v111 & 1) == 0 || (unsigned int)(DWORD2(v111) - 1) <= 0x3FFF )
            {
              v61 = v113;
              v62 = v112;
              *(_OWORD *)((char *)this + 1272) = v111;
              *((_QWORD *)this + 161) = v62;
              *((_DWORD *)this + 324) = v61;
              goto LABEL_135;
            }
            WdLogSingleEntry2(2LL, DWORD2(v111), 0x4000LL);
            WdLogGlobalForLineNumber = 1411;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"SecondaryDoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD2(v111),
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
        WdLogGlobalForLineNumber = 1386;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Driver reported failure getting User mode submission Caps.",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_40:
        DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v93);
        return v13;
      }
      break;
    }
    if ( *(int *)(v37 + 2736) < 8960 )
      *(_DWORD *)(v37 + 2464) &= 0xFFFFF87F;
  }
  v63 = DXGADAPTER::CheckMcdmDdiSubmission(*((DXGADAPTER **)this + 2));
  if ( v63 < 0 )
  {
LABEL_159:
    v13 = v63;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    v94 = 0;
    v63 = ADAPTER_RENDER::ConfigureSysMm(this, (union SYSMM_IOMMU_STATE *)&v94);
    if ( v63 < 0 )
      goto LABEL_159;
    v64 = *((_QWORD *)this + 92);
    Global = DXGGLOBAL::GetGlobal();
    v66 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v64 + 8) + 24LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 2) + 216LL),
            (__int64)Global + 152);
    *((_QWORD *)this + 93) = v66;
    if ( !v66 )
      goto LABEL_39;
    v67 = 0LL;
    if ( (v94 & 1) != 0 )
    {
      v67 = 1LL;
      if ( (v94 & 2) != 0 )
        v67 = 3LL;
    }
    v68 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, __int64))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 8LL))(
            this,
            v67);
    *((_QWORD *)this + 96) = v68;
    if ( !v68 )
      goto LABEL_39;
  }
  memset(v110, 0, sizeof(v110));
  v110[3] |= 1u;
  LOBYTE(v69) = 1;
  v110[2] = 3;
  SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                    0LL,
                                    v69,
                                    this,
                                    v110,
                                    11,
                                    0,
                                    (char *)this + 904,
                                    0LL,
                                    0LL);
  v71 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal < 0 )
  {
    WdLogSingleEntry2(2LL, this, SynchronizationObjectInternal);
    WdLogGlobalForLineNumber = 1500;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x: CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v71,
      0LL,
      0LL,
      0LL);
    v13 = v71;
    goto LABEL_40;
  }
  v72 = (int *)*((_QWORD *)this + 2);
  if ( v72[684] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v72);
    v97 = NumDifferentPhysicalAdapters;
    v75 = 0;
    v95 = 0;
    v76 = 0LL;
    while ( v75 < NumDifferentPhysicalAdapters )
    {
      v77 = *(unsigned __int16 *)(344 * v76 + *(_QWORD *)(*((_QWORD *)this + 2) + 2992LL));
      v78 = 4 * v77;
      v79 = v77;
      if ( !is_mul_ok(v77, 4uLL) )
        v78 = -1LL;
      v80 = (unsigned int *)operator new[](v78, 0x4B677844u, 64LL, v73);
      v81 = v80;
      if ( !v80 )
        goto LABEL_39;
      v103 = v95;
      v108.pOutputData = v80;
      v108.OutputDataSize = 4 * v77;
      v82 = &v95;
      v83 = (DXGADAPTER *)*((_QWORD *)this + 2);
      if ( NumDifferentPhysicalAdapters <= 1 )
        v82 = &v103;
      *(_QWORD *)&v108.Type = 10LL;
      *(_QWORD *)&v108.InputDataSize = 4LL;
      *(_QWORD *)&v108.Flags.0 = 0LL;
      HIDWORD(v108.hKmdProcessHandle) = 0;
      v108.pInputData = v82;
      v84 = DXGADAPTER::DdiQueryAdapterInfo(v83, &v108);
      v85 = 1;
      if ( v84 < 0 )
        goto LABEL_187;
      if ( (_DWORD)v77 )
      {
        v86 = 0LL;
        v87 = v81;
        do
        {
          v88 = *v87;
          if ( *v87 - 1 <= 0x1E || v88 >= 0x41 )
          {
            v89 = *v87;
            WdLogSingleEntry3(2LL, this, v89, v86);
            WdLogGlobalForLineNumber = 1548;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: Invalid timestamp precision. Valid domain is {0, [32-64]}. Precision=%d, Node=%d",
              (__int64)this,
              v89,
              v86,
              0LL,
              0LL);
            v85 = 0;
          }
          else if ( !v88 )
          {
            *((_BYTE *)this + 968) = 1;
          }
          ++v86;
          ++v87;
          --v79;
        }
        while ( v79 );
        if ( !v85 )
        {
LABEL_187:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v81);
          *((_BYTE *)this + 968) = 0;
          v81 = 0LL;
          if ( v84 >= 0 )
          {
            v13 = -1073741438;
            WdLogSingleEntry2(2LL, this, -1073741438LL);
            v19 = L"Adapter 0x%I64x: Precision data is bad. Returning 0x%I64x";
            WdLogGlobalForLineNumber = 1588;
            goto LABEL_68;
          }
          WdLogSingleEntry1(4LL, this);
          WdLogGlobalForLineNumber = 1580;
        }
      }
      NumDifferentPhysicalAdapters = v97;
      *(_QWORD *)(344LL * v95 + *(_QWORD *)(*((_QWORD *)this + 2) + 2992LL) + 40) = v81;
      v75 = v95 + 1;
      v95 = v75;
      v76 = v75;
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
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v93);
  return 0LL;
}
