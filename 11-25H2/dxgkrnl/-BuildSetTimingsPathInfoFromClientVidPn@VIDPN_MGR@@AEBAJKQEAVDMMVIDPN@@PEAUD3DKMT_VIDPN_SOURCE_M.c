/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140012928 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140012998 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14003180C (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400319F4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043668 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1400511FC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140053154 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     Feature_FixDolbyVisionOnNewPath__private_IsEnabledDeviceUsageNoInline @ 0x14008DF8C (Feature_FixDolbyVisionOnNewPath__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x14025F60C (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x14025F710 (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EB9D4 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403A6750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403B1968 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1403EA4CC (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1403EB9F8 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        void **a7,
        void **a8,
        void **a9)
{
  _DWORD *v9; // rsi
  int v10; // r13d
  unsigned int v14; // ebx
  __int64 v15; // r9
  DMMVIDPNTOPOLOGY *v16; // rbx
  DMMVIDPNTOPOLOGY *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // kr00_8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned __int64 v28; // r11
  unsigned int *v29; // r14
  DMMVIDPNTOPOLOGY *v30; // rax
  DMMVIDPNPRESENTPATH **v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  int v34; // r12d
  int v35; // eax
  __int64 v36; // r8
  int v37; // r11d
  int v38; // edi
  DMMVIDPNTARGET *v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // edx
  unsigned int v44; // ecx
  char v45; // al
  bool v46; // al
  int *v47; // rdx
  unsigned __int8 v48; // al
  __int64 v49; // rdx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v51; // r11d
  struct DMMVIDPNPRESENTPATH *v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // edx
  unsigned int v57; // ecx
  char v58; // al
  DMMVIDEOPRESENTTARGET *v59; // r9
  ADAPTER_DISPLAY **v60; // rcx
  bool IsVidPnSourceOwnerDwm; // al
  DMMVIDPNTARGET **v62; // rcx
  char v63; // al
  char IsVidPnVirtualRefreshRateMatch; // al
  DMMVIDPNTARGET *v65; // rdx
  char v66; // cl
  int *v67; // r9
  DMMVIDPNPRESENTPATH *v68; // rdi
  bool v69; // cl
  bool v70; // al
  int v71; // ecx
  unsigned int v72; // edx
  char v73; // al
  int v74; // edx
  unsigned int v75; // ecx
  int NumPathsFromSource; // eax
  __int64 v77; // r9
  int v78; // eax
  void *v79; // rax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // ecx
  __int64 v84; // rax
  _QWORD *v85; // rdi
  DMMVIDPNPRESENTPATH *v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  unsigned int v90; // r12d
  int v91; // edx
  int v92; // eax
  int v93; // r8d
  int v94; // ebx
  int *v95; // r12
  __int64 v96; // rcx
  int v97; // edx
  unsigned int v98; // ecx
  char v99; // al
  int v100; // eax
  int v101; // eax
  _QWORD *v102; // rax
  int v103; // edi
  int v104; // esi
  unsigned int v105; // ebx
  __int64 v106; // rax
  struct DXGADAPTER *v107; // rsi
  int v108; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  char IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *v111; // rax
  unsigned int v112; // edx
  struct DXGADAPTER *v113; // rsi
  int v114; // edi
  __int64 v115; // rcx
  int v116; // r10d
  unsigned int v117; // r12d
  __int64 v118; // r9
  int *v119; // r8
  int v120; // edx
  unsigned int v121; // ecx
  int v122; // edx
  int v123; // ebx
  int v124; // r14d
  int v125; // r14d
  int v126; // ecx
  int v127; // eax
  int v128; // edx
  int v129; // r8d
  int v130; // ecx
  int v131; // edx
  int *v132; // rdx
  void *v133; // rcx
  unsigned int v135; // [rsp+30h] [rbp-D0h]
  unsigned int v136; // [rsp+34h] [rbp-CCh]
  char v137; // [rsp+38h] [rbp-C8h]
  int v138; // [rsp+3Ch] [rbp-C4h]
  int v139; // [rsp+40h] [rbp-C0h]
  int v140; // [rsp+44h] [rbp-BCh]
  int *v141; // [rsp+48h] [rbp-B8h]
  _QWORD *v142; // [rsp+48h] [rbp-B8h]
  int v143; // [rsp+50h] [rbp-B0h]
  int v144; // [rsp+54h] [rbp-ACh]
  int v145; // [rsp+58h] [rbp-A8h]
  DMMVIDEOPRESENTTARGET *v146; // [rsp+60h] [rbp-A0h]
  DMMVIDEOPRESENTTARGET *v147; // [rsp+60h] [rbp-A0h]
  DMMVIDPNTARGET *v148; // [rsp+68h] [rbp-98h]
  DMMVIDPNTARGET *v149; // [rsp+68h] [rbp-98h]
  int v150; // [rsp+70h] [rbp-90h]
  DMMVIDPNTOPOLOGY *v151; // [rsp+78h] [rbp-88h] BYREF
  int TargetLinkTrainingStatus; // [rsp+80h] [rbp-80h]
  int v153; // [rsp+84h] [rbp-7Ch]
  int v154; // [rsp+88h] [rbp-78h]
  int v155; // [rsp+8Ch] [rbp-74h]
  int v156; // [rsp+90h] [rbp-70h]
  int v157; // [rsp+94h] [rbp-6Ch]
  int v158; // [rsp+98h] [rbp-68h]
  int v159; // [rsp+9Ch] [rbp-64h]
  int v160; // [rsp+A0h] [rbp-60h]
  int v161; // [rsp+A4h] [rbp-5Ch]
  int v162; // [rsp+A8h] [rbp-58h]
  DMMVIDPNPRESENTPATH *v163; // [rsp+B0h] [rbp-50h]
  int v164; // [rsp+B8h] [rbp-48h]
  int v165; // [rsp+BCh] [rbp-44h]
  struct DXGADAPTER *ContainingAdapter; // [rsp+C0h] [rbp-40h]
  int v167; // [rsp+C8h] [rbp-38h]
  const struct DMMVIDPN *ClientCommittedVidPnRef; // [rsp+D0h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v169; // [rsp+D8h] [rbp-28h] BYREF
  int *v170; // [rsp+E0h] [rbp-20h]
  unsigned int v171; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v172; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v173; // [rsp+F8h] [rbp-8h] BYREF
  void *v174; // [rsp+100h] [rbp+0h] BYREF
  void *v175; // [rsp+108h] [rbp+8h] BYREF
  int *v176; // [rsp+110h] [rbp+10h] BYREF
  DMMVIDPNTOPOLOGY *v177; // [rsp+118h] [rbp+18h]
  struct DMMVIDPNTARGETMODESET *v178; // [rsp+120h] [rbp+20h] BYREF
  struct DMMVIDPNTARGETMODESET *v179; // [rsp+128h] [rbp+28h] BYREF
  struct DMMVIDPNTARGETMODESET *v180; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v181; // [rsp+138h] [rbp+38h]
  __int128 v182; // [rsp+140h] [rbp+40h]

  v136 = 0;
  v9 = 0LL;
  v176 = 0LL;
  v10 = 0;
  v175 = 0LL;
  v174 = 0LL;
  v140 = 0;
  v143 = 0;
  v156 = 0;
  v138 = 0;
  v155 = 0;
  v154 = 0;
  v165 = 0;
  v162 = 0;
  v157 = 0;
  v158 = 0;
  v160 = 0;
  v164 = 0;
  v145 = 0;
  v150 = 0;
  v144 = 0;
  v139 = 0;
  v182 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( a3 && *(VIDPN_MGR **)(a3 + 48) != this )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 153;
    goto LABEL_220;
  }
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  v16 = (DMMVIDPNTOPOLOGY *)(((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL));
  v177 = v16;
  v17 = (DMMVIDPNTOPOLOGY *)((a3 + 96) & -(__int64)(a3 != 0));
  LODWORD(v18) = 0;
  v151 = v17;
  if ( v16 )
    v18 = *(_QWORD *)((((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL))
                    + 0x28);
  LODWORD(v19) = 0;
  if ( v17 )
    v19 = *(_QWORD *)(((a3 + 96) & -(__int64)(a3 != 0)) + 0x28);
  v20 = (_DWORD)v18 + (_DWORD)v19 == 0;
  v21 = v18 + v19;
  v171 = v21;
  if ( v20 )
  {
    *a5 = 0;
    *a6 = 0;
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a7);
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a8);
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a9);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&ClientCommittedVidPnRef, 0LL);
    v14 = 0;
    goto LABEL_220;
  }
  v22 = v21;
  v24 = v21;
  v23 = 56LL * v21;
  if ( !is_mul_ok(v24, 0x38uLL) )
    v23 = -1LL;
  v170 = (int *)operator new[](v23, 0x4E506456u, 256LL, v15);
  v176 = v170;
  if ( !v170 )
  {
    v14 = -1073741801;
    WdLogSingleEntry2(6LL, (unsigned int)v22, -1073741801LL);
    WdLogGlobalForLineNumber = 202;
    goto LABEL_219;
  }
  v26 = 4 * v22;
  if ( !is_mul_ok(v22, 4uLL) )
    v26 = -1LL;
  v27 = (unsigned int *)operator new[](v26, 0x4E506456u, 256LL, v25);
  v28 = 0LL;
  v181 = v27;
  v175 = v27;
  v29 = v27;
  if ( !v27 )
  {
    v14 = -1073741801;
    WdLogSingleEntry2(6LL, v22, -1073741801LL);
    WdLogGlobalForLineNumber = 211;
    goto LABEL_219;
  }
  if ( !v16
    || (v30 = *(DMMVIDPNTOPOLOGY **)((((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL))
                                   + 0x18),
        v169 = (struct _D3DDDI_RATIONAL)((char *)v16 + 24),
        v30 == (DMMVIDPNTOPOLOGY *)((char *)v16 + 24)) )
  {
    v32 = 0;
  }
  else
  {
    v31 = (DMMVIDPNPRESENTPATH **)((char *)v30 - 8);
    v32 = 0;
    v148 = (DMMVIDPNTARGET *)v31;
    if ( v31 )
    {
      while ( 1 )
      {
        v141 = &v170[14 * v32];
        v33 = *((_DWORD *)v31[11] + 6);
        v29[v32] = v33;
        v34 = 1 << v33;
        v140 |= 1 << v33;
        v35 = 1 << v33;
        v135 = v33;
        v36 = *((_QWORD *)v31[12] + 12);
        v163 = v31[12];
        v146 = (DMMVIDEOPRESENTTARGET *)v36;
        v167 = 1 << v33;
        if ( (*(_BYTE *)(v36 + 556) & 0x40) != 0 )
          v35 = 0;
        v145 |= v35;
        v144 |= *(_BYTE *)(*(_QWORD *)(v36 + 536) + 172LL) != 0 ? v34 : 0;
        TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v36, 0LL);
        v38 = v37;
        v161 = 4;
        v178 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v39);
        v41 = *((_QWORD *)v178 + 18);
        if ( v41 )
        {
          v38 = *(_DWORD *)(v41 + 132);
          v161 = *(_DWORD *)(v41 + 136);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v178, v40);
        if ( v151 )
          break;
        v42 = *((_DWORD *)v163 + 6);
        v141[3] &= 0xFFFFFFFC;
        *v141 = v42;
        v43 = v141[3] ^ ((unsigned __int8)v141[3] ^ (unsigned __int8)(4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v146))) & 4;
        v141[3] = v43;
        v44 = v43 & 0xFFFFFFF7 | (*((_BYTE *)v146 + 415) == 0 ? 8 : 0);
        v141[3] = v44;
        v45 = v44 ^ (16 * *((_BYTE *)v146 + 416));
        v141[2] = v38;
        v141[3] = v44 ^ v45 & 0x10;
        v141[1] = v161;
        v46 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v146);
        v28 = 0LL;
        if ( !v46 != (*((_BYTE *)v146 + 418) == 0) )
        {
          v157 |= v34;
          v47 = v141;
          v17 = v151;
          if ( TargetLinkTrainingStatus == 13 )
            v141[3] = v141[3] & 0xFFFFFFFC | 1;
          goto LABEL_103;
        }
        if ( TargetLinkTrainingStatus == 13
          || (a2 & 0x4000) != 0
          || (v48 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((ADAPTER_DISPLAY **)ContainingAdapter + 390), v33),
              v28 = 0LL,
              v48)
          || *((_BYTE *)v146 + 414) )
        {
          v47 = v141;
          v10 |= v34;
          v141[3] = v141[3] & 0xFFFFFFFC | ((TargetLinkTrainingStatus != 13) + 1);
          v17 = v151;
          goto LABEL_103;
        }
        v17 = v151;
LABEL_102:
        v47 = v141;
LABEL_103:
        v81 = v47[1];
        if ( v81 == 12 || (v20 = v81 == 32, v82 = 0, v20) )
          v82 = 1;
        v83 = (v82 << v33) | v139;
        v139 = v83;
        v84 = *((_QWORD *)v148 + 1);
        v31 = (DMMVIDPNPRESENTPATH **)(v84 - 8);
        if ( v84 == v169 )
          v31 = 0LL;
        v32 = v136 + 1;
        v148 = (DMMVIDPNTARGET *)v31;
        ++v136;
        if ( !v31 )
        {
          v16 = v177;
          goto LABEL_113;
        }
      }
      v49 = *((_QWORD *)v148 + 12);
      v159 = (TargetLinkTrainingStatus != 13) + 1;
      PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v151, *(_DWORD *)(v49 + 24));
      v153 = 4;
      v52 = PathFromTarget;
      v33 = 0;
      if ( !PathFromTarget )
        goto LABEL_80;
      v179 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)PathFromTarget + 12));
      v54 = *((_QWORD *)v179 + 18);
      if ( v54 )
      {
        v33 = *(_DWORD *)(v54 + 132);
        v153 = *(_DWORD *)(v54 + 136);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v179, v53);
      if ( *(_DWORD *)(*((_QWORD *)v52 + 11) + 24LL) != v135 )
      {
        v51 = v159;
LABEL_80:
        v67 = v141;
        v68 = v163;
        *v141 = *((_DWORD *)v163 + 6);
        if ( !v52 )
          v51 = 3;
        v141[3] = v51 | v141[3] & 0xFFFFFFFC;
        if ( v52 )
        {
          v70 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v146);
          v67 = v141;
          v69 = v70;
        }
        else
        {
          v69 = 0;
        }
        v71 = v67[3] ^ ((unsigned __int8)v67[3] ^ (unsigned __int8)(4 * v69)) & 4;
        v67[3] = v71;
        v72 = v71 & 0xFFFFFFF7 | (*((_BYTE *)v146 + 415) == 0 ? 8 : 0);
        v67[3] = v72;
        v73 = v72 ^ (16 * *((_BYTE *)v146 + 416));
        v67[2] = v33;
        LOBYTE(v33) = v135;
        v67[3] = v72 ^ v73 & 0x10;
        v67[1] = v153;
        v74 = (1 << v135) | v138;
        v138 = v74;
        if ( v52 )
        {
          v75 = *(_DWORD *)(*((_QWORD *)v52 + 11) + 24LL);
          v10 |= 1 << v75;
          v138 = (1 << v75) | v74;
          v29[v136] = v75;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v52);
        }
        v17 = v151;
        v172 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v151, v135, &v172);
        v28 = 0LL;
        if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v172) )
        {
          WdLogSingleEntry0(1LL);
          v28 = 0LL;
          WdLogGlobalForLineNumber = 362;
        }
        v78 = 1 << v135;
        if ( v172 )
        {
          v10 |= v78;
          v156 |= 1 << v135;
          if ( !v9 )
          {
            v79 = (void *)operator new[](0x400uLL, 0x4E506456u, 256LL, v77);
            v174 = v79;
            v9 = v79;
            if ( !v79 )
            {
              v14 = -1073741801;
              WdLogSingleEntry3(
                6LL,
                *((int *)ContainingAdapter + 104),
                *((unsigned int *)ContainingAdapter + 103),
                -1073741801LL);
              WdLogGlobalForLineNumber = 401;
              goto LABEL_219;
            }
            memset(v79, -1, 0x400uLL);
            v28 = 0LL;
          }
          v80 = 0;
          while ( v9[16 * v135 + v80] != -1 )
          {
            if ( (unsigned int)++v80 >= 0x10 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 426;
              goto LABEL_77;
            }
          }
          v9[16 * v135 + v80] = *((_DWORD *)v68 + 6);
        }
        else
        {
          v165 |= v78;
        }
        goto LABEL_102;
      }
      v55 = *((_DWORD *)v163 + 6);
      v141[3] &= 0xFFFFFFFC;
      *v141 = v55;
      v56 = v141[3] ^ ((unsigned __int8)v141[3] ^ (unsigned __int8)(4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v146))) & 4;
      v141[3] = v56;
      v57 = v56 & 0xFFFFFFF7 | (*((_BYTE *)v146 + 415) == 0 ? 8 : 0);
      v141[3] = v57;
      v58 = v57 ^ (16 * *((_BYTE *)v146 + 416));
      v141[2] = v33;
      v141[3] = v57 ^ v58 & 0x10;
      v141[1] = v153;
      if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v146, 0LL) == 13 )
        v10 |= v167;
      if ( !DMMVIDEOPRESENTTARGET::NeedToBeActive(v59) != (*((_BYTE *)v146 + 418) == 0) )
        v157 |= v167;
      if ( (!*((_BYTE *)ContainingAdapter + 2937) || (a2 & 0x400000) == 0)
        && (v60 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3120),
            !*(_BYTE *)(*((_QWORD *)ContainingAdapter + 390) + 289LL))
        || (v163 = (struct DXGADAPTER *)((char *)ContainingAdapter + 3120),
            IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(
                                      *((ADAPTER_DISPLAY **)ContainingAdapter + 390),
                                      v135),
            v60 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3120),
            v137 = 1,
            !IsVidPnSourceOwnerDwm) )
      {
        v137 = 0;
      }
      if ( TargetLinkTrainingStatus == 13
        || (a2 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v60, v135)
        || *((_BYTE *)v146 + 414)
        || *((_BYTE *)v146 + 420)
        || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((DMMVIDPNTARGET **)v148, (DMMVIDPNTARGET **)v52, v137) )
      {
        v141[3] = v159 | v141[3] & 0xFFFFFFFC;
      }
      else if ( v38 == v33 && v161 == v153 )
      {
        v62 = (DMMVIDPNTARGET **)v148;
        if ( *((_DWORD *)v148 + 29) != *((_DWORD *)v52 + 29) )
        {
          v155 |= 1 << v135;
LABEL_61:
          v62 = (DMMVIDPNTARGET **)v148;
LABEL_62:
          v63 = v135;
          if ( _bittest(&v10, v135) )
          {
            v65 = v148;
          }
          else
          {
            IsVidPnVirtualRefreshRateMatch = DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(
                                               v62,
                                               (DMMVIDPNTARGET **)v52);
            v65 = v148;
            if ( !IsVidPnVirtualRefreshRateMatch )
            {
              v66 = v135;
              v160 |= 1 << v135;
LABEL_65:
              v63 = v66;
              goto LABEL_71;
            }
            if ( *((_DWORD *)v148 + 26) != *((_DWORD *)v52 + 26) || *((_WORD *)v148 + 54) != *((_WORD *)v52 + 54) )
            {
              v66 = v135;
              v158 |= 1 << v135;
              goto LABEL_65;
            }
            v63 = v135;
          }
LABEL_71:
          if ( *((_BYTE *)v146 + 413) )
          {
            *((_BYTE *)v146 + 413) = 0;
            v164 |= 1 << v63;
          }
          if ( v38 == v33 && v161 == v153 )
            DMMVIDPNPRESENTPATH::SetGammaRamp(v52, *((const struct DXGK_GAMMA_RAMP **)v65 + 23));
          else
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v52);
          LOBYTE(v33) = v135;
          v17 = v151;
LABEL_77:
          v28 = 0LL;
          goto LABEL_102;
        }
        if ( !*((_BYTE *)this + 520) )
          goto LABEL_62;
      }
      v10 |= 1 << v135;
      goto LABEL_61;
    }
  }
  v83 = 0;
LABEL_113:
  if ( v17 )
  {
    v85 = (_QWORD *)*((_QWORD *)v17 + 3);
    if ( v85 == (_QWORD *)((char *)v17 + 24) )
      v86 = 0LL;
    else
      v86 = (DMMVIDPNPRESENTPATH *)(v85 - 1);
    if ( v86 )
    {
      v142 = (_QWORD *)((char *)v17 + 24);
      v163 = (DMMVIDPNPRESENTPATH *)*((_QWORD *)&v182 + 1);
      do
      {
        v173 = v28;
        v87 = *((_QWORD *)v86 + 12);
        v149 = (DMMVIDPNTARGET *)v87;
        v88 = *(unsigned int *)(*((_QWORD *)v86 + 11) + 24LL);
        v147 = *(DMMVIDEOPRESENTTARGET **)(v87 + 96);
        if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
                             v17,
                             *(_DWORD *)(*((_QWORD *)v86 + 11) + 24LL),
                             &v173)
          || (v89 = v173) == 0 )
        {
          WdLogSingleEntry0(1LL);
          v89 = v173;
          WdLogGlobalForLineNumber = 631;
        }
        v90 = v89 != 1;
        v91 = 1 << v88;
        v92 = 1 << v88;
        v143 |= 1 << v88;
        v93 = *((_DWORD *)v147 + 139);
        if ( (v93 & 0x40) != 0 )
          v92 = 0;
        v145 |= v92;
        v144 |= *(_BYTE *)(*((_QWORD *)v147 + 67) + 172LL) != 0 ? v91 : 0;
        if ( (v91 & v140) == 0 )
          v154 |= v91;
        if ( (v93 & 0x100) != 0 && (v150 & 2) == 0 )
        {
          if ( !v163 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch((DMMVIDPNTARGET **)v163, (DMMVIDPNTARGET **)v86) )
          {
            if ( !*(_DWORD *)(a4 + 240) )
            {
              *(_DWORD *)(a4 + 244) = v88;
              v163 = v86;
              *((_QWORD *)&v182 + 1) = v86;
              *(_DWORD *)(a4 + 248) = 1;
              v169 = 0LL;
              DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate((DMMVIDPNTARGET **)v86, &v169);
              *(_DWORD *)(a4 + 252) = 1000000 * (unsigned __int64)v169.Denominator / v169.Numerator;
            }
            *(_DWORD *)(a4 + 4 * v88 + 160) = *(_DWORD *)(a4 + 4 * v88 + 160) & 0xFFFFFFF8 | 1;
            *(_DWORD *)(a4 + 240) |= 1 << v88;
          }
          else
          {
            v150 |= 2u;
            DxgkLogCodePointPacket(0x65u, v88, 1u, v90, *(_QWORD *)((char *)ContainingAdapter + 412));
          }
        }
        LODWORD(v28) = 0;
        if ( !v177 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v177, *(_DWORD *)(v87 + 24)) )
        {
          v94 = v28;
          v29[v136] = v88;
          v95 = &v170[14 * v136++];
          v159 = 4;
          v180 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v149);
          v96 = *((_QWORD *)v180 + 18);
          if ( v96 )
          {
            v94 = *(_DWORD *)(v96 + 132);
            v159 = *(_DWORD *)(v96 + 136);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v180, 0LL);
          *v95 = *((_DWORD *)v149 + 6);
          v95[3] = v95[3] & 0xFFFFFFFC | 1;
          v97 = v95[3] ^ ((unsigned __int8)v95[3] ^ (unsigned __int8)(4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v147))) & 4;
          v95[3] = v97;
          v98 = v97 & 0xFFFFFFF7 | (*((_BYTE *)v147 + 415) == 0 ? 8 : 0);
          v95[3] = v98;
          v99 = v98 ^ (16 * *((_BYTE *)v147 + 416));
          v95[2] = v94;
          v95[3] = v98 ^ v99 & 0x10;
          v95[1] = v159;
          if ( (unsigned int)Feature_FixDolbyVisionOnNewPath__private_IsEnabledDeviceUsageNoInline() )
          {
            v100 = v95[1];
            if ( v100 == 12 || (v20 = v100 == 32, v101 = 0, v20) )
              v101 = 1;
            v139 |= v101 << v88;
          }
          v10 |= 1 << v88;
          v138 |= 1 << v88;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v86);
          v28 = 0LL;
          *((_BYTE *)v147 + 413) = 0;
        }
        v102 = (_QWORD *)*((_QWORD *)v86 + 1);
        v17 = v151;
        v86 = (DMMVIDPNPRESENTPATH *)(v102 - 1);
        if ( v102 == v142 )
          v86 = (DMMVIDPNPRESENTPATH *)v28;
      }
      while ( v86 );
    }
    v103 = v138;
    v104 = v143;
  }
  else
  {
    v104 = v140;
    v17 = v16;
    v103 = v138;
    v136 = v32;
    v143 = v140;
    v139 = v83;
  }
  v105 = v28;
  v106 = *((_QWORD *)ContainingAdapter + 390);
  if ( *(_DWORD *)(v106 + 96) > (unsigned int)v28 )
  {
    v107 = ContainingAdapter;
    v108 = v162;
    while ( 1 )
    {
      LODWORD(v151) = v28;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  v17,
                                                  v105,
                                                  (unsigned int *const)&v151);
      v28 = 0LL;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( (_DWORD)v151 != -1 )
        {
          v111 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v17, (int)v151);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v111 + 12)
                                                                                                + 96LL));
LABEL_157:
          v28 = 0LL;
          if ( IsVidPnSourceActive )
            v108 |= 1 << v105;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
        {
          IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v107 + 390), v105);
          goto LABEL_157;
        }
        WdLogSingleEntry0(1LL);
        v28 = 0LL;
        WdLogGlobalForLineNumber = 850;
      }
      v106 = *((_QWORD *)v107 + 390);
      if ( ++v105 >= *(_DWORD *)(v106 + 96) )
      {
        v104 = v143;
        v162 = v108;
        v103 = v138;
        break;
      }
    }
  }
  if ( a3 == v28 )
  {
    v117 = v136;
  }
  else
  {
    v112 = v28;
    if ( *(_DWORD *)(v106 + 96) > (unsigned int)v28 )
    {
      v113 = ContainingAdapter;
      v114 = v150;
      do
      {
        v115 = *(_DWORD *)(a4 + 4LL * v112 + 160) & 7;
        if ( (*(_DWORD *)(a4 + 4LL * v112 + 160) & 7) != 0
          && (((1 << (*(_BYTE *)(a4 + 4LL * v112 + 160) & 7)) & v114) != 0
           || (v116 = *(_DWORD *)(a4 + 16 * (v115 + 14))) != 0 && ((v116 - 1) & v116) == 0) )
        {
          *(_DWORD *)(a4 + 4LL * v112 + 160) &= 0xFFFFFFF8;
          v114 |= 1 << v115;
          *(_DWORD *)(a4 + 16 * (v115 + 14)) = 0;
          *(_DWORD *)(a4 + 16 * v115 + 232) = 0;
        }
        ++v112;
      }
      while ( v112 < *(_DWORD *)(*((_QWORD *)v113 + 390) + 96LL) );
      v29 = v181;
      v103 = v138;
      v104 = v143;
    }
    v117 = v136;
    if ( v136 )
    {
      v118 = v136;
      v119 = v170 + 3;
      do
      {
        v120 = *(_DWORD *)(a4 + 4LL * *v29 + 160);
        v121 = v120 & 7;
        if ( (v120 & 7) != 0 )
        {
          v122 = *v119 ^ ((unsigned __int8)*v119 ^ (unsigned __int8)(32 * v120)) & 0xE0;
          *v119 = v122;
          *v119 = v122 ^ ((unsigned __int16)v122 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a4
                                                                                                  + 16LL * v121
                                                                                                  + 232) << 8)) & 0xF00;
        }
        ++v29;
        v119 += 14;
        --v118;
      }
      while ( v118 );
    }
  }
  v123 = v165;
  v156 &= ~v165;
  v124 = v156;
  if ( (v124 & v10) != v124 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 966;
  }
  if ( (v123 & v10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 971;
  }
  v155 &= ~v10;
  if ( (v123 & v155) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 979;
  }
  if ( (v103 & v123) != v123 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 986;
  }
  if ( (v124 & v103) != v124 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 987;
  }
  if ( (v103 & (v10 | v123)) != v103 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 988;
  }
  v125 = v154;
  if ( (v10 & v154) != v154 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 993;
  }
  if ( (v103 & v125) != v125 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 994;
  }
  if ( (v125 & v140) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 996;
  }
  if ( (v123 & v104) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 997;
  }
  if ( (v140 | v125) != (v104 | v123) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 998;
  }
  v126 = v160;
  if ( (v104 & v160) != v160 )
  {
    WdLogSingleEntry0(1LL);
    v126 = v160;
    WdLogGlobalForLineNumber = 1004;
  }
  if ( (v126 & v10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1005;
  }
  v158 &= ~v10;
  if ( *(_DWORD *)a4 && *(_DWORD *)a4 != v140 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1017;
  }
  *(_DWORD *)a4 = v140;
  v127 = *(_DWORD *)(a4 + 4);
  if ( v127 && v127 != v104 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1019;
  }
  v128 = v164;
  *(_DWORD *)(a4 + 40) = v155;
  *(_DWORD *)(a4 + 56) = v156;
  *(_DWORD *)(a4 + 20) = v162;
  *(_DWORD *)(a4 + 24) = v157;
  *(_DWORD *)(a4 + 48) = v158;
  *(_DWORD *)(a4 + 52) = v160;
  *(_DWORD *)(a4 + 12) = v123;
  v14 = 0;
  *(_DWORD *)(a4 + 156) = v144;
  *(_DWORD *)(a4 + 256) = v139;
  *(_DWORD *)(a4 + 4) = v104;
  *(_DWORD *)(a4 + 8) = v10;
  *(_DWORD *)(a4 + 28) = v103;
  *(_DWORD *)(a4 + 16) = v125;
  *(_DWORD *)(a4 + 68) = v128;
  *(_DWORD *)(a4 + 84) = 0;
  *(_DWORD *)(a4 + 72) = 0;
  if ( (a2 & 0x10000) != 0 )
  {
    *(_DWORD *)(a4 + 60) = -1;
  }
  else
  {
    v129 = ~(v140 | v104) | v145;
    v130 = v128 | v103 | *(_DWORD *)(a4 + 60) | ((v103 & v129) != 0 ? v129 : 0);
    v131 = v10 & v129;
    *(_DWORD *)(a4 + 60) = v130;
    if ( (((v10 & v129) - 1) & v10 & v129) != 0 )
    {
      *(_DWORD *)(a4 + 60) = v129 | v130;
    }
    else if ( v131 )
    {
      *(_DWORD *)(a4 + 60) = v130 | v129 & ~v131;
    }
  }
  FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)a4, 0);
  v132 = v170;
  v176 = 0LL;
  *a5 = v171;
  *a6 = v117;
  v133 = *a7;
  *a7 = v132;
  if ( v133 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v133);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a8, &v175);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a9, &v174);
LABEL_219:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&ClientCommittedVidPnRef, 0LL);
LABEL_220:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v174);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v175);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v176);
  return v14;
}
