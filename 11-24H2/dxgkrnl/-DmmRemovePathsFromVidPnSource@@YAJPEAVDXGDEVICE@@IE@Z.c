/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14000D23C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14004F5D4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400569D0 (-VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x140059FB0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // r8
  ADAPTER_DISPLAY *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  char v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v17; // eax
  int v18; // eax
  struct DMMVIDPN *v19; // rbx
  struct DXGDEVICE *v20; // r12
  VIDPN_MGR *v21; // r14
  int v22; // eax
  ADAPTER_DISPLAY *v23; // rbx
  int v24; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rbx
  int v38; // [rsp+30h] [rbp-D0h]
  char v39; // [rsp+50h] [rbp-B0h]
  _BYTE v40[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v46; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNTOPOLOGY *v47; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v48; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v49; // [rsp+80h] [rbp-80h]
  struct DXGDEVICE *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  struct DMMVIDPN *v52; // [rsp+98h] [rbp-68h]
  _BYTE v53[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v54[68]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_QWORD *)a1 + 237);
  v50 = a1;
  v5 = a2;
  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14053;
  }
  v48 = *(ADAPTER_DISPLAY **)(v3 + 3120);
  v49 = (VIDPN_MGR *)*((_QWORD *)v48 + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, (__int64)v49);
  WdLogSingleEntry2(7LL, v5, v49);
  WdLogGlobalForLineNumber = 14071;
  v44 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v49) < 0 )
  {
    WdLogSingleEntry1(2LL, v49);
    WdLogGlobalForLineNumber = 14082;
    goto LABEL_50;
  }
  v52 = (struct DMMVIDPN *)v44;
  v7 = v44 + 96;
  v47 = (DMMVIDPNTOPOLOGY *)(v44 + 96);
  LOBYTE(v7) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v53, (v44 + 152) & -(__int64)(v44 != -96), v7);
  v41 = -1;
  v42 = -1;
  if ( a3 )
  {
    v8 = *(ADAPTER_DISPLAY **)(v3 + 3120);
    v43 = 0;
    v45 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v8, &v43, &v42, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v45);
    v9 = v42;
    if ( v43 != (_DWORD)v5 )
      v9 = -1;
    v41 = v9;
    v42 = v9;
  }
  v10 = v41;
  v11 = 0;
  v39 = 0;
  while ( 1 )
  {
    v41 = -1;
    v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v47, v5, v6, &v41);
    if ( v12 < 0 )
    {
      if ( v12 == -1071774919 )
        break;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14127;
    }
    if ( v41 == -1 )
      break;
    if ( v41 == v10 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v47, v5, v41);
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14155;
      }
      v17 = *((_DWORD *)Path + 28);
      v46 = v17;
      if ( v17 == D3DKMDT_VPPS_UNPINNED )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14161;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"ScalingMode != D3DKMDT_VPPS_UNPINNED",
          14161LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( ((v17 - 1) & 0xFFFFFFFD) == 0 )
      {
        goto LABEL_30;
      }
      if ( (*((_DWORD *)Path + 30) & 4) == 0 )
      {
LABEL_30:
        v11 = v39;
        goto LABEL_31;
      }
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v13, v14, v15) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14179;
      }
      v18 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
      if ( v18 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, v3, v18);
        WdLogGlobalForLineNumber = 14190;
        if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v46) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14192;
        }
      }
      v11 = 1;
      v39 = 1;
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v47, v5, v41, 0LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14142;
      }
      v11 = 1;
      --v6;
      v39 = 1;
    }
LABEL_31:
    ++v6;
  }
  v19 = v52;
  if ( !v11 )
  {
    v21 = v49;
    v20 = v50;
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v21, v19);
    v30 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v31[3] = v19;
      v31[4] = v3;
      v31[5] = v30;
      WdLogGlobalForLineNumber = 14241;
    }
    v23 = v48;
    v32 = ADAPTER_DISPLAY::DestroyCddAllocations(v48, v20, v5);
    if ( v32 < 0 )
    {
      WdLogSingleEntry3(2LL, v5, v3, v32);
      WdLogGlobalForLineNumber = 14257;
    }
    goto LABEL_43;
  }
  memset(v54, 0, 0x104uLL);
  v20 = v50;
  v21 = v49;
  LOBYTE(v38) = 0;
  v40[0] = 0;
  v22 = VIDPN_MGR::SetTimingsFromVidPn(v49, 0LL, 1LL, v52, v54, v40, v38, v50, 0LL);
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(3LL, v19, v22);
    WdLogGlobalForLineNumber = 14215;
    goto LABEL_35;
  }
  v24 = v54[21];
  if ( !_bittest(&v24, v5) )
    goto LABEL_39;
  WdLogSingleEntry3(3LL, v19, v5, -1071774970LL);
  WdLogGlobalForLineNumber = 14224;
LABEL_35:
  v23 = v48;
LABEL_43:
  v33 = *(_QWORD *)(v3 + 3128);
  if ( v33 )
  {
    VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
      *(VIDSCH_EXPORT **)(v33 + 736),
      *(struct _VIDSCH_GLOBAL **)(v33 + 744),
      v5);
  }
  else
  {
    v34 = *((_QWORD *)v23 + 58);
    if ( v34 )
      _InterlockedExchange((volatile __int32 *)(3040 * v5 + *(_QWORD *)(v34 + 8) + 1080), 0);
  }
  v35 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v23, v5, 0, 0x100u, 0);
  if ( v35 < 0 )
  {
    v36 = v35;
    WdLogSingleEntry3(2LL, v5, v3, v35);
    WdLogGlobalForLineNumber = 14297;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reset VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
      v5,
      v3,
      v36,
      0LL,
      0LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v53);
LABEL_50:
  auto_rc<DMMVIDPN>::reset(&v44, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v51 + 40));
  return 0LL;
}
