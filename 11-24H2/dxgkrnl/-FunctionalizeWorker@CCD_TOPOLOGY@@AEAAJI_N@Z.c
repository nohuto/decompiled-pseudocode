/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140055198 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x14018BB98 (-IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1402685CC (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140268660 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402D8D1C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x14031F9C0 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403206D8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140320AB0 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x140320C28 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140320C88 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140321460 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140362070 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940 @ 0x1403EED8C (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1940--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, int a2, char a3)
{
  __int64 v3; // rax
  int v4; // r15d
  __int64 v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // esi
  unsigned int i; // edx
  unsigned __int16 v19; // ax
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int m; // edi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  _DWORD *v27; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r12
  int PathModalityForAdapter; // eax
  __int64 v36; // r14
  __int64 v37; // rcx
  _DWORD *v38; // rax
  unsigned __int16 v39; // di
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int k; // edi
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rdx
  CCD_TOPOLOGY *v53; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-51h]
  _QWORD v62[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v63[112]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 j; // [rsp+F8h] [rbp+67h] BYREF

  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v8 = *(unsigned __int16 *)(v3 + 20);
  v9 = v3 + 56;
  v60 = v3 + 56;
  v61 = v8;
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
      v32 = (_DWORD *)(v9 + 256);
      v33 = v8;
      do
      {
        v32[1] = 0;
        *v32 &= ~1u;
        v32 += 74;
        --v33;
      }
      while ( v33 );
    }
    return 3221225473LL;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v13 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v15 = *((_QWORD *)this + 8);
  v16 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v13);
    WdLogGlobalForLineNumber = 1666;
LABEL_44:
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940(&v60);
    return v16;
  }
  v17 = 0;
  for ( i = 0; ; ++i )
  {
    v19 = v15 ? *(_WORD *)(v15 + 20) : 0;
    if ( i >= v19 )
      break;
    v31 = 296LL * i;
    if ( *(_BYTE *)(v31 + v15 + 185) && (*(_DWORD *)(v31 + v15 + 56) & 0x20101) == 0x20000LL )
      v17 = 1;
  }
  if ( !v17 )
    goto LABEL_12;
  v39 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v63, 8LL, 0LL, v14);
  for ( j = 8; ; v39 = j )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v63, v39, v40, v41) < v39 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
      v55[3] = v39;
      v55[4] = this;
      v48 = *((_QWORD *)this + 8);
      v55[5] = v48;
      WdLogGlobalForLineNumber = 1714;
      goto LABEL_64;
    }
    v46 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v63, 1, a3, 1, &j);
    if ( v46 != -1073741789 )
      break;
  }
  if ( v46 < 0 )
  {
LABEL_64:
    WdLogNewEntry5_WdTrace(v48, v47, v40, v41);
    WdLogGlobalForLineNumber = 1726;
    v17 = 0;
    goto LABEL_65;
  }
  for ( k = 0; ; ++k )
  {
    v50 = *((_QWORD *)this + 8);
    if ( k >= *(unsigned __int16 *)(v50 + 20) )
      break;
    v51 = 296LL * k;
    v62[0] = 0LL;
    if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v62, (const struct _LUID *)(v51 + v50 + 72)) )
    {
      v17 = 0;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v62, 0LL);
      break;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 8) + v51 + 185) )
    {
      if ( *(_QWORD *)(v62[0] + 3128LL) )
      {
        if ( !ADAPTER_DISPLAY::ForceIHVScaling(*(ADAPTER_DISPLAY **)(v62[0] + 3120LL)) )
        {
          v54 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v51 + v52 + 56);
          if ( (*(_DWORD *)v54 & 0x20101) == 0x20000LL )
            CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v53, v54, (const struct CCD_TOPOLOGY *)v63);
        }
      }
    }
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v62, 0LL);
  }
LABEL_65:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v63);
LABEL_12:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v20 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v21 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v21 + 20) )
  {
    do
    {
      v22 = v20++;
      *(_DWORD *)(296 * v22 + v21 + 276) = 0;
      v21 = *((_QWORD *)this + 8);
    }
    while ( v20 < *(unsigned __int16 *)(v21 + 20) );
  }
  for ( m = 0; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
  {
    if ( CCD_TOPOLOGY::IsAdaptersFirstPathByModality(this, m) )
    {
      v34 = 296LL * m;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   v34 + *((_QWORD *)this + 8) + 72LL,
                                   *((_DWORD *)this + 19) & 1,
                                   *((unsigned int *)this + 20),
                                   a2);
        v36 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v17
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v34 + *((_QWORD *)this + 8) + 72LL))
          || v4 )
        {
          goto LABEL_37;
        }
        v4 = 1;
        WdLogNewEntry5_WdTrace(v57, v56, v58, v59);
        WdLogGlobalForLineNumber = 1824;
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        continue;
LABEL_37:
      WdLogSingleEntry5(
        2LL,
        v36,
        *((_QWORD *)this + 8),
        m,
        *(int *)(296LL * m + *((_QWORD *)this + 8) + 76),
        *(unsigned int *)(296LL * m + *((_QWORD *)this + 8) + 72));
      v37 = v61;
      WdLogGlobalForLineNumber = 1847;
      if ( v61 )
      {
        v38 = (_DWORD *)(v60 + 256);
        do
        {
          v38[1] = 0;
          *v38 &= ~1u;
          v38 += 74;
          --v37;
        }
        while ( v37 );
      }
      return (unsigned int)v36;
    }
  }
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
  v24 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v16 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v24);
    WdLogGlobalForLineNumber = 1876;
    goto LABEL_44;
  }
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
  v25 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0);
  v16 = v25;
  if ( v25 >= 0 )
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    v26 = v61;
    if ( v61 )
    {
      v27 = (_DWORD *)(v60 + 256);
      do
      {
        v27[1] = 0;
        *v27 &= ~1u;
        v27 += 74;
        --v26;
      }
      while ( v26 );
    }
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v25);
  v29 = v61;
  WdLogGlobalForLineNumber = 1894;
  if ( v61 )
  {
    v30 = (_DWORD *)(v60 + 256);
    do
    {
      v30[1] = 0;
      *v30 &= ~1u;
      v30 += 74;
      --v29;
    }
    while ( v29 );
  }
  return v16;
}
