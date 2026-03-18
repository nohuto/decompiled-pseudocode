/*
 * XREFs of bDynamicModeChange @ 0x140175A68
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     vEnableSynchronize @ 0x14000C458 (vEnableSynchronize.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     IsvDisableSynchronizeSupported @ 0x14003DBD4 (IsvDisableSynchronizeSupported.c)
 *     vDisableSynchronize @ 0x14003DC4C (vDisableSynchronize.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x14003E410 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140086FB0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109048 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     _bDynamicModeChange_::_64_::_lambda_1_::operator() @ 0x140113C78 (_bDynamicModeChange_--_64_--_lambda_1_--operator().c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14013AD8C (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x140140CFC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x14017596C (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401C5C48 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C5C8C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r15d
  __int64 v7; // r12
  int v8; // eax
  int v9; // eax
  int v10; // r13d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rdi
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  int cy; // edx
  char v18; // al
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  unsigned int v20; // r9d
  struct SURFACE *v21; // r12
  DC *v22; // r13
  struct SURFACE *v23; // rcx
  int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // eax
  struct SURFACE *v30; // rdi
  unsigned int v31; // ebx
  struct SURFACE *v32; // r12
  __int64 v33; // rcx
  HDEV v34; // rcx
  struct PDEV **v35; // rcx
  unsigned int v36; // ebx
  struct SURFACE *v37; // rbx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  ULONG_PTR v41; // rax
  int v42; // ecx
  int v43; // eax
  HDEV v44; // rax
  HDEV v45; // rdx
  __int64 v46; // r8
  _OWORD *v47; // rcx
  __int64 v48; // r9
  HDEV v49; // rax
  __int128 v50; // xmm1
  __int64 v51; // r9
  HDEV v52; // rcx
  HDEV v53; // rax
  __int128 v54; // xmm1
  _OWORD *v55; // rax
  __int64 v56; // rdx
  __int128 v57; // xmm1
  __int64 v58; // r9
  HDEV v59; // rax
  HDEV v60; // rdx
  _OWORD *v61; // rcx
  __int128 v62; // xmm1
  __int64 v63; // r9
  __int128 v64; // xmm1
  HDEV v65; // rdx
  HDEV v66; // rcx
  __int128 v67; // xmm1
  _OWORD *v68; // rax
  __int128 v69; // xmm1
  int v70; // ecx
  int v71; // r8d
  int v72; // r10d
  volatile unsigned int *v73; // r11
  int v74; // ecx
  int v75; // r8d
  int v76; // r10d
  volatile unsigned int *v77; // r11
  int v78; // ecx
  int v79; // r8d
  int v80; // r10d
  volatile unsigned int *v81; // r11
  int v82; // ecx
  int v83; // r8d
  int v84; // r10d
  int v85; // ecx
  int v86; // r8d
  int v87; // r10d
  int v88; // ecx
  int v89; // r8d
  int v90; // r10d
  int v91; // ecx
  int v92; // r8d
  int v93; // r10d
  signed __int32 v94; // ett
  signed __int32 v95; // ett
  __int64 v96; // r8
  _OWORD *v97; // rcx
  __int64 v98; // r9
  HDEV v99; // rax
  HDEV v100; // rdx
  __int128 v101; // xmm1
  __int64 v102; // r9
  __int128 v103; // xmm1
  HDEV v104; // rdx
  HDEV v105; // rcx
  __int128 v106; // xmm1
  _OWORD *v107; // rax
  __int128 v108; // xmm1
  __int64 v109; // rdx
  __int64 v110; // rcx
  int (*v111)(void); // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  void (__fastcall *v114)(HDEV, HDEV); // rax
  unsigned int v116; // [rsp+48h] [rbp-89h]
  struct PDEV *v117; // [rsp+50h] [rbp-81h] BYREF
  struct PDEV *v118; // [rsp+58h] [rbp-79h] BYREF
  struct SURFACE *v119; // [rsp+60h] [rbp-71h] BYREF
  __int64 v120; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v121; // [rsp+70h] [rbp-61h]
  __int64 v122; // [rsp+78h] [rbp-59h]
  int v123; // [rsp+80h] [rbp-51h]
  int v124; // [rsp+84h] [rbp-4Dh]
  DC *v125; // [rsp+88h] [rbp-49h] BYREF
  __int64 v126; // [rsp+90h] [rbp-41h] BYREF
  __int64 v127; // [rsp+98h] [rbp-39h]
  __int64 v128; // [rsp+A0h] [rbp-31h]
  ULONG_PTR v129; // [rsp+A8h] [rbp-29h]
  ULONG_PTR v130; // [rsp+B0h] [rbp-21h]
  struct tagSIZE v131; // [rsp+B8h] [rbp-19h]
  __int64 v132; // [rsp+C0h] [rbp-11h]
  __int64 v133; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v134; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v135[6]; // [rsp+D8h] [rbp+7h] BYREF
  bool v136; // [rsp+150h] [rbp+7Fh] BYREF

  v6 = 0;
  v120 = 0LL;
  v125 = 0LL;
  v132 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v126 = 0LL;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v128 = PALLOCNOZ(2128LL, 0x706D7447u);
    v7 = v128;
    if ( v128 )
    {
      v8 = (_DWORD)a2[10] & 0x400;
      v117 = (struct PDEV *)a1;
      v123 = v8;
      v9 = (_DWORD)a1[10] & 0x400;
      v118 = (struct PDEV *)a2;
      v124 = v9;
      if ( (int)IsvDisableSynchronizeSupported() >= 0 )
      {
        vDisableSynchronize((__int64)a2);
        vDisableSynchronize((__int64)a1);
      }
      v136 = *((_DWORD *)a1 + 536) * *((_DWORD *)a1 + 537) != *((_DWORD *)a2 + 536) * *((_DWORD *)a2 + 537);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v10 = 1;
        v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v117, &v133);
        v119 = (struct SURFACE *)*((_QWORD *)a1 + 318);
        v12 = *v11;
        v129 = *((_QWORD *)a1 + 224);
        v127 = *((_QWORD *)a1 + 223);
        v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v118, &v134);
        v15 = (struct SURFACE *)*((_QWORD *)a2 + 318);
        v121 = v15;
        v16 = *v13;
        v130 = *((_QWORD *)a2 + 224);
        v122 = *((_QWORD *)a2 + 223);
        v131 = v16;
        if ( v16.cx < v12.cx || (cy = v12.cy, v16.cy < v12.cy) )
        {
          v18 = bDynamicIntersectVisRect(v14, v16);
          v15 = v121;
          cy = v12.cy;
          v10 = v18 & 1;
        }
        if ( v12.cx < v16.cx || cy < v131.cy )
          v10 &= bDynamicIntersectVisRect(v15, v12);
        v19 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)a2 + 342);
        if ( v19
          && v19 == *((__int64 (__fastcall **)(__int64, __int64))a1 + 342)
          && *((_QWORD *)a2 + 222) == *((_QWORD *)a1 + 222) )
        {
          if ( !v10 )
            goto LABEL_105;
          v10 = v19(v127, v122);
        }
        if ( v10 )
        {
          v116 = HmgSafeNextObjt(0LL, 1, &v125);
          v20 = v116;
          if ( !v116 )
            goto LABEL_38;
          v21 = v121;
          while ( 1 )
          {
            v22 = v125;
            if ( (*((_DWORD *)v125 + 9) & 0x2000) != 0 )
              goto LABEL_36;
            v23 = (struct SURFACE *)*((_QWORD *)v125 + 62);
            if ( v23 == v119 )
            {
              DC::pSurface(v125, v21);
              *((struct tagSIZE *)v22 + 64) = v16;
            }
            else
            {
              if ( v23 != v21 )
                goto LABEL_27;
              DC::pSurface(v125, v119);
              *((struct tagSIZE *)v22 + 64) = v12;
            }
            v20 = v116;
            *((_DWORD *)v22 + 79) |= 0xFu;
LABEL_27:
            v24 = *((_DWORD *)v22 + 9);
            if ( (v24 & 0x200) != 0 && _bittest((const signed __int32 *)(*((_QWORD *)v22 + 62) + 112LL), 9u) )
              v25 = v24 | 0x8000;
            else
              v25 = v24 & 0xFFFF7FFF;
            v26 = v127;
            *((_DWORD *)v22 + 9) = v25;
            v27 = *((_QWORD *)v22 + 3);
            if ( v27 == v26 )
            {
              *((_QWORD *)v22 + 3) = v122;
              *(_DWORD *)((struct HDEV__ *)v22 + 18) = a2[452];
              v28 = *((_DWORD *)a2 + 528);
LABEL_35:
              *((_DWORD *)v22 + 19) = v28;
              goto LABEL_36;
            }
            if ( v27 == v122 )
            {
              *((_QWORD *)v22 + 3) = v26;
              *(_DWORD *)((struct HDEV__ *)v22 + 18) = a1[452];
              v28 = *((_DWORD *)a1 + 528);
              goto LABEL_35;
            }
LABEL_36:
            v116 = HmgSafeNextObjt(v20, 1, &v125);
            v20 = v116;
            if ( !v116 )
            {
              v7 = v128;
LABEL_38:
              v29 = HmgSafeNextObjt(0LL, 5, &v120);
              v30 = v119;
              v31 = v29;
              if ( v29 )
              {
                v32 = v121;
                do
                {
                  v119 = (struct SURFACE *)&v136;
                  if ( !bDynamicModeChange_::_64_::_lambda_1_::operator()(
                          (_BYTE **)&v119,
                          v120,
                          (__int64)v30,
                          &v117,
                          &v118) )
                    bDynamicModeChange_::_64_::_lambda_1_::operator()((_BYTE **)&v119, v120, (__int64)v32, &v118, &v117);
                  v31 = HmgSafeNextObjt(v31, 5, &v120);
                }
                while ( v31 );
                v7 = v128;
              }
              v33 = 0LL;
LABEL_51:
              v36 = HmgSafeNextObjt(v33, 28, &v126);
              if ( !v36 )
              {
                v37 = v121;
                vChangeWndObjs(v30, a1, v121, a2);
                v38 = v132;
                v39 = HmgShareLockEx(*(_QWORD *)(v132 + 56), 16, 0);
                HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v135, v39);
                *(_QWORD *)(v7 + 976) = v7 + 544;
                *(_DWORD *)(v7 + 728) = 0;
                *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                v40 = *(_QWORD *)(v7 + 976);
                *(_DWORD *)(v7 + 120) = 0;
                *(_QWORD *)(v40 + 248) = 0LL;
                EBRUSHOBJ::vInitBrush(
                  (unsigned int *)a1 + 390,
                  v7,
                  v135[0],
                  *(_QWORD *)(v38 + 3768),
                  v130,
                  (__int64)v37,
                  1u);
                EBRUSHOBJ::vInitBrush(
                  (unsigned int *)a2 + 390,
                  v7,
                  v135[0],
                  *(_QWORD *)(v38 + 3768),
                  v129,
                  (__int64)v30,
                  1u);
                *((_QWORD *)a2 + 224) = v129;
                *((_QWORD *)a2 + 223) = v127;
                v41 = v130;
                *((_QWORD *)a2 + 318) = v30;
                *((_QWORD *)a1 + 224) = v41;
                *((_QWORD *)a1 + 223) = v122;
                *((_QWORD *)a1 + 318) = v37;
                v42 = *((_DWORD *)v30 + 28);
                v43 = *((_DWORD *)v37 + 28);
                if ( (v42 & 0x10000000) != 0 )
                {
                  *((_DWORD *)v37 + 28) = v43 | 0x10000000;
                  if ( a1 != (HDEV)-80LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
                  {
                    v44 = a2 + 20;
LABEL_62:
                    if ( v44 )
                    {
                      *((_DWORD *)v44 + 23) |= 0x10000000u;
                      *((_DWORD *)v44 + 25) |= 0x10000000u;
                    }
                  }
                }
                else if ( (v43 & 0x10000000) != 0 )
                {
                  *((_DWORD *)v30 + 28) = v42 | 0x10000000;
                  if ( a2 != (HDEV)-80LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
                  {
                    v44 = a1 + 20;
                    goto LABEL_62;
                  }
                }
                v45 = a2 + 452;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 222);
                v46 = 2LL;
                v47 = (_OWORD *)v7;
                *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
                v48 = 2LL;
                *((_QWORD *)a1 + 222) = *(_QWORD *)v7;
                v49 = a2 + 452;
                do
                {
                  *v47 = *(_OWORD *)v49;
                  v47[1] = *((_OWORD *)v49 + 1);
                  v47[2] = *((_OWORD *)v49 + 2);
                  v47[3] = *((_OWORD *)v49 + 3);
                  v47[4] = *((_OWORD *)v49 + 4);
                  v47[5] = *((_OWORD *)v49 + 5);
                  v47[6] = *((_OWORD *)v49 + 6);
                  v47 += 8;
                  v50 = *((_OWORD *)v49 + 7);
                  v49 += 32;
                  *(v47 - 1) = v50;
                  --v48;
                }
                while ( v48 );
                v51 = 2LL;
                *v47 = *(_OWORD *)v49;
                v47[1] = *((_OWORD *)v49 + 1);
                v47[2] = *((_OWORD *)v49 + 2);
                *((_QWORD *)v47 + 6) = *((_QWORD *)v49 + 6);
                v52 = a1 + 452;
                v53 = a1 + 452;
                do
                {
                  *(_OWORD *)v45 = *(_OWORD *)v53;
                  *((_OWORD *)v45 + 1) = *((_OWORD *)v53 + 1);
                  *((_OWORD *)v45 + 2) = *((_OWORD *)v53 + 2);
                  *((_OWORD *)v45 + 3) = *((_OWORD *)v53 + 3);
                  *((_OWORD *)v45 + 4) = *((_OWORD *)v53 + 4);
                  *((_OWORD *)v45 + 5) = *((_OWORD *)v53 + 5);
                  *((_OWORD *)v45 + 6) = *((_OWORD *)v53 + 6);
                  v45 += 32;
                  v54 = *((_OWORD *)v53 + 7);
                  v53 += 32;
                  *((_OWORD *)v45 - 1) = v54;
                  --v51;
                }
                while ( v51 );
                *(_OWORD *)v45 = *(_OWORD *)v53;
                *((_OWORD *)v45 + 1) = *((_OWORD *)v53 + 1);
                *((_OWORD *)v45 + 2) = *((_OWORD *)v53 + 2);
                *((_QWORD *)v45 + 6) = *((_QWORD *)v53 + 6);
                v55 = (_OWORD *)v7;
                v56 = 2LL;
                do
                {
                  *(_OWORD *)v52 = *v55;
                  *((_OWORD *)v52 + 1) = v55[1];
                  *((_OWORD *)v52 + 2) = v55[2];
                  *((_OWORD *)v52 + 3) = v55[3];
                  *((_OWORD *)v52 + 4) = v55[4];
                  *((_OWORD *)v52 + 5) = v55[5];
                  *((_OWORD *)v52 + 6) = v55[6];
                  v52 += 32;
                  v57 = v55[7];
                  v55 += 8;
                  *((_OWORD *)v52 - 1) = v57;
                  --v56;
                }
                while ( v56 );
                v58 = 2LL;
                *(_OWORD *)v52 = *v55;
                *((_OWORD *)v52 + 1) = v55[1];
                *((_OWORD *)v52 + 2) = v55[2];
                *((_QWORD *)v52 + 6) = *((_QWORD *)v55 + 6);
                v59 = a2 + 530;
                v60 = a2 + 530;
                v61 = (_OWORD *)v7;
                do
                {
                  *v61 = *(_OWORD *)v60;
                  v61[1] = *((_OWORD *)v60 + 1);
                  v61[2] = *((_OWORD *)v60 + 2);
                  v61[3] = *((_OWORD *)v60 + 3);
                  v61[4] = *((_OWORD *)v60 + 4);
                  v61[5] = *((_OWORD *)v60 + 5);
                  v61[6] = *((_OWORD *)v60 + 6);
                  v61 += 8;
                  v62 = *((_OWORD *)v60 + 7);
                  v60 += 32;
                  *(v61 - 1) = v62;
                  --v58;
                }
                while ( v58 );
                v63 = 2LL;
                *v61 = *(_OWORD *)v60;
                v61[1] = *((_OWORD *)v60 + 1);
                v61[2] = *((_OWORD *)v60 + 2);
                v64 = *((_OWORD *)v60 + 3);
                v65 = a1 + 530;
                v61[3] = v64;
                v66 = a1 + 530;
                do
                {
                  *(_OWORD *)v59 = *(_OWORD *)v66;
                  *((_OWORD *)v59 + 1) = *((_OWORD *)v66 + 1);
                  *((_OWORD *)v59 + 2) = *((_OWORD *)v66 + 2);
                  *((_OWORD *)v59 + 3) = *((_OWORD *)v66 + 3);
                  *((_OWORD *)v59 + 4) = *((_OWORD *)v66 + 4);
                  *((_OWORD *)v59 + 5) = *((_OWORD *)v66 + 5);
                  *((_OWORD *)v59 + 6) = *((_OWORD *)v66 + 6);
                  v59 += 32;
                  v67 = *((_OWORD *)v66 + 7);
                  v66 += 32;
                  *((_OWORD *)v59 - 1) = v67;
                  --v63;
                }
                while ( v63 );
                *(_OWORD *)v59 = *(_OWORD *)v66;
                *((_OWORD *)v59 + 1) = *((_OWORD *)v66 + 1);
                *((_OWORD *)v59 + 2) = *((_OWORD *)v66 + 2);
                *((_OWORD *)v59 + 3) = *((_OWORD *)v66 + 3);
                v68 = (_OWORD *)v7;
                do
                {
                  *(_OWORD *)v65 = *v68;
                  *((_OWORD *)v65 + 1) = v68[1];
                  *((_OWORD *)v65 + 2) = v68[2];
                  *((_OWORD *)v65 + 3) = v68[3];
                  *((_OWORD *)v65 + 4) = v68[4];
                  *((_OWORD *)v65 + 5) = v68[5];
                  *((_OWORD *)v65 + 6) = v68[6];
                  v65 += 32;
                  v69 = v68[7];
                  v68 += 8;
                  *((_OWORD *)v65 - 1) = v69;
                  --v46;
                }
                while ( v46 );
                *(_OWORD *)v65 = *v68;
                *((_OWORD *)v65 + 1) = v68[1];
                *((_OWORD *)v65 + 2) = v68[2];
                *((_OWORD *)v65 + 3) = v68[3];
                *(_OWORD *)v7 = *(_OWORD *)(a2 + 610);
                *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 614);
                *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 618);
                *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 622);
                *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 626);
                *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 630);
                *(_OWORD *)(a2 + 610) = *(_OWORD *)(a1 + 610);
                *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
                *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
                *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
                *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
                *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
                *(_OWORD *)(a1 + 610) = *(_OWORD *)v7;
                *(_OWORD *)(a1 + 614) = *(_OWORD *)(v7 + 16);
                *(_OWORD *)(a1 + 618) = *(_OWORD *)(v7 + 32);
                *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 48);
                *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 64);
                *(_OWORD *)(a1 + 630) = *(_OWORD *)(v7 + 80);
                *(_QWORD *)v7 = *((_QWORD *)a2 + 319);
                *((_QWORD *)a2 + 319) = *((_QWORD *)a1 + 319);
                *((_QWORD *)a1 + 319) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 320);
                *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
                *((_QWORD *)a1 + 320) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 321);
                *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
                *((_QWORD *)a1 + 321) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
                *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
                *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 323);
                *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
                *((_QWORD *)a1 + 323) = *(_QWORD *)v7;
                *(_DWORD *)(struct HDEV__ *)v7 = a2[886];
                a2[886] = a1[886];
                *(_DWORD *)(a1 + 886) = *(_DWORD *)(HDEV)v7;
                *(_DWORD *)(struct HDEV__ *)v7 = a2[887];
                a2[887] = a1[887];
                *(_DWORD *)(a1 + 887) = *(_DWORD *)(HDEV)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
                *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
                *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
                *(_DWORD *)(struct HDEV__ *)v7 = a2[650];
                a2[650] = a1[650];
                *(_DWORD *)(a1 + 650) = *(_DWORD *)(HDEV)v7;
                *(_DWORD *)(struct HDEV__ *)v7 = a2[651];
                a2[651] = a1[651];
                *(_DWORD *)(a1 + 651) = *(_DWORD *)(HDEV)v7;
                v70 = (_DWORD)a2[10] & 0x20000;
                if ( ((_DWORD)a1[10] & 0x20000) != v70 )
                {
                  SETFLAG(v70, (volatile unsigned int *)a1 + 10, 0x20000);
                  SETFLAG(v72, v73, v71);
                }
                v74 = (_DWORD)a2[10] & 0x1000000;
                if ( ((_DWORD)a1[10] & 0x1000000) != v74 )
                {
                  SETFLAG(v74, (volatile unsigned int *)a1 + 10, 0x1000000);
                  SETFLAG(v76, v77, v75);
                }
                v78 = (_DWORD)a2[10] & 0x20000000;
                if ( ((_DWORD)a1[10] & 0x20000000) != v78 )
                {
                  SETFLAG(v78, (volatile unsigned int *)a1 + 10, 0x20000000);
                  SETFLAG(v80, v81, v79);
                }
                v82 = (_DWORD)a2[10] & 0x2000000;
                if ( ((_DWORD)a1[10] & 0x2000000) != v82 )
                {
                  SETFLAG(v82, (volatile unsigned int *)a1 + 10, 0x2000000);
                  SETFLAG(v84, (volatile unsigned int *)a2 + 10, v83);
                }
                v85 = (_DWORD)a2[10] & 0x8000000;
                if ( ((_DWORD)a1[10] & 0x8000000) != v85 )
                {
                  SETFLAG(v85, (volatile unsigned int *)a1 + 10, 0x8000000);
                  SETFLAG(v87, (volatile unsigned int *)a2 + 10, v86);
                }
                v88 = (_DWORD)a2[10] & 0x4000000;
                if ( ((_DWORD)a1[10] & 0x4000000) != v88 )
                {
                  SETFLAG(v88, (volatile unsigned int *)a1 + 10, 0x4000000);
                  SETFLAG(v90, (volatile unsigned int *)a2 + 10, v89);
                }
                v91 = (_DWORD)a2[10] & 0x40000000;
                if ( ((_DWORD)a1[10] & 0x40000000) != v91 )
                {
                  SETFLAG(v91, (volatile unsigned int *)a1 + 10, 0x40000000);
                  SETFLAG(v93, (volatile unsigned int *)a2 + 10, v92);
                }
                _m_prefetchw(a1 + 10);
                do
                  v94 = *((_DWORD *)a1 + 10);
                while ( v94 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v94 & 0xEFFFFFFF, v94) );
                _m_prefetchw(a2 + 10);
                do
                  v95 = *((_DWORD *)a2 + 10);
                while ( v95 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v95 & 0xEFFFFFFF, v95) );
                *((_QWORD *)a1 + 4) = 0LL;
                v96 = 6LL;
                *((_QWORD *)a2 + 4) = 0LL;
                v97 = (_OWORD *)v7;
                v98 = 6LL;
                *(_QWORD *)v7 = *(_QWORD *)(a2 + 425);
                *(_QWORD *)(a2 + 425) = *(_QWORD *)(a1 + 425);
                *(_QWORD *)(a1 + 425) = *(_QWORD *)v7;
                *(_OWORD *)v7 = *((_OWORD *)a2 + 91);
                *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 92);
                *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 93);
                *((_OWORD *)a2 + 91) = *((_OWORD *)a1 + 91);
                *((_OWORD *)a2 + 92) = *((_OWORD *)a1 + 92);
                *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
                *((_OWORD *)a1 + 91) = *(_OWORD *)v7;
                *((_OWORD *)a1 + 92) = *(_OWORD *)(v7 + 16);
                *((_OWORD *)a1 + 93) = *(_OWORD *)(v7 + 32);
                *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
                *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
                *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
                *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
                *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 181);
                *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
                *((_QWORD *)a1 + 181) = *(_QWORD *)v7;
                v99 = a2 + 670;
                v100 = a2 + 670;
                do
                {
                  *v97 = *(_OWORD *)v100;
                  v97[1] = *((_OWORD *)v100 + 1);
                  v97[2] = *((_OWORD *)v100 + 2);
                  v97[3] = *((_OWORD *)v100 + 3);
                  v97[4] = *((_OWORD *)v100 + 4);
                  v97[5] = *((_OWORD *)v100 + 5);
                  v97[6] = *((_OWORD *)v100 + 6);
                  v97 += 8;
                  v101 = *((_OWORD *)v100 + 7);
                  v100 += 32;
                  *(v97 - 1) = v101;
                  --v98;
                }
                while ( v98 );
                v102 = 6LL;
                *v97 = *(_OWORD *)v100;
                v97[1] = *((_OWORD *)v100 + 1);
                v97[2] = *((_OWORD *)v100 + 2);
                v103 = *((_OWORD *)v100 + 3);
                v104 = a1 + 670;
                v97[3] = v103;
                v105 = a1 + 670;
                do
                {
                  *(_OWORD *)v99 = *(_OWORD *)v105;
                  *((_OWORD *)v99 + 1) = *((_OWORD *)v105 + 1);
                  *((_OWORD *)v99 + 2) = *((_OWORD *)v105 + 2);
                  *((_OWORD *)v99 + 3) = *((_OWORD *)v105 + 3);
                  *((_OWORD *)v99 + 4) = *((_OWORD *)v105 + 4);
                  *((_OWORD *)v99 + 5) = *((_OWORD *)v105 + 5);
                  *((_OWORD *)v99 + 6) = *((_OWORD *)v105 + 6);
                  v99 += 32;
                  v106 = *((_OWORD *)v105 + 7);
                  v105 += 32;
                  *((_OWORD *)v99 - 1) = v106;
                  --v102;
                }
                while ( v102 );
                *(_OWORD *)v99 = *(_OWORD *)v105;
                *((_OWORD *)v99 + 1) = *((_OWORD *)v105 + 1);
                *((_OWORD *)v99 + 2) = *((_OWORD *)v105 + 2);
                *((_OWORD *)v99 + 3) = *((_OWORD *)v105 + 3);
                v107 = (_OWORD *)v7;
                do
                {
                  *(_OWORD *)v104 = *v107;
                  *((_OWORD *)v104 + 1) = v107[1];
                  *((_OWORD *)v104 + 2) = v107[2];
                  *((_OWORD *)v104 + 3) = v107[3];
                  *((_OWORD *)v104 + 4) = v107[4];
                  *((_OWORD *)v104 + 5) = v107[5];
                  *((_OWORD *)v104 + 6) = v107[6];
                  v104 += 32;
                  v108 = v107[7];
                  v107 += 8;
                  *((_OWORD *)v104 - 1) = v108;
                  --v96;
                }
                while ( v96 );
                *(_OWORD *)v104 = *v107;
                *((_OWORD *)v104 + 1) = v107[1];
                *((_OWORD *)v104 + 2) = v107[2];
                *((_OWORD *)v104 + 3) = v107[3];
                *(_QWORD *)v7 = *((_QWORD *)a2 + 214);
                *((_QWORD *)a2 + 214) = *((_QWORD *)a1 + 214);
                *((_QWORD *)a1 + 214) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
                *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
                *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
                *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
                *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 218);
                *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
                *((_QWORD *)a1 + 218) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
                *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
                *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
                *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 330);
                *((_QWORD *)a2 + 330) = *((_QWORD *)a1 + 330);
                *((_QWORD *)a1 + 330) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
                *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
                *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
                *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
                *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
                *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
                *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
                *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
                *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
                *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
                (*((void (__fastcall **)(_QWORD, HDEV))a2 + 336))(*((_QWORD *)a2 + 223), a2);
                (*((void (__fastcall **)(_QWORD, HDEV))a1 + 336))(*((_QWORD *)a1 + 223), a1);
                PDEVOBJ::bDisabled((PDEVOBJ *)&v117, v123);
                PDEVOBJ::bDisabled((PDEVOBJ *)&v118, v124);
                vResetSurfacePalette(a1);
                vResetSurfacePalette(a2);
                v111 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v110, v109) + 24) + 1608LL);
                if ( v111 )
                {
                  if ( v111() >= 0 )
                  {
                    v114 = *(void (__fastcall **)(HDEV, HDEV))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v113, v112) + 24)
                                                             + 1616LL);
                    if ( v114 )
                      v114(a1, a2);
                  }
                }
                ++*(_DWORD *)(v38 + 3640);
                v6 = 1;
                HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v135);
                break;
              }
              v34 = *(HDEV *)(v126 + 40);
              if ( v34 == a1 )
              {
                *(_QWORD *)(v126 + 40) = a2;
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v118);
                v35 = &v117;
                goto LABEL_49;
              }
              if ( v34 == a2 )
              {
                *(_QWORD *)(v126 + 40) = a1;
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v117);
                v35 = &v118;
LABEL_49:
                PDEVOBJ::vUnreferencePdev((PDEVOBJ *)v35);
              }
              v33 = v36;
              goto LABEL_51;
            }
          }
        }
      }
LABEL_105:
      GreDeleteFastMutex((char *)v7);
      vEnableSynchronize((__int64)a2);
      vEnableSynchronize((__int64)a1);
    }
  }
  return v6;
}
