/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402D2BEC
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x140264260 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041180 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041290 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x140182B2C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1401866B8 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CB454 (IsVirtualizationDisabledForTarget.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1402D32B8 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  VIDPN_MGR *v4; // r15
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // r15
  int v16; // eax
  VIDPN_MGR *v17; // rdi
  int v18; // r12d
  VIDPN_MGR **v19; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextBestSecondaryTarget; // rax
  DMMVIDPNTOPOLOGY *v21; // r15
  const struct DMMVIDEOPRESENTTARGET *v22; // rdi
  int v23; // r10d
  __int64 v24; // r11
  unsigned int PathSourceFromTarget; // eax
  __int64 v26; // r15
  struct DMMVIDPNTOPOLOGY *v27; // r10
  int v28; // eax
  int v29; // eax
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v31; // r15
  DMMVIDPNTOPOLOGY *v32; // rcx
  char *v33; // rcx
  int v34; // r8d
  DMMVIDPNTOPOLOGY *v35; // rax
  int v36; // edx
  unsigned int i; // r12d
  struct DMMVIDPNTOPOLOGY *v38; // r10
  char v39; // r11
  int v40; // eax
  int v41; // eax
  int v43; // [rsp+50h] [rbp-19h]
  DMMVIDPNTOPOLOGY *v44; // [rsp+58h] [rbp-11h]
  VIDPN_MGR *v45; // [rsp+60h] [rbp-9h]
  __int64 v46; // [rsp+68h] [rbp-1h] BYREF
  __int64 v47; // [rsp+70h] [rbp+7h] BYREF
  DMMVIDPNTOPOLOGY *v48; // [rsp+78h] [rbp+Fh]
  __int64 v49[8]; // [rsp+80h] [rbp+17h] BYREF
  bool v50; // [rsp+D8h] [rbp+6Fh] BYREF
  char v51; // [rsp+E0h] [rbp+77h] BYREF
  bool v52; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 390) + 104LL);
  v45 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v49, (__int64)v4);
  v5 = *((_QWORD *)a2 + 390);
  v6 = 0;
  v7 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  if ( *(_BYTE *)(v5 + 290) )
  {
    v8 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v46);
    v7 = v46;
    if ( v8 >= 0 )
    {
      if ( !v46 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2127;
      }
      v48 = (DMMVIDPNTOPOLOGY *)(v7 + 96);
    }
  }
  v47 = 0LL;
  v9 = VIDPN_MGR::CreateClientVidPn((struct _KTHREAD **)v4, &v47);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry4(2LL, v9, a2, *((int *)a2 + 104), *((unsigned int *)a2 + 103));
    WdLogGlobalForLineNumber = 2140;
    goto LABEL_78;
  }
  v11 = v47;
  v44 = (DMMVIDPNTOPOLOGY *)(v47 + 96);
  if ( v47 == -96 )
  {
    WdLogSingleEntry4(2LL, -96LL, a2, *((int *)a2 + 104), *((unsigned int *)a2 + 103));
    WdLogGlobalForLineNumber = 2152;
    v10 = -1073741823;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)*this + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( v6 >= v13 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v6);
    v15 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 103)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 104) )
    {
      v16 = VIDPN_MGR::AddPathToVidPnTopology(
              v45,
              (struct DMMVIDPNTOPOLOGY *const)(v11 + 96),
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v10 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v16,
          *((int *)v15 + 5),
          *((unsigned int *)v15 + 4),
          *((unsigned int *)v15 + 6),
          *((unsigned int *)v15 + 7));
        WdLogGlobalForLineNumber = 2184;
        if ( v11 )
          ReferenceCounted::Release((ReferenceCounted *)(v11 + 24));
        if ( v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v7 + 24));
        goto LABEL_88;
      }
    }
    ++v6;
  }
  v17 = v45;
  v18 = -1071774975;
  v43 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v45 + 15) + 72LL));
  v19 = (VIDPN_MGR **)*((_QWORD *)v45 + 15);
  v52 = 0;
  v50 = 0;
  v51 = 0;
  if ( !v48 )
  {
LABEL_47:
    FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v19);
    while ( 1 )
    {
      v31 = FirstBestSecondaryTarget;
      if ( !FirstBestSecondaryTarget )
        break;
      v32 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v44 + 3);
      if ( v32 == (DMMVIDPNTOPOLOGY *)((char *)v44 + 24) || (v33 = (char *)v32 - 8) == 0LL )
      {
LABEL_56:
        v36 = *((_DWORD *)v31 + 6);
        if ( (v36 != *((_DWORD *)this + 6)
           || *((_DWORD *)a2 + 103) != *((_DWORD *)this + 3)
           || *((_DWORD *)a2 + 104) != *((_DWORD *)this + 4))
          && *((_QWORD *)v31 + 14) )
        {
          v10 = IsVirtualizationDisabledForTarget((__int64)a2, v36, &v52, &v50, &v51);
          if ( v10 < 0 )
          {
            WdLogSingleEntry2(2LL, *((unsigned int *)v31 + 6), a2);
            WdLogGlobalForLineNumber = 2350;
            goto LABEL_76;
          }
          if ( !*((_BYTE *)this + 10) || !v50 )
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= *(_DWORD *)(*((_QWORD *)a2 + 390) + 96LL) )
              {
                v18 = v43;
                goto LABEL_73;
              }
              if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v44, i) )
              {
                v40 = VIDPN_MGR::AddPathToVidPnTopology(
                        v17,
                        v38,
                        i,
                        *((_DWORD *)v31 + 6),
                        (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                        0xFFFFu,
                        v39,
                        D3DKMDT_MCC_IGNORE);
                v10 = v40;
                if ( v40 != -1071774975 )
                  break;
              }
            }
            if ( v40 < 0 )
            {
              WdLogSingleEntry5(
                2LL,
                v40,
                *((int *)a2 + 104),
                *((unsigned int *)a2 + 103),
                i,
                *((unsigned int *)v31 + 6));
              WdLogGlobalForLineNumber = 2391;
              goto LABEL_76;
            }
            v41 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                    (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                    (const struct _LUID *)((char *)a2 + 412),
                    i);
            v18 = v43;
            v10 = v41;
            if ( v41 >= 0 )
              v18 = v41;
            v43 = v18;
          }
        }
      }
      else
      {
        v34 = *((_DWORD *)FirstBestSecondaryTarget + 6);
        while ( *(_DWORD *)(*((_QWORD *)v33 + 12) + 24LL) != v34 )
        {
          v35 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v33 + 1);
          v33 = (char *)v35 - 8;
          if ( v35 == (DMMVIDPNTOPOLOGY *)((char *)v44 + 24) )
            v33 = 0LL;
          if ( !v33 )
            goto LABEL_56;
        }
      }
LABEL_73:
      FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                   v31,
                                   (const struct DMMVIDEOPRESENTTARGETSET *)v19);
      v17 = v45;
    }
    if ( v10 != -1071774975 )
      v18 = v10;
    if ( v19 )
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
    if ( v47 )
      ReferenceCounted::Release((ReferenceCounted *)(v47 + 24));
    if ( v46 )
      ReferenceCounted::Release((ReferenceCounted *)(v46 + 24));
    v10 = v18;
    goto LABEL_88;
  }
  NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v19);
  v21 = v44;
  while ( 1 )
  {
    v22 = NextBestSecondaryTarget;
    if ( !NextBestSecondaryTarget )
    {
      v17 = v45;
      goto LABEL_47;
    }
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v21, *((_DWORD *)NextBestSecondaryTarget + 6))
      || v23 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 103) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 104) == *((_DWORD *)this + 4)
      || *((_QWORD *)v22 + 14) == v24
      || *((_DWORD *)v22 + 23) != (_DWORD)v24 )
    {
      goto LABEL_42;
    }
    v10 = IsVirtualizationDisabledForTarget((__int64)a2, v23, &v52, &v50, &v51);
    if ( v10 < 0 )
      break;
    if ( !*((_BYTE *)this + 10) || !v50 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v48, *((_DWORD *)v22 + 6));
      v26 = PathSourceFromTarget;
      if ( PathSourceFromTarget == -1 )
        goto LABEL_41;
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v44, PathSourceFromTarget) )
      {
        v28 = VIDPN_MGR::AddPathToVidPnTopology(
                v45,
                v27,
                v26,
                *((_DWORD *)v22 + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v10 = v28;
        if ( v28 != -1071774975 )
        {
          if ( v28 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v28,
              *((int *)a2 + 104),
              *((unsigned int *)a2 + 103),
              v26,
              *((unsigned int *)v22 + 6));
            WdLogGlobalForLineNumber = 2296;
            goto LABEL_76;
          }
          v29 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                  (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                  (const struct _LUID *)((char *)a2 + 412),
                  v26);
          v10 = v29;
          if ( v29 >= 0 )
            v18 = v29;
          v43 = v18;
        }
LABEL_41:
        v21 = v44;
        goto LABEL_42;
      }
      v21 = v27;
    }
LABEL_42:
    NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                v22,
                                (const struct DMMVIDEOPRESENTTARGETSET *)v19);
  }
  WdLogSingleEntry2(2LL, *((unsigned int *)v22 + 6), a2);
  WdLogGlobalForLineNumber = 2246;
LABEL_76:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
LABEL_78:
  auto_rc<DMMVIDPN>::reset(&v47, 0LL);
  auto_rc<DMMVIDPN>::reset(&v46, 0LL);
LABEL_88:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v49[0] + 40));
  return (unsigned int)v10;
}
