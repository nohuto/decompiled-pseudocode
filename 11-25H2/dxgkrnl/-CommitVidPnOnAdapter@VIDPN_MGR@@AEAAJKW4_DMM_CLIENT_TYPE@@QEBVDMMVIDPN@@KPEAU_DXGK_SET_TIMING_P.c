/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B498 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041290 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043668 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140053154 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x14005AB70 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x14005BFE8 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140186A28 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140194D90 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140250790 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1402BFFB0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D80F8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140312430 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403325A8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1403A9824 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1403A9B48 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1403AA77C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
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
  __int64 v17; // r9
  int v18; // ebx
  struct DXGADAPTER *v19; // r14
  int v20; // edx
  DMMVIDPNTOPOLOGY *v21; // r12
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 *v26; // rbx
  unsigned int v27; // edi
  int v28; // r15d
  DMMVIDPNTOPOLOGY *v29; // rbx
  int v30; // eax
  unsigned int v31; // r12d
  int v32; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int updated; // eax
  unsigned int i; // r12d
  DMMVIDPNPRESENTPATH *v37; // rax
  ADAPTER_DISPLAY *v38; // rax
  __int64 v39; // r15
  int j; // r12d
  int v41; // eax
  int v42; // r13d
  DMMVIDPNTOPOLOGY *v43; // rbx
  unsigned int v44; // r13d
  unsigned int *v45; // rdi
  __int64 v46; // rdx
  DMMVIDPNTOPOLOGY *v47; // r13
  bool IsSourceInTopology; // al
  void *v49; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  ADAPTER_DISPLAY *v55; // rcx
  unsigned __int8 v56; // zf
  int v57; // eax
  _QWORD *v58; // rax
  __int64 v59; // r9
  int v60; // eax
  ApplyPermissionWithinThisScope *v61; // rcx
  int v62; // eax
  ADAPTER_DISPLAY *v63; // rcx
  unsigned __int8 v64; // zf
  VIDPN_MGR *v65; // r13
  int v66; // eax
  int v67; // eax
  unsigned int v68; // r12d
  int k; // r13d
  ADAPTER_DISPLAY *v70; // rcx
  unsigned int v71; // eax
  char v72; // di
  int v73; // eax
  unsigned int m; // r15d
  __int64 v75; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v76; // rax
  DMMVIDPNPRESENTPATH *v77; // rax
  struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *v78; // rdi
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v79; // r9d
  int v80; // eax
  unsigned int v81; // edi
  __int64 v82; // r15
  unsigned int v83; // r15d
  DMMVIDPNTOPOLOGY *v84; // rdi
  __int64 v85; // r13
  int v86; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v88; // r11
  struct COREDEVICEACCESS *v89; // r9
  struct DXGDEVICE *v90; // r10
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v93; // rdi
  int v94; // ecx
  ADAPTER_DISPLAY *v95; // rcx
  unsigned __int8 v96; // zf
  VIDPN_MGR *v97; // r15
  int v98; // eax
  int v99; // eax
  __int64 v100; // r12
  int v101; // r15d
  int v102; // eax
  void *v103; // r13
  struct DXGADAPTERALLOCATION *v104; // rax
  unsigned int v105; // edi
  int v106; // eax
  int v107; // edi
  int v108; // ecx
  unsigned int v109; // eax
  __int64 v110; // rdi
  unsigned int *v112; // r8
  int v113; // r9d
  unsigned int v114; // ecx
  unsigned int v115; // ecx
  signed __int64 v116; // rax
  _BYTE *v117; // r8
  int v118; // r9d
  int v119; // edx
  char v120; // cl
  __int64 v121; // r10
  __int64 v122; // r11
  __int64 v123; // [rsp+20h] [rbp-E0h]
  __int64 v124; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v125; // [rsp+50h] [rbp-B0h] BYREF
  char v126; // [rsp+51h] [rbp-AFh]
  char v127; // [rsp+52h] [rbp-AEh]
  unsigned int v128; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v129; // [rsp+58h] [rbp-A8h] BYREF
  int v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+68h] [rbp-98h]
  unsigned int v132; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v133; // [rsp+70h] [rbp-90h]
  int v134; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v135; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v136; // [rsp+88h] [rbp-78h]
  struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *v137; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v138; // [rsp+98h] [rbp-68h] BYREF
  DMMVIDPNTOPOLOGY *v139; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v140; // [rsp+A8h] [rbp-58h]
  struct DMMVIDPN *v141; // [rsp+B0h] [rbp-50h]
  DMMVIDPN *v142; // [rsp+B8h] [rbp-48h]
  _DWORD *v143; // [rsp+C0h] [rbp-40h]
  __int64 v144; // [rsp+C8h] [rbp-38h]
  __int64 v145; // [rsp+D0h] [rbp-30h]
  unsigned int *v146; // [rsp+D8h] [rbp-28h]
  _BYTE v147[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v148[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v149[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v150[24]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v151[24]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v152[24]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v153; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v154[80]; // [rsp+180h] [rbp+80h] BYREF

  v145 = a6;
  v143 = a9;
  v144 = a10;
  v146 = a11;
  v140 = a12;
  v131 = a3;
  v132 = a2;
  v135 = a1;
  *(_QWORD *)&v153 = a13;
  v142 = (DMMVIDPN *)a4;
  v128 = 0;
  memset(v154, 0, sizeof(v154));
  v125 = 0;
  v129 = 0LL;
  v130 = 0;
  v126 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v18 = a8[6];
  v19 = ContainingAdapter;
  v20 = a8[3] | a8[14];
  v134 = v18;
  if ( (v20 & v18) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1356;
  }
  if ( (a8[5] & v18 & a8[2]) != (v18 & a8[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1358;
  }
  v21 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v136 = (DMMVIDPNTOPOLOGY *)(a4 + 96);
  v137 = (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)operator new(0x1F0uLL, 0x4E506456u, 256LL, v17);
  if ( v137 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    v138 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v138);
    v24 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry3(2LL, *((int *)v19 + 104), *((unsigned int *)v19 + 103), ClientVidPnFromLastClientCommitedVidPn);
      WdLogGlobalForLineNumber = 1394;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v138, 0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v137);
      return v24;
    }
    v26 = (__int64 *)v138;
    v27 = 0;
    v141 = v138;
    v28 = 1;
    v139 = (struct DMMVIDPN *)((char *)v138 + 96);
    if ( *(_DWORD *)(*((_QWORD *)v19 + 390) + 96LL) )
    {
      v29 = v139;
      do
      {
        if ( (v28 & a8[10]) != 0 )
        {
          v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, v27, 0LL, &v128);
          v31 = v128;
          if ( v30 < 0 || v128 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1437;
          }
          v32 = v31;
          v21 = v136;
          Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v136, v27, v32);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1440;
          }
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v19 + 390), v27);
          *(_OWORD *)v154 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v154[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v154[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v154[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v154[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v154[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)Path + 29));
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
          if ( updated < 0 )
          {
            WdLogSingleEntry3(2LL, v27, v29, updated);
            WdLogGlobalForLineNumber = 1483;
            a8[10] &= ~v28;
            a8[2] |= v28;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v29, v27, i, &v128) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1463;
              }
              if ( v128 == -1 )
                break;
              v37 = DMMVIDPNTOPOLOGY::FindPath(v29, v27, v128);
              v133 = v37;
              if ( !v37 )
              {
                WdLogSingleEntry0(1LL);
                v37 = v133;
                WdLogGlobalForLineNumber = 1470;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v37, Path[29]);
            }
            v21 = v136;
          }
        }
        ++v27;
        v28 *= 2;
      }
      while ( v27 < *(_DWORD *)(*((_QWORD *)v19 + 390) + 96LL) );
      v26 = (__int64 *)v141;
    }
LABEL_28:
    v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
    v39 = 0LL;
    for ( j = 1; (unsigned int)v39 < *((_DWORD *)v38 + 24); j *= 2 )
    {
      if ( (j & a8[21]) == 0 )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v38, v39)
          && (((a8[3] | a8[2] | a8[14]) & j) != 0 || (j & a8[5]) == 0)
          && (v41 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v19 + 390), v39, 0, 0x800u, a14),
              v42 = v41,
              v41 < 0) )
        {
          WdLogSingleEntry4(2LL, (unsigned int)v39, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v41);
          a8[21] |= j;
          a8[v39 + 22] = v42;
          WdLogGlobalForLineNumber = 1527;
        }
        else
        {
          if ( (j & a8[3]) != 0 || v126 && (j & a8[2]) != 0 || *((_BYTE *)v135 + 520) )
          {
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v149,
              (__int64)(v26 + 19),
              2u,
              v23,
              v123,
              v26[17]);
            v62 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v26 + 12), v39);
            if ( (int)(v62 + 0x80000000) >= 0 && v62 != -1071774919 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1559;
            }
            v61 = (ApplyPermissionWithinThisScope *)v149;
LABEL_66:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v61);
LABEL_67:
            v56 = (j & a8[3]) == 0;
            LODWORD(v129) = v129 & 0xFFFFFF50 | v131 & 0xF | 0x50;
            v63 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
            v130 = *((_DWORD *)v63 + 104);
            BYTE4(v129) = (v132 >> 14) & 4 | BYTE4(v129) & 0xF8 | v56;
            if ( (j & a8[6]) != 0 )
              v64 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v63, v39) == 0;
            else
              v64 = (j & a8[5]) == 0;
            v65 = v135;
            v66 = VIDPN_MGR::CommitVidPn(
                    v135,
                    (const struct DMMVIDPN *)v26,
                    0LL,
                    v39,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v64,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v129,
                    &v125);
            if ( v66 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v39, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v66);
              WdLogGlobalForLineNumber = 1724;
            }
            if ( v140 && ((j & a8[3]) != 0 || *((_BYTE *)v65 + 520)) )
            {
              v67 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 390), v140, v39);
              if ( v67 < 0 )
              {
                WdLogSingleEntry4(2LL, (unsigned int)v39, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v67);
                WdLogGlobalForLineNumber = 1769;
              }
            }
            goto LABEL_77;
          }
          if ( (j & a8[14]) != 0 )
          {
            v43 = v139;
            v44 = 0;
            v45 = (unsigned int *)(v144 + 4LL * (unsigned int)(16 * v39));
            do
            {
              if ( *v45 == -1 )
                break;
              if ( v43 )
                v46 = (__int64)v43 + 56;
              else
                v46 = 0LL;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v147, v46, 2u, v23, v123, 1LL);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v43, v39, *v45, 0LL) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1580;
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v147);
              ++v44;
              ++v45;
            }
            while ( v44 < 0x10 );
            v47 = v43;
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v43, v39);
            v26 = (__int64 *)v141;
            if ( !IsSourceInTopology )
              goto LABEL_67;
            v49 = 0LL;
            if ( *((_QWORD *)v19 + 391) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *((ADAPTER_DISPLAY **)v19 + 390),
                                             v39);
              if ( !DisplayedPrimaryAllocation )
                goto LABEL_58;
              v52 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
              if ( (v52 & 0x10) != 0 )
                goto LABEL_58;
              v49 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            }
            LODWORD(v129) = v129 & 0xFFFFFF40 | v131 & 0xF | 0x40;
            v55 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
            v130 = *((_DWORD *)v55 + 104);
            BYTE4(v129) = BYTE4(v129) & 0xF9 | (v132 >> 14) & 4 | 1;
            v56 = (j & a8[6]) != 0
                ? (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v55, v39) == 0
                : (j & a8[5]) == 0;
            v57 = VIDPN_MGR::CommitVidPn(
                    v135,
                    (const struct DMMVIDPN *)v26,
                    v49,
                    v39,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v56,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v129,
                    &v125);
            if ( v57 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v39, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v57);
              WdLogGlobalForLineNumber = 1655;
LABEL_58:
              v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
              v58[3] = (unsigned int)v39;
              v58[4] = *((int *)v19 + 104);
              v58[5] = *((unsigned int *)v19 + 103);
              v124 = *((_QWORD *)v47 + 5);
              WdLogGlobalForLineNumber = 1668;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v148,
                (__int64)v47 + 56,
                2u,
                v59,
                v123,
                v124);
              v60 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v47, v39);
              if ( (int)(v60 + 0x80000000) >= 0 && v60 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1674;
              }
              v61 = (ApplyPermissionWithinThisScope *)v148;
              goto LABEL_66;
            }
          }
        }
      }
LABEL_77:
      v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
      v39 = (unsigned int)(v39 + 1);
    }
    v68 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v70 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
      LODWORD(v133) = k;
      v71 = *((_DWORD *)v70 + 24);
      if ( v68 >= v71 )
        break;
      v72 = 1;
      v127 = 1;
      if ( (k & a8[21]) == 0 )
      {
        if ( (k & a8[2]) == 0 )
          goto LABEL_138;
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v150,
          (__int64)(v26 + 19),
          2u,
          v23,
          v123,
          v26[17]);
        v73 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v26 + 12), v68);
        if ( (int)(v73 + 0x80000000) >= 0 && v73 != -1071774919 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1808;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v150);
        for ( m = 0; ; ++m )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v136, v68, m, &v128) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1826;
          }
          v75 = v128;
          if ( v128 == -1 )
            break;
          if ( v72 )
          {
            v76 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v19 + 390), v68);
            *(_OWORD *)v154 = *(_OWORD *)v76;
            *(_OWORD *)&v154[16] = *((_OWORD *)v76 + 1);
            *(_OWORD *)&v154[32] = *((_OWORD *)v76 + 2);
            *(_OWORD *)&v154[48] = *((_OWORD *)v76 + 3);
            *(_OWORD *)&v154[64] = *((_OWORD *)v76 + 4);
            v77 = DMMVIDPNTOPOLOGY::FindPath(v136, v68, v75);
            if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                        v77,
                        ((v131 - 1) & 0xFFFFFFFD) == 0,
                        (struct _D3DDDI_RATIONAL *)v154) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1844;
            }
            v127 = 0;
          }
          v78 = v137;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(v142, v75, v137) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1856;
          }
          v80 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                  (struct _KTHREAD **)v135,
                  (struct DMMVIDPNTOPOLOGY *const)(v26 + 12),
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v78,
                  v79);
          v81 = v80;
          if ( v80 < 0 )
          {
            v82 = v68;
            WdLogSingleEntry4(2LL, v68, v75, v26 + 12, v80);
            WdLogGlobalForLineNumber = 1870;
LABEL_107:
            k = (int)v133;
            goto LABEL_130;
          }
          v72 = v127;
        }
        v83 = 0;
        v84 = (DMMVIDPNTOPOLOGY *)(v26 + 12);
        while ( 1 )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v84, v68, v83, &v128) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1890;
          }
          v85 = v128;
          if ( v128 == -1 )
            break;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(v142, v128, v137) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1905;
          }
          v86 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(v135, v84, v137);
          v81 = v86;
          if ( v86 < 0 )
          {
            v82 = v68;
            WdLogSingleEntry4(2LL, v68, v85, v26 + 12, v86);
            WdLogGlobalForLineNumber = 1920;
            goto LABEL_107;
          }
          DMMVIDPNTOPOLOGY::GetPathFromTarget(v136, v85);
          v84 = (DMMVIDPNTOPOLOGY *)(v26 + 12);
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v26 + 12), v85);
          DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v88 + 184));
          ++v83;
        }
        if ( v140 && (_QWORD)v153 && !DXGADAPTER::UsingDelayCreateCddAllocation(v19) )
        {
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)v19 + 390),
                             v90,
                             v68,
                             (const struct _D3DKMT_DISPLAYMODE *)v154,
                             v89);
          v81 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v82 = v68;
            WdLogSingleEntry4(2LL, v68, *((int *)v19 + 104), *((unsigned int *)v19 + 103), CddAllocations);
            WdLogGlobalForLineNumber = 1961;
            goto LABEL_107;
          }
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 390), v68, 0);
          if ( !*((_QWORD *)v19 + 391) )
          {
LABEL_114:
            v93 = 0LL;
            goto LABEL_115;
          }
LABEL_122:
          v93 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_115:
          v94 = 32;
          k = (int)v133;
          if ( v83 <= 1 )
            v94 = 48;
          LODWORD(v129) = v129 & 0xFFFFFF00 | v131 & 0xF | v94;
          v95 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
          v130 = *((_DWORD *)v95 + 104);
          BYTE4(v129) = BYTE4(v129) & 0xF8 | (v132 >> 14) & 4;
          if ( ((unsigned int)v133 & a8[6]) != 0 )
            v96 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v95, v68) == 0;
          else
            v96 = ((unsigned int)v133 & a8[5]) == 0;
          v97 = v135;
          v98 = VIDPN_MGR::CommitVidPn(
                  v135,
                  (const struct DMMVIDPN *)v26,
                  v93,
                  v68,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v96,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v129,
                  &v125);
          v81 = v98;
          if ( v98 >= 0 )
          {
            if ( (k & a8[5]) == 0
              && (*((int *)VIDPN_MGR::GetContainingAdapter(v97) + 751) < 1200
               || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v97) + 27) + 64LL)
                                        + 40LL)
                            + 28LL) < 0x300Au) )
            {
              v134 |= k;
            }
            goto LABEL_138;
          }
          v82 = v68;
          WdLogSingleEntry4(2LL, v68, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v98);
          WdLogGlobalForLineNumber = 2035;
          if ( v140 )
            ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v19 + 390), v140, v68);
        }
        else
        {
          if ( !*((_QWORD *)v19 + 391) )
            goto LABEL_114;
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v19 + 390), v68);
          if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
            goto LABEL_122;
          k = (int)v133;
          v82 = v68;
          if ( ((unsigned int)v133 & a8[8]) == 0 )
          {
            *v143 |= (unsigned int)v133;
            WdLogSingleEntry3(7LL, v68, *((int *)v19 + 104), *((unsigned int *)v19 + 103));
            WdLogGlobalForLineNumber = 1998;
            goto LABEL_138;
          }
          v81 = -1071775482;
          WdLogSingleEntry3(2LL, v68, *((int *)v19 + 104), *((unsigned int *)v19 + 103));
          WdLogGlobalForLineNumber = 1982;
        }
LABEL_130:
        if ( !v126 )
        {
          DxgkLogCodePointPacket(0x61u, v68, v81, 0, *(_QWORD *)((char *)v19 + 412));
          v126 = 1;
          goto LABEL_28;
        }
        a8[21] |= k;
        a8[v82 + 22] = v81;
        if ( v81 == -1071774920 || v81 == -1071774976 )
          v125 = 1;
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v151,
        (__int64)(v26 + 19),
        2u,
        v23,
        v123,
        v26[17]);
      v99 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v26 + 12), v68);
      if ( (int)(v99 + 0x80000000) >= 0 && v99 != -1071774919 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2121;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v151);
LABEL_138:
      ++v68;
    }
    v100 = 0LL;
    v101 = 1;
    if ( v71 )
    {
      do
      {
        if ( (v101 & a8[21]) == 0 )
        {
          v102 = a8[5];
          if ( (v101 & v134) != 0 )
          {
            v103 = 0LL;
            if ( (v102 & v101) == 0 )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v152,
                (__int64)(v26 + 19),
                2u,
                v23,
                v123,
                v26[17]);
              v106 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v26 + 12), v100);
              if ( (int)(v106 + 0x80000000) >= 0 && v106 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2246;
              }
              v107 = v129;
              a8[18] |= v101;
              v105 = v107 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v152);
              goto LABEL_159;
            }
            if ( !*((_QWORD *)v19 + 391) )
              goto LABEL_153;
            v104 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v70, v100);
            if ( v104 && (*((_DWORD *)v104 + 1) & 0x10) == 0 )
            {
              v103 = (void *)*((_QWORD *)v104 + 2);
LABEL_153:
              v105 = v129 & 0xFFFFFF0F | 0x20;
LABEL_159:
              v108 = v131;
              v153 = 0LL;
              if ( v131 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, &v153);
                v108 = v131;
              }
              LODWORD(v129) = v108 ^ (v105 ^ v108) & 0xFFFFFFF0;
              v130 = *(_DWORD *)(*((_QWORD *)v19 + 390) + 416LL);
              BYTE4(v129) = BYTE4(v129) & 0xF8 | (v132 >> 14) & 4;
              v109 = VIDPN_MGR::CommitVidPn(
                       v135,
                       (const struct DMMVIDPN *)v26,
                       v103,
                       v100,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       0,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v129,
                       &v125);
              v110 = (int)v109;
              if ( v131 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v109, &v153);
              if ( (int)v110 < 0 )
              {
                a8[21] |= v101;
                a8[v100 + 22] = v110;
                WdLogSingleEntry4(2LL, (unsigned int)v100, *((int *)v19 + 104), *((unsigned int *)v19 + 103), v110);
                WdLogGlobalForLineNumber = 2293;
              }
              goto LABEL_165;
            }
            *v143 |= v101;
            a8[18] |= v101;
            WdLogSingleEntry3(7LL, (unsigned int)v100, *((int *)v19 + 104), *((unsigned int *)v19 + 103));
            WdLogGlobalForLineNumber = 2228;
          }
          else
          {
            a8[18] |= v101 & ~v102;
          }
        }
LABEL_165:
        v70 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
        v100 = (unsigned int)(v100 + 1);
        v101 *= 2;
      }
      while ( (unsigned int)v100 < *((_DWORD *)v70 + 24) );
    }
    if ( a5 )
    {
      v112 = (unsigned int *)(v145 + 32);
      do
      {
        v113 = 1 << *a7;
        v114 = *v112;
        if ( (v113 & a8[39]) != 0 )
        {
          v115 = v114 & 0xF0FFFFFF | 0xC000000;
        }
        else if ( (v113 & a8[21]) != 0 )
        {
          v115 = v114 & 0xF0FFFFFF | 0xD000000;
        }
        else
        {
          v115 = v114 & 0xF0FFFFFF | 0xE000000;
        }
        *v112 = v115;
        v116 = DxgkIncrementGlobalConnectionChangeId();
        *((_QWORD *)v117 - 1) = v116;
        v119 = v118 & (a8[2] | a8[39]);
        *((_DWORD *)v117 - 4) &= ~1u;
        v120 = v119 != 0 ? 1 : -1;
        v117[16] = v120;
        a7 = (_DWORD *)(v121 + 4);
        v117[17] = -(v119 == 0);
        v117[18] = v120;
        v112 = (unsigned int *)(v117 + 56);
      }
      while ( v122 != 1 );
    }
    *v146 = (v125 != 0) | *v146 & 0xFFFFFFFE;
    if ( v26 )
      ReferenceCounted::Release((ReferenceCounted *)(v26 + 3));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v137);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, *((int *)v19 + 104), *((unsigned int *)v19 + 103));
    WdLogGlobalForLineNumber = 1377;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
}
