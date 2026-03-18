/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18023F060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180068194 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x18021BFA8 (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18026D328 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo_ea_18026D328.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // r12
  bool *v5; // rsi
  unsigned int v6; // r15d
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v7; // rdi
  CDDisplaySwapChain *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  char *v13; // rsi
  __int64 v14; // rcx
  char *v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  int *v22; // r8
  int v23; // r9d
  int v24; // edi
  int v25; // r10d
  int v26; // r11d
  int v27; // ebx
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r9d
  int v36; // r8d
  int v37; // r10d
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64 *, _QWORD, _QWORD, int *, int *, _DWORD); // r11
  int v40; // edx
  int v41; // edx
  int v42; // eax
  __int64 v43; // rbx
  bool *v44; // rax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  bool v49; // al
  CD3DDevice *v50; // rcx
  int v51; // esi
  bool *v52; // rax
  int v53; // eax
  int v54; // eax
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v55; // rcx
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  int v64; // r11d
  int v65; // r9d
  int v66; // r10d
  int v67; // eax
  int v68; // r9d
  __int64 v69; // rdx
  int v70; // eax
  int v71; // r8d
  __int64 (__fastcall *v72)(__int64 *, __int64, _QWORD, bool *, unsigned int, int *, int *, int *, _DWORD, _DWORD, _QWORD); // r15
  int v73; // edx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  unsigned int v77; // edi
  int v78; // eax
  int v79; // eax
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v81; // rcx
  __int64 (__fastcall *v82)(__int64, _QWORD, _QWORD); // r10
  int v83; // eax
  int v84; // eax
  int v85; // r9d
  int v86; // r8d
  int v87; // r10d
  __int64 v88; // rax
  __int64 (__fastcall *v89)(__int64 *, _QWORD, int *, int *, _DWORD); // r11
  int v90; // edx
  int v91; // edx
  int v92; // eax
  int v93; // eax
  bool v94; // r9
  unsigned int v95[2]; // [rsp+20h] [rbp-E0h]
  int v96; // [rsp+50h] [rbp-B0h]
  int v97; // [rsp+58h] [rbp-A8h]
  bool v98; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v99; // [rsp+78h] [rbp-88h] BYREF
  char v100[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v101; // [rsp+88h] [rbp-78h] BYREF
  int v102; // [rsp+90h] [rbp-70h]
  __int64 v103; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v104; // [rsp+A0h] [rbp-60h]
  unsigned int v105; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v106; // [rsp+A8h] [rbp-58h]
  __int64 v107; // [rsp+B0h] [rbp-50h] BYREF
  bool *v108; // [rsp+B8h] [rbp-48h]
  int v109; // [rsp+C0h] [rbp-40h] BYREF
  int v110; // [rsp+C4h] [rbp-3Ch]
  int v111; // [rsp+C8h] [rbp-38h]
  int v112; // [rsp+CCh] [rbp-34h]
  int v113; // [rsp+D0h] [rbp-30h] BYREF
  int v114; // [rsp+D4h] [rbp-2Ch]
  int v115; // [rsp+D8h] [rbp-28h]
  int v116; // [rsp+DCh] [rbp-24h]
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v117; // [rsp+E0h] [rbp-20h]
  int v118; // [rsp+F0h] [rbp-10h] BYREF
  int v119; // [rsp+F4h] [rbp-Ch]
  int v120; // [rsp+F8h] [rbp-8h]
  int v121; // [rsp+FCh] [rbp-4h]
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v122; // [rsp+100h] [rbp+0h]
  CDDisplaySwapChain *v123; // [rsp+108h] [rbp+8h]
  __int128 v124; // [rsp+110h] [rbp+10h] BYREF
  __int64 v125; // [rsp+120h] [rbp+20h] BYREF
  int v126; // [rsp+128h] [rbp+28h]
  int v127; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v128[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v129; // [rsp+140h] [rbp+40h]
  __int128 v130; // [rsp+150h] [rbp+50h]
  __int128 v131; // [rsp+160h] [rbp+60h]
  __int128 v132; // [rsp+170h] [rbp+70h]
  __int128 v133; // [rsp+180h] [rbp+80h]
  __int128 v134; // [rsp+190h] [rbp+90h]
  __int128 v135; // [rsp+1A0h] [rbp+A0h]
  __int128 v136; // [rsp+1B0h] [rbp+B0h]
  __int128 v137; // [rsp+1C0h] [rbp+C0h]
  __int128 v138; // [rsp+1D0h] [rbp+D0h]
  __int128 v139; // [rsp+1E0h] [rbp+E0h] BYREF

  v4 = 0;
  v108 = a4;
  v98 = 0;
  v5 = a4;
  *a4 = 0;
  v6 = a3;
  v106 = a3;
  v7 = a2;
  v122 = a2;
  v8 = this;
  v123 = this;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
  {
    v50 = (CD3DDevice *)*((_QWORD *)v8 + 5);
    v99 = 0LL;
    v101 = 0LL;
    if ( CD3DDevice::CheckMPOCache(v50, v7, v6, &v98) )
    {
      v4 = v98;
LABEL_40:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
      return v4;
    }
    v102 = 1;
    v51 = 1;
    if ( v6 == 1 )
    {
      if ( (*((_BYTE *)v7 + 24) & 4) != 0 )
        v51 = 2;
      v102 = v51;
    }
    *(_QWORD *)&v124 = *((_QWORD *)v8 + 45);
    v52 = *(bool **)(*(_QWORD *)v124 + 48LL);
    v108 = v52;
    if ( v99 )
    {
      (*(void (__fastcall **)(__int64 *))(*v99 + 16))(v99);
      v52 = v108;
    }
    v53 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 **))v52)(v124, *((_QWORD *)v8 + 50), &v99);
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x1BFu, 0LL);
    }
    else
    {
      if ( v101 )
        (*(void (__fastcall **)(__int64 *))(*v101 + 16))(v101);
      v54 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v99)(
              v99,
              &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
              &v101);
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0x1C1u, 0LL);
      }
      else
      {
        v104 = 0;
        if ( v6 )
        {
          v55 = v7;
          v117 = v7;
          while ( 1 )
          {
            v105 = 0;
            v56 = *((_OWORD *)v55 + 1);
            v130 = *(_OWORD *)v55;
            v57 = *((_OWORD *)v55 + 2);
            v131 = v56;
            v58 = *((_OWORD *)v55 + 3);
            v132 = v57;
            v59 = *((_OWORD *)v55 + 4);
            v133 = v58;
            v60 = *((_OWORD *)v55 + 5);
            v134 = v59;
            v61 = *((_OWORD *)v55 + 6);
            v135 = v60;
            v62 = *((_OWORD *)v55 + 7);
            v136 = v61;
            v63 = *((_OWORD *)v55 + 8);
            v137 = v62;
            v138 = v63;
            v108 = (bool *)(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)&v130 + 1) + 48LL))(
                             *((_QWORD *)&v130 + 1),
                             &v105);
            if ( !v108 )
              goto LABEL_40;
            v64 = HIDWORD(v131);
            if ( v51 == 1 )
              v64 = HIDWORD(v133);
            v65 = DWORD1(v134);
            v66 = v134;
            if ( v102 != 1 )
            {
              v65 = DWORD1(v132);
              v66 = v132;
            }
            v67 = DWORD2(v134);
            v68 = v65 - v64;
            v69 = *v101;
            if ( v102 != 1 )
              v67 = DWORD2(v132);
            v70 = v67 - v66;
            v115 = v68;
            v71 = v133;
            v72 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, bool *, unsigned int, int *, int *, int *, _DWORD, _DWORD, _QWORD))(v69 + 96);
            v73 = HIDWORD(v131);
            if ( v102 == 1 )
              v73 = HIDWORD(v132);
            v116 = v70;
            v74 = DWORD1(v133);
            if ( v102 != 1 )
            {
              v71 = v132;
              v74 = DWORD1(v132);
            }
            v109 = v73;
            v110 = v71;
            v111 = v74 - v73;
            v75 = DWORD2(v133);
            if ( v102 != 1 )
              v75 = DWORD2(v132);
            v76 = v105;
            v112 = v75 - v71;
            v120 = DWORD1(v132) - HIDWORD(v131);
            v77 = v130;
            v113 = v64;
            LOBYTE(v76) = 1;
            v114 = v66;
            v118 = HIDWORD(v131);
            v119 = v132;
            v121 = DWORD2(v132) - v132;
            v78 = v72(v101, v76, (unsigned int)v130, v108, v105, &v118, &v109, &v113, v135, 0, 0LL);
            if ( v78 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v78, 0x1DCu, 0LL);
              goto LABEL_85;
            }
            v79 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v101 + 128))(v101, v77, DWORD1(v136));
            if ( v79 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v79, 0x1E0u, 0LL);
              goto LABEL_85;
            }
            DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                                (__int64)v101,
                                                SHIDWORD(v134));
            v83 = v82(v81, v77, DisplayRotationFromDxgiRotation);
            if ( v83 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v83, 0x1E5u, 0LL);
              goto LABEL_85;
            }
            v84 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v101 + 136))(v101, v77, (unsigned int)v138);
            if ( v84 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v84, 0x1E7u, 0LL);
              goto LABEL_85;
            }
            v6 = v106;
            v55 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v117 + 144);
            v51 = v102;
            ++v104;
            v117 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v117 + 144);
            if ( v104 >= v106 )
            {
              v7 = v122;
              v8 = v123;
              break;
            }
          }
        }
        if ( v51 != 2 )
          goto LABEL_79;
        v85 = *((_DWORD *)v7 + 7);
        v86 = *((_DWORD *)v7 + 12);
        v87 = *((_DWORD *)v7 + 8);
        v113 = *((_DWORD *)v7 + 11);
        v114 = v86;
        v109 = v85;
        v88 = *v101;
        v110 = v87;
        v89 = *(__int64 (__fastcall **)(__int64 *, _QWORD, int *, int *, _DWORD))(v88 + 64);
        v90 = *((_DWORD *)v7 + 9) - v85;
        v115 = *((_DWORD *)v7 + 13) - v113;
        LODWORD(v88) = *((_DWORD *)v7 + 14);
        v111 = v90;
        v91 = *((_DWORD *)v7 + 10) - v87;
        v116 = v88 - v86;
        v112 = v91;
        v92 = v89(v101, 0LL, &v109, &v113, 0);
        if ( v92 >= 0 )
        {
LABEL_79:
          v93 = (*(__int64 (__fastcall **)(__int64 *))(*v101 + 72))(v101);
          v94 = v98;
          if ( v93 >= 0 )
            v94 = 1;
          v98 = v94;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
          goto LABEL_82;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v92, 0x1F1u, 0LL);
      }
    }
LABEL_85:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
    return v98;
  }
  v9 = (__int64 *)*((_QWORD *)v8 + 46);
  v103 = 0LL;
  v107 = 0LL;
  v10 = *v9;
  v99 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v10 + 48))(v9, &v99);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x152u, 0LL);
  }
  else
  {
    if ( CD3DDevice::CheckMPOCache(*((CD3DDevice **)v8 + 5), v7, v6, &v98) )
    {
      v4 = v98;
LABEL_5:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v103);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v107);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
      return v4;
    }
    v104 = 0;
    if ( v6 )
    {
      v13 = (char *)v7 + 52;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 - 44);
        LODWORD(v101) = 0;
        v129 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v14 + 48LL))(v14, &v101);
        if ( !v129 )
          goto LABEL_5;
        v15 = v13 - 28;
        if ( *((_DWORD *)v13 - 13) || (*v15 & 4) == 0 )
        {
          v17 = *(_OWORD *)(v13 + 8);
          v106 = 1;
          v18 = *(_OWORD *)(v13 - 8);
          v117 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)(v13 - 8);
          v124 = v18;
          v139 = v17;
          TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(
            (int *)&v139,
            (int *)&v124);
        }
        else
        {
          v106 = 2;
          v16 = *(_OWORD *)(v13 - 24);
          v117 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)(v13 - 24);
          v139 = v16;
        }
        v19 = (*v15 & 2) == 0;
        *(_QWORD *)&v124 = *(_QWORD *)(*v99 + 48);
        v20 = 0;
        if ( !v19 )
          v20 = 2;
        v102 = v20;
        if ( (*v15 & 1) != 0 )
          v102 = v20 | 1;
        v21 = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation((__int64)v99, *((_DWORD *)v13 + 6));
        v23 = *v22;
        v24 = v21;
        v25 = v22[1];
        v26 = *((_DWORD *)v13 - 6);
        v27 = *((_DWORD *)v13 - 5);
        v125 = v139;
        v126 = DWORD2(v139) - v139;
        v28 = *((unsigned int *)v13 - 13);
        v127 = HIDWORD(v139) - DWORD1(v139);
        v29 = *((_DWORD *)v117 + 2) - v23;
        v128[0] = v23;
        v128[2] = v29;
        v128[3] = *((_DWORD *)v117 + 3) - v25;
        v30 = *((_DWORD *)v13 - 4) - v26;
        v128[1] = v25;
        v120 = v30;
        v31 = *((_DWORD *)v13 - 3) - v27;
        v118 = v26;
        v121 = v31;
        v97 = *((_DWORD *)v13 + 7);
        v96 = *((_DWORD *)v13 + 12);
        v95[0] = (unsigned int)v101;
        v32 = *(_QWORD *)(v13 + 84);
        v119 = v27;
        v34 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, int *, _DWORD *, __int64 *, int, int, int, int))v124)(
                v33,
                v32,
                v28,
                v129,
                *(_QWORD *)v95,
                &v118,
                v128,
                &v125,
                v24,
                v102,
                v96,
                v97);
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x189u, 0LL);
          goto LABEL_37;
        }
        if ( v106 == 2 )
        {
          v35 = *((_DWORD *)v13 - 6);
          v36 = *((_DWORD *)v13 - 1);
          v37 = *((_DWORD *)v13 - 5);
          v109 = *((_DWORD *)v13 - 2);
          v110 = v36;
          v113 = v35;
          v38 = *v99;
          v114 = v37;
          v39 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, int *, int *, _DWORD))(v38 + 56);
          v40 = *((_DWORD *)v13 - 4) - v35;
          v111 = *(_DWORD *)v13 - v109;
          LODWORD(v38) = *((_DWORD *)v13 + 1) - v36;
          v115 = v40;
          v41 = *((_DWORD *)v13 - 3);
          v112 = v38;
          v116 = v41 - v37;
          v42 = v39(v99, *(_QWORD *)(v13 + 84), 0LL, &v113, &v109, 0);
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x196u, 0LL);
            goto LABEL_37;
          }
        }
        v13 += 144;
        if ( ++v104 >= v6 )
        {
          v7 = v122;
          v8 = v123;
          v5 = v108;
          break;
        }
      }
    }
    v43 = (__int64)v99;
    v44 = *(bool **)(*v99 + 64);
    v108 = v44;
    if ( v103 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
      v44 = v108;
    }
    v45 = ((__int64 (__fastcall *)(__int64, __int64 *))v44)(v43, &v103);
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x19Bu, 0LL);
    }
    else
    {
      v100[0] = 0;
      v46 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v103 + 64LL))(v103, v100);
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x19Fu, 0LL);
      }
      else
      {
        v47 = v103;
        v105 = 0;
        *v5 = v100[0] != 0;
        v48 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 48LL))(v47, &v105);
        if ( v48 >= 0 )
        {
          v49 = v98;
          if ( v105 == 1 )
            v49 = 1;
          v98 = v49;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v103);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v107);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
LABEL_82:
          CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)v8 + 5), v7, v6, v98);
          return v98;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x1A4u, 0LL);
      }
    }
  }
LABEL_37:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v103);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v107);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v99);
  return v98;
}
