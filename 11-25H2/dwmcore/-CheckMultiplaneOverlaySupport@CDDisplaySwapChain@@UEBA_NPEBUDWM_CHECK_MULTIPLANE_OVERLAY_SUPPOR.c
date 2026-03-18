/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180246220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801730FC (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x180227AA8 (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x180277A80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wi.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802C238C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // r12
  bool *v5; // r15
  unsigned int v6; // esi
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v7; // rdi
  CDDisplaySwapChain *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  char *v13; // r15
  __int64 v14; // rcx
  int v15; // r8d
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r11d
  int v22; // r14d
  int v23; // ebx
  __int64 v24; // rsi
  __int64 v25; // rdi
  char *v26; // rdi
  int v27; // r9d
  int v28; // r10d
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  int v37; // r9d
  int v38; // r8d
  int v39; // r10d
  __int64 v40; // rax
  __int64 (__fastcall *v41)(__int64 *, _QWORD, _QWORD, int *, int *, _DWORD); // r11
  int v42; // edx
  int v43; // edx
  int v44; // eax
  __int64 v45; // rbx
  bool *v46; // rax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  bool v51; // al
  CD3DDevice *v52; // rcx
  int v53; // eax
  __int64 v54; // r15
  bool *v55; // rax
  int v56; // eax
  int v57; // eax
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v58; // rax
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  int v68; // r11d
  int v69; // r9d
  int v70; // r10d
  int v71; // eax
  int v72; // r9d
  __int64 v73; // rdx
  int v74; // eax
  int v75; // r8d
  __int64 (__fastcall *v76)(__int64 *, __int64, _QWORD, bool *, unsigned int, int *, int *, int *, _DWORD, _DWORD, _QWORD); // r15
  int v77; // edx
  int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  unsigned int v81; // edi
  int v82; // eax
  int v83; // eax
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v85; // rcx
  __int64 (__fastcall *v86)(__int64, _QWORD, _QWORD); // r10
  int v87; // eax
  int v88; // eax
  int v89; // r9d
  int v90; // r8d
  int v91; // r10d
  __int64 v92; // rax
  __int64 (__fastcall *v93)(__int64 *, _QWORD, int *, int *, _DWORD); // r11
  int v94; // edx
  int v95; // edx
  int v96; // eax
  int v97; // eax
  bool v98; // cl
  unsigned int v99[2]; // [rsp+20h] [rbp-E0h]
  bool v100; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v101; // [rsp+78h] [rbp-88h] BYREF
  char v102[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v103; // [rsp+88h] [rbp-78h] BYREF
  int v104; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v106; // [rsp+A0h] [rbp-60h]
  unsigned int v107; // [rsp+A4h] [rbp-5Ch] BYREF
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v108; // [rsp+A8h] [rbp-58h] BYREF
  bool *v109; // [rsp+B0h] [rbp-50h]
  int v110; // [rsp+C0h] [rbp-40h] BYREF
  int v111; // [rsp+C4h] [rbp-3Ch]
  int v112; // [rsp+C8h] [rbp-38h]
  int v113; // [rsp+CCh] [rbp-34h]
  int v114; // [rsp+D0h] [rbp-30h] BYREF
  int v115; // [rsp+D4h] [rbp-2Ch]
  int v116; // [rsp+D8h] [rbp-28h]
  int v117; // [rsp+DCh] [rbp-24h]
  unsigned int v118; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v119; // [rsp+E4h] [rbp-1Ch]
  int v120; // [rsp+F0h] [rbp-10h] BYREF
  int v121; // [rsp+F4h] [rbp-Ch]
  int v122; // [rsp+F8h] [rbp-8h]
  int v123; // [rsp+FCh] [rbp-4h]
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v124; // [rsp+100h] [rbp+0h]
  CDDisplaySwapChain *v125; // [rsp+108h] [rbp+8h]
  _DWORD v126[4]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v127[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v128; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v129)(__int64, _QWORD, __int64, __int64, _QWORD, int *, _DWORD *, _DWORD *, int, int, _DWORD, _DWORD); // [rsp+138h] [rbp+38h]
  __int128 v130; // [rsp+140h] [rbp+40h]
  __int128 v131; // [rsp+150h] [rbp+50h]
  __int128 v132; // [rsp+160h] [rbp+60h]
  __int128 v133; // [rsp+170h] [rbp+70h]
  __int128 v134; // [rsp+180h] [rbp+80h]
  __int128 v135; // [rsp+190h] [rbp+90h]
  __int128 v136; // [rsp+1A0h] [rbp+A0h]
  __int128 v137; // [rsp+1B0h] [rbp+B0h]
  __int128 v138; // [rsp+1C0h] [rbp+C0h]

  v4 = 0;
  v109 = a4;
  v100 = 0;
  v5 = a4;
  *a4 = 0;
  v6 = a3;
  v119 = a3;
  v7 = a2;
  v124 = a2;
  v8 = this;
  v125 = this;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
  {
    v52 = (CD3DDevice *)*((_QWORD *)v8 + 5);
    v101 = 0LL;
    v103 = 0LL;
    if ( CD3DDevice::CheckMPOCache(v52, v7, v6, &v100) )
    {
      v4 = v100;
LABEL_44:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v103);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
      return v4;
    }
    v53 = 1;
    v104 = 1;
    if ( v6 == 1 )
    {
      if ( (*((_BYTE *)v7 + 24) & 4) != 0 )
        v53 = 2;
      v104 = v53;
    }
    v54 = *((_QWORD *)v8 + 45);
    v55 = *(bool **)(*(_QWORD *)v54 + 48LL);
    v109 = v55;
    if ( v101 )
    {
      (*(void (__fastcall **)(__int64 *))(*v101 + 16))(v101);
      v55 = v109;
    }
    v56 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 **))v55)(v54, *((_QWORD *)v8 + 50), &v101);
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, 0x1C9u, 0LL);
    }
    else
    {
      if ( v103 )
        (*(void (__fastcall **)(__int64 *))(*v103 + 16))(v103);
      v57 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v101)(
              v101,
              &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
              &v103);
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x1CBu, 0LL);
      }
      else
      {
        v106 = 0;
        if ( v6 )
        {
          v58 = v7;
          v108 = v7;
          while ( 1 )
          {
            v59 = *(_OWORD *)v58;
            v107 = 0;
            v60 = *((_OWORD *)v58 + 1);
            v130 = v59;
            v61 = *((_OWORD *)v58 + 2);
            v131 = v60;
            v62 = *((_OWORD *)v58 + 3);
            v132 = v61;
            v63 = *((_OWORD *)v58 + 4);
            v133 = v62;
            v64 = *((_OWORD *)v58 + 5);
            v134 = v63;
            v65 = *((_OWORD *)v58 + 6);
            v135 = v64;
            v66 = *((_OWORD *)v58 + 7);
            v136 = v65;
            v67 = *((_OWORD *)v58 + 8);
            v137 = v66;
            v138 = v67;
            v109 = (bool *)(*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)&v130 + 1) + 48LL))(
                             *((_QWORD *)&v130 + 1),
                             &v107);
            if ( !v109 )
              goto LABEL_44;
            v68 = HIDWORD(v131);
            if ( v104 == 1 )
              v68 = HIDWORD(v133);
            v69 = DWORD1(v134);
            v70 = v134;
            if ( v104 != 1 )
            {
              v69 = DWORD1(v132);
              v70 = v132;
            }
            v71 = DWORD2(v134);
            v72 = v69 - v68;
            v73 = *v103;
            if ( v104 != 1 )
              v71 = DWORD2(v132);
            v74 = v71 - v70;
            v116 = v72;
            v75 = v133;
            v76 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, bool *, unsigned int, int *, int *, int *, _DWORD, _DWORD, _QWORD))(v73 + 96);
            v77 = HIDWORD(v131);
            if ( v104 == 1 )
              v77 = HIDWORD(v132);
            v117 = v74;
            v78 = DWORD1(v133);
            if ( v104 != 1 )
            {
              v75 = v132;
              v78 = DWORD1(v132);
            }
            v110 = v77;
            v111 = v75;
            v112 = v78 - v77;
            v79 = DWORD2(v133);
            if ( v104 != 1 )
              v79 = DWORD2(v132);
            v80 = v107;
            v113 = v79 - v75;
            v122 = DWORD1(v132) - HIDWORD(v131);
            v81 = v130;
            v114 = v68;
            LOBYTE(v80) = 1;
            v115 = v70;
            v120 = HIDWORD(v131);
            v121 = v132;
            v123 = DWORD2(v132) - v132;
            v82 = v76(v103, v80, (unsigned int)v130, v109, v107, &v120, &v110, &v114, v135, 0, 0LL);
            if ( v82 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v82, 0x1E6u, 0LL);
              goto LABEL_89;
            }
            v83 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v103 + 128))(v103, v81, DWORD1(v136));
            if ( v83 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v83, 0x1EAu, 0LL);
              goto LABEL_89;
            }
            DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                                (__int64)v103,
                                                SHIDWORD(v134));
            v87 = v86(v85, v81, DisplayRotationFromDxgiRotation);
            if ( v87 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v87, 0x1EFu, 0LL);
              goto LABEL_89;
            }
            v88 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v103 + 136))(v103, v81, (unsigned int)v138);
            if ( v88 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v88, 0x1F1u, 0LL);
              goto LABEL_89;
            }
            v6 = v119;
            v58 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v108 + 144);
            ++v106;
            v108 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v108 + 144);
            if ( v106 >= v119 )
            {
              v7 = v124;
              v8 = v125;
              break;
            }
          }
        }
        if ( v104 != 2 )
          goto LABEL_83;
        v89 = *((_DWORD *)v7 + 7);
        v90 = *((_DWORD *)v7 + 12);
        v91 = *((_DWORD *)v7 + 8);
        v114 = *((_DWORD *)v7 + 11);
        v115 = v90;
        v110 = v89;
        v92 = *v103;
        v111 = v91;
        v93 = *(__int64 (__fastcall **)(__int64 *, _QWORD, int *, int *, _DWORD))(v92 + 64);
        v94 = *((_DWORD *)v7 + 9) - v89;
        v116 = *((_DWORD *)v7 + 13) - v114;
        LODWORD(v92) = *((_DWORD *)v7 + 14);
        v112 = v94;
        v95 = *((_DWORD *)v7 + 10) - v91;
        v117 = v92 - v90;
        v113 = v95;
        v96 = v93(v103, 0LL, &v110, &v114, 0);
        if ( v96 >= 0 )
        {
LABEL_83:
          v97 = (*(__int64 (__fastcall **)(__int64 *))(*v103 + 72))(v103);
          v98 = v100;
          if ( v97 >= 0 )
            v98 = 1;
          v100 = v98;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v103);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
          goto LABEL_86;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v96, 0x1FBu, 0LL);
      }
    }
LABEL_89:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v103);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
    return v100;
  }
  v9 = (__int64 *)*((_QWORD *)v8 + 46);
  v105 = 0LL;
  v108 = 0LL;
  v10 = *v9;
  v101 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v10 + 48))(v9, &v101);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x16Bu, 0LL);
  }
  else
  {
    if ( CD3DDevice::CheckMPOCache(*((CD3DDevice **)v8 + 5), v7, v6, &v100) )
    {
      v4 = v100;
LABEL_5:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v105);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v108);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
      return v4;
    }
    v106 = 0;
    if ( v6 )
    {
      v13 = (char *)v7 + 52;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 - 44);
        v118 = 0;
        v128 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 48LL))(v14, &v118);
        if ( !v128 )
          goto LABEL_5;
        v15 = 1;
        LODWORD(v103) = 1;
        if ( !*((_DWORD *)v13 - 13) )
        {
          if ( (*(v13 - 28) & 4) != 0 )
            v15 = 2;
          LODWORD(v103) = v15;
        }
        v16 = (*(v13 - 28) & 2) == 0;
        v129 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, int *, _DWORD *, _DWORD *, int, int, _DWORD, _DWORD))(*v101 + 48);
        v17 = 0;
        if ( !v16 )
          v17 = 2;
        v104 = v17;
        if ( (*(v13 - 28) & 1) != 0 )
          v104 = v17 | 1;
        v18 = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation((__int64)v101, *((_DWORD *)v13 + 6));
        v21 = *((_DWORD *)v13 - 6);
        v22 = v18;
        v23 = *((_DWORD *)v13 - 5);
        v24 = 60LL;
        v120 = v21;
        v121 = v23;
        if ( v20 != 1 )
          v24 = 28LL;
        v25 = -8LL;
        if ( v20 != 1 )
          v25 = -24LL;
        v26 = &v13[v25];
        v27 = *(_DWORD *)&v13[v24 - 52];
        v28 = *(_DWORD *)&v13[v24 - 48];
        v29 = *(_DWORD *)v26;
        v30 = *((_DWORD *)v26 + 1);
        v126[2] = *(_DWORD *)&v13[v24 - 44] - v27;
        v31 = *(_DWORD *)&v13[v24 - 40] - v28;
        v127[0] = v29;
        v126[3] = v31;
        v32 = *((_DWORD *)v26 + 2) - v29;
        v126[0] = v27;
        v127[2] = v32;
        v33 = *((_DWORD *)v26 + 3) - v30;
        v127[1] = v30;
        v34 = *((unsigned int *)v13 - 13);
        v127[3] = v33;
        v35 = *((_DWORD *)v13 - 4) - v21;
        v126[1] = v28;
        v122 = v35;
        v123 = *((_DWORD *)v13 - 3) - v23;
        v99[0] = v118;
        v36 = v129(
                v19,
                *(_QWORD *)(v13 + 84),
                v34,
                v128,
                *(_QWORD *)v99,
                &v120,
                v127,
                v126,
                v22,
                v104,
                *((_DWORD *)v13 + 12),
                *((_DWORD *)v13 + 7));
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x193u, 0LL);
          goto LABEL_41;
        }
        if ( (_DWORD)v103 == 2 )
        {
          v37 = *((_DWORD *)v13 - 6);
          v38 = *((_DWORD *)v13 - 1);
          v39 = *((_DWORD *)v13 - 5);
          v110 = *((_DWORD *)v13 - 2);
          v111 = v38;
          v114 = v37;
          v40 = *v101;
          v115 = v39;
          v41 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, int *, int *, _DWORD))(v40 + 56);
          v42 = *((_DWORD *)v13 - 4) - v37;
          v112 = *(_DWORD *)v13 - v110;
          LODWORD(v40) = *((_DWORD *)v13 + 1) - v38;
          v116 = v42;
          v43 = *((_DWORD *)v13 - 3);
          v113 = v40;
          v117 = v43 - v39;
          v44 = v41(v101, *(_QWORD *)(v13 + 84), 0LL, &v114, &v110, 0);
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x1A0u, 0LL);
            goto LABEL_41;
          }
        }
        v13 += 144;
        v6 = v119;
        if ( ++v106 >= v119 )
        {
          v7 = v124;
          v8 = v125;
          v5 = v109;
          break;
        }
      }
    }
    v45 = (__int64)v101;
    v46 = *(bool **)(*v101 + 64);
    v109 = v46;
    if ( v105 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
      v46 = v109;
    }
    v47 = ((__int64 (__fastcall *)(__int64, __int64 *))v46)(v45, &v105);
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x1A5u, 0LL);
    }
    else
    {
      v102[0] = 0;
      v48 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v105 + 64LL))(v105, v102);
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x1A9u, 0LL);
      }
      else
      {
        v49 = v105;
        v107 = 0;
        *v5 = v102[0] != 0;
        v50 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v49 + 48LL))(v49, &v107);
        if ( v50 >= 0 )
        {
          v51 = v100;
          if ( v107 == 1 )
            v51 = 1;
          v100 = v51;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v105);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v108);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
LABEL_86:
          CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)v8 + 5), v7, v6, v100);
          return v100;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x1AEu, 0LL);
      }
    }
  }
LABEL_41:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v105);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v108);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
  return v100;
}
