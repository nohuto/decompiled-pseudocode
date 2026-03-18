/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x140039A58 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039BD4 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140040D40 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043344 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140052E04 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x14005A570 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x14005BA48 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140188D58 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140197118 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402575C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x140310544 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140310868 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1403114AC (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140312FD0 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FE7C (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140381BDC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        __int64 a13,
        unsigned __int8 a14)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  int v17; // ebx
  struct DXGADAPTER *v18; // r14
  int v19; // edx
  DMMVIDPNTOPOLOGY *v20; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v22; // r8
  unsigned int v23; // ebx
  struct DMMVIDPN *v25; // rbx
  unsigned int v26; // edi
  int v27; // r15d
  DMMVIDPNTOPOLOGY *v28; // rbx
  int v29; // eax
  unsigned int v30; // r12d
  int v31; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int updated; // eax
  unsigned int i; // r12d
  DMMVIDPNPRESENTPATH *v36; // rax
  ADAPTER_DISPLAY *v37; // rax
  __int64 v38; // r15
  int j; // r12d
  int v40; // eax
  int v41; // r13d
  DMMVIDPNTOPOLOGY *v42; // rbx
  unsigned int v43; // r13d
  unsigned int *v44; // rdi
  char *v45; // rdx
  DMMVIDPNTOPOLOGY *v46; // r13
  bool IsSourceInTopology; // al
  void *v48; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  ADAPTER_DISPLAY *v54; // rcx
  unsigned __int8 v55; // zf
  int v56; // eax
  _QWORD *v57; // rax
  __int64 v58; // r8
  int v59; // eax
  ApplyPermissionWithinThisScope *v60; // rcx
  int v61; // eax
  ADAPTER_DISPLAY *v62; // rcx
  unsigned __int8 v63; // zf
  VIDPN_MGR *v64; // r13
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r12d
  int k; // r13d
  ADAPTER_DISPLAY *v69; // rcx
  unsigned int v70; // eax
  char v71; // di
  int v72; // eax
  unsigned int m; // r15d
  __int64 v74; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v75; // rax
  DMMVIDPNPRESENTPATH *v76; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v77; // rdi
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v78; // r9d
  int v79; // eax
  unsigned int v80; // edi
  __int64 v81; // r15
  unsigned int v82; // r15d
  DMMVIDPNTOPOLOGY *v83; // rdi
  __int64 v84; // r13
  int v85; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v87; // r11
  struct COREDEVICEACCESS *v88; // r9
  struct DXGDEVICE *v89; // r10
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v92; // rdi
  int v93; // ecx
  ADAPTER_DISPLAY *v94; // rcx
  unsigned __int8 v95; // zf
  VIDPN_MGR *v96; // r15
  int v97; // eax
  int v98; // eax
  __int64 v99; // r12
  int v100; // r15d
  int v101; // eax
  void *v102; // r13
  struct DXGADAPTERALLOCATION *v103; // rax
  unsigned int v104; // edi
  int v105; // eax
  int v106; // edi
  int v107; // ecx
  unsigned int v108; // eax
  __int64 v109; // rdi
  unsigned int *v111; // r8
  int v112; // r9d
  unsigned int v113; // ecx
  unsigned int v114; // ecx
  signed __int64 v115; // rax
  _BYTE *v116; // r8
  int v117; // r9d
  int v118; // edx
  char v119; // cl
  __int64 v120; // r10
  __int64 v121; // r11
  unsigned __int8 v122; // [rsp+50h] [rbp-B0h] BYREF
  char v123; // [rsp+51h] [rbp-AFh]
  char v124; // [rsp+52h] [rbp-AEh]
  unsigned int v125; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v126; // [rsp+58h] [rbp-A8h] BYREF
  int v127; // [rsp+60h] [rbp-A0h]
  int v128; // [rsp+68h] [rbp-98h]
  unsigned int v129; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v130; // [rsp+70h] [rbp-90h]
  int v131; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v132; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v133; // [rsp+88h] [rbp-78h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v134; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v135; // [rsp+98h] [rbp-68h] BYREF
  DMMVIDPNTOPOLOGY *v136; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v137; // [rsp+A8h] [rbp-58h]
  struct DMMVIDPN *v138; // [rsp+B0h] [rbp-50h]
  DMMVIDPN *v139; // [rsp+B8h] [rbp-48h]
  _DWORD *v140; // [rsp+C0h] [rbp-40h]
  __int64 v141; // [rsp+C8h] [rbp-38h]
  __int64 v142; // [rsp+D0h] [rbp-30h]
  unsigned int *v143; // [rsp+D8h] [rbp-28h]
  _BYTE v144[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v145[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v146[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v147[24]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v148[24]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v149[24]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v150; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v151[80]; // [rsp+180h] [rbp+80h] BYREF

  v142 = a6;
  v140 = a9;
  v141 = a10;
  v143 = a11;
  v137 = a12;
  v128 = a3;
  v129 = a2;
  v132 = a1;
  *(_QWORD *)&v150 = a13;
  v139 = (DMMVIDPN *)a4;
  v125 = 0;
  memset(v151, 0, sizeof(v151));
  v122 = 0;
  v126 = 0LL;
  v127 = 0;
  v123 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v17 = a8[6];
  v18 = ContainingAdapter;
  v19 = a8[3] | a8[14];
  v131 = v17;
  if ( (v19 & v17) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1353;
  }
  if ( (a8[5] & v17 & a8[2]) != (v17 & a8[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1355;
  }
  v20 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v133 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v134 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new(0x1F0uLL, 0x4E506456u, 256LL);
  if ( v134 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    v135 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
    v23 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry3(2LL, *((int *)v18 + 104), *((unsigned int *)v18 + 103), ClientVidPnFromLastClientCommitedVidPn);
      WdLogGlobalForLineNumber = 1391;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v135, 0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v134);
      return v23;
    }
    v25 = v135;
    v26 = 0;
    v138 = v135;
    v27 = 1;
    v136 = (struct DMMVIDPN *)((char *)v135 + 96);
    if ( *(_DWORD *)(*((_QWORD *)v18 + 390) + 96LL) )
    {
      v28 = v136;
      do
      {
        if ( (v27 & a8[10]) != 0 )
        {
          v29 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v20, v26, 0LL, &v125);
          v30 = v125;
          if ( v29 < 0 || v125 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1434;
          }
          v31 = v30;
          v20 = v133;
          Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v133, v26, v31);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1437;
          }
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v18 + 390), v26);
          *(_OWORD *)v151 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v151[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v151[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v151[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v151[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v151[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)Path + 29));
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
          if ( updated < 0 )
          {
            WdLogSingleEntry3(2LL, v26, v28, updated);
            WdLogGlobalForLineNumber = 1480;
            a8[10] &= ~v27;
            a8[2] |= v27;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v28, v26, i, &v125) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1460;
              }
              v22 = v125;
              if ( v125 == -1 )
                break;
              v36 = DMMVIDPNTOPOLOGY::FindPath(v28, v26, v125);
              v130 = v36;
              if ( !v36 )
              {
                WdLogSingleEntry0(1LL);
                v36 = v130;
                WdLogGlobalForLineNumber = 1467;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v36, Path[29]);
            }
            v20 = v133;
          }
        }
        ++v26;
        v27 *= 2;
      }
      while ( v26 < *(_DWORD *)(*((_QWORD *)v18 + 390) + 96LL) );
      v25 = v138;
    }
LABEL_28:
    v37 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
    v38 = 0LL;
    for ( j = 1; (unsigned int)v38 < *((_DWORD *)v37 + 24); j *= 2 )
    {
      if ( (j & a8[21]) == 0 )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v37, v38)
          && (((a8[3] | a8[2] | a8[14]) & j) != 0 || (j & a8[5]) == 0)
          && (v40 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v18 + 390), v38, 0, 0x800u, a14),
              v41 = v40,
              v40 < 0) )
        {
          WdLogSingleEntry4(2LL, (unsigned int)v38, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v40);
          a8[21] |= j;
          a8[v38 + 22] = v41;
          WdLogGlobalForLineNumber = 1524;
        }
        else
        {
          if ( (j & a8[3]) != 0 || v123 && (j & a8[2]) != 0 || *((_BYTE *)v132 + 520) )
          {
            LOBYTE(v22) = 2;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v146, (char *)v25 + 152, v22);
            v61 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v25 + 96), v38);
            if ( (int)(v61 + 0x80000000) >= 0 && v61 != -1071774919 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1556;
            }
            v60 = (ApplyPermissionWithinThisScope *)v146;
LABEL_66:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v60);
LABEL_67:
            v55 = (j & a8[3]) == 0;
            LODWORD(v126) = v126 & 0xFFFFFF50 | v128 & 0xF | 0x50;
            v62 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
            v127 = *((_DWORD *)v62 + 106);
            BYTE4(v126) = (v129 >> 14) & 4 | BYTE4(v126) & 0xF8 | v55;
            if ( (j & a8[6]) != 0 )
              v63 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v62, v38) == 0;
            else
              v63 = (j & a8[5]) == 0;
            v64 = v132;
            v65 = VIDPN_MGR::CommitVidPn(
                    v132,
                    v25,
                    0LL,
                    v38,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v63,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v126,
                    &v122);
            if ( v65 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v38, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v65);
              WdLogGlobalForLineNumber = 1721;
            }
            if ( v137 && ((j & a8[3]) != 0 || *((_BYTE *)v64 + 520)) )
            {
              v66 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v18 + 390), v137, v38);
              if ( v66 < 0 )
              {
                WdLogSingleEntry4(2LL, (unsigned int)v38, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v66);
                WdLogGlobalForLineNumber = 1766;
              }
            }
            goto LABEL_77;
          }
          if ( (j & a8[14]) != 0 )
          {
            v42 = v136;
            v43 = 0;
            v44 = (unsigned int *)(v141 + 4LL * (unsigned int)(16 * v38));
            do
            {
              if ( *v44 == -1 )
                break;
              if ( v42 )
                v45 = (char *)v42 + 56;
              else
                v45 = 0LL;
              LOBYTE(v22) = 2;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v144, v45, v22);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v42, v38, *v44, 0LL) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1577;
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v144);
              ++v43;
              ++v44;
            }
            while ( v43 < 0x10 );
            v46 = v42;
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v42, v38);
            v25 = v138;
            if ( !IsSourceInTopology )
              goto LABEL_67;
            v48 = 0LL;
            if ( *((_QWORD *)v18 + 391) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *((ADAPTER_DISPLAY **)v18 + 390),
                                             v38);
              if ( !DisplayedPrimaryAllocation )
                goto LABEL_58;
              v51 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
              if ( (v51 & 0x10) != 0 )
                goto LABEL_58;
              v48 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            }
            LODWORD(v126) = v126 & 0xFFFFFF40 | v128 & 0xF | 0x40;
            v54 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
            v127 = *((_DWORD *)v54 + 106);
            BYTE4(v126) = BYTE4(v126) & 0xF9 | (v129 >> 14) & 4 | 1;
            v55 = (j & a8[6]) != 0
                ? (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v54, v38) == 0
                : (j & a8[5]) == 0;
            v56 = VIDPN_MGR::CommitVidPn(
                    v132,
                    v25,
                    v48,
                    v38,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v55,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v126,
                    &v122);
            if ( v56 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v38, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v56);
              WdLogGlobalForLineNumber = 1652;
LABEL_58:
              v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
              LOBYTE(v58) = 2;
              v57[3] = (unsigned int)v38;
              v57[4] = *((int *)v18 + 104);
              v57[5] = *((unsigned int *)v18 + 103);
              WdLogGlobalForLineNumber = 1665;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v145, (char *)v46 + 56, v58);
              v59 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v46, v38);
              if ( (int)(v59 + 0x80000000) >= 0 && v59 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1671;
              }
              v60 = (ApplyPermissionWithinThisScope *)v145;
              goto LABEL_66;
            }
          }
        }
      }
LABEL_77:
      v37 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
      v38 = (unsigned int)(v38 + 1);
    }
    v67 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v69 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
      LODWORD(v130) = k;
      v70 = *((_DWORD *)v69 + 24);
      if ( v67 >= v70 )
        break;
      v71 = 1;
      v124 = 1;
      if ( (k & a8[21]) == 0 )
      {
        if ( (k & a8[2]) == 0 )
          goto LABEL_138;
        LOBYTE(v22) = 2;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v147, (char *)v25 + 152, v22);
        v72 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v25 + 96), v67);
        if ( (int)(v72 + 0x80000000) >= 0 && v72 != -1071774919 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1805;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v147);
        for ( m = 0; ; ++m )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v133, v67, m, &v125) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1823;
          }
          v74 = v125;
          if ( v125 == -1 )
            break;
          if ( v71 )
          {
            v75 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v18 + 390), v67);
            *(_OWORD *)v151 = *(_OWORD *)v75;
            *(_OWORD *)&v151[16] = *((_OWORD *)v75 + 1);
            *(_OWORD *)&v151[32] = *((_OWORD *)v75 + 2);
            *(_OWORD *)&v151[48] = *((_OWORD *)v75 + 3);
            *(_OWORD *)&v151[64] = *((_OWORD *)v75 + 4);
            v76 = DMMVIDPNTOPOLOGY::FindPath(v133, v67, v74);
            if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                        v76,
                        ((v128 - 1) & 0xFFFFFFFD) == 0,
                        (struct _DXGK_DISPLAYMODE_INFO *)v151) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1841;
            }
            v124 = 0;
          }
          v77 = v134;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v139,
                 v74,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v134) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1853;
          }
          v79 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                  (struct _KTHREAD **)v132,
                  (struct DMMVIDPN *)((char *)v25 + 96),
                  v77,
                  v78);
          v80 = v79;
          if ( v79 < 0 )
          {
            v81 = v67;
            WdLogSingleEntry4(2LL, v67, v74, (char *)v25 + 96, v79);
            WdLogGlobalForLineNumber = 1867;
LABEL_107:
            k = (int)v130;
            goto LABEL_130;
          }
          v71 = v124;
        }
        v82 = 0;
        v83 = (struct DMMVIDPN *)((char *)v25 + 96);
        while ( 1 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v83, v67, v82, &v125) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1887;
          }
          v84 = v125;
          if ( v125 == -1 )
            break;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                 v139,
                 v125,
                 (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v134) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1902;
          }
          v85 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                  v132,
                  v83,
                  (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v134);
          v80 = v85;
          if ( v85 < 0 )
          {
            v81 = v67;
            WdLogSingleEntry4(2LL, v67, v84, (char *)v25 + 96, v85);
            WdLogGlobalForLineNumber = 1917;
            goto LABEL_107;
          }
          DMMVIDPNTOPOLOGY::GetPathFromTarget(v133, v84);
          v83 = (struct DMMVIDPN *)((char *)v25 + 96);
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v25 + 96), v84);
          DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v87 + 184));
          ++v82;
        }
        if ( v137 && (_QWORD)v150 && !DXGADAPTER::UsingDelayCreateCddAllocation(v18) )
        {
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)v18 + 390),
                             v89,
                             v67,
                             (const struct _D3DKMT_DISPLAYMODE *)v151,
                             v88);
          v80 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v81 = v67;
            WdLogSingleEntry4(2LL, v67, *((int *)v18 + 104), *((unsigned int *)v18 + 103), CddAllocations);
            WdLogGlobalForLineNumber = 1958;
            goto LABEL_107;
          }
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)v18 + 390), v67, 0);
          if ( !*((_QWORD *)v18 + 391) )
          {
LABEL_114:
            v92 = 0LL;
            goto LABEL_115;
          }
LABEL_122:
          v92 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_115:
          v93 = 32;
          k = (int)v130;
          if ( v82 <= 1 )
            v93 = 48;
          LODWORD(v126) = v126 & 0xFFFFFF00 | v128 & 0xF | v93;
          v94 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
          v127 = *((_DWORD *)v94 + 106);
          BYTE4(v126) = BYTE4(v126) & 0xF8 | (v129 >> 14) & 4;
          if ( ((unsigned int)v130 & a8[6]) != 0 )
            v95 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v94, v67) == 0;
          else
            v95 = ((unsigned int)v130 & a8[5]) == 0;
          v96 = v132;
          v97 = VIDPN_MGR::CommitVidPn(
                  v132,
                  v25,
                  v92,
                  v67,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v95,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v126,
                  &v122);
          v80 = v97;
          if ( v97 >= 0 )
          {
            if ( (k & a8[5]) == 0
              && (*((int *)VIDPN_MGR::GetContainingAdapter(v96) + 751) < 1200
               || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v96) + 27) + 64LL)
                                        + 40LL)
                            + 28LL) < 0x300Au) )
            {
              v131 |= k;
            }
            goto LABEL_138;
          }
          v81 = v67;
          WdLogSingleEntry4(2LL, v67, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v97);
          WdLogGlobalForLineNumber = 2032;
          if ( v137 )
            ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v18 + 390), v137, v67);
        }
        else
        {
          if ( !*((_QWORD *)v18 + 391) )
            goto LABEL_114;
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v18 + 390), v67);
          if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
            goto LABEL_122;
          k = (int)v130;
          v81 = v67;
          if ( ((unsigned int)v130 & a8[8]) == 0 )
          {
            *v140 |= (unsigned int)v130;
            WdLogSingleEntry3(7LL, v67, *((int *)v18 + 104), *((unsigned int *)v18 + 103));
            WdLogGlobalForLineNumber = 1995;
            goto LABEL_138;
          }
          v80 = -1071775482;
          WdLogSingleEntry3(2LL, v67, *((int *)v18 + 104), *((unsigned int *)v18 + 103));
          WdLogGlobalForLineNumber = 1979;
        }
LABEL_130:
        if ( !v123 )
        {
          DxgkLogCodePointPacket(0x61u, v67, v80, 0, *(_QWORD *)((char *)v18 + 412));
          v123 = 1;
          goto LABEL_28;
        }
        a8[21] |= k;
        a8[v81 + 22] = v80;
        if ( v80 == -1071774920 || v80 == -1071774976 )
          v122 = 1;
      }
      LOBYTE(v22) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v148, (char *)v25 + 152, v22);
      v98 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v25 + 96), v67);
      if ( (int)(v98 + 0x80000000) >= 0 && v98 != -1071774919 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2118;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v148);
LABEL_138:
      ++v67;
    }
    v99 = 0LL;
    v100 = 1;
    if ( v70 )
    {
      do
      {
        if ( (v100 & a8[21]) == 0 )
        {
          v101 = a8[5];
          if ( (v100 & v131) != 0 )
          {
            v102 = 0LL;
            if ( (v101 & v100) == 0 )
            {
              LOBYTE(v22) = 2;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v149, (char *)v25 + 152, v22);
              v105 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v25 + 96), v99);
              if ( (int)(v105 + 0x80000000) >= 0 && v105 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2243;
              }
              v106 = v126;
              a8[18] |= v100;
              v104 = v106 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v149);
              goto LABEL_159;
            }
            if ( !*((_QWORD *)v18 + 391) )
              goto LABEL_153;
            v103 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v69, v99);
            if ( v103 && (*((_DWORD *)v103 + 1) & 0x10) == 0 )
            {
              v102 = (void *)*((_QWORD *)v103 + 2);
LABEL_153:
              v104 = v126 & 0xFFFFFF0F | 0x20;
LABEL_159:
              v107 = v128;
              v150 = 0LL;
              if ( v128 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, &v150);
                v107 = v128;
              }
              LODWORD(v126) = v107 ^ (v104 ^ v107) & 0xFFFFFFF0;
              v127 = *(_DWORD *)(*((_QWORD *)v18 + 390) + 424LL);
              BYTE4(v126) = BYTE4(v126) & 0xF8 | (v129 >> 14) & 4;
              v108 = VIDPN_MGR::CommitVidPn(
                       v132,
                       v25,
                       v102,
                       v99,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       0,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v126,
                       &v122);
              v109 = (int)v108;
              if ( v128 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v108, &v150);
              if ( (int)v109 < 0 )
              {
                a8[21] |= v100;
                a8[v99 + 22] = v109;
                WdLogSingleEntry4(2LL, (unsigned int)v99, *((int *)v18 + 104), *((unsigned int *)v18 + 103), v109);
                WdLogGlobalForLineNumber = 2290;
              }
              goto LABEL_165;
            }
            *v140 |= v100;
            a8[18] |= v100;
            WdLogSingleEntry3(7LL, (unsigned int)v99, *((int *)v18 + 104), *((unsigned int *)v18 + 103));
            WdLogGlobalForLineNumber = 2225;
          }
          else
          {
            a8[18] |= v100 & ~v101;
          }
        }
LABEL_165:
        v69 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
        v99 = (unsigned int)(v99 + 1);
        v100 *= 2;
      }
      while ( (unsigned int)v99 < *((_DWORD *)v69 + 24) );
    }
    if ( a5 )
    {
      v111 = (unsigned int *)(v142 + 32);
      do
      {
        v112 = 1 << *a7;
        v113 = *v111;
        if ( (v112 & a8[39]) != 0 )
        {
          v114 = v113 & 0xF0FFFFFF | 0xC000000;
        }
        else if ( (v112 & a8[21]) != 0 )
        {
          v114 = v113 & 0xF0FFFFFF | 0xD000000;
        }
        else
        {
          v114 = v113 & 0xF0FFFFFF | 0xE000000;
        }
        *v111 = v114;
        v115 = DxgkIncrementGlobalConnectionChangeId();
        *((_QWORD *)v116 - 1) = v115;
        v118 = v117 & (a8[2] | a8[39]);
        *((_DWORD *)v116 - 4) &= ~1u;
        v119 = v118 != 0 ? 1 : -1;
        v116[16] = v119;
        a7 = (_DWORD *)(v120 + 4);
        v116[17] = -(v118 == 0);
        v116[18] = v119;
        v111 = (unsigned int *)(v116 + 56);
      }
      while ( v121 != 1 );
    }
    *v143 = (v122 != 0) | *v143 & 0xFFFFFFFE;
    if ( v25 )
      ReferenceCounted::Release((struct DMMVIDPN *)((char *)v25 + 24));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v134);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, *((int *)v18 + 104), *((unsigned int *)v18 + 103));
    WdLogGlobalForLineNumber = 1374;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
}
