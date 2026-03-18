/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042C500
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140021DB8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140021E28 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14003172C (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140031914 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043344 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140050C6C (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140052E04 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x14026650C (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x140266610 (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140313734 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x14039D148 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403A2910 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1403CEFBC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1403E3BE8 (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1403E5308 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
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
  DMMVIDPNTOPOLOGY *v15; // rbx
  DMMVIDPNTOPOLOGY *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  unsigned int v20; // eax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // kr00_8
  unsigned __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned __int64 v26; // r11
  unsigned int *v27; // r14
  DMMVIDPNTOPOLOGY *v28; // rax
  DMMVIDEOPRESENTTARGET **v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // ebx
  int v32; // r12d
  int v33; // eax
  __int64 v34; // r8
  int v35; // r11d
  int v36; // edi
  DMMVIDPNTARGET *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  bool v41; // al
  DMMVIDPNPRESENTPATH *v42; // r8
  int v43; // edx
  unsigned int v44; // ecx
  char v45; // al
  bool v46; // al
  int *v47; // rdx
  unsigned __int8 v48; // al
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v50; // r11d
  struct DMMVIDPNPRESENTPATH *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  bool v55; // al
  DMMVIDPNPRESENTPATH *v56; // r9
  int v57; // edx
  unsigned int v58; // ecx
  char v59; // al
  DMMVIDEOPRESENTTARGET *v60; // r9
  ADAPTER_DISPLAY **v61; // rcx
  bool IsVidPnSourceOwnerDwm; // al
  DMMVIDPNTARGET **v63; // rcx
  char v64; // al
  char IsVidPnVirtualRefreshRateMatch; // al
  DMMVIDPNTARGET *v66; // rdx
  char v67; // cl
  int *v68; // r9
  DMMVIDEOPRESENTTARGET *v69; // rdi
  bool v70; // cl
  bool v71; // al
  DMMVIDPNPRESENTPATH *v72; // r8
  int v73; // ecx
  unsigned int v74; // edx
  char v75; // al
  int v76; // edx
  unsigned int v77; // ecx
  int NumPathsFromSource; // eax
  int v79; // eax
  void *v80; // rax
  int v81; // ecx
  int v82; // eax
  int v83; // eax
  int v84; // ecx
  __int64 v85; // rax
  _QWORD *v86; // rdi
  DMMVIDPNPRESENTPATH *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // rsi
  unsigned int v92; // edx
  unsigned __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  int v96; // eax
  int v97; // ebx
  int *v98; // r12
  __int64 v99; // rax
  DMMVIDEOPRESENTTARGET *v100; // rcx
  bool v101; // al
  DMMVIDEOPRESENTTARGET *v102; // r8
  int v103; // edx
  unsigned int v104; // ecx
  char v105; // al
  int v106; // eax
  _QWORD *v107; // rax
  int v108; // edi
  int v109; // esi
  unsigned int v110; // ebx
  __int64 v111; // rax
  struct DXGADAPTER *v112; // rsi
  int v113; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  char IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *v116; // rax
  unsigned int v117; // edx
  struct DXGADAPTER *v118; // rsi
  int v119; // edi
  __int64 v120; // rcx
  int v121; // r10d
  unsigned int v122; // r12d
  __int64 v123; // r9
  int *v124; // r8
  int v125; // edx
  unsigned int v126; // ecx
  int v127; // edx
  int v128; // ebx
  int v129; // r14d
  int v130; // r14d
  int v131; // ecx
  int v132; // eax
  int v133; // edx
  int v134; // r8d
  int v135; // ecx
  int v136; // edx
  int *v137; // rdx
  void *v138; // rcx
  unsigned int v140; // [rsp+30h] [rbp-D0h]
  unsigned int v141; // [rsp+34h] [rbp-CCh]
  char v142; // [rsp+38h] [rbp-C8h]
  int v143; // [rsp+3Ch] [rbp-C4h]
  int v144; // [rsp+40h] [rbp-C0h]
  int v145; // [rsp+44h] [rbp-BCh]
  int *v146; // [rsp+48h] [rbp-B8h]
  _QWORD *v147; // [rsp+48h] [rbp-B8h]
  int v148; // [rsp+50h] [rbp-B0h]
  int v149; // [rsp+54h] [rbp-ACh]
  int v150; // [rsp+58h] [rbp-A8h]
  int v151; // [rsp+5Ch] [rbp-A4h]
  unsigned int v152; // [rsp+5Ch] [rbp-A4h]
  int v153; // [rsp+5Ch] [rbp-A4h]
  DMMVIDPNTARGET *v154; // [rsp+60h] [rbp-A0h]
  DMMVIDPNTARGET *v155; // [rsp+60h] [rbp-A0h]
  int v156; // [rsp+68h] [rbp-98h]
  DMMVIDPNTOPOLOGY *v157; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNPRESENTPATH *v158; // [rsp+78h] [rbp-88h]
  int TargetLinkTrainingStatus; // [rsp+80h] [rbp-80h]
  int v160; // [rsp+84h] [rbp-7Ch]
  int v161; // [rsp+88h] [rbp-78h]
  int v162; // [rsp+8Ch] [rbp-74h]
  int v163; // [rsp+90h] [rbp-70h]
  int v164; // [rsp+94h] [rbp-6Ch]
  int v165; // [rsp+98h] [rbp-68h]
  int v166; // [rsp+9Ch] [rbp-64h]
  DMMVIDEOPRESENTTARGET *v167; // [rsp+A0h] [rbp-60h]
  int v168; // [rsp+A8h] [rbp-58h]
  int v169; // [rsp+ACh] [rbp-54h]
  int v170; // [rsp+B0h] [rbp-50h]
  int v171; // [rsp+B4h] [rbp-4Ch]
  struct DXGADAPTER *ContainingAdapter; // [rsp+B8h] [rbp-48h]
  int v173; // [rsp+C0h] [rbp-40h]
  const struct DMMVIDPN *ClientCommittedVidPnRef; // [rsp+C8h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v175; // [rsp+D0h] [rbp-30h] BYREF
  int *v176; // [rsp+D8h] [rbp-28h]
  unsigned int v177; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v178; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v179; // [rsp+F0h] [rbp-10h] BYREF
  void *v180; // [rsp+F8h] [rbp-8h] BYREF
  void *v181; // [rsp+100h] [rbp+0h] BYREF
  int *v182; // [rsp+108h] [rbp+8h] BYREF
  DMMVIDPNTOPOLOGY *v183; // [rsp+110h] [rbp+10h]
  struct DMMVIDPNTARGETMODESET *v184; // [rsp+118h] [rbp+18h] BYREF
  struct DMMVIDPNTARGETMODESET *v185; // [rsp+120h] [rbp+20h] BYREF
  struct DMMVIDPNTARGETMODESET *v186; // [rsp+128h] [rbp+28h] BYREF
  unsigned int *v187; // [rsp+130h] [rbp+30h]
  __int128 v188; // [rsp+138h] [rbp+38h]

  v141 = 0;
  v9 = 0LL;
  v182 = 0LL;
  v10 = 0;
  v181 = 0LL;
  v180 = 0LL;
  v145 = 0;
  v148 = 0;
  v163 = 0;
  v143 = 0;
  v162 = 0;
  v161 = 0;
  v171 = 0;
  v168 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v170 = 0;
  v150 = 0;
  v156 = 0;
  v149 = 0;
  v144 = 0;
  v188 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( a3 && *(VIDPN_MGR **)(a3 + 48) != this )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 153;
    goto LABEL_220;
  }
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  v15 = (DMMVIDPNTOPOLOGY *)(((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL));
  v183 = v15;
  v16 = (DMMVIDPNTOPOLOGY *)((a3 + 96) & -(__int64)(a3 != 0));
  LODWORD(v17) = 0;
  v157 = v16;
  if ( v15 )
    v17 = *(_QWORD *)((((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL))
                    + 0x28);
  LODWORD(v18) = 0;
  if ( v16 )
    v18 = *(_QWORD *)(((a3 + 96) & -(__int64)(a3 != 0)) + 0x28);
  v19 = (_DWORD)v17 + (_DWORD)v18 == 0;
  v20 = v17 + v18;
  v177 = v20;
  if ( v19 )
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
  v21 = v20;
  v23 = v20;
  v22 = 56LL * v20;
  if ( !is_mul_ok(v23, 0x38uLL) )
    v22 = -1LL;
  v176 = (int *)operator new[](v22, 0x4E506456u, 256LL);
  v182 = v176;
  if ( !v176 )
  {
    v14 = -1073741801;
    WdLogSingleEntry2(6LL, (unsigned int)v21, -1073741801LL);
    WdLogGlobalForLineNumber = 202;
    goto LABEL_219;
  }
  v24 = 4 * v21;
  if ( !is_mul_ok(v21, 4uLL) )
    v24 = -1LL;
  v25 = (unsigned int *)operator new[](v24, 0x4E506456u, 256LL);
  v26 = 0LL;
  v187 = v25;
  v181 = v25;
  v27 = v25;
  if ( !v25 )
  {
    v14 = -1073741801;
    WdLogSingleEntry2(6LL, v21, -1073741801LL);
    WdLogGlobalForLineNumber = 211;
    goto LABEL_219;
  }
  if ( !v15
    || (v28 = *(DMMVIDPNTOPOLOGY **)((((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL))
                                   + 0x18),
        v175 = (struct _D3DDDI_RATIONAL)((char *)v15 + 24),
        v28 == (DMMVIDPNTOPOLOGY *)((char *)v15 + 24)) )
  {
    v30 = 0;
  }
  else
  {
    v29 = (DMMVIDEOPRESENTTARGET **)((char *)v28 - 8);
    v30 = 0;
    v154 = (DMMVIDPNTARGET *)v29;
    if ( v29 )
    {
      while ( 1 )
      {
        v146 = &v176[14 * v30];
        v31 = *((_DWORD *)v29[11] + 6);
        v27[v30] = v31;
        v32 = 1 << v31;
        v145 |= 1 << v31;
        v33 = 1 << v31;
        v140 = v31;
        v34 = *((_QWORD *)v29[12] + 12);
        v167 = v29[12];
        v158 = (DMMVIDPNPRESENTPATH *)v34;
        v173 = 1 << v31;
        if ( (*(_BYTE *)(v34 + 556) & 0x40) != 0 )
          v33 = 0;
        v150 |= v33;
        v149 |= *(_BYTE *)(*(_QWORD *)(v34 + 536) + 172LL) != 0 ? v32 : 0;
        TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v34, 0LL);
        v36 = v35;
        v169 = 4;
        v184 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v37);
        v39 = *((_QWORD *)v184 + 18);
        if ( v39 )
        {
          v36 = *(_DWORD *)(v39 + 132);
          v169 = *(_DWORD *)(v39 + 136);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v184, v38);
        if ( v157 )
          break;
        v40 = *((_DWORD *)v167 + 6);
        v146[3] &= 0xFFFFFFFC;
        *v146 = v40;
        v41 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v158);
        v42 = v158;
        v43 = v146[3] ^ ((unsigned __int8)v146[3] ^ (unsigned __int8)(4 * v41)) & 4;
        v146[3] = v43;
        v44 = v43 & 0xFFFFFFF7 | (*((_BYTE *)v42 + 415) == 0 ? 8 : 0);
        v146[3] = v44;
        v45 = v44 ^ (16 * *((_BYTE *)v42 + 416));
        v146[2] = v36;
        v146[3] = v44 ^ v45 & 0x10;
        v146[1] = v169;
        v46 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v42);
        v26 = 0LL;
        if ( !v46 != (*((_BYTE *)v158 + 418) == 0) )
        {
          v164 |= v32;
          v47 = v146;
          v16 = v157;
          if ( TargetLinkTrainingStatus == 13 )
            v146[3] = v146[3] & 0xFFFFFFFC | 1;
          goto LABEL_103;
        }
        if ( TargetLinkTrainingStatus == 13
          || (a2 & 0x4000) != 0
          || (v48 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((ADAPTER_DISPLAY **)ContainingAdapter + 390), v31),
              v26 = 0LL,
              v48)
          || *((_BYTE *)v158 + 414) )
        {
          v47 = v146;
          v10 |= v32;
          v146[3] = v146[3] & 0xFFFFFFFC | ((TargetLinkTrainingStatus != 13) + 1);
          v16 = v157;
          goto LABEL_103;
        }
        v16 = v157;
LABEL_102:
        v47 = v146;
LABEL_103:
        v82 = v47[1];
        if ( v82 == 12 || (v19 = v82 == 32, v83 = 0, v19) )
          v83 = 1;
        v84 = (v83 << v31) | v144;
        v144 = v84;
        v85 = *((_QWORD *)v154 + 1);
        v29 = (DMMVIDEOPRESENTTARGET **)(v85 - 8);
        if ( v85 == v175 )
          v29 = 0LL;
        v30 = v141 + 1;
        v154 = (DMMVIDPNTARGET *)v29;
        ++v141;
        if ( !v29 )
        {
          v15 = v183;
          goto LABEL_113;
        }
      }
      v151 = (TargetLinkTrainingStatus != 13) + 1;
      PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v157, *(_DWORD *)(*((_QWORD *)v154 + 12) + 24LL));
      v160 = 4;
      v51 = PathFromTarget;
      v31 = 0;
      if ( !PathFromTarget )
        goto LABEL_80;
      v185 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)PathFromTarget + 12));
      v53 = *((_QWORD *)v185 + 18);
      if ( v53 )
      {
        v31 = *(_DWORD *)(v53 + 132);
        v160 = *(_DWORD *)(v53 + 136);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v185, v52);
      if ( *(_DWORD *)(*((_QWORD *)v51 + 11) + 24LL) != v140 )
      {
        v50 = (TargetLinkTrainingStatus != 13) + 1;
LABEL_80:
        v68 = v146;
        v69 = v167;
        *v146 = *((_DWORD *)v167 + 6);
        if ( !v51 )
          v50 = 3;
        v146[3] = v50 | v146[3] & 0xFFFFFFFC;
        if ( v51 )
        {
          v71 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v158);
          v68 = v146;
          v70 = v71;
        }
        else
        {
          v70 = 0;
        }
        v72 = v158;
        v73 = v68[3] ^ ((unsigned __int8)v68[3] ^ (unsigned __int8)(4 * v70)) & 4;
        v68[3] = v73;
        v74 = v73 & 0xFFFFFFF7 | (*((_BYTE *)v72 + 415) == 0 ? 8 : 0);
        v68[3] = v74;
        v75 = v74 ^ (16 * *((_BYTE *)v72 + 416));
        v68[2] = v31;
        LOBYTE(v31) = v140;
        v68[3] = v74 ^ v75 & 0x10;
        v68[1] = v160;
        v76 = (1 << v140) | v143;
        v143 = v76;
        if ( v51 )
        {
          v77 = *(_DWORD *)(*((_QWORD *)v51 + 11) + 24LL);
          v10 |= 1 << v77;
          v143 = (1 << v77) | v76;
          v27[v141] = v77;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v51);
        }
        v16 = v157;
        v178 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v157, v140, &v178);
        v26 = 0LL;
        if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v178) )
        {
          WdLogSingleEntry0(1LL);
          v26 = 0LL;
          WdLogGlobalForLineNumber = 362;
        }
        v79 = 1 << v140;
        if ( v178 )
        {
          v10 |= v79;
          v163 |= 1 << v140;
          if ( !v9 )
          {
            v80 = (void *)operator new[](0x400uLL, 0x4E506456u, 256LL);
            v180 = v80;
            v9 = v80;
            if ( !v80 )
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
            memset(v80, -1, 0x400uLL);
            v26 = 0LL;
          }
          v81 = 0;
          while ( v9[16 * v140 + v81] != -1 )
          {
            if ( (unsigned int)++v81 >= 0x10 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 426;
              goto LABEL_77;
            }
          }
          v9[16 * v140 + v81] = *((_DWORD *)v69 + 6);
        }
        else
        {
          v171 |= v79;
        }
        goto LABEL_102;
      }
      v54 = *((_DWORD *)v167 + 6);
      v146[3] &= 0xFFFFFFFC;
      *v146 = v54;
      v55 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v158);
      v56 = v158;
      v57 = v146[3] ^ ((unsigned __int8)v146[3] ^ (unsigned __int8)(4 * v55)) & 4;
      v146[3] = v57;
      v58 = v57 & 0xFFFFFFF7 | (*((_BYTE *)v56 + 415) == 0 ? 8 : 0);
      v146[3] = v58;
      v59 = v58 ^ (16 * *((_BYTE *)v56 + 416));
      v146[2] = v31;
      v146[3] = v58 ^ v59 & 0x10;
      v146[1] = v160;
      if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v56, 0LL) == 13 )
        v10 |= v173;
      if ( !DMMVIDEOPRESENTTARGET::NeedToBeActive(v60) != (*((_BYTE *)v158 + 418) == 0) )
        v164 |= v173;
      if ( (!*((_BYTE *)ContainingAdapter + 2937) || (a2 & 0x400000) == 0)
        && (v61 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3120),
            !*(_BYTE *)(*((_QWORD *)ContainingAdapter + 390) + 289LL))
        || (v167 = (struct DXGADAPTER *)((char *)ContainingAdapter + 3120),
            IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(
                                      *((ADAPTER_DISPLAY **)ContainingAdapter + 390),
                                      v140),
            v61 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3120),
            v142 = 1,
            !IsVidPnSourceOwnerDwm) )
      {
        v142 = 0;
      }
      if ( TargetLinkTrainingStatus == 13
        || (a2 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v61, v140)
        || *((_BYTE *)v158 + 414)
        || *((_BYTE *)v158 + 420)
        || !DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((DMMVIDPNTARGET **)v154, (DMMVIDPNTARGET **)v51, v142) )
      {
        v146[3] = v151 | v146[3] & 0xFFFFFFFC;
      }
      else if ( v36 == v31 && v169 == v160 )
      {
        v63 = (DMMVIDPNTARGET **)v154;
        if ( *((_DWORD *)v154 + 29) != *((_DWORD *)v51 + 29) )
        {
          v162 |= 1 << v140;
LABEL_61:
          v63 = (DMMVIDPNTARGET **)v154;
LABEL_62:
          v64 = v140;
          if ( _bittest(&v10, v140) )
          {
            v66 = v154;
          }
          else
          {
            IsVidPnVirtualRefreshRateMatch = DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(
                                               v63,
                                               (DMMVIDPNTARGET **)v51);
            v66 = v154;
            if ( !IsVidPnVirtualRefreshRateMatch )
            {
              v67 = v140;
              v166 |= 1 << v140;
LABEL_65:
              v64 = v67;
              goto LABEL_71;
            }
            if ( *((_DWORD *)v154 + 26) != *((_DWORD *)v51 + 26) || *((_WORD *)v154 + 54) != *((_WORD *)v51 + 54) )
            {
              v67 = v140;
              v165 |= 1 << v140;
              goto LABEL_65;
            }
            v64 = v140;
          }
LABEL_71:
          if ( *((_BYTE *)v158 + 413) )
          {
            *((_BYTE *)v158 + 413) = 0;
            v170 |= 1 << v64;
          }
          if ( v36 == v31 && v169 == v160 )
            DMMVIDPNPRESENTPATH::SetGammaRamp(v51, *((const struct DXGK_GAMMA_RAMP **)v66 + 23));
          else
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v51);
          LOBYTE(v31) = v140;
          v16 = v157;
LABEL_77:
          v26 = 0LL;
          goto LABEL_102;
        }
        if ( !*((_BYTE *)this + 520) )
          goto LABEL_62;
      }
      v10 |= 1 << v140;
      goto LABEL_61;
    }
  }
  v84 = 0;
LABEL_113:
  if ( v16 )
  {
    v86 = (_QWORD *)*((_QWORD *)v16 + 3);
    if ( v86 == (_QWORD *)((char *)v16 + 24) )
      v87 = 0LL;
    else
      v87 = (DMMVIDPNPRESENTPATH *)(v86 - 1);
    if ( v87 )
    {
      v147 = (_QWORD *)((char *)v16 + 24);
      v158 = (DMMVIDPNPRESENTPATH *)*((_QWORD *)&v188 + 1);
      do
      {
        v179 = v26;
        v88 = *((_QWORD *)v87 + 12);
        v89 = *((_QWORD *)v87 + 11);
        v155 = (DMMVIDPNTARGET *)v88;
        v90 = *(_QWORD *)(v88 + 96);
        v91 = *(unsigned int *)(v89 + 24);
        v92 = *(_DWORD *)(v89 + 24);
        v167 = (DMMVIDEOPRESENTTARGET *)v90;
        if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v157, v92, &v179) || (v93 = v179) == 0 )
        {
          WdLogSingleEntry0(1LL);
          v93 = v179;
          WdLogGlobalForLineNumber = 631;
        }
        v94 = *(_DWORD *)(v90 + 556);
        v152 = v93 != 1;
        v95 = 1 << v91;
        v148 |= 1 << v91;
        v96 = 1 << v91;
        if ( (v94 & 0x40) != 0 )
          v96 = 0;
        v150 |= v96;
        v149 |= *(_BYTE *)(*(_QWORD *)(v90 + 536) + 172LL) != 0 ? v95 : 0;
        if ( (v95 & v145) == 0 )
          v161 |= v95;
        if ( (v94 & 0x100) != 0 && (v156 & 2) == 0 )
        {
          if ( !v158 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch((DMMVIDPNTARGET **)v158, (DMMVIDPNTARGET **)v87) )
          {
            if ( !*(_DWORD *)(a4 + 240) )
            {
              v158 = v87;
              *((_QWORD *)&v188 + 1) = v87;
              *(_DWORD *)(a4 + 244) = v91;
              *(_DWORD *)(a4 + 248) = 1;
              v175 = 0LL;
              DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate((DMMVIDPNTARGET **)v87, &v175);
              *(_DWORD *)(a4 + 252) = 1000000 * (unsigned __int64)v175.Denominator / v175.Numerator;
            }
            *(_DWORD *)(a4 + 4 * v91 + 160) = *(_DWORD *)(a4 + 4 * v91 + 160) & 0xFFFFFFF8 | 1;
            *(_DWORD *)(a4 + 240) |= 1 << v91;
          }
          else
          {
            v156 |= 2u;
            DxgkLogCodePointPacket(0x65u, v91, 1u, v152, *(_QWORD *)((char *)ContainingAdapter + 412));
          }
        }
        LODWORD(v26) = 0;
        if ( !v183 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v183, *(_DWORD *)(v88 + 24)) )
        {
          v97 = v26;
          v27[v141] = v91;
          v98 = &v176[14 * v141++];
          v153 = 4;
          v186 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v155);
          v99 = *((_QWORD *)v186 + 18);
          if ( v99 )
          {
            v97 = *(_DWORD *)(v99 + 132);
            v153 = *(_DWORD *)(v99 + 136);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v186, 0LL);
          v100 = v167;
          *v98 = *((_DWORD *)v155 + 6);
          v98[3] = v98[3] & 0xFFFFFFFC | 1;
          v101 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v100);
          v102 = v167;
          v103 = v98[3] ^ ((unsigned __int8)v98[3] ^ (unsigned __int8)(4 * v101)) & 4;
          v98[3] = v103;
          v104 = v103 & 0xFFFFFFF7 | (*((_BYTE *)v102 + 415) == 0 ? 8 : 0);
          v98[3] = v104;
          v105 = v104 ^ (16 * *((_BYTE *)v102 + 416));
          v98[2] = v97;
          v98[3] = v104 ^ v105 & 0x10;
          v98[1] = v153;
          v106 = v153 == 12 || v153 == 32;
          v144 |= v106 << v91;
          v10 |= 1 << v91;
          v143 |= 1 << v91;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v87);
          v26 = 0LL;
          *((_BYTE *)v167 + 413) = 0;
        }
        v107 = (_QWORD *)*((_QWORD *)v87 + 1);
        v87 = (DMMVIDPNPRESENTPATH *)(v107 - 1);
        if ( v107 == v147 )
          v87 = (DMMVIDPNPRESENTPATH *)v26;
      }
      while ( v87 );
      v16 = v157;
    }
    v108 = v143;
    v109 = v148;
  }
  else
  {
    v109 = v145;
    v16 = v15;
    v108 = v143;
    v141 = v30;
    v148 = v145;
    v144 = v84;
  }
  v110 = v26;
  v111 = *((_QWORD *)ContainingAdapter + 390);
  if ( *(_DWORD *)(v111 + 96) > (unsigned int)v26 )
  {
    v112 = ContainingAdapter;
    v113 = v168;
    while ( 1 )
    {
      LODWORD(v157) = v26;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  v16,
                                                  v110,
                                                  (unsigned int *const)&v157);
      v26 = 0LL;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( (_DWORD)v157 != -1 )
        {
          v116 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v16, (int)v157);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v116 + 12)
                                                                                                + 96LL));
LABEL_157:
          v26 = 0LL;
          if ( IsVidPnSourceActive )
            v113 |= 1 << v110;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
        {
          IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v112 + 390), v110);
          goto LABEL_157;
        }
        WdLogSingleEntry0(1LL);
        v26 = 0LL;
        WdLogGlobalForLineNumber = 847;
      }
      v111 = *((_QWORD *)v112 + 390);
      if ( ++v110 >= *(_DWORD *)(v111 + 96) )
      {
        v109 = v148;
        v168 = v113;
        v108 = v143;
        break;
      }
    }
  }
  if ( a3 == v26 )
  {
    v122 = v141;
  }
  else
  {
    v117 = v26;
    if ( *(_DWORD *)(v111 + 96) > (unsigned int)v26 )
    {
      v118 = ContainingAdapter;
      v119 = v156;
      do
      {
        v120 = *(_DWORD *)(a4 + 4LL * v117 + 160) & 7;
        if ( (*(_DWORD *)(a4 + 4LL * v117 + 160) & 7) != 0
          && (((1 << (*(_BYTE *)(a4 + 4LL * v117 + 160) & 7)) & v119) != 0
           || (v121 = *(_DWORD *)(a4 + 16 * (v120 + 14))) != 0 && ((v121 - 1) & v121) == 0) )
        {
          *(_DWORD *)(a4 + 4LL * v117 + 160) &= 0xFFFFFFF8;
          v119 |= 1 << v120;
          *(_DWORD *)(a4 + 16 * (v120 + 14)) = 0;
          *(_DWORD *)(a4 + 16 * v120 + 232) = 0;
        }
        ++v117;
      }
      while ( v117 < *(_DWORD *)(*((_QWORD *)v118 + 390) + 96LL) );
      v27 = v187;
      v108 = v143;
      v109 = v148;
    }
    v122 = v141;
    if ( v141 )
    {
      v123 = v141;
      v124 = v176 + 3;
      do
      {
        v125 = *(_DWORD *)(a4 + 4LL * *v27 + 160);
        v126 = v125 & 7;
        if ( (v125 & 7) != 0 )
        {
          v127 = *v124 ^ ((unsigned __int8)*v124 ^ (unsigned __int8)(32 * v125)) & 0xE0;
          *v124 = v127;
          *v124 = v127 ^ ((unsigned __int16)v127 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a4
                                                                                                  + 16LL * v126
                                                                                                  + 232) << 8)) & 0xF00;
        }
        ++v27;
        v124 += 14;
        --v123;
      }
      while ( v123 );
    }
  }
  v128 = v171;
  v163 &= ~v171;
  v129 = v163;
  if ( (v129 & v10) != v129 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 963;
  }
  if ( (v128 & v10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 968;
  }
  v162 &= ~v10;
  if ( (v128 & v162) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 976;
  }
  if ( (v108 & v128) != v128 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 983;
  }
  if ( (v129 & v108) != v129 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 984;
  }
  if ( (v108 & (v10 | v128)) != v108 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 985;
  }
  v130 = v161;
  if ( (v10 & v161) != v161 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 990;
  }
  if ( (v108 & v130) != v130 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 991;
  }
  if ( (v130 & v145) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 993;
  }
  if ( (v128 & v109) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 994;
  }
  if ( (v145 | v130) != (v109 | v128) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 995;
  }
  v131 = v166;
  if ( (v109 & v166) != v166 )
  {
    WdLogSingleEntry0(1LL);
    v131 = v166;
    WdLogGlobalForLineNumber = 1001;
  }
  if ( (v131 & v10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1002;
  }
  v165 &= ~v10;
  if ( *(_DWORD *)a4 && *(_DWORD *)a4 != v145 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1014;
  }
  *(_DWORD *)a4 = v145;
  v132 = *(_DWORD *)(a4 + 4);
  if ( v132 && v132 != v109 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1016;
  }
  v133 = v170;
  *(_DWORD *)(a4 + 40) = v162;
  *(_DWORD *)(a4 + 56) = v163;
  *(_DWORD *)(a4 + 20) = v168;
  *(_DWORD *)(a4 + 24) = v164;
  *(_DWORD *)(a4 + 48) = v165;
  *(_DWORD *)(a4 + 52) = v166;
  *(_DWORD *)(a4 + 12) = v128;
  v14 = 0;
  *(_DWORD *)(a4 + 156) = v149;
  *(_DWORD *)(a4 + 256) = v144;
  *(_DWORD *)(a4 + 4) = v109;
  *(_DWORD *)(a4 + 8) = v10;
  *(_DWORD *)(a4 + 28) = v108;
  *(_DWORD *)(a4 + 16) = v130;
  *(_DWORD *)(a4 + 68) = v133;
  *(_DWORD *)(a4 + 84) = 0;
  *(_DWORD *)(a4 + 72) = 0;
  if ( (a2 & 0x10000) != 0 )
  {
    *(_DWORD *)(a4 + 60) = -1;
  }
  else
  {
    v134 = ~(v145 | v109) | v150;
    v135 = v133 | *(_DWORD *)(a4 + 60) | v108 | ((v108 & v134) != 0 ? v134 : 0);
    v136 = v10 & v134;
    *(_DWORD *)(a4 + 60) = v135;
    if ( (((v10 & v134) - 1) & v10 & v134) != 0 )
    {
      *(_DWORD *)(a4 + 60) = v134 | v135;
    }
    else if ( v136 )
    {
      *(_DWORD *)(a4 + 60) = v135 | v134 & ~v136;
    }
  }
  FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)a4, 0);
  v137 = v176;
  v182 = 0LL;
  *a5 = v177;
  *a6 = v122;
  v138 = *a7;
  *a7 = v137;
  if ( v138 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v138);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a8, &v181);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a9, &v180);
LABEL_219:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&ClientCommittedVidPnRef, 0LL);
LABEL_220:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v180);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v181);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v182);
  return v14;
}
