/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140371650
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140262154 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B6DC (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140051020 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140055C48 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x140370FE0 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x140371EC4 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E8E68 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, char a2)
{
  unsigned int v2; // r15d
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  unsigned int j; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rbx
  __int64 v11; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rcx
  struct tagRECT *v16; // r13
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdi
  CCD_TOPOLOGY *v21; // rcx
  void *v22; // rbx
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // r15d
  int v26; // ebx
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v31; // ecx
  __int64 v32; // rdx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // r14d
  __int64 v38; // r9
  int left; // r12d
  unsigned int v40; // r14d
  LONG top; // r13d
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // edx
  unsigned int v50; // ecx
  __int64 v51; // rcx
  int v52; // eax
  __int16 v53; // r8
  unsigned __int64 v54; // rax
  int v55; // eax
  __int16 v56; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  int v61; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-49h]
  unsigned __int64 v64; // [rsp+70h] [rbp-41h]
  struct tagRECT *v65; // [rsp+78h] [rbp-39h]
  __int64 v66; // [rsp+80h] [rbp-31h]
  void *v67; // [rsp+88h] [rbp-29h]
  struct _D3DKMDT_2DREGION v68; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v69[20]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v70; // [rsp+ACh] [rbp-5h]
  __int128 v71; // [rsp+BCh] [rbp+Bh]
  __int64 v72; // [rsp+CCh] [rbp+1Bh]
  int v73; // [rsp+D4h] [rbp+23h]

  v2 = 0;
  v61 = 0;
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
        WdLogGlobalForLineNumber = 5226;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5226LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_QWORD *)PathDescriptor & 0x20000LL) != 0 )
      {
        v31 = *((_DWORD *)PathDescriptor + 38);
      }
      else
      {
        v52 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)PathDescriptor
                                                                                                + 33));
        if ( (v53 & 0x200) != 0 && ((v52 - 1) & 0xFFFFFFFD) != 0 )
        {
          v31 = *((_DWORD *)PathDescriptor + 25);
        }
        else
        {
          v66 = *((_QWORD *)PathDescriptor + 12);
          v31 = v66;
        }
      }
      v32 = *((_QWORD *)PathDescriptor + 31);
      if ( v32 )
      {
        *(_QWORD *)(v32 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 31) + 72LL) |= 0x20u;
      }
      if ( v31 + *((_DWORD *)PathDescriptor + 36) > v61 )
        v61 = v31 + *((_DWORD *)PathDescriptor + 36);
    }
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(unsigned __int16 *)(v8 + 20) : 0LL;
    if ( j >= (unsigned __int16)v9 )
      break;
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    v11 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v10 + 36) = v61;
      v50 = *((_DWORD *)v10 + 33);
      *((_DWORD *)v10 + 37) = 0;
      *(_QWORD *)v10 = v11 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v50) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5271;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5271LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v68 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v10, 0, &v68);
      v51 = *((_QWORD *)v10 + 31);
      if ( v51 )
      {
        *(_DWORD *)(v51 + 76) = v61;
        *(_DWORD *)(*((_QWORD *)v10 + 31) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v10 + 31) + 72LL) |= 0x20u;
      }
      v61 += v68.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
    return 0LL;
  v14 = *((_QWORD *)Current + 11);
  if ( !v14 )
    return 0LL;
  v15 = *((_QWORD *)this + 8);
  v16 = (struct tagRECT *)v69;
  v62 = 0;
  memset(v69, 0, sizeof(v69));
  v17 = -1;
  v72 = 0LL;
  v73 = 0;
  v65 = (struct tagRECT *)v69;
  v67 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( v15 && *(_WORD *)(v15 + 20) > 4u )
  {
    v54 = 16LL * *(unsigned __int16 *)(v15 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v15 + 20), 0x10uLL) )
      v54 = -1LL;
    v65 = (struct tagRECT *)operator new[](v54, 0x4B677844u, 256LL, v13);
    v16 = v65;
    v67 = v65;
    if ( !v65 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5311;
      return 3221225495LL;
    }
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)this + 8);
    v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( v2 >= v19 )
      break;
    v20 = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
    if ( !CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v2)
      || *((_DWORD *)v20 + 53)
      || !a2 && CCD_TOPOLOGY::IsVirtualSlate(v21, v20) )
    {
      goto LABEL_22;
    }
    if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v20 + 33)) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5341;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
        5341LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_QWORD *)v20 & 0x20000LL) != 0 )
    {
      v46 = *((_DWORD *)v20 + 38);
      v47 = *((_DWORD *)v20 + 39);
LABEL_68:
      v63 = __PAIR64__(v47, v46);
      goto LABEL_69;
    }
    v55 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v20 + 33));
    if ( (v56 & 0x200) != 0 && ((v55 - 1) & 0xFFFFFFFD) != 0 )
    {
      v46 = *((_DWORD *)v20 + 25);
      v47 = *((_DWORD *)v20 + 24);
      goto LABEL_68;
    }
    v63 = *((_QWORD *)v20 + 12);
    v46 = v63;
LABEL_69:
    v16[v62].left = *((_DWORD *)v20 + 36);
    v16[v62].top = *((_DWORD *)v20 + 37);
    v16[v62].right = v46 + *((_DWORD *)v20 + 36);
    v16[v62].bottom = *((_DWORD *)v20 + 37) + HIDWORD(v63);
    if ( v17 == -1 && !*((_DWORD *)v20 + 36) && !*((_DWORD *)v20 + 37) )
      v17 = v62;
    ++v62;
LABEL_22:
    ++v2;
  }
  v22 = v67;
  if ( v17 == -1 )
  {
    WdLogSingleEntry0(3LL);
    v17 = 0;
    WdLogGlobalForLineNumber = 5365;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v14 + 336))(v16, v62, v17) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 5374;
    if ( v67 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v67);
    return 3221225495LL;
  }
  v61 = 0;
  if ( a2 || (v23 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v16, &v62, &v61), v24 = v23, v23 >= 0) )
  {
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      v27 = *((_QWORD *)this + 8);
      v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
      if ( v25 >= v28 )
        break;
      v33 = CCD_TOPOLOGY::GetPathDescriptor(this, v25);
      v34 = v33;
      if ( *((_DWORD *)v33 + 53) )
      {
        v48 = v61;
        HIDWORD(v66) = 0;
        v49 = *((_DWORD *)v33 + 24);
        *(_QWORD *)v33 |= 0x800uLL;
        LODWORD(v66) = v48;
        *((_QWORD *)v33 + 18) = v66;
        *((_DWORD *)v33 + 39) = *((_DWORD *)v33 + 25);
        *((_DWORD *)v33 + 38) = v49;
        v61 += v49;
      }
      else
      {
        v35 = *((_QWORD *)this + 8);
        v36 = *(unsigned __int16 *)(v35 + 20);
        v37 = 0;
        v38 = *(unsigned int *)(296LL * v25 + v35 + 240);
        while ( v37 < (unsigned int)v36 )
        {
          if ( *(_DWORD *)(296LL * v37 + v35 + 240) == (_DWORD)v38 )
            goto LABEL_50;
          ++v37;
        }
        v37 = -559038737;
LABEL_50:
        if ( v37 == v25 )
        {
          left = v16[v26].left;
          v40 = v65[v26].right - left;
          top = v16[v26].top;
          v42 = (unsigned int)(v65[v26++].bottom - top);
          v64 = __PAIR64__(v42, v40);
          HIDWORD(v43) = v42;
        }
        else
        {
          v63 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v37) + 18);
          v57 = CCD_TOPOLOGY::GetPathDescriptor(this, v37);
          top = HIDWORD(v63);
          left = v63;
          v43 = *((_QWORD *)v57 + 19);
          v64 = v43;
          v42 = HIDWORD(v43);
          v40 = v43;
        }
        LODWORD(v63) = v42;
        if ( *((_QWORD *)v34 + 19) != __PAIR64__(HIDWORD(v43), v40) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5456;
        }
        if ( *((_DWORD *)v34 + 36) != left )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v35, v36, v38);
          v58[3] = v25;
          v58[4] = *((int *)v34 + 36);
          v42 = left;
          v58[5] = left;
          WdLogGlobalForLineNumber = 5464;
        }
        *((_DWORD *)v34 + 36) = left;
        if ( *((_DWORD *)v34 + 37) != top )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v35, v36, v38);
          v59[3] = v25;
          v59[4] = *((int *)v34 + 37);
          v59[5] = top;
          WdLogGlobalForLineNumber = 5473;
        }
        *(_QWORD *)v34 |= 0x800uLL;
        v44 = *((_QWORD *)v34 + 31);
        *((_DWORD *)v34 + 37) = top;
        v16 = v65;
        if ( v44 )
        {
          *(_QWORD *)(v44 + 76) = *((_QWORD *)v34 + 18);
          v45 = v63;
          *(_DWORD *)(*((_QWORD *)v34 + 31) + 172LL) = v40;
          *(_DWORD *)(*((_QWORD *)v34 + 31) + 176LL) = v45;
          *(_DWORD *)(*((_QWORD *)v34 + 31) + 72LL) |= 0x180020u;
        }
      }
      ++v25;
    }
    if ( v67 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v67);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v23);
    WdLogGlobalForLineNumber = 5390;
    if ( v22 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
    return v24;
  }
}
