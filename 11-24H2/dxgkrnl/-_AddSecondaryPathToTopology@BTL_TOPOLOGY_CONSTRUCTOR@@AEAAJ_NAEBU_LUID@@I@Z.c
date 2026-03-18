/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026BA4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026C14C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026C21C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1403FACEC (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140040C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140040D40 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x140184FDC (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x14018BCC0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402E19E4 (IsVirtualizationDisabledForTarget.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402E2950 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316CB4 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1403A8D54 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  struct DXGADAPTER *v9; // rbx
  int v10; // edi
  VIDPN_MGR *v11; // r15
  int ClientVidPn; // eax
  struct DMMVIDPNTOPOLOGY *v13; // rdi
  unsigned int i; // r14d
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rsi
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rbx
  const struct DMMVIDEOPRESENTTARGET *v24; // r13
  _QWORD *v25; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  struct DXGADAPTER *v27; // r14
  int v28; // r10d
  __int64 v29; // rdx
  int IsTargetForceable; // eax
  int VidPnCopyForClient; // eax
  DMMVIDPNTOPOLOGY *v32; // r10
  unsigned int v33; // eax
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  int v36; // eax
  char v38; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+51h] [rbp-AFh] BYREF
  char v40; // [rsp+52h] [rbp-AEh] BYREF
  char v41; // [rsp+53h] [rbp-ADh] BYREF
  bool v42; // [rsp+54h] [rbp-ACh]
  bool v43; // [rsp+55h] [rbp-ABh]
  bool v44; // [rsp+56h] [rbp-AAh]
  char v45; // [rsp+57h] [rbp-A9h]
  struct DMMVIDPN *v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  int v48; // [rsp+68h] [rbp-98h]
  unsigned int v49; // [rsp+6Ch] [rbp-94h]
  struct DMMVIDPNTOPOLOGY *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+80h] [rbp-80h]
  VIDPN_MGR *v53; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v54; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v55; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v57[144]; // [rsp+B0h] [rbp-50h] BYREF

  v49 = a4;
  v45 = a2;
  LOBYTE(v48) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v56);
  v55 = v8;
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry4(3LL, *this, *((_QWORD *)*this + 8), a3->HighPart, a3->LowPart);
    WdLogGlobalForLineNumber = 1820;
    v10 = -1073741810;
    goto LABEL_73;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v8, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
  if ( v10 < 0 )
    goto LABEL_72;
  v53 = *(VIDPN_MGR **)(*((_QWORD *)v9 + 390) + 104LL);
  v11 = v53;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)v53);
  v46 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v11);
  v10 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, v9, *((int *)v9 + 104), *((unsigned int *)v9 + 103), this);
    WdLogGlobalForLineNumber = 1847;
    goto LABEL_71;
  }
  v13 = (struct DMMVIDPN *)((char *)v46 + 96);
  v50 = (struct DMMVIDPN *)((char *)v46 + 96);
  for ( i = 0; ; ++i )
  {
    v15 = *((_QWORD *)*this + 8);
    v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
    if ( i >= v16 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v18 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v9 + 103)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v9 + 104) )
    {
      v19 = *((_DWORD *)PathDescriptor + 6);
      v20 = *((_DWORD *)PathDescriptor + 7);
      v21 = (unsigned __int8)v48;
      if ( v19 == a4 )
        v21 = 1;
      v48 = v21;
      v22 = VIDPN_MGR::AddPathToVidPnTopology(
              v11,
              v13,
              v19,
              v20,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v10 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v22,
          *((int *)v18 + 5),
          *((unsigned int *)v18 + 4),
          *((unsigned int *)v18 + 6),
          *((unsigned int *)v18 + 7));
        WdLogGlobalForLineNumber = 1895;
        goto LABEL_71;
      }
      v13 = v50;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL), 1u);
  v23 = (_QWORD *)*((_QWORD *)v11 + 15);
  v24 = 0LL;
  v52 = -1;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v25 = (_QWORD *)v23[3];
  v40 = 0;
  v38 = 0;
  v41 = 0;
  if ( v25 == v23 + 3 )
    NextTarget = 0LL;
  else
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v25 - 1);
  v27 = v55;
  while ( 1 )
  {
    if ( !NextTarget )
    {
      if ( v24 )
      {
        v10 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                (const struct _LUID *)((char *)v27 + 412),
                v52);
        goto LABEL_69;
      }
      if ( v23 )
        ReferenceCounted::Release((ReferenceCounted *)(v23 + 8));
      auto_rc<DMMVIDPN>::reset((__int64 *)&v46, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
      v10 = -1073741275;
      goto LABEL_73;
    }
    if ( !*((_DWORD *)NextTarget + 23)
      && !DMMVIDPNTOPOLOGY::IsTargetInTopology(v13, *((_DWORD *)NextTarget + 6))
      && v28 != *((_DWORD *)this + 6) )
    {
      break;
    }
LABEL_56:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v23, NextTarget);
  }
  v10 = IsVirtualizationDisabledForTarget((_DWORD)v27, v28, (unsigned int)&v40, (unsigned int)&v38, (__int64)&v41);
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, v27, *((unsigned int *)NextTarget + 6));
    WdLogGlobalForLineNumber = 1946;
    goto LABEL_69;
  }
  if ( (_BYTE)v48 )
  {
    if ( v38 )
      goto LABEL_34;
LABEL_55:
    v13 = v50;
    goto LABEL_56;
  }
  if ( *((_BYTE *)this + 10) && v38 )
    goto LABEL_55;
LABEL_34:
  if ( !*((_QWORD *)NextTarget + 14) )
  {
    if ( !v45 )
      goto LABEL_55;
    v29 = *((unsigned int *)NextTarget + 6);
    v39 = 0;
    IsTargetForceable = DmmIsTargetForceable(v27, v29, &v39, 0LL);
    v10 = IsTargetForceable;
    if ( IsTargetForceable < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        IsTargetForceable,
        *((int *)v27 + 104),
        *((unsigned int *)v27 + 103),
        *((unsigned int *)NextTarget + 6),
        *((_QWORD *)*this + 8));
      WdLogGlobalForLineNumber = 1977;
      goto LABEL_69;
    }
    if ( !v39 )
      goto LABEL_55;
  }
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v27, NextTarget, v24) )
    goto LABEL_55;
  v51 = 0LL;
  VidPnCopyForClient = VIDPN_MGR::CreateVidPnCopyForClient(v11, v46);
  v10 = VidPnCopyForClient;
  if ( VidPnCopyForClient < 0 )
  {
    WdLogSingleEntry5(2LL, VidPnCopyForClient, v27, *((int *)v27 + 104), *((unsigned int *)v27 + 103), this);
    WdLogGlobalForLineNumber = 2005;
    goto LABEL_59;
  }
  v32 = (DMMVIDPNTOPOLOGY *)(v51 + 96);
  v54 = (DMMVIDPNTOPOLOGY *)(v51 + 96);
  if ( v51 == -96 )
  {
    WdLogSingleEntry4(2LL, v27, *((int *)v27 + 104), *((unsigned int *)v27 + 103), this);
    WdLogGlobalForLineNumber = 2017;
    auto_rc<DMMVIDPN>::reset(&v51, 0LL);
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 8));
    auto_rc<DMMVIDPN>::reset((__int64 *)&v46, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    v10 = -1073741823;
    goto LABEL_73;
  }
  v33 = v49;
  v34 = 0;
  if ( v49 != -1 )
    v34 = v49;
  while ( 2 )
  {
    if ( v33 == -1 )
    {
      v35 = *(_DWORD *)(*((_QWORD *)v27 + 390) + 96LL);
      v33 = v49;
    }
    else
    {
      v35 = v33 + 1;
    }
    if ( v34 >= v35 )
      goto LABEL_54;
    if ( v33 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v32, v34) )
    {
LABEL_51:
      v33 = v49;
      ++v34;
      continue;
    }
    break;
  }
  v36 = VIDPN_MGR::AddPathToVidPnTopology(
          v53,
          v32,
          v34,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v10 = v36;
  if ( v36 == -1071774975 )
  {
    v32 = v54;
    goto LABEL_51;
  }
  if ( v36 >= 0 )
  {
    v24 = NextTarget;
    v52 = v34;
    v44 = v40 == 0;
    v43 = v38 == 0;
    v42 = v41 == 0;
LABEL_54:
    auto_rc<DMMVIDPN>::reset(&v51, 0LL);
    v11 = v53;
    goto LABEL_55;
  }
  WdLogSingleEntry5(2LL, v36, *((int *)v27 + 104), *((unsigned int *)v27 + 103), v34, *((unsigned int *)NextTarget + 6));
  WdLogGlobalForLineNumber = 2064;
LABEL_59:
  auto_rc<DMMVIDPN>::reset(&v51, 0LL);
LABEL_69:
  if ( v23 )
    ReferenceCounted::Release((ReferenceCounted *)(v23 + 8));
LABEL_71:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v46, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
LABEL_72:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
LABEL_73:
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v55);
  return (unsigned int)v10;
}
