/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140197118 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x14028EE4C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403D4B2C (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // r14
  struct DXGALLOCATION *v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  struct COREDEVICEACCESS *v22; // [rsp+20h] [rbp-58h]

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1254;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      1254LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4024 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4024 * v4 + *((_QWORD *)this + 16))) )
  {
    v8 = *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 24);
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 18656LL);
    if ( *((_QWORD *)DXGPROCESS::GetCurrent(v8) + 7) != v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1271;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOwnedSessio"
         "n().GetEProcessCSRSS()",
        1271LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      if ( NumDifferentPhysicalAdapters )
      {
        v11 = v6 + 88;
        v12 = NumDifferentPhysicalAdapters;
        do
        {
          *(_QWORD *)(v11 + *((_QWORD *)this + 16)) = 0LL;
          v11 += 8LL;
          --v12;
        }
        while ( v12 );
      }
      *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(v6 + *((_QWORD *)this + 16) + 88) )
      {
        if ( NumDifferentPhysicalAdapters )
        {
          v13 = v6 + 88;
          v14 = NumDifferentPhysicalAdapters;
          do
          {
            v15 = *(struct DXGALLOCATION **)(v13 + *((_QWORD *)this + 16));
            if ( v15 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v15);
            v13 += 8LL;
            --v14;
          }
          while ( v14 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(v6 + *((_QWORD *)this + 16) + 88) + 40LL),
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        v16 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v16 )
        {
          v17 = v6 + 88;
          v18 = v16;
          do
          {
            *(_QWORD *)(v17 + *((_QWORD *)this + 16)) = 0LL;
            v17 += 8LL;
            --v18;
          }
          while ( v18 );
        }
      }
      v19 = *((_QWORD *)this + 16);
      v20 = *(_QWORD *)(4024 * v4 + v19 + 600);
      if ( v20 )
      {
        if ( *((_QWORD *)a2 + 237) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1917) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v20 + 40),
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        }
        else
        {
          v21 = *(void **)(4024 * v4 + v19 + 616);
          if ( v21 )
          {
            ObfDereferenceObject(v21);
            *(_QWORD *)(4024 * v4 + *((_QWORD *)this + 16) + 616) = 0LL;
          }
        }
        *(_QWORD *)(4024 * v4 + *((_QWORD *)this + 16) + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), v4, 0LL, 0, 0, 1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v22 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 1263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      (__int64)v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
