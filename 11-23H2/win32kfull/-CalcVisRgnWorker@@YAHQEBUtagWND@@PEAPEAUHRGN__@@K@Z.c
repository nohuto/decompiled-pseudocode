/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0050300
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C004FED0 (CalcVisRgn.c)
 * Callees:
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C004DDBC (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004F3FC (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C004F414 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0051224 (PhysicalToLogicalInPlaceRect.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0082684 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00B16C0 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00BC49C (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01A76E8 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01B9060 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01B915C (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rdi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  int v9; // r15d
  char *v10; // r9
  int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // r8
  LONG right; // edx
  LONG v16; // ecx
  LONG top; // ecx
  LONG bottom; // edx
  struct tagWND *v19; // r13
  HRGN v20; // rsi
  HRGN v21; // r8
  _QWORD *v22; // rbx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // r14
  unsigned __int16 v31; // bx
  __int64 v32; // rbx
  __int64 v33; // r8
  char *v34; // r15
  HRGN v35; // r14
  LONG left; // edx
  LONG v37; // ecx
  LONG v38; // edx
  LONG v39; // ecx
  int v40; // ebx
  int v41; // ebx
  struct tagWND *v42; // rax
  LONG v43; // ecx
  LONG v44; // edx
  LONG v45; // ecx
  LONG v46; // edx
  struct tagWND *v47; // r12
  int v48; // esi
  int v49; // ecx
  int v50; // r15d
  struct tagWND *v51; // r13
  int v52; // eax
  __int64 v53; // rdx
  struct tagWND *v54; // rdi
  int v55; // r14d
  __int64 v56; // rdx
  LONG *v57; // rbx
  unsigned int v58; // eax
  bool v59; // zf
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  char v63; // cl
  HRGN v64; // r12
  __int64 v65; // rdi
  int v66; // r14d
  __int64 v67; // rdx
  LONG *v68; // rbx
  unsigned int v69; // eax
  bool v70; // zf
  __int64 v71; // rcx
  int v72; // eax
  int v73; // r14d
  int v74; // r13d
  struct _RECTL *v75; // rbx
  const struct tagWND **v76; // rdi
  struct _RECTL *v77; // r15
  __int64 v78; // r12
  const struct tagWND **v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // r10
  struct _RECTL *v83; // rbx
  HRGN *v84; // rdi
  __int64 v85; // rcx
  HRGN EmptyRgn; // r15
  __int64 i; // rbx
  const struct tagWND **v88; // rdi
  __int64 v89; // r9
  HRGN v90; // rdi
  HRGN v91; // rsi
  HRGN *v92; // rbx
  __int64 v93; // r8
  int v94; // r15d
  const struct tagWND *v95; // r13
  struct tagWND *v96; // r9
  const struct tagWND *v97; // rbx
  struct tagWND *v98; // r12
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r9
  struct tagWND *v102; // rdi
  int v103; // esi
  struct tagWND *v104; // r14
  BOOL v105; // edi
  unsigned int v106; // ebx
  int v108; // [rsp+38h] [rbp-D0h]
  char *v109; // [rsp+40h] [rbp-C8h]
  struct tagWND *v110; // [rsp+48h] [rbp-C0h] BYREF
  HRGN v111; // [rsp+50h] [rbp-B8h]
  __int64 v112; // [rsp+58h] [rbp-B0h]
  HRGN v113; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v114; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+78h] [rbp-90h]
  HRGN *v116; // [rsp+80h] [rbp-88h]
  __int128 v117; // [rsp+88h] [rbp-80h] BYREF
  __int128 v118; // [rsp+98h] [rbp-70h]
  HRGN v119; // [rsp+A8h] [rbp-60h]
  struct _RECTL *v120; // [rsp+B0h] [rbp-58h]
  _QWORD *v121; // [rsp+B8h] [rbp-50h]
  __int64 v122; // [rsp+C0h] [rbp-48h] BYREF
  char v123[40]; // [rsp+C8h] [rbp-40h] BYREF
  int v124; // [rsp+F0h] [rbp-18h]
  __int64 v125; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v126; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v127; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v128[240]; // [rsp+128h] [rbp+20h] BYREF
  struct _RECTL v129; // [rsp+218h] [rbp+110h] BYREF

  LODWORD(v112) = a3;
  v116 = a2;
  v110 = a1;
  v127 = 0LL;
  LODWORD(v115) = 0;
  memset_0(v128, 0, sizeof(v128));
  v3 = v110;
  v111 = 0LL;
  v117 = 0LL;
  v119 = 0LL;
  v4 = *((_QWORD *)v110 + 13);
  v118 = 0LL;
  if ( v4 )
  {
    v5 = *((_QWORD *)v110 + 3);
    if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || v4 != *(_QWORD *)(v6 + 24) )
    {
      v7 = (char *)v110 + 40;
      v109 = (char *)v110 + 40;
      if ( (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v110 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
      {
        WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v110);
        if ( WindowCoordinateSpaceDpi == GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v110 + 13)) )
        {
          v9 = 0;
          v13 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v7 + 256LL));
          v108 = 0;
          if ( !v13 )
            goto LABEL_8;
          v14 = *(_DWORD *)(*(_QWORD *)v7 + 288LL) >> 8;
          LOWORD(v14) = v14 & 0x1FF;
          GetMonitorRectForDpi(&v125, v13, v14);
          if ( *(_QWORD *)(*(_QWORD *)(v13 + 40) + 28LL) == v125 )
          {
            v108 = 0;
            goto LABEL_8;
          }
        }
        v9 = 1;
        v108 = 1;
LABEL_8:
        v3 = v110;
        v10 = (char *)v110 + 40;
        goto LABEL_9;
      }
    }
  }
  v9 = 0;
  v10 = (char *)v110 + 40;
  v109 = (char *)v110 + 40;
  v108 = 0;
LABEL_9:
  v11 = v112;
  v12 = *(_QWORD *)v10;
  if ( (v112 & 1) != 0 )
  {
    v127 = *(struct _RECTL *)(v12 + 88);
  }
  else
  {
    v127 = *(struct _RECTL *)(v12 + 104);
    right = v127.right;
    v16 = _mm_cvtsi128_si32((__m128i)v127);
    if ( v16 <= *(_DWORD *)(v12 + 88) )
      v16 = *(_DWORD *)(v12 + 88);
    v127.left = v16;
    if ( v127.right >= *(_DWORD *)(v12 + 96) )
      right = *(_DWORD *)(v12 + 96);
    v127.right = right;
    if ( v16 >= right )
      goto LABEL_25;
    top = v127.top;
    bottom = v127.bottom;
    if ( v127.top <= *(_DWORD *)(v12 + 92) )
      top = *(_DWORD *)(v12 + 92);
    v127.top = top;
    if ( v127.bottom >= *(_DWORD *)(v12 + 100) )
      bottom = *(_DWORD *)(v12 + 100);
    v127.bottom = bottom;
    if ( top >= bottom )
LABEL_25:
      v127 = 0LL;
  }
  v19 = v3;
  v20 = (HRGN)*((_QWORD *)v3 + 13);
  v21 = *(HRGN *)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 8LL) + 24LL);
  v113 = v21;
  v22 = (_QWORD *)*((_QWORD *)v21 + 13);
  v121 = v22;
  if ( !v20 )
  {
LABEL_241:
    v64 = v111;
LABEL_242:
    SetOrCreateRectRgnIndirectPublic(v116, gZero);
    v106 = 0;
    goto LABEL_243;
  }
  if ( v20 != (HRGN)v22 )
  {
    while ( 1 )
    {
      if ( *((_QWORD **)v20 + 13) == v22 && (*(_WORD *)(*((_QWORD *)v20 + 5) + 42LL) & 0x2FFF) != 0x29D )
        goto LABEL_241;
      if ( (v11 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v20 + 5) + 42LL) & 0x2FFF) == 0x29D )
        goto LABEL_93;
      if ( (v11 & 0x4000) != 0 )
      {
        v23 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL);
        if ( ((v23 & 0x80000) != 0 || (v23 & 0x20000000) != 0) && ((v23 & 0x2000000) == 0 || v20 == v21) )
          goto LABEL_93;
      }
      if ( (v11 & 0x8000000) != 0 && (*(_WORD *)(*((_QWORD *)v20 + 5) + 42LL) & 0x2FFF) == 0x29D )
      {
        v24 = IsWindowDesktopComposed(v20);
        v10 = v109;
        v3 = v110;
        if ( v24 )
        {
          v21 = v113;
          LOWORD(v11) = v112;
          goto LABEL_93;
        }
      }
      v25 = v115;
      v26 = *((_QWORD *)v20 + 5);
      if ( *(_QWORD *)(v26 + 168) )
        v25 = 1;
      LODWORD(v115) = v25;
      if ( v9 )
        goto LABEL_70;
      v27 = *((_QWORD *)v20 + 13);
      if ( !v27
        || (v28 = *((_QWORD *)v20 + 3)) != 0 && (v29 = *(_QWORD *)(v28 + 8)) != 0 && v27 == *(_QWORD *)(v29 + 24)
        || (v30 = v10,
            (((unsigned __int16)(*(_DWORD *)(v26 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v27 + 40)
                                                                                             + 288LL) >> 8)) & 0x1FF) == 0) )
      {
        v34 = (char *)v3 + 224;
        v114 = *(_OWORD *)(v26 + 104);
        goto LABEL_54;
      }
      v31 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v20);
      if ( v31 != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v20 + 13)) )
        goto LABEL_68;
      v109 = v30;
      v32 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v20 + 5) + 256LL));
      if ( !v32 )
      {
LABEL_70:
        v41 = 0;
        v42 = v110;
        v114 = *(_OWORD *)(*((_QWORD *)v20 + 5) + 104LL);
        v34 = (char *)v110 + 224;
        if ( v108 )
          goto LABEL_71;
      }
      else
      {
        v33 = *(_DWORD *)(*((_QWORD *)v20 + 5) + 288LL) >> 8;
        LOWORD(v33) = v33 & 0x1FF;
        GetMonitorRectForDpi(&v126, v32, v33);
        if ( *(_QWORD *)(*(_QWORD *)(v32 + 40) + 28LL) != v126 )
        {
LABEL_68:
          v41 = 0;
          v108 = 1;
          v109 = v30;
          v42 = v110;
          v114 = *(_OWORD *)(*((_QWORD *)v20 + 5) + 104LL);
          v34 = (char *)v110 + 224;
LABEL_71:
          v35 = v20 + 56;
          if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v114, v20 + 56, v20, &v127, v34, v42) )
          {
            v41 = 1;
          }
          else
          {
            LogicalToPhysicalInPlaceRectWithSubpixel(v20, &v114, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v110, &v114, 0LL);
          }
          if ( v41 )
            goto LABEL_65;
          goto LABEL_55;
        }
        v34 = (char *)v110 + 224;
        v109 = v30;
        v114 = *(_OWORD *)(*((_QWORD *)v20 + 5) + 104LL);
      }
LABEL_54:
      PhysicalToLogicalInPlaceRect(v19, &v114);
      v35 = v20 + 56;
LABEL_55:
      left = v127.left;
      v37 = v127.right;
      if ( v127.left <= (int)v114 )
        left = v114;
      v127.left = left;
      if ( v127.right >= SDWORD2(v114) )
        v37 = DWORD2(v114);
      v127.right = v37;
      if ( left >= v37 )
        goto LABEL_240;
      v38 = v127.top;
      v39 = v127.bottom;
      if ( v127.top <= SDWORD1(v114) )
        v38 = DWORD1(v114);
      v127.top = v38;
      if ( v127.bottom >= SHIDWORD(v114) )
        v39 = HIDWORD(v114);
      v127.bottom = v39;
      if ( v38 >= v39 )
      {
LABEL_240:
        v127 = 0LL;
        goto LABEL_241;
      }
LABEL_65:
      v40 = 0;
      v114 = *(_OWORD *)(*((_QWORD *)v20 + 5) + 88LL);
      if ( v108 )
      {
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v114, v35, v20, &v127, v34, v110) )
        {
          v40 = 1;
        }
        else
        {
          LogicalToPhysicalInPlaceRectWithSubpixel(v20, &v114, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(v110, &v114, 0LL);
        }
        if ( v40 )
          goto LABEL_90;
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v19, &v114);
      }
      v43 = v127.left;
      v44 = v127.right;
      if ( v127.left <= (int)v114 )
        v43 = v114;
      v127.left = v43;
      if ( v127.right >= SDWORD2(v114) )
        v44 = DWORD2(v114);
      v127.right = v44;
      if ( v43 >= v44 )
        goto LABEL_240;
      v45 = v127.top;
      v46 = v127.bottom;
      if ( v127.top <= SDWORD1(v114) )
        v45 = DWORD1(v114);
      v127.top = v45;
      if ( v127.bottom >= SHIDWORD(v114) )
        v46 = HIDWORD(v114);
      v127.bottom = v46;
      if ( v45 >= v46 )
        goto LABEL_240;
LABEL_90:
      v22 = v121;
      v19 = (struct tagWND *)v20;
      v20 = (HRGN)*((_QWORD *)v20 + 13);
      v10 = v109;
      v3 = v110;
      v21 = v113;
      v11 = v112;
      if ( v20 == (HRGN)v121 )
        goto LABEL_93;
      v9 = v108;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)v10 + 42LL) & 0x2FFF) != 0x29D )
    goto LABEL_241;
LABEL_93:
  v47 = (struct tagWND *)*((_QWORD *)v3 + 13);
  v48 = 0;
  *((_QWORD *)&v118 + 1) = v128;
  *(_QWORD *)((char *)&v117 + 4) = 0x1E00000000LL;
  v49 = v11 & 0x10;
  *(_QWORD *)&v118 = v128;
  v50 = 30;
  v51 = v3;
  if ( v47 == (struct tagWND *)v22 )
  {
    v64 = v111;
    goto LABEL_133;
  }
  v52 = v11 & 0x4000;
  LODWORD(v111) = v52;
  do
  {
    if ( v52 )
    {
      v53 = *((_QWORD *)v51 + 5);
      if ( (*(_BYTE *)(v53 + 27) & 0x20) != 0
        && ((*(_DWORD *)(v53 + 24) & 0x2000000) == 0 || v47 == (struct tagWND *)v21) )
      {
        break;
      }
    }
    if ( !v49 )
      goto LABEL_130;
    v54 = (struct tagWND *)*((_QWORD *)v47 + 14);
    if ( v54 == v51 )
      goto LABEL_130;
    v55 = 0;
    if ( !v54 )
      goto LABEL_130;
    while ( v54 != v51 )
    {
      v56 = *((_QWORD *)v54 + 5);
      v57 = (LONG *)(v56 + 88);
      if ( !v55 )
      {
        v58 = *(_DWORD *)(*(_QWORD *)v10 + 288LL);
        if ( *(_QWORD *)(*(_QWORD *)v10 + 256LL) == *(_QWORD *)(v56 + 256) )
        {
          v59 = (((unsigned __int16)(v58 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v56 + 288) >> 8)) & 0x1FF) == 0;
        }
        else
        {
          if ( (v58 & 0xF) != 2 )
            goto LABEL_109;
          v59 = (*(_DWORD *)(v56 + 288) & 0xF) == 2;
        }
        if ( !v59 )
LABEL_109:
          v55 = 1;
      }
      if ( (*(_BYTE *)(v56 + 31) & 0x10) == 0 || (*(_BYTE *)(v56 + 26) & 8) != 0 || (*(_BYTE *)(v56 + 24) & 0x20) != 0 )
        goto LABEL_116;
      if ( v55 )
      {
        if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v57, (char *)v54 + 224, v54, &v127, (char *)v3 + 224, v3) )
          goto LABEL_115;
      }
      else if ( v127.left >= *(_DWORD *)(v56 + 96)
             || *v57 >= v127.right
             || v127.top >= *(_DWORD *)(v56 + 100)
             || *(_DWORD *)(v56 + 92) >= v127.bottom )
      {
        goto LABEL_116;
      }
      if ( *v57 >= v57[2] || v57[1] >= v57[3] )
      {
LABEL_115:
        v10 = v109;
        goto LABEL_116;
      }
      if ( v48 == v50 )
      {
        if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v117) )
        {
LABEL_161:
          v64 = v119;
          goto LABEL_242;
        }
        v50 = DWORD2(v117);
        v48 = DWORD1(v117);
      }
      v10 = v109;
      v61 = v48++;
      DWORD1(v117) = v48;
      *(_QWORD *)(v118 + 8 * v61) = v54;
LABEL_116:
      v54 = (struct tagWND *)*((_QWORD *)v54 + 11);
      v3 = v110;
      if ( !v54 )
        break;
    }
    v60 = v108;
    v22 = v121;
    if ( v55 )
      v60 = 1;
    v108 = v60;
LABEL_130:
    v62 = *((_QWORD *)v47 + 5);
    v51 = v47;
    v47 = (struct tagWND *)*((_QWORD *)v47 + 13);
    v21 = v113;
    v63 = *(_BYTE *)(v62 + 31);
    v52 = (int)v111;
    v49 = v63 & 4;
  }
  while ( v47 != (struct tagWND *)v22 );
  v64 = v119;
  LOBYTE(v11) = v112;
  v111 = v119;
LABEL_133:
  if ( (v11 & 8) == 0 )
    goto LABEL_165;
  v65 = *((_QWORD *)v3 + 14);
  if ( !v65 )
    goto LABEL_165;
  v66 = 0;
  while ( 2 )
  {
    v67 = *(_QWORD *)(v65 + 40);
    v68 = (LONG *)(v67 + 88);
    if ( !v66 )
    {
      v69 = *(_DWORD *)(*(_QWORD *)v10 + 288LL);
      if ( *(_QWORD *)(*(_QWORD *)v10 + 256LL) == *(_QWORD *)(v67 + 256) )
      {
        v70 = (((unsigned __int16)(v69 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v67 + 288) >> 8)) & 0x1FF) == 0;
        goto LABEL_141;
      }
      if ( (v69 & 0xF) != 2 )
        goto LABEL_142;
      v70 = (*(_DWORD *)(v67 + 288) & 0xF) == 2;
LABEL_141:
      if ( !v70 )
LABEL_142:
        v66 = 1;
    }
    if ( (*(_BYTE *)(v67 + 31) & 0x10) != 0 && (*(_BYTE *)(v67 + 26) & 8) == 0 && (*(_BYTE *)(v67 + 24) & 0x20) == 0 )
    {
      if ( v66 )
      {
        if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v68, v65 + 224, v65, &v127, (char *)v3 + 224, v3) )
          goto LABEL_148;
        goto LABEL_155;
      }
      if ( v127.left < *(_DWORD *)(v67 + 96)
        && *v68 < v127.right
        && v127.top < *(_DWORD *)(v67 + 100)
        && *(_DWORD *)(v67 + 92) < v127.bottom )
      {
LABEL_155:
        if ( *v68 >= v68[2] || v68[1] >= v68[3] )
        {
LABEL_148:
          v10 = v109;
        }
        else
        {
          if ( v48 == v50 )
          {
            if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v117) )
              goto LABEL_161;
            v50 = DWORD2(v117);
            v48 = DWORD1(v117);
          }
          v10 = v109;
          v71 = v48++;
          DWORD1(v117) = v48;
          *(_QWORD *)(v118 + 8 * v71) = v65;
        }
      }
    }
    v65 = *(_QWORD *)(v65 + 88);
    if ( v65 )
    {
      v3 = v110;
      continue;
    }
    break;
  }
  v72 = v108;
  v64 = v119;
  if ( v66 )
    v72 = 1;
  v109 = v10;
  v108 = v72;
  v111 = v119;
LABEL_165:
  if ( v48 <= 0 )
  {
    if ( *(char *)(*(_QWORD *)v10 + 19LL) < 0 )
      v127 = 0LL;
    v92 = v116;
    if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v116, &v127) )
      goto LABEL_210;
    goto LABEL_242;
  }
  v73 = 0;
  v74 = 0;
  if ( v48 > 30 )
  {
    v120 = (struct _RECTL *)Win32AllocPoolWithQuotaZInit(16LL * v48, 1769370453LL);
    v75 = v120;
    if ( v120 )
      goto LABEL_169;
    goto LABEL_242;
  }
  v75 = &v129;
  v120 = &v129;
LABEL_169:
  v76 = (const struct tagWND **)v118;
  v77 = v75;
  v78 = (unsigned int)v48;
  v79 = (const struct tagWND **)v118;
  do
  {
    v80 = *((_QWORD *)*v76 + 5);
    if ( *(_QWORD *)(v80 + 168) )
    {
      ++v74;
      *v79++ = *v76;
    }
    else
    {
      ++v73;
      *v77++ = *(struct _RECTL *)(v80 + 88);
      if ( v108 && IsDpiBoundaryBetweenWindows(v110, *v76) )
      {
        v83 = &v75[v82];
        LogicalToPhysicalInPlaceRectWithSubpixel(v81, v83, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v110, v83, 0LL);
        v75 = v120;
      }
    }
    ++v76;
    --v78;
  }
  while ( v78 );
  v84 = v116;
  if ( !*v116 )
    *v84 = (HRGN)CreateEmptyRgn(v80);
  if ( v73 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v122, *v84, 0, 0);
    if ( v122 && !RGNOBJAPI::bSubtract((RGNOBJAPI *)&v122, &v127, v75, v73) && v122 )
      RGNOBJ::vSet((RGNOBJ *)&v122);
    if ( !v124 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v122);
    if ( v122 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v122 + 12));
      v111 = v119;
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v123);
  }
  else
  {
    SetRectRgnIndirect(*v84, &v127);
  }
  EmptyRgn = v111;
  if ( !v111 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v85);
    v111 = EmptyRgn;
  }
  if ( v74 > 0 )
  {
    for ( i = 0LL; i < v74; ++i )
    {
      v88 = (const struct tagWND **)(v118 + 8 * i);
      SetRectRgnIndirect(EmptyRgn, *((_QWORD *)*v88 + 5) + 88LL);
      GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*((_QWORD *)*v88 + 5) + 168LL), 1LL);
      if ( v108 && IsDpiBoundaryBetweenWindows(v110, *v88) )
      {
        v113 = EmptyRgn;
        v90 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v89, &v113, 1LL) )
          v90 = v113;
        v91 = 0LL;
        if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v110, &v113, 1) )
          v91 = v113;
        if ( v113 != EmptyRgn )
          GreCombineRgn(EmptyRgn, v113, 0LL, 5LL);
        if ( v90 )
          GreDeleteObject(v90);
        if ( v91 )
          GreDeleteObject(v91);
      }
      if ( (unsigned int)GreCombineRgn(*v116, *v116, EmptyRgn, 4LL) == 1 )
        break;
    }
  }
  if ( v120 != &v129 )
    Win32FreePool(v120);
  v92 = v116;
  v64 = v111;
LABEL_210:
  v93 = *(_QWORD *)(*(_QWORD *)v109 + 168LL);
  if ( v93 )
    GreCombineRgn(*v92, *v92, v93, 1LL);
  if ( (_DWORD)v115 )
  {
    v94 = 0;
    v95 = (const struct tagWND *)v121;
    v96 = v110;
    v97 = (const struct tagWND *)*((_QWORD *)v110 + 13);
    if ( v97 != (const struct tagWND *)v121 )
    {
      v98 = v110;
      while ( 1 )
      {
        v99 = *((_QWORD *)v97 + 5);
        v110 = *(struct tagWND **)(v99 + 168);
        if ( !v110 )
          goto LABEL_237;
        v100 = *((_QWORD *)v96 + 5);
        if ( (*(_BYTE *)(v100 + 26) & 8) == 0 || (*(_DWORD *)(v100 + 232) & 2) != 0 )
        {
          if ( (v112 & 0x1000000) != 0 )
          {
            v94 = 1;
          }
          else if ( !v94 )
          {
            goto LABEL_227;
          }
        }
        else
        {
          v94 = 1;
        }
        if ( (*(_WORD *)(v99 + 42) & 0x2FFF) == 0x29D )
          goto LABEL_238;
LABEL_227:
        if ( IsDpiBoundaryBetweenWindows(v98, v97) )
        {
          v102 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v97, &v110, 1LL) )
            v102 = v110;
          v103 = PhysicalToLogicalInPlaceRgnWorker(v98, (HRGN *)&v110, 1);
          if ( v103 && v102 )
            GreDeleteObject(v102);
        }
        else
        {
          v103 = PhysicalToLogicalInPlaceRgn(v101, (__int64)&v110);
        }
        v104 = v110;
        v105 = GreCombineRgn(*v116, *v116, v110, 1LL) == 1;
        if ( v103 )
          GreDeleteObject(v104);
        if ( v105 )
        {
LABEL_238:
          v64 = v111;
          break;
        }
LABEL_237:
        v96 = v97;
        v97 = (const struct tagWND *)*((_QWORD *)v97 + 13);
        if ( v97 == v95 )
          goto LABEL_238;
      }
    }
  }
  v106 = 1;
LABEL_243:
  if ( v64 )
    GreDeleteObject(v64);
  if ( (_DWORD)v117 )
    Win32FreePool((void *)v118);
  return v106;
}
