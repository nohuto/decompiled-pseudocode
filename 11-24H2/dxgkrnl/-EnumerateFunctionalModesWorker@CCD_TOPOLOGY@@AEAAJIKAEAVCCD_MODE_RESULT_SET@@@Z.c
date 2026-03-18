/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402D9EA8
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1402D9340 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140055198 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x140188460 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1402685CC (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140268660 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x140269630 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x14031F9C0 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403206D8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140320AB0 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940 @ 0x1403EED8C (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1940--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY *this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v15; // esi
  unsigned int i; // edx
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int16 v19; // di
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int k; // edi
  __int64 v30; // rax
  unsigned __int16 v31; // cx
  DXGGLOBAL *Global; // rax
  __int64 v33; // r14
  struct DXGADAPTER *v34; // rax
  __int64 v35; // r15
  unsigned __int8 v36; // r12
  DXGADAPTER *v37; // rdx
  CCD_TOPOLOGY *v38; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // r12
  int v42; // r14d
  __int64 v43; // r13
  __int64 v44; // r15
  int PathModeListForAdapter; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // [rsp+38h] [rbp-69h] BYREF
  int v53; // [rsp+40h] [rbp-61h]
  unsigned __int64 v54; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v55[160]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int16 j; // [rsp+108h] [rbp+67h] BYREF
  int v57; // [rsp+110h] [rbp+6Fh]
  struct CCD_MODE_RESULT_SET *v58; // [rsp+120h] [rbp+7Fh]

  v58 = a4;
  v57 = a2;
  CCD_TOPOLOGY::SwapPathsDescriptors(this, a3, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) - 1);
  v5 = *((_QWORD *)this + 8);
  v6 = *(unsigned __int16 *)(v5 + 20);
  v7 = v5 + 56;
  v52 = v5 + 56;
  v53 = v6;
  if ( (_DWORD)v6 )
  {
    v8 = (_DWORD *)(v5 + 312);
    v9 = (unsigned int)v6;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 74;
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_QWORD *)this + 8);
  if ( v10 && *(_WORD *)(v10 + 20) )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
    v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
    v12 = *((_QWORD *)this + 8);
    LODWORD(v13) = v11;
    if ( v11 >= 0 )
    {
      v15 = 0;
      for ( i = 0; ; ++i )
      {
        v17 = v12 ? *(_WORD *)(v12 + 20) : 0;
        if ( i >= (unsigned int)v17 - 1 )
          break;
        v18 = 296LL * i;
        if ( *(_BYTE *)(v18 + v12 + 185) )
        {
          if ( (*(_DWORD *)(v18 + v12 + 56) & 0x20101) == 0x20000LL )
            v15 = 1;
        }
      }
      if ( v15 )
      {
        v19 = 8;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v55, 8u, 0);
        for ( j = 8; ; v19 = j )
        {
          if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v55, v19) < v19 )
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v40[3] = v19;
            v40[4] = this;
            v26 = *((_QWORD *)this + 8);
            v40[5] = v26;
            WdLogGlobalForLineNumber = 2012;
            goto LABEL_38;
          }
          v24 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v55, 1, 0, 1, &j);
          if ( v24 != -1073741789 )
            break;
        }
        if ( v24 >= 0 )
        {
          for ( k = 0; ; ++k )
          {
            v30 = *((_QWORD *)this + 8);
            v31 = v30 ? *(_WORD *)(v30 + 20) : 0;
            if ( k >= (unsigned int)v31 - 1 )
              break;
            v54 = 0LL;
            Global = DXGGLOBAL::GetGlobal();
            v33 = 296LL * k;
            v34 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(*((_QWORD *)this + 8) + v33 + 72), &v54);
            if ( !v34 )
              goto LABEL_39;
            v35 = *((_QWORD *)v34 + 391);
            v36 = ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v34 + 390));
            DXGADAPTER::ReleaseReference(v37);
            v38 = (CCD_TOPOLOGY *)*((_QWORD *)this + 8);
            if ( *((_BYTE *)v38 + v33 + 185) )
            {
              if ( v35 )
              {
                if ( !v36 )
                {
                  v39 = (CCD_TOPOLOGY *)((char *)v38 + v33 + 56);
                  if ( (*(_DWORD *)v39 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v38, v39, (const struct CCD_TOPOLOGY *)v55);
                }
              }
            }
          }
          goto LABEL_40;
        }
LABEL_38:
        WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
        WdLogGlobalForLineNumber = 2024;
LABEL_39:
        v15 = 0;
LABEL_40:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v55);
      }
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
      v41 = *((_QWORD *)this + 8);
      v42 = 0;
      v43 = 296LL * *(unsigned __int16 *)(v41 + 20);
      v44 = v41 + v43;
      while ( 1 )
      {
        PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                   *((_QWORD *)this + 8),
                                   *(struct _LUID *)(v44 - 224),
                                   *((_BYTE *)this + 76) & 1,
                                   *((_DWORD *)this + 20),
                                   v57,
                                   (__int64)v58);
        v13 = PathModeListForAdapter;
        if ( PathModeListForAdapter != -1071774970 )
          break;
        if ( !v15
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v44 - 224))
          || v42 )
        {
          goto LABEL_48;
        }
        v42 = 1;
        WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
        WdLogGlobalForLineNumber = 2096;
      }
      if ( PathModeListForAdapter < 0 )
      {
LABEL_48:
        WdLogSingleEntry5(
          2LL,
          v13,
          *((_QWORD *)this + 8),
          *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) - 1LL,
          *(int *)(v41 + v43 - 220),
          *(unsigned int *)(v44 - 224));
        WdLogGlobalForLineNumber = 2119;
        goto LABEL_8;
      }
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    }
    else
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v11);
      WdLogGlobalForLineNumber = 1964;
    }
LABEL_8:
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1940::__AUTO_USING_PM_PathChangeReason1940(&v52);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry2(3LL, this, v10);
    WdLogGlobalForLineNumber = 1946;
    if ( (_DWORD)v6 )
    {
      v50 = (_DWORD *)(v7 + 256);
      v51 = v6;
      do
      {
        v50[1] = 0;
        *v50 &= ~1u;
        v50 += 74;
        --v51;
      }
      while ( v51 );
    }
    return 3221225473LL;
  }
}
