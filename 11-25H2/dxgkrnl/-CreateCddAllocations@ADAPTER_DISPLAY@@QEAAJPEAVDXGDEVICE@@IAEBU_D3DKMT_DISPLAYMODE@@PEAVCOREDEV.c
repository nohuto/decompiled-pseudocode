/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140194D90
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x140195FE8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CA78 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x140028D2C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x140067E20 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403325A8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403328FC (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v6; // rsi
  const struct _D3DKMT_DISPLAYMODE *v8; // r15
  PERESOURCE *v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // r8
  D3DDDI_RATIONAL RefreshRate; // rax
  UINT Width; // edx
  UINT Height; // ecx
  int StandardAllocation; // eax
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int *v31; // r15
  __int64 v32; // r12
  volatile signed __int32 *v33; // rsi
  __int64 v34; // r12
  unsigned int v35; // ebx
  unsigned int v36; // eax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  void *v43; // rax
  ADAPTER_RENDER *v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  UINT v48; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v50; // ecx
  int v51; // r12d
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // edx
  struct DXGPROCESS *v57; // r13
  unsigned int v58; // ebx
  unsigned int v59; // eax
  __int64 v60; // r8
  int v61; // ecx
  __int64 v62; // rbx
  int v63; // edx
  char v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh]
  char v66; // [rsp+52h] [rbp-AEh]
  int v67; // [rsp+54h] [rbp-ACh]
  __int128 v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-98h]
  unsigned int v70; // [rsp+70h] [rbp-90h]
  struct DXGPROCESS *v71; // [rsp+78h] [rbp-88h]
  struct COREDEVICEACCESS *v72; // [rsp+80h] [rbp-80h]
  _DXGKARG_DESCRIBEALLOCATION v73; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v74; // [rsp+B8h] [rbp-48h]
  _QWORD v75[54]; // [rsp+C0h] [rbp-40h] BYREF
  const struct _D3DKMT_DISPLAYMODE *v76; // [rsp+270h] [rbp+170h] BYREF
  D3DDDIFORMAT Format; // [rsp+278h] [rbp+178h]
  int v78; // [rsp+27Ch] [rbp+17Ch]
  _DWORD v79[3]; // [rsp+280h] [rbp+180h] BYREF
  D3DDDI_RATIONAL v80; // [rsp+28Ch] [rbp+18Ch]
  int v81; // [rsp+294h] [rbp+194h]

  v6 = a3;
  v70 = a3;
  v72 = a5;
  memset(v75, 0, 424);
  v76 = a4;
  v8 = a4;
  v68 = 0LL;
  v9 = (PERESOURCE *)*((_QWORD *)this + 2);
  memset(&v73, 0, sizeof(v73));
  v67 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v9)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 825;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      825LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = *((_QWORD *)this + 16);
  v12 = 3984 * v6;
  v71 = Current;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3984 * v6 + v11)) )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v14 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 837;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return v13;
  }
  v16 = *(_QWORD *)(**(_QWORD **)(v12 + *((_QWORD *)this + 16) + 24) + 18656LL);
  if ( *((_QWORD *)DXGPROCESS::GetCurrent() + 7) != v16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 845;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOwnedSession("
       ").GetEProcessCSRSS()",
      845LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = *((_QWORD *)this + 16);
  if ( !*(_QWORD *)(v12 + v17 + 88) )
    goto LABEL_26;
  if ( !*(_QWORD *)(v12 + v17 + 600) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 852;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
      852LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v12 + *((_QWORD *)this + 16) + 88) + 48LL);
  if ( (*(_DWORD *)(v18 + 4) & 0x10) != 0 )
  {
LABEL_21:
    v21 = ADAPTER_DISPLAY::DestroyCddAllocations(this, a2, v6);
    v22 = v21;
    if ( v21 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, v6, v21);
      WdLogGlobalForLineNumber = 900;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to destroy the existing CDD allocations on DXGDEVICE 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v6,
        v22,
        0LL,
        0LL);
      return (unsigned int)v22;
    }
    v23 = *((_QWORD *)this + 16);
    if ( *(_QWORD *)(v12 + v23 + 88) || *(_QWORD *)(v12 + v23 + 600) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 905;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(m_pDisplaySource[VidPnSourceId].m_pCddPrimaryAllocation[0] == NULL) && (m_pDisplaySource[VidPnSourceId].m_pCddS"
         "hadowAllocation == NULL)",
        905LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_26:
    v24 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *((_QWORD *)a2 + 235) == v24 || (*((_BYTE *)a2 + 1901) & 1) != 0 )
    {
      v64 = 1;
      v25 = 0;
    }
    else
    {
      v64 = 0;
      if ( (*(_DWORD *)(v24 + 444) & 0x10) == 0 )
      {
        v65 = 0;
        v66 = 1;
        goto LABEL_58;
      }
      v25 = 1;
    }
    RefreshRate = v8->RefreshRate;
    v75[1] = 0LL;
    Width = v8->Width;
    Height = v8->Height;
    v80 = RefreshRate;
    v75[3] = v79;
    v65 = v25;
    v66 = 0;
    v81 = v6;
    v79[0] = Width;
    v79[1] = Height;
    v79[2] = 21;
    v75[0] = 2049LL;
    LODWORD(v75[2]) = 1;
    if ( v25 )
    {
      if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        DWORD1(v68) = 4 * Width * Height;
        Height = Width;
      }
      else
      {
        DWORD1(v68) = 4 * Width * Height;
      }
      v75[4] = DxgkCreateDoDPrimarySection;
      v75[5] = &v68;
      v67 = 4 * Height;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v75, v72);
    v13 = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      WdLogSingleEntry5(3LL, v8->Width, v8->Height, a2, v6, StandardAllocation);
      WdLogGlobalForLineNumber = 980;
      return v13;
    }
    if ( !LODWORD(v75[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 989;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"NULL != CreateStandardAlloc.hResource",
        989LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !HIDWORD(v75[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 991;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"0 != CreateStandardAlloc.hGlobalShare",
        991LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( NumDifferentPhysicalAdapters )
    {
      v31 = (unsigned int *)&v75[6] + 1;
      v32 = 3984 * v6;
      v74 = (struct DXGPROCESS *)((char *)v71 + 248);
      v33 = (volatile signed __int32 *)((char *)v71 + 248);
      v34 = v32 + 88;
      v69 = NumDifferentPhysicalAdapters;
      do
      {
        v35 = *v31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v33);
        v36 = (v35 >> 6) & 0xFFFFFF;
        if ( v36 < *((_DWORD *)v71 + 74)
          && (v37 = *((_QWORD *)v71 + 35), ((v35 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0x60))
          && (*(_DWORD *)(v37 + 16LL * v36 + 8) & 0x2000) == 0
          && (v38 = *(_DWORD *)(v37 + 16LL * v36 + 8) & 0x1F) != 0 )
        {
          if ( v38 == 5 )
          {
            v39 = *(_QWORD *)(v37 + 16LL * v36);
          }
          else
          {
            WdLogSingleEntry0(2LL);
            v39 = 0LL;
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v39 = 0LL;
        }
        _InterlockedDecrement(v33 + 4);
        ExReleasePushLockSharedEx(v33, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v34 + *((_QWORD *)this + 16)) = v39;
        if ( (*((_BYTE *)a2 + 1901) & 1) != 0 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(v34 + *((_QWORD *)this + 16)) + 48LL);
          *(_DWORD *)(v40 + 4) |= 2u;
        }
        v34 += 8LL;
        ++v31;
        --v69;
      }
      while ( v69 );
      LODWORD(v6) = v70;
      v8 = v76;
    }
LABEL_58:
    v41 = 3984LL * (unsigned int)v6;
    v42 = *((_QWORD *)this + 16) + v41;
    if ( v64 )
    {
      v43 = *(void **)(*(_QWORD *)(*(_QWORD *)(v42 + 88) + 48LL) + 16LL);
      v44 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v73.hAllocation = v43;
      v45 = ADAPTER_RENDER::DdiDescribeAllocation(v44, &v73);
      v46 = *((_QWORD *)this + 16);
      if ( v45 >= 0 )
      {
        *(D3DDDI_MULTISAMPLINGMETHOD *)(3984LL * (unsigned int)v6 + v46 + 1036) = v73.MultisampleMethod;
        *(_DWORD *)(v41 + *((_QWORD *)this + 16) + 1044) = v73.PrivateDriverFormatAttribute;
      }
      else
      {
        WdLogSingleEntry4(3LL, a2, *(_QWORD *)(3984LL * (unsigned int)v6 + v46 + 88), (unsigned int)v6, v45);
        v47 = *((_QWORD *)this + 16);
        WdLogGlobalForLineNumber = 1025;
        *(_DWORD *)(v41 + v47 + 1036) = 1;
        *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1040) = 1;
        *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1044) = 0;
      }
    }
    else
    {
      *(_DWORD *)(v42 + 1036) = 1;
      *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1040) = 1;
      *(_DWORD *)(v41 + *((_QWORD *)this + 16) + 1044) = 0;
    }
    if ( v65 )
    {
      v63 = v68;
      if ( !(_DWORD)v68 || !*((_QWORD *)&v68 + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1191;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(SectionCreationInfo.Size != 0) && (SectionCreationInfo.Section != NULL)",
          1191LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v63 = v68;
      }
      *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = v63;
      *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = *((_QWORD *)&v68 + 1);
      *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) = *(_QWORD *)(3984LL * (unsigned int)v6
                                                                                        + *((_QWORD *)this + 16)
                                                                                        + 88);
      if ( !v67 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1204;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 != DoDShadowPitch", 1204LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 608) = v67;
      goto LABEL_107;
    }
    v78 = 0;
    if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v76) = v8->Width;
      v48 = v8->Height;
    }
    else
    {
      LODWORD(v76) = v8->Height;
      v48 = v8->Width;
    }
    HIDWORD(v76) = v48;
    Format = v8->Format;
    LODWORD(v75[0]) = 0;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline();
    v50 = v75[0];
    if ( IsEnabledDeviceUsageNoInline )
    {
      v50 = LODWORD(v75[0]) | 2;
      LODWORD(v75[0]) |= 2u;
    }
    HIDWORD(v75[0]) = 0;
    v75[3] = &v76;
    LODWORD(v75[2]) = 2;
    if ( v66 )
    {
      v51 = 4 * (_DWORD)v76;
      LODWORD(v75[0]) = v50 | 0x801;
      DWORD1(v68) = 4 * (_DWORD)v76 * HIDWORD(v76);
      v75[4] = DxgkCreateDoDPrimarySection;
      v75[5] = &v68;
    }
    else
    {
      v51 = v67;
    }
    v52 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v75, v72);
    v13 = v52;
    if ( v52 < 0 )
    {
      WdLogSingleEntry5(3LL, (unsigned int)v76, HIDWORD(v76), a2, (unsigned int)v6, v52);
      WdLogGlobalForLineNumber = 1121;
      if ( v64 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 88) + 40LL),
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        v53 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v53 )
        {
          v54 = v53;
          v55 = 3984LL * (unsigned int)v6 + 88;
          do
          {
            *(_QWORD *)(v55 + *((_QWORD *)this + 16)) = 0LL;
            v55 += 8LL;
            --v54;
          }
          while ( v54 );
        }
      }
      return v13;
    }
    if ( !HIDWORD(v75[6]) || !LODWORD(v75[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1145;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(NULL != CreateStandardAlloc.hAllocation[0]) && (NULL != CreateStandardAlloc.hResource)",
        1145LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v56 = v78;
    if ( !v78 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1150;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 != ShadowSurfaceData.Pitch", 1150LL, 0LL, 0LL, 0LL, 0LL);
      v56 = v78;
    }
    v57 = v71;
    *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 608) = v56;
    v58 = HIDWORD(v75[6]);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v57 + 248));
    v59 = (v58 >> 6) & 0xFFFFFF;
    if ( v59 < *((_DWORD *)v57 + 74) )
    {
      v60 = *((_QWORD *)v57 + 35);
      if ( ((v58 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16LL * v59 + 8) & 0x60)
        && (*(_DWORD *)(v60 + 16LL * v59 + 8) & 0x2000) == 0 )
      {
        v61 = *(_DWORD *)(v60 + 16LL * v59 + 8) & 0x1F;
        if ( v61 )
        {
          if ( v61 == 5 )
          {
            v62 = *(_QWORD *)(v60 + 16LL * v59);
LABEL_92:
            _InterlockedDecrement((volatile signed __int32 *)v57 + 66);
            ExReleasePushLockSharedEx((char *)v57 + 248, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) = v62;
            if ( !*(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1154;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
                1154LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = 0;
            *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = 0LL;
            if ( v66 )
            {
              if ( (_DWORD)v68 && *((_QWORD *)&v68 + 1) )
              {
                *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = v68;
                *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = *((_QWORD *)&v68 + 1);
              }
              *(_QWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 88) = *(_QWORD *)(3984LL
                                                                                               * (unsigned int)v6
                                                                                               + *((_QWORD *)this + 16)
                                                                                               + 600);
              if ( !v51 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1180;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"0 != DoDShadowPitch",
                  1180LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 608) = v51;
            }
LABEL_107:
            if ( *(_DWORD *)(3984LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 736) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership(this, v6);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)this, v6, v8);
            return 0LL;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v62 = 0LL;
    goto LABEL_92;
  }
  v19 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  v73.hAllocation = *(HANDLE *)(v18 + 16);
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(v19, &v73);
  if ( v20 < 0 )
  {
    WdLogSingleEntry4(3LL, a2, *(_QWORD *)(v12 + *((_QWORD *)this + 16) + 88), v6, v20);
    WdLogGlobalForLineNumber = 871;
    goto LABEL_21;
  }
  if ( v73.Width != v8->Width
    || v73.Height != v8->Height
    || v73.Format != D3DDDIFMT_A8R8G8B8
    || v73.RefreshRate.Numerator != v8->RefreshRate.Numerator
    || v73.RefreshRate.Denominator != v8->RefreshRate.Denominator
    || *(_DWORD *)(v12 + *((_QWORD *)this + 16) + 1020) != v8->DisplayOrientation )
  {
    goto LABEL_21;
  }
  return 0LL;
}
