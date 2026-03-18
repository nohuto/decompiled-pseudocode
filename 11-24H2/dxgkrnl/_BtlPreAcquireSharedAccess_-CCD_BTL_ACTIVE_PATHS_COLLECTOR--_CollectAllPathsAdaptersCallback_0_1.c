/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x140319430
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x14007E72C (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x14031A158 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14039FC08 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
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
  __int64 v26; // r9
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
  __int64 v45; // [rsp+20h] [rbp-E0h]
  unsigned int v46; // [rsp+50h] [rbp-B0h]
  DMMVIDPNTOPOLOGY *v47; // [rsp+58h] [rbp-A8h]
  struct DMMVIDPN *v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  char v52[8]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v53; // [rsp+88h] [rbp-78h]
  char v54; // [rsp+90h] [rbp-70h]
  char *v55; // [rsp+98h] [rbp-68h]
  _BYTE v56[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v57[144]; // [rsp+C0h] [rbp-40h] BYREF

  v53 = a1;
  v3 = 0;
  v54 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
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
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return v3;
  }
  if ( *((_BYTE *)a1 + 3017) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 390);
  if ( !v10 )
  {
    LODWORD(v13) = 0;
    goto LABEL_45;
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v49, (__int64)v11);
  v48 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v48);
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
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr = 0x%I64x"
       ", m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      v13,
      (__int64)v11,
      *(_QWORD *)this,
      *((int *)v38 + 104),
      v37);
LABEL_43:
    if ( !v48 )
      goto LABEL_44;
    v32 = (struct DMMVIDPN *)((char *)v48 + 24);
LABEL_56:
    ReferenceCounted::Release(v32);
    goto LABEL_44;
  }
  v14 = v48;
  v55 = (char *)v48 + 96;
  if ( v48 == (struct DMMVIDPN *)-96LL )
  {
    v41 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v42 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(3LL, -96LL, this, *(_QWORD *)this, *((int *)v42 + 104), v41);
    WdLogGlobalForLineNumber = 740;
    goto LABEL_67;
  }
  LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v48, 1);
  if ( (int)v13 < 0 )
  {
    v43 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v44 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, v14, this, *(_QWORD *)this, *((int *)v44 + 104), v43);
    WdLogGlobalForLineNumber = 753;
    goto LABEL_67;
  }
  v51 = 0LL;
  v15 = VIDPN_MGR::CreateClientVidPn((struct _KTHREAD **)v11, &v51);
  v13 = v15;
  if ( v15 < 0 )
  {
    v30 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v11) + 103);
    v31 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry5(2LL, v13, v11, *(_QWORD *)this, *((int *)v31 + 104), v30);
    WdLogGlobalForLineNumber = 771;
    if ( !v51 )
    {
LABEL_50:
      if ( !v14 )
        goto LABEL_44;
      v32 = (struct DMMVIDPN *)((char *)v14 + 24);
      goto LABEL_56;
    }
    v34 = v51 + 24;
LABEL_59:
    ReferenceCounted::Release((ReferenceCounted *)v34);
    goto LABEL_50;
  }
  v16 = (struct DMMVIDPNTOPOLOGY *)(v51 + 96);
  v47 = (DMMVIDPNTOPOLOGY *)(v51 + 96);
  if ( v51 == -96 )
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
  v46 = v18;
  if ( v18 >= *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) )
  {
    if ( v17 )
      ReferenceCounted::Release((ReferenceCounted *)(v17 + 8));
    if ( v51 )
      ReferenceCounted::Release((ReferenceCounted *)(v51 + 24));
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
    v50 = v21;
    v22 = (char *)*((_QWORD *)v55 + 3);
    if ( v22 != v55 + 24 )
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
          if ( v28 == v55 + 24 )
            v23 = 0LL;
        }
        while ( v23 );
        if ( v23 )
          goto LABEL_32;
      }
      v16 = v47;
    }
    if ( *((_DWORD *)v20 + 21) == 15 && !*((_QWORD *)v20 + 14) )
      goto LABEL_32;
    if ( *((_QWORD *)v16 + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 821;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 0",
        821LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v47;
      v18 = v46;
      v21 = v50;
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
    if ( *((_QWORD *)v47 + 5) != 1LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 852;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 1",
        852LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v47, v46, v50);
    LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v13 < 0 )
      goto LABEL_70;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v56, (__int64)v47 + 56, 2u, v26, v45, 255LL);
    DMMVIDPNTOPOLOGY::RemovePath(v47, v46, v50, 0LL);
    if ( *((_QWORD *)v47 + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 876;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pScratchVidPnTopology->GetNumPaths() == 0",
        876LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v56);
LABEL_32:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v17, v20);
    v16 = v47;
    v20 = NextTarget;
    v18 = v46;
  }
  WdLogSingleEntry1(2LL, v24);
  WdLogGlobalForLineNumber = 847;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
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
  auto_rc<DMMVIDPN>::reset(&v51, 0LL);
LABEL_67:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v48, 0LL);
LABEL_44:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
  return (unsigned int)v13;
}
