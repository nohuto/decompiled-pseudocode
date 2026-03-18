/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140320C88
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269054 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140050A90 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline @ 0x140090B5C (Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403C4754 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E1F18 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x14042D7C8 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, char a2)
{
  unsigned int v2; // r15d
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v8; // rcx
  unsigned int j; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // r13
  unsigned int v18; // r14d
  struct tagRECT *v19; // r12
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rdi
  CCD_TOPOLOGY *v27; // rcx
  UINT cx; // edx
  void *v29; // rbx
  int v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // r15d
  int v34; // ebx
  __int64 v35; // rax
  unsigned __int16 v36; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rax
  __int64 v38; // r9
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rdi
  int v40; // ecx
  int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // r8
  _DWORD *v45; // rax
  __int64 top; // rcx
  LONG left; // r13d
  __int64 v48; // rdx
  int v49; // r14d
  unsigned __int64 v50; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r13
  _QWORD *v54; // rax
  __int64 v55; // rcx
  int v56; // ecx
  int v58; // [rsp+5Ch] [rbp-65h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-61h] BYREF
  int v60; // [rsp+64h] [rbp-5Dh]
  __int64 v61; // [rsp+68h] [rbp-59h]
  unsigned __int64 v62; // [rsp+70h] [rbp-51h]
  void *v63; // [rsp+78h] [rbp-49h]
  struct _D3DKMDT_2DREGION v64; // [rsp+80h] [rbp-41h] BYREF
  struct _D3DKMDT_2DREGION v65; // [rsp+88h] [rbp-39h] BYREF
  struct _D3DKMDT_2DREGION v66; // [rsp+90h] [rbp-31h] BYREF
  __int64 v67; // [rsp+98h] [rbp-29h]
  _BYTE v68[20]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v69; // [rsp+BCh] [rbp-5h]
  __int128 v70; // [rsp+CCh] [rbp+Bh]
  __int64 v71; // [rsp+DCh] [rbp+1Bh]
  int v72; // [rsp+E4h] [rbp+23h]

  v2 = 0;
  v58 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5297;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5297LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v65 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v65);
      v8 = *((_QWORD *)PathDescriptor + 31);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 31) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v65.cx + *((_DWORD *)PathDescriptor + 36)) > v58 )
        v58 = v65.cx + *((_DWORD *)PathDescriptor + 36);
    }
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(unsigned __int16 *)(v10 + 20) : 0LL;
    if ( j >= (unsigned __int16)v11 )
      break;
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    v13 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v12 + 36) = v58;
      v14 = *((_DWORD *)v12 + 33);
      *((_DWORD *)v12 + 37) = 0;
      *(_QWORD *)v12 = v13 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v14) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5342;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5342LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v66 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v12, 0, &v66);
      v15 = *((_QWORD *)v12 + 31);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 76) = v58;
        *(_DWORD *)(*((_QWORD *)v12 + 31) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v12 + 31) + 72LL) |= 0x20u;
      }
      v58 += v66.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( !Current )
    return 0LL;
  v17 = *((_QWORD *)Current + 11);
  if ( !v17 )
    return 0LL;
  v59 = 0;
  v18 = -1;
  memset(v68, 0, sizeof(v68));
  v63 = 0LL;
  v71 = 0LL;
  v19 = (struct tagRECT *)v68;
  v72 = 0;
  v69 = 0LL;
  v70 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline();
  v21 = *((_QWORD *)this + 8);
  if ( v21 )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( *(_WORD *)(v21 + 20) >= 4u )
      {
        v22 = 16 * (*(unsigned __int16 *)(v21 + 20) + 1LL);
        if ( !is_mul_ok(*(unsigned __int16 *)(v21 + 20) + 1LL, 0x10uLL) )
          v22 = -1LL;
        v63 = (void *)operator new[](v22, 0x4B677844u, 256LL);
        v19 = (struct tagRECT *)v63;
        if ( !v63 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 5384;
          return 3221225495LL;
        }
      }
    }
    else if ( *(_WORD *)(v21 + 20) > 4u )
    {
      v23 = 16LL * *(unsigned __int16 *)(v21 + 20);
      if ( !is_mul_ok(*(unsigned __int16 *)(v21 + 20), 0x10uLL) )
        v23 = -1LL;
      v63 = (void *)operator new[](v23, 0x4B677844u, 256LL);
      v19 = (struct tagRECT *)v63;
      if ( !v63 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 5397;
        return 3221225495LL;
      }
    }
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)this + 8);
    v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
    if ( v2 >= v25 )
      break;
    v26 = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v2)
      && !*((_DWORD *)v26 + 53)
      && (a2 || !CCD_TOPOLOGY::IsVirtualSlate(v27, v26)) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v26 + 33)) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5428;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5428LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v64 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v26, 0, &v64);
      cx = v64.cx;
      v19[v59].left = *((_DWORD *)v26 + 36);
      v19[v59].top = *((_DWORD *)v26 + 37);
      v19[v59].right = *((_DWORD *)v26 + 36) + cx;
      v19[v59].bottom = *((_DWORD *)v26 + 37) + v64.cy;
      if ( v18 == -1 && !*((_DWORD *)v26 + 36) && !*((_DWORD *)v26 + 37) )
        v18 = v59;
      ++v59;
    }
    ++v2;
  }
  v29 = v63;
  if ( v18 == -1 )
  {
    WdLogSingleEntry0(3LL);
    v18 = 0;
    WdLogGlobalForLineNumber = 5452;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v17 + 336))(v19, v59, v18) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 5461;
    if ( v63 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v63);
    return 3221225495LL;
  }
  v58 = 0;
  if ( a2 || (v31 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v19, &v59, &v58), v32 = v31, v31 >= 0) )
  {
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      v35 = *((_QWORD *)this + 8);
      v36 = v35 ? *(_WORD *)(v35 + 20) : 0;
      if ( v33 >= v36 )
        break;
      v37 = CCD_TOPOLOGY::GetPathDescriptor(this, v33);
      v39 = v37;
      if ( *((_DWORD *)v37 + 53) )
      {
        v40 = v58;
        HIDWORD(v67) = 0;
        v41 = *((_DWORD *)v37 + 24);
        *(_QWORD *)v37 |= 0x800uLL;
        LODWORD(v67) = v40;
        *((_QWORD *)v37 + 18) = v67;
        *((_DWORD *)v37 + 39) = *((_DWORD *)v37 + 25);
        *((_DWORD *)v37 + 38) = v41;
        v58 += v41;
      }
      else
      {
        v42 = *((_QWORD *)this + 8);
        v43 = 0;
        v44 = *(unsigned int *)(296LL * v33 + v42 + 240);
        if ( *(_WORD *)(v42 + 20) )
        {
          v45 = (_DWORD *)(v42 + 240);
          while ( *v45 != (_DWORD)v44 )
          {
            ++v43;
            v45 += 74;
            if ( v43 >= *(unsigned __int16 *)(v42 + 20) )
              goto LABEL_80;
          }
        }
        else
        {
LABEL_80:
          v43 = -559038737;
        }
        if ( v43 == v33 )
        {
          top = (unsigned int)v19[v34].top;
          left = v19[v34].left;
          v48 = (unsigned int)(v19[v34].bottom - top);
          v49 = v19[v34].right - left;
          v62 = __PAIR64__(v48, v49);
          ++v34;
          HIDWORD(v50) = v48;
          v60 = top;
          LODWORD(v61) = v48;
        }
        else
        {
          v61 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v43) + 18);
          v51 = CCD_TOPOLOGY::GetPathDescriptor(this, v43);
          left = v61;
          v60 = HIDWORD(v61);
          v50 = *((_QWORD *)v51 + 19);
          v62 = v50;
          top = HIDWORD(v50);
          v49 = v50;
          LODWORD(v61) = HIDWORD(v50);
        }
        if ( *((_QWORD *)v39 + 19) != __PAIR64__(HIDWORD(v50), v49) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5543;
        }
        if ( *((_DWORD *)v39 + 36) != left )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdTrace(top, v48, v44, v38);
          v52[3] = v33;
          v52[4] = *((int *)v39 + 36);
          top = left;
          v52[5] = left;
          WdLogGlobalForLineNumber = 5551;
        }
        *((_DWORD *)v39 + 36) = left;
        v53 = v60;
        if ( *((_DWORD *)v39 + 37) != v60 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdTrace(top, v48, v44, v38);
          v54[3] = v33;
          v54[4] = *((int *)v39 + 37);
          v54[5] = v53;
          WdLogGlobalForLineNumber = 5560;
        }
        *(_QWORD *)v39 |= 0x800uLL;
        v55 = *((_QWORD *)v39 + 31);
        *((_DWORD *)v39 + 37) = v53;
        if ( v55 )
        {
          *(_QWORD *)(v55 + 76) = *((_QWORD *)v39 + 18);
          v56 = v61;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 172LL) = v49;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 176LL) = v56;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 72LL) |= 0x180020u;
        }
      }
      ++v33;
    }
    if ( v63 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v63);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v31);
  WdLogGlobalForLineNumber = 5477;
  if ( v29 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
  return v32;
}
