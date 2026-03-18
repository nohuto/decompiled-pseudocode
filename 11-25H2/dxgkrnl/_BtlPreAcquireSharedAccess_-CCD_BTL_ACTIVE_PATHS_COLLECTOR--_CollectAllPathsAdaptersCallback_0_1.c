/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402CF450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x14007E0AC (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402CEBD8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1402D29B8 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  unsigned int v3; // r14d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  VIDPN_MGR *v11; // r13
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // r15
  struct DMMVIDPN *v14; // rbx
  int v15; // eax
  struct DMMVIDPNTOPOLOGY *v16; // rcx
  _QWORD *v17; // rbx
  unsigned int v18; // edx
  _QWORD *v19; // rdi
  const struct DMMVIDEOPRESENTTARGET *v20; // rdi
  unsigned int v21; // r9d
  char *v22; // rax
  char *v23; // rcx
  int v24; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v26; // r8
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  char *v28; // rax
  __int64 v30; // rdi
  struct DXGADAPTER *v31; // rax
  ReferenceCounted *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v37; // rbx
  struct DXGADAPTER *v38; // rax
  __int64 v39; // rsi
  struct DXGADAPTER *v40; // rax
  __int64 v41; // rdi
  struct DXGADAPTER *v42; // rax
  __int64 v43; // rdi
  struct DXGADAPTER *v44; // rax
  unsigned int v45; // [rsp+50h] [rbp-B0h]
  DMMVIDPNTOPOLOGY *v46; // [rsp+58h] [rbp-A8h]
  struct DMMVIDPN *v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  char v51[8]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v52; // [rsp+88h] [rbp-78h]
  char v53; // [rsp+90h] [rbp-70h]
  char *v54; // [rsp+98h] [rbp-68h]
  _BYTE v55[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v56[144]; // [rsp+C0h] [rbp-40h] BYREF

  v52 = a1;
  v3 = 0;
  v53 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v56, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v33[3] = a1;
      v33[4] = *((int *)a1 + 104);
      v33[5] = *((unsigned int *)a1 + 103);
      v33[6] = this;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    return v3;
  }
  if ( *((_BYTE *)a1 + 3017) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 390);
  if ( !v10 )
  {
    LODWORD(v13) = 0;
    goto LABEL_45;
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, (__int64)v11);
  v47 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v47);
  v13 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v35 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, v13, v11, *(_QWORD *)this, *((int *)ContainingAdapter + 104), v35);
    WdLogGlobalForLineNumber = 727;
    v37 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v38 = VIDPN_MGR::GetContainingAdapter(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr = 0x%I64x"
       ", m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      v13,
      (__int64)v11,
      *(_QWORD *)this,
      *((int *)v38 + 104),
      v37);
LABEL_43:
    if ( !v47 )
      goto LABEL_44;
    v32 = (struct DMMVIDPN *)((char *)v47 + 24);
LABEL_56:
    ReferenceCounted::Release(v32);
    goto LABEL_44;
  }
  v14 = v47;
  v54 = (char *)v47 + 96;
  if ( v47 == (struct DMMVIDPN *)-96LL )
  {
    v41 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v42 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(3LL, -96LL, this, *(_QWORD *)this, *((int *)v42 + 104), v41);
    WdLogGlobalForLineNumber = 740;
    goto LABEL_67;
  }
  LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v47, 1);
  if ( (int)v13 < 0 )
  {
    v43 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v44 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, v14, this, *(_QWORD *)this, *((int *)v44 + 104), v43);
    WdLogGlobalForLineNumber = 753;
    goto LABEL_67;
  }
  v50 = 0LL;
  v15 = VIDPN_MGR::CreateClientVidPn((struct _KTHREAD **)v11, &v50);
  v13 = v15;
  if ( v15 < 0 )
  {
    v30 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v31 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, v13, v11, *(_QWORD *)this, *((int *)v31 + 104), v30);
    WdLogGlobalForLineNumber = 771;
    if ( !v50 )
    {
LABEL_50:
      if ( !v14 )
        goto LABEL_44;
      v32 = (struct DMMVIDPN *)((char *)v14 + 24);
      goto LABEL_56;
    }
    v34 = v50 + 24;
LABEL_59:
    ReferenceCounted::Release((ReferenceCounted *)v34);
    goto LABEL_50;
  }
  v16 = (struct DMMVIDPNTOPOLOGY *)(v50 + 96);
  v46 = (DMMVIDPNTOPOLOGY *)(v50 + 96);
  if ( v50 == -96 )
  {
    v39 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v40 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, -96LL, this, *(_QWORD *)this, *((int *)v40 + 104), v39);
    WdLogGlobalForLineNumber = 784;
    v34 = -72LL;
    goto LABEL_59;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL));
  v17 = (_QWORD *)*((_QWORD *)v11 + 15);
  v18 = 0;
LABEL_11:
  v45 = v18;
  if ( v18 >= *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) )
  {
    if ( v17 )
      ReferenceCounted::Release((ReferenceCounted *)(v17 + 8));
    if ( v50 )
      ReferenceCounted::Release((ReferenceCounted *)(v50 + 24));
    goto LABEL_43;
  }
  v19 = (_QWORD *)v17[3];
  if ( v19 == v17 + 3 )
    v20 = 0LL;
  else
    v20 = (const struct DMMVIDEOPRESENTTARGET *)(v19 - 1);
  while ( 1 )
  {
    if ( !v20 )
    {
      ++v18;
      goto LABEL_11;
    }
    v21 = *((_DWORD *)v20 + 6);
    v49 = v21;
    v22 = (char *)*((_QWORD *)v54 + 3);
    if ( v22 != v54 + 24 )
    {
      v23 = v22 - 8;
      if ( v22 != (char *)8 )
      {
        do
        {
          if ( *(_DWORD *)(*((_QWORD *)v23 + 11) + 24LL) == v18 && *(_DWORD *)(*((_QWORD *)v23 + 12) + 24LL) == v21 )
            break;
          v28 = (char *)*((_QWORD *)v23 + 1);
          v23 = v28 - 8;
          if ( v28 == v54 + 24 )
            v23 = 0LL;
        }
        while ( v23 );
        if ( v23 )
          goto LABEL_32;
      }
      v16 = v46;
    }
    if ( *((_DWORD *)v20 + 21) == 15 && !*((_QWORD *)v20 + 14) )
      goto LABEL_32;
    if ( *((_QWORD *)v16 + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 821;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 0",
        821LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v46;
      v18 = v45;
      v21 = v49;
    }
    v24 = VIDPN_MGR::AddPathToVidPnTopology(
            v11,
            v16,
            v18,
            v21,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v13 = v24;
    if ( v24 == -1071774975 )
    {
      LODWORD(v13) = 0;
      goto LABEL_32;
    }
    if ( v24 < 0 )
      break;
    if ( *((_QWORD *)v46 + 5) != 1LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 852;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 1",
        852LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v46, v45, v49);
    LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v13 < 0 )
      goto LABEL_70;
    LOBYTE(v26) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v55, (char *)v46 + 56, v26);
    DMMVIDPNTOPOLOGY::RemovePath(v46, v45, v49, 0LL);
    if ( *((_QWORD *)v46 + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 876;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 0",
        876LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v55);
LABEL_32:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v17, v20);
    v16 = v46;
    v20 = NextTarget;
    v18 = v45;
  }
  WdLogSingleEntry1(2LL, v24);
  WdLogGlobalForLineNumber = 847;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"AddPathToVidPnTopology() failed. (Status = 0x%I64x)",
    v13,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_70:
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 8));
  auto_rc<DMMVIDPN>::reset(&v50, 0LL);
LABEL_67:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v47, 0LL);
LABEL_44:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  return (unsigned int)v13;
}
