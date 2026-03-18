/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514
 * Callers:
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x140263CF0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x14040205C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1400352AC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039BD4 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x140041D64 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140049888 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14004F5D4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140054DC8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140058BD8 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008E580 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008F000 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x14025B190 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x14025B300 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // r13
  __int64 v7; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNSOURCEMODESET *v16; // rbx
  _QWORD *v17; // rax
  __int64 Container; // rdi
  __int64 v20; // r9
  int NumPathsFromSource; // eax
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DMMVIDPNTARGETMODESET *v32; // rax
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // ecx
  __int128 v37; // xmm0
  struct DMMVIDPNTARGETMODESET *v38; // rax
  DMMVIDPNSOURCEMODESET *v39; // rbx
  DMMVIDPNSOURCEMODE *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  UINT cx; // ecx
  int v45; // eax
  struct DMMVIDPNTARGETMODESET *v46; // rax
  char *v47; // r14
  char *v48; // rdi
  struct DMMVIDPNTARGETMODESET *v49; // rcx
  char *v50; // rax
  int v51; // eax
  struct DMMVIDPNTARGETMODESET *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char v57; // [rsp+40h] [rbp-C0h]
  char v58; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v59; // [rsp+44h] [rbp-BCh]
  unsigned int v60; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v61; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v63[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v64; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTARGETMODESET *v65; // [rsp+68h] [rbp-98h] BYREF
  struct DMMVIDPNTARGETMODESET *v66; // [rsp+70h] [rbp-90h] BYREF
  struct DMMVIDPNTARGETMODESET *v67; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v68[24]; // [rsp+80h] [rbp-80h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v69; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v70[72]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v71; // [rsp+108h] [rbp+8h]
  __int128 v72; // [rsp+118h] [rbp+18h]
  __int128 v73; // [rsp+128h] [rbp+28h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+140h] [rbp+40h]
  char v76; // [rsp+14Ch] [rbp+4Ch]
  __int64 v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+160h] [rbp+60h]

  v5 = a4;
  v7 = a3;
  v57 = 0;
  v58 = 0;
  Path = 0LL;
  memset(&v69, 0, sizeof(v69));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v70, 0);
  v59 = D3DKMDT_VPPR_UNPINNED;
  v61 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2903;
  }
  if ( (_DWORD)v7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2904;
  }
  if ( (_DWORD)v5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2905;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2911;
  }
  LOBYTE(v10) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v68,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    v10);
  v11 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v5, 0LL);
  v16 = (struct DMMVIDPNSOURCEMODESET *)v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17[3] = v7;
    v17[4] = v5;
    v17[5] = a2;
    v17[6] = v16;
    WdLogGlobalForLineNumber = 2921;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v68);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v68);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 390) + 289LL)
    && *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 390) + 290LL)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 27) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    v62 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v62);
    LODWORD(v16) = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      v62 = 0LL;
    }
    else
    {
      if ( NumPathsFromSource < 0 )
      {
        WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), NumPathsFromSource);
        WdLogGlobalForLineNumber = 2948;
        return (unsigned int)v16;
      }
      if ( v62 == 1 )
      {
        v60 = 0;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v7, 0LL, &v60);
        LODWORD(v16) = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), v22);
          WdLogGlobalForLineNumber = 2967;
          return (unsigned int)v16;
        }
        v23 = v60;
        if ( v60 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2972;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v23);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2976;
        }
        v24 = *((_DWORD *)Path + 29);
        if ( v24 == 254 || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v24) - 2) & 0xFFFFFFFD) != 0 )
        {
          v59 = D3DKMDT_VPPR_UNPINNED;
        }
        else
        {
          if ( !a5 )
          {
            LODWORD(v16) = -1071774970;
            WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), -1071774970LL);
            WdLogGlobalForLineNumber = 2996;
            return (unsigned int)v16;
          }
          v59 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v25);
          DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v26, v27, v28);
          v61 = *((_DWORD *)Path + 28);
          if ( v61 != D3DKMDT_VPPS_UNPINNED )
            DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v29, v30, v31);
          v32 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
          v67 = v32;
          if ( v32 )
          {
            v33 = *((_QWORD *)v32 + 18);
            if ( v33 )
            {
              v34 = *(_OWORD *)(v33 + 72);
              v75 = *(_DWORD *)(v33 + 128);
              v35 = *(_OWORD *)(v33 + 88);
              v76 = *(_BYTE *)(v33 + 140);
              v77 = *(_QWORD *)(v33 + 144);
              v78 = *(_QWORD *)(v33 + 152);
              v36 = *(_DWORD *)(v33 + 160);
              v71 = v34;
              v79 = v36;
              v37 = *(_OWORD *)(v33 + 104);
              v58 = 1;
              v72 = v35;
              *(_QWORD *)&v35 = *(_QWORD *)(v33 + 120);
              v73 = v37;
              v74 = v35;
              DMMVIDPNTARGETMODESET::UnpinMode(v32, v33);
            }
          }
          v38 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
          v66 = v38;
          v39 = v38;
          if ( v38 )
          {
            v40 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v38 + 18);
            if ( v40 )
            {
              v57 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v40, &v69);
              DMMVIDPNSOURCEMODESET::UnpinMode(v39, v41, v42, v43);
              if ( v69.Type != D3DKMDT_RMT_TEXT )
              {
                v69.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v69.Format.Graphics.PrimSurfSize.cx,
                                                                       v69.Format.Graphics.PrimSurfSize.cy);
                cx = v69.Format.Graphics.VisibleRegionSize.cx;
                v69.Format.Graphics.VisibleRegionSize.cx = v69.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v69.Format.Text + 3) = cx;
              }
            }
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v66, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v67, 0LL);
        }
      }
    }
  }
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
  {
    v63[0] = -1;
    LOBYTE(v20) = 1;
    v63[1] = -1;
    v45 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 2LL, v20, v63);
    LODWORD(v16) = v45;
    if ( v45 < 0 )
    {
      WdLogSingleEntry4(2LL, v7, v5, Container & -(__int64)(Container != -88), v45);
      WdLogGlobalForLineNumber = 3068;
      return (unsigned int)v16;
    }
  }
  if ( v57 )
  {
    v46 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v64 = v46;
    v16 = v46;
    if ( !v46 )
      goto LABEL_65;
    v47 = (char *)v46 + 48;
    v48 = 0LL;
    v49 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v46 + 6);
    if ( v49 != (struct DMMVIDPNTARGETMODESET *)((char *)v46 + 48) )
      v48 = (char *)v49 - 8;
    if ( !v48 )
      goto LABEL_65;
    do
    {
      if ( v69.Type != D3DKMDT_RMT_TEXT && *((_DWORD *)v48 + 18) != 2 )
        v69.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v48)->Stride;
      if ( DMMVIDPNSOURCEMODE::operator==(v48, (__int64)&v69) )
        break;
      v50 = (char *)*((_QWORD *)v48 + 1);
      v48 = v50 - 8;
      if ( v50 == v47 )
        v48 = 0LL;
    }
    while ( v48 );
    if ( !v48 )
    {
LABEL_65:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3112;
      LODWORD(v16) = -1071774958;
      goto LABEL_66;
    }
    v51 = VIDPN_MGR::PinVidPnSourceMode(this, v16, *((_DWORD *)v48 + 6), 1);
    LODWORD(v16) = v51;
    if ( v51 < 0 )
    {
      WdLogSingleEntry1(2LL, v51);
      WdLogGlobalForLineNumber = 3124;
LABEL_66:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v64, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v64, 0LL);
  }
  if ( v58 )
  {
    v52 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v65 = v52;
    v16 = v52;
    if ( !v52 || (v53 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v52 + 24, (__int64)v70)) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3143;
      LODWORD(v16) = -1071774958;
      goto LABEL_72;
    }
    v54 = VIDPN_MGR::PinVidPnTargetMode(this, v16, *(_DWORD *)(v53 + 24), 1);
    LODWORD(v16) = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry1(2LL, v54);
      WdLogGlobalForLineNumber = 3155;
LABEL_72:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v65, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v65, 0LL);
  }
  if ( v61 != D3DKMDT_VPPS_UNPINNED )
  {
    v55 = VIDPN_MGR::PinPathContentScaling(this, Path, v61);
    LODWORD(v16) = v55;
    if ( v55 < 0 )
    {
      WdLogSingleEntry1(2LL, v55);
      WdLogGlobalForLineNumber = 3170;
      return (unsigned int)v16;
    }
  }
  if ( v59 != D3DKMDT_VPPR_UNPINNED )
  {
    v56 = VIDPN_MGR::PinPathContentRotation(this, Path, v59);
    LODWORD(v16) = v56;
    if ( v56 < 0 )
    {
      WdLogSingleEntry1(2LL, v56);
      WdLogGlobalForLineNumber = 3185;
      return (unsigned int)v16;
    }
  }
  return 0LL;
}
