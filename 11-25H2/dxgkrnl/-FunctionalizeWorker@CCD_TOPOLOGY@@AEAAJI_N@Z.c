/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1400559E8 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140189948 (-IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1402616CC (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140261760 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C21A0 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x140359CB8 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140370B5C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140371650 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x140371FA8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140372008 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140372180 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x140376F00 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940 @ 0x1403F4D8C (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1940--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, int a2, bool a3)
{
  __int64 v3; // rax
  int v4; // r15d
  __int64 v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // esi
  unsigned int i; // edx
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int m; // edi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r12
  int PathModalityForAdapter; // eax
  __int64 v35; // r14
  __int64 v36; // rcx
  _DWORD *v37; // rax
  unsigned __int16 v38; // di
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int k; // edi
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rdx
  CCD_TOPOLOGY *v52; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v60; // [rsp+40h] [rbp-51h]
  _QWORD v61[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v62[112]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 j; // [rsp+F8h] [rbp+67h] BYREF

  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v8 = *(unsigned __int16 *)(v3 + 20);
  v9 = v3 + 56;
  v59 = v3 + 56;
  v60 = v8;
  if ( (_DWORD)v8 )
  {
    v10 = (_DWORD *)(v3 + 312);
    v11 = (unsigned int)v8;
    do
    {
      *v10 |= 1u;
      v10[1] = 0;
      v10 += 74;
      --v11;
    }
    while ( v11 );
  }
  v12 = *((_QWORD *)this + 8);
  if ( !v12 || !*(_WORD *)(v12 + 20) )
  {
    WdLogSingleEntry2(3LL, this, v12);
    WdLogGlobalForLineNumber = 1648;
    if ( (_DWORD)v8 )
    {
      v31 = (_DWORD *)(v9 + 256);
      v32 = v8;
      do
      {
        v31[1] = 0;
        *v31 &= ~1u;
        v31 += 74;
        --v32;
      }
      while ( v32 );
    }
    return 3221225473LL;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v13 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v14 = *((_QWORD *)this + 8);
  v15 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v13);
    WdLogGlobalForLineNumber = 1666;
LABEL_44:
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940(&v59);
    return v15;
  }
  v16 = 0;
  for ( i = 0; ; ++i )
  {
    v18 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( i >= v18 )
      break;
    v30 = 296LL * i;
    if ( *(_BYTE *)(v30 + v14 + 185) && (*(_DWORD *)(v30 + v14 + 56) & 0x20101) == 0x20000LL )
      v16 = 1;
  }
  if ( !v16 )
    goto LABEL_12;
  v38 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v62, 8u, 0);
  for ( j = 8; ; v38 = j )
  {
    if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v62, v38) < v38 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
      v54[3] = v38;
      v54[4] = this;
      v45 = *((_QWORD *)this + 8);
      v54[5] = v45;
      WdLogGlobalForLineNumber = 1714;
      goto LABEL_64;
    }
    v43 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v62, 1, a3, 1, &j);
    if ( v43 != -1073741789 )
      break;
  }
  if ( v43 < 0 )
  {
LABEL_64:
    WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
    WdLogGlobalForLineNumber = 1726;
    v16 = 0;
    goto LABEL_65;
  }
  for ( k = 0; ; ++k )
  {
    v49 = *((_QWORD *)this + 8);
    if ( k >= *(unsigned __int16 *)(v49 + 20) )
      break;
    v50 = 296LL * k;
    v61[0] = 0LL;
    if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v61, (const struct _LUID *)(v50 + v49 + 72)) )
    {
      v16 = 0;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v61, 0LL);
      break;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 8) + v50 + 185) )
    {
      if ( *(_QWORD *)(v61[0] + 3128LL) )
      {
        if ( !ADAPTER_DISPLAY::ForceIHVScaling(*(ADAPTER_DISPLAY **)(v61[0] + 3120LL)) )
        {
          v53 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v50 + v51 + 56);
          if ( (*(_DWORD *)v53 & 0x20101) == 0x20000LL )
            CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v52, v53, (const struct CCD_TOPOLOGY *)v62);
        }
      }
    }
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v61, 0LL);
  }
LABEL_65:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v62);
LABEL_12:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v19 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v20 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v20 + 20) )
  {
    do
    {
      v21 = v19++;
      *(_DWORD *)(296 * v21 + v20 + 276) = 0;
      v20 = *((_QWORD *)this + 8);
    }
    while ( v19 < *(unsigned __int16 *)(v20 + 20) );
  }
  for ( m = 0; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
  {
    if ( CCD_TOPOLOGY::IsAdaptersFirstPathByModality(this, m) )
    {
      v33 = 296LL * m;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   (const struct _LUID *)(v33 + *((_QWORD *)this + 8) + 72LL),
                                   *((_BYTE *)this + 76) & 1,
                                   *((_DWORD *)this + 20),
                                   a2);
        v35 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v16
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v33 + *((_QWORD *)this + 8) + 72LL))
          || v4 )
        {
          goto LABEL_37;
        }
        v4 = 1;
        WdLogNewEntry5_WdTrace(v56, v55, v57, v58);
        WdLogGlobalForLineNumber = 1824;
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        continue;
LABEL_37:
      WdLogSingleEntry5(
        2LL,
        v35,
        *((_QWORD *)this + 8),
        m,
        *(int *)(296LL * m + *((_QWORD *)this + 8) + 76),
        *(unsigned int *)(296LL * m + *((_QWORD *)this + 8) + 72));
      v36 = v60;
      WdLogGlobalForLineNumber = 1847;
      if ( v60 )
      {
        v37 = (_DWORD *)(v59 + 256);
        do
        {
          v37[1] = 0;
          *v37 &= ~1u;
          v37 += 74;
          --v36;
        }
        while ( v36 );
      }
      return (unsigned int)v35;
    }
  }
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
  v23 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v15 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v23);
    WdLogGlobalForLineNumber = 1876;
    goto LABEL_44;
  }
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL);
  v24 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0);
  v15 = v24;
  if ( v24 >= 0 )
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    v25 = v60;
    if ( v60 )
    {
      v26 = (_DWORD *)(v59 + 256);
      do
      {
        v26[1] = 0;
        *v26 &= ~1u;
        v26 += 74;
        --v25;
      }
      while ( v25 );
    }
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v24);
  v28 = v60;
  WdLogGlobalForLineNumber = 1894;
  if ( v60 )
  {
    v29 = (_DWORD *)(v59 + 256);
    do
    {
      v29[1] = 0;
      *v29 &= ~1u;
      v29 += 74;
      --v28;
    }
    while ( v28 );
  }
  return v15;
}
