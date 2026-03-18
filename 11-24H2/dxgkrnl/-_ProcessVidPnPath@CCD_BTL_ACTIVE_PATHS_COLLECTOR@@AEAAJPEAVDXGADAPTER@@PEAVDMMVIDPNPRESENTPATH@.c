/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x14031A158
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x140319430 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14039FC08 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14000CC54 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1402E1618 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x140315FE0 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x14031B3D8 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x14031B458 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  CCD_BTL_ACTIVE_PATHS_COLLECTOR *v7; // rbx
  unsigned __int16 v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // r14
  bool IsCoreResourceSharedOwner; // al
  unsigned int v13; // edx
  __int64 v14; // rsi
  DXGMONITOR *v15; // rbx
  bool IsVirtualModeSupportDisabled; // bl
  bool v17; // r8
  char v18; // dl
  int v19; // esi
  __int64 v20; // rcx
  CCD_TOPOLOGY *v21; // rsi
  _DWORD *v22; // rax
  int v23; // r9d
  int v24; // r10d
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  CCD_TOPOLOGY *v28; // rdx
  int v29; // r8d
  __int64 v30; // r14
  __int64 v31; // rcx
  char v32; // al
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  struct DMMVIDPNTARGETMODESET *v36; // rdi
  __int64 v37; // rcx
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int64 v40; // xmm0_8
  struct DMMVIDPNTARGETMODESET *v41; // rbx
  DMMVIDPNSOURCEMODE *v42; // rcx
  int v43; // eax
  bool v44; // al
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v46; // xmm1
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v47; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v49; // r9
  __int64 v50; // r8
  int v51; // eax
  __int64 result; // rax
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v54; // r9
  bool v55; // [rsp+58h] [rbp-51h]
  bool v56; // [rsp+59h] [rbp-50h]
  bool v57; // [rsp+5Ah] [rbp-4Fh] BYREF
  char v58[9]; // [rsp+5Bh] [rbp-4Eh] BYREF
  int v59; // [rsp+64h] [rbp-45h]
  int v60; // [rsp+68h] [rbp-41h]
  int v61; // [rsp+6Ch] [rbp-3Dh]
  int v62; // [rsp+70h] [rbp-39h]
  CCD_TOPOLOGY *v63; // [rsp+78h] [rbp-31h]
  DXGMONITOR *v64[7]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v65; // [rsp+B8h] [rbp+Fh]
  bool v67; // [rsp+118h] [rbp+6Fh] BYREF
  char v68; // [rsp+120h] [rbp+77h]

  v68 = a4;
  v7 = this;
  if ( (*(_BYTE *)(*(_QWORD *)this + 84LL) & 5) == 5 )
  {
    WdLogSingleEntry0(1LL);
    a4 = v68;
    WdLogGlobalForLineNumber = 221;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v10 = *(_DWORD *)(*(_QWORD *)v7 + 84LL);
  if ( *(_DWORD *)(v9 + 92) )
  {
    if ( (v10 & 5) == 0 || (v10 & 4) != 0 && !*(_QWORD *)(v9 + 544) )
      return 0LL;
  }
  else if ( (v10 & 4) != 0 )
  {
    return 0LL;
  }
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    WdLogSingleEntry5(
      1LL,
      *((int *)a2 + 104),
      *((unsigned int *)a2 + 103),
      *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
      *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    WdLogGlobalForLineNumber = 255;
    return 0LL;
  }
  ++*((_WORD *)v7 + 4);
  v57 = 0;
  v11 = 0;
  v58[0] = 0;
  v67 = 0;
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v13 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( !IsCoreResourceSharedOwner )
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 412),
                                          v13,
                                          &v67,
                                          &v57,
                                          v58,
                                          0LL,
                                          0LL,
                                          0LL);
    v17 = v57;
    v19 = IsVirtualizationDisabledForTarget;
    v18 = v58[0];
    v11 = v67;
    goto LABEL_25;
  }
  if ( !a2 || v13 == -1 )
  {
LABEL_24:
    v18 = 0;
    v19 = -1073741811;
    v17 = 0;
    goto LABEL_25;
  }
  v14 = *((_QWORD *)a2 + 390);
  if ( !v14 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10286;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      10286LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  MONITOR_MGR::AcquireMonitorShared(v64, (__int64)a2, v13, 1u);
  v15 = v64[0];
  if ( !v64[0] )
  {
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v64);
LABEL_16:
    v17 = *(_BYTE *)(v14 + 290) == 0;
    v11 = *(_BYTE *)(v14 + 289) == 0;
    goto LABEL_17;
  }
  if ( *((_DWORD *)v64[0] + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5270;
  }
  IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v15);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v64);
  if ( !IsVirtualModeSupportDisabled )
    goto LABEL_16;
  v17 = 1;
  v11 = 1;
LABEL_17:
  v67 = v11;
  v57 = v17;
  if ( v11 || (v18 = 0, (*(_DWORD *)(v14 + 24) & 0x20) == 0) )
    v18 = 1;
  v7 = this;
  v19 = 0;
  v58[0] = v18;
LABEL_25:
  if ( v19 >= 0 )
  {
    v20 = *((_QWORD *)a3 + 12);
    v21 = *(CCD_TOPOLOGY **)v7;
    v56 = v18 == 0;
    v63 = v21;
    v22 = *(_DWORD **)(v20 + 96);
    v55 = !v17;
    v58[1] = !v11;
    v23 = v22[23];
    v24 = v22[21];
    v60 = v22[20];
    v59 = *(_DWORD *)(v20 + 24);
    v25 = *((_QWORD *)a3 + 11);
    v62 = v23;
    v61 = v24;
    *(_DWORD *)&v58[5] = *(_DWORD *)(v25 + 24);
    CCD_TOPOLOGY::ClearModalitySetId(v21);
    v26 = *((_QWORD *)v21 + 8);
    if ( v26 && (v27 = *(unsigned __int16 *)(v26 + 20), (unsigned __int16)v27 < *(_WORD *)(v26 + 22)) )
    {
      v28 = v63;
      v29 = v60;
      v30 = 296 * v27;
      *(_QWORD *)(v30 + v26 + 72) = *(_QWORD *)((char *)a2 + 412);
      *(_DWORD *)(v30 + v26 + 80) = *(_DWORD *)&v58[5];
      *(_DWORD *)(v30 + v26 + 84) = v59;
      v31 = 0x8700000000000LL;
      v32 = v58[1] | (2 * v55) | (4 * v56);
      *(_OWORD *)(v30 + v26 + 312) = 0LL;
      *(_BYTE *)(v30 + v26 + 185) = v32;
      v65 = 0LL;
      *(_QWORD *)(v30 + v26 + 56) = 0x8700000000000LL;
      *(_OWORD *)(v30 + v26 + 328) = 0LL;
      *(_QWORD *)(v30 + v26 + 344) = v65;
      *(_DWORD *)(v30 + v26 + 312) = *((_DWORD *)v28 + 22);
      if ( v29 != -2 )
      {
        v33 = v61;
        if ( v61 != -2 )
        {
          v31 = 0x8F00000000000LL;
          *(_DWORD *)(v30 + v26 + 144) = v29;
          *(_QWORD *)(v30 + v26 + 56) = 0x8F00000000000LL;
          *(_DWORD *)(v30 + v26 + 148) = v33;
        }
      }
      v34 = v62;
      *(_DWORD *)(v30 + v26 + 268) = v62;
      if ( v34 )
        *(_QWORD *)(v30 + v26 + 56) = v31 | 0x1000000000LL;
      ++*(_WORD *)(*((_QWORD *)v28 + 8) + 20LL);
      *(_DWORD *)(v30 + v26 + 332) = *((unsigned __int16 *)a3 + 54);
      *(_DWORD *)(v30 + v26 + 144) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *(_DWORD *)(v30 + v26 + 148) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      v35 = *(_QWORD *)(v30 + v26 + 56) | 0x800000000000LL;
      *(_QWORD *)(v30 + v26 + 56) = v35;
      if ( v68 )
      {
        *(_QWORD *)(v30 + v26 + 56) = v35 | 0x8000000000000000uLL;
        *(_QWORD *)(v30 + v26 + 56) |= -(__int64)((unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(
                                                                     *((ADAPTER_DISPLAY **)a2 + 390),
                                                                     *(_DWORD *)(v30 + v26 + 80)) != 0) & 0x20000000000LL;
        *(_QWORD *)(v30 + v26 + 56) |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                    *((ADAPTER_DISPLAY **)a2 + 390),
                                                    *(_DWORD *)(v30 + v26 + 80)) != 0) & 0x80000000000LL;
        v36 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 12));
        v37 = *((_QWORD *)v36 + 18);
        if ( v37 )
        {
          v38 = *(_OWORD *)(v37 + 88);
          v39 = *(_OWORD *)(v37 + 104);
          v40 = *(_QWORD *)(v37 + 120);
          *(_OWORD *)(v30 + v26 + 88) = *(_OWORD *)(v37 + 72);
          *(_OWORD *)(v30 + v26 + 104) = v38;
          *(_OWORD *)(v30 + v26 + 120) = v39;
          *(_QWORD *)(v30 + v26 + 136) = v40;
          *(_QWORD *)(v30 + v26 + 56) |= 0x87uLL;
          *(_DWORD *)(v30 + v26 + 260) = *(_DWORD *)(v37 + 132);
          *(_DWORD *)(v30 + v26 + 264) = *(_DWORD *)(v37 + 136);
          *(_QWORD *)(v30 + v26 + 56) |= 8uLL;
          *(_QWORD *)(v30 + v26 + 280) = *(_QWORD *)(v37 + 152);
          *(_QWORD *)(v30 + v26 + 288) = *(_QWORD *)(v37 + 144);
          *(_DWORD *)(v30 + v26 + 296) = *(_DWORD *)(v37 + 160);
          *(_QWORD *)(v30 + v26 + 56) |= 0x801000000uLL;
        }
        else
        {
          *(_DWORD *)(v30 + v26 + 260) = 0;
          *(_DWORD *)(v30 + v26 + 264) = 4;
        }
        v41 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 11));
        v42 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v41 + 18);
        if ( v42 )
        {
          v43 = *((_DWORD *)v42 + 18);
          v44 = v43 == 3 || v43 == 4;
          *(_BYTE *)(v30 + v26 + 184) = v44;
          GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v42);
          v46 = *(_OWORD *)&GraphicsInfo->Stride;
          *(_OWORD *)(v30 + v26 + 152) = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
          *(_OWORD *)(v30 + v26 + 168) = v46;
          *(_QWORD *)(v30 + v26 + 56) |= 0x100uLL;
          v47 = *((_DWORD *)a3 + 29);
          *(_DWORD *)(v30 + v26 + 188) = v47;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *(_DWORD *)(v30 + v26 + 188) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                             *((ADAPTER_DISPLAY **)a2 + 390),
                                             v47,
                                             *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *(_DWORD *)(v30 + v26 + 192) = *((_DWORD *)a3 + 28);
          *(_QWORD *)(v30 + v26 + 56) |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 390),
                                 *(_DWORD *)(v30 + v26 + 80));
            *(_QWORD *)(v30 + v26 + 336) = SessionViewOwner;
            if ( SessionViewOwner )
            {
              v49 = 4024LL * *(unsigned int *)(v30 + v26 + 80);
              v50 = *(_QWORD *)(*((_QWORD *)a2 + 390) + 128LL);
              *(_DWORD *)(v30 + v26 + 208) = *((_DWORD *)SessionViewOwner + 8) - *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v30 + v26 + 212) = *((_DWORD *)SessionViewOwner + 9) - *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v30 + v26 + 200) = *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v30 + v26 + 204) = *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v30 + v26 + 224) = *(_DWORD *)(v49 + v50 + 688);
              *(_DWORD *)(v30 + v26 + 232) = *(_DWORD *)(v49 + v50 + 696);
              *(_DWORD *)(v30 + v26 + 228) = *(_DWORD *)(v49 + v50 + 692);
              *(_DWORD *)(v30 + v26 + 236) = *(_DWORD *)(v49 + v50 + 700);
              *(_QWORD *)(v30 + v26 + 56) |= 0x820800uLL;
              *(_QWORD *)(v30 + v26 + 252) = *((_QWORD *)SessionViewOwner + 8);
            }
            *(_DWORD *)(v30 + v26 + 272) = *(_DWORD *)(4024LL * *(unsigned int *)(v30 + v26 + 80)
                                                     + *(_QWORD *)(*((_QWORD *)a2 + 390) + 128LL)
                                                     + 3804);
            *(_QWORD *)(v30 + v26 + 56) |= 0x1000000000000uLL;
            v51 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 536LL) + 168LL);
            if ( v51 == 12 )
            {
              *(_DWORD *)(v30 + v26 + 248) = 259;
            }
            else if ( v51 == 13 )
            {
              *(_DWORD *)(v30 + v26 + 248) = -1073741437;
            }
          }
        }
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v41 + 88));
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v36 + 88));
      }
    }
    else
    {
      v54 = *(_QWORD *)(*(_QWORD *)v7 + 64LL);
      if ( v54 )
        v8 = *(_WORD *)(v54 + 22);
      WdLogSingleEntry5(3LL, v7, *(_QWORD *)v7, v54, v8, *((unsigned __int16 *)v7 + 4));
      WdLogGlobalForLineNumber = 312;
    }
    return 0LL;
  }
  WdLogSingleEntry3(
    2LL,
    *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
    *((int *)a2 + 104),
    *((unsigned int *)a2 + 103));
  result = (unsigned int)v19;
  WdLogGlobalForLineNumber = 290;
  return result;
}
