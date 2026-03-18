/*
 * XREFs of xxxRealDrawMenuItem @ 0x14003B17C
 * Callers:
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 * Callees:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreCreateDIBitmapReal @ 0x140018E94 (GreCreateDIBitmapReal.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     FindCharPosition @ 0x14003C144 (FindCharPosition.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x14003D240 (xxxPSMGetTextExtent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14006B284 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14006B83C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14007C108 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x140095C94 (GreDecBitmapExclusiveRefCnt.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402C8924 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v9; // esi
  struct tagTHREADINFO *v10; // r15
  int v11; // r14d
  __int64 v12; // r8
  struct tagITEM *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int16 *OemBitmapInfo; // rax
  __int64 v24; // rcx
  __int64 v25; // r11
  _WORD *v26; // r14
  int v27; // r13d
  struct tagWND *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagCURSOR *WindowSmIcon; // r15
  unsigned int v32; // r14d
  unsigned int v33; // ebx
  __int64 UserSessionState; // rax
  __int64 v35; // rcx
  int v36; // r13d
  int DpiDependentMetric; // r15d
  int v38; // ecx
  __int64 v39; // rdx
  int v40; // r14d
  unsigned int DpiForSystem; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rax
  int ObjectW; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // r14
  HDC CompatibleDC; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int8 *v58; // r9
  __int64 v59; // r10
  unsigned int v60; // r8d
  __int64 v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // eax
  unsigned int CharPosition; // r12d
  int v71; // eax
  int v72; // ebx
  int v73; // r15d
  __int64 v74; // rax
  int v75; // r11d
  int v76; // ebx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rcx
  HDC v82; // r15
  __int64 v83; // rcx
  int v84; // r10d
  __int64 v85; // r11
  __int16 *v86; // rbx
  int v87; // r11d
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // r11
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v94; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+80h] [rbp-80h]
  int v97; // [rsp+80h] [rbp-80h]
  BOOL v98; // [rsp+90h] [rbp-70h]
  _QWORD v99[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v100; // [rsp+A8h] [rbp-58h]
  __int64 v101; // [rsp+B0h] [rbp-50h]
  __int64 v102; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h]
  _OWORD v104[3]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD v105[24]; // [rsp+100h] [rbp+0h] BYREF
  int v106; // [rsp+130h] [rbp+30h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v99);
  v9 = 0;
  v98 = 0;
  v10 = PtiCurrent();
  v100 = 0LL;
  v11 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v99);
  v12 = 2LL;
  v13 = *(struct tagITEM **)(a2 + 8);
  v14 = 8LL;
  v15 = *(_QWORD *)(*(_QWORD *)v99[0] + 40LL);
  v16 = *(_DWORD *)(v15 + 40) & 1;
  v94 = v16;
  if ( v16 )
  {
    v9 = 2;
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v17 = *(_QWORD *)v13;
        if ( (*(_DWORD *)(*(_QWORD *)v13 + 4LL) & 8) != 0 )
          v18 = *(_QWORD *)(v17 + 24) == 0LL;
        else
          v18 = *(_QWORD *)(v17 + 32) == 0LL;
        LOBYTE(v11) = !v18;
      }
      else
      {
        v11 = DrawMenuItemCheckMark(a1, v13, 2);
        v12 = 2LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) & 0x4000000) == 0
        || !*(_QWORD *)(*(_QWORD *)v13 + 96LL)
        || v11 )
      {
        if ( (**(_DWORD **)v13 & 0x2000) != 0 )
          v9 = 2;
        else
          v9 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 4;
      }
    }
    else
    {
      v9 = 4;
    }
  }
  else if ( !(unsigned int)MNIsFlatMenu(v15, 1LL, 2LL, 8LL) )
  {
    v98 = *(char *)(*(_QWORD *)v13 + 4LL) < 0;
  }
  if ( *(_QWORD *)(*(_QWORD *)v13 + 96LL)
    && (!v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) & 0x4000000) == 0) )
  {
    if ( !a5 )
    {
      v12 = *(unsigned int *)(*(_QWORD *)v13 + 4LL);
      v19 = *(_QWORD *)(*(_QWORD *)v13 + 96LL);
      if ( (v12 & 0x20000000) != 0 )
      {
        if ( v19 == 1 )
          goto LABEL_54;
        v20 = v19 - 2;
        if ( !v20 || (v21 = v20 - 1) == 0 || (v22 = v21 - 2) == 0 || (unsigned __int64)(v22 - 1) < 2 )
        {
          BitBltSysBmp(a1, 1);
          goto LABEL_37;
        }
        if ( PrepareHDCBITSBitmap(0LL) )
        {
          OemBitmapInfo = (__int16 *)GetOemBitmapInfo((unsigned int)*(_QWORD *)(*(_QWORD *)v13 + 96LL) + 79);
          BltColor(
            a1,
            (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 76LL) - OemBitmapInfo[3]) >> 1,
            OemBitmapInfo[2],
            OemBitmapInfo[3],
            *OemBitmapInfo,
            OemBitmapInfo[1],
            1);
          goto LABEL_37;
        }
        goto LABEL_105;
      }
      if ( v19 == -1 )
      {
        xxxSendMenuDrawItemMessage((_DWORD)a1, 1, (unsigned int)v99, (_DWORD)v13, 1, v9, 0LL);
        goto LABEL_37;
      }
      if ( *((_WORD *)v10 + 336) <= 0x400u
        && (*(_QWORD *)(*(_QWORD *)v13 + 56LL) && !*((_QWORD *)v13 + 3)
         || !v16
         && v13 == *(struct tagITEM **)(*(_QWORD *)v99[0] + 88LL)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 44LL) > 1u
         && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 88LL) + 96LL) + 96LL)
         && *((_QWORD *)v13 + 2)) )
      {
        while ( 1 )
        {
LABEL_54:
          if ( !*(_QWORD *)(*(_QWORD *)v13 + 56LL) && *(_QWORD *)(*(_QWORD *)v99[0] + 80LL) )
            SetupFakeMDIAppStuff(v99, v13, v12, v14);
          v28 = (struct tagWND *)HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v13 + 56LL), 1LL, v12, v14);
          if ( v28 )
            break;
          if ( !*(_QWORD *)(*(_QWORD *)v13 + 56LL) )
            goto LABEL_61;
          *(_QWORD *)(*(_QWORD *)v13 + 56LL) = 0LL;
        }
        WindowSmIcon = GetWindowSmIcon(v28);
        if ( WindowSmIcon )
          goto LABEL_62;
LABEL_61:
        WindowSmIcon = *(struct tagCURSOR **)(W32GetUserSessionState(v30, v29) + 35184);
LABEL_62:
        v32 = a4 - 2;
        v33 = a3 - 4;
        if ( v94 && v32 < v33 )
          v33 = a4 - 2;
        UserSessionState = W32GetUserSessionState(v30, v29);
        DrawIconEx(
          a1,
          (unsigned int)(v9 + 4),
          1LL,
          WindowSmIcon,
          v33,
          v32,
          0,
          *(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4728LL),
          19);
        goto LABEL_66;
      }
    }
    v35 = *(_QWORD *)v13;
    v36 = *(_DWORD *)(*(_QWORD *)v13 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v13 + 108LL);
    if ( v16 )
    {
      v38 = *(_DWORD *)(v35 + 76) - DpiDependentMetric;
      v39 = (unsigned int)(v38 >> 31);
      LODWORD(v39) = v38 % 2;
      v40 = v38 / 2;
      if ( v38 <= 0 )
        v40 = 0;
      LODWORD(v101) = v40;
    }
    else
    {
      DpiForSystem = GetDpiForSystem(v35, 1LL, v12, v14);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, DpiForSystem) )
      {
        v45 = GetDpiForSystem(v42, v39, v43, v44);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v45);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v13 + 108LL);
      }
      v40 = 0;
      LODWORD(v101) = 0;
      if ( *((_QWORD *)v13 + 3) )
        v9 += *(_DWORD *)(GetDpiMetricsForCurrentThread() + 16);
    }
    v46 = *(_QWORD *)(*(_QWORD *)v13 + 96LL);
    v47 = W32GetUserSessionState(*(_QWORD *)v13, v39);
    v103 = GreSelectBitmap(*(_QWORD *)(v47 + 43296), v46);
    if ( !v103 )
    {
LABEL_105:
      v16 = v94;
      goto LABEL_37;
    }
    memset_0(v105, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(Gre::Base **)(*(_QWORD *)v13 + 96LL), 104LL, v105);
    v51 = 0LL;
    if ( !a5 || (v50 = *(_QWORD *)v13, **(_DWORD **)v13 == 4) )
    {
      if ( ObjectW != 104 || v105[23] != 32 || v106 || **(_DWORD **)v13 == 4 )
      {
        v61 = v105[8] * (unsigned int)v105[9];
        if ( (_DWORD)v61 == 1 )
          v62 = 12060490;
        else
          v62 = (unsigned int)MNDrawHilite(v99, v13) != 0 ? 3342344 : 13369376;
        v63 = W32GetUserSessionState(v61, v49);
        GreBitBltInternal(
          a1,
          v98 + v9,
          v98 + v40,
          v36,
          DpiDependentMetric,
          *(HDC *)(v63 + 43296),
          0,
          0,
          v62,
          0xFFFFFFu,
          0);
      }
      goto LABEL_104;
    }
    v96 = 33488896;
    v52 = 0LL;
    if ( a6 )
    {
      v102 = 0LL;
      memset(v104, 0, 44);
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
        goto LABEL_91;
      memset((char *)&v104[1] + 4, 0, 24);
      LODWORD(v104[0]) = 40;
      *(_QWORD *)((char *)v104 + 4) = __PAIR64__(DpiDependentMetric, v36);
      *(_QWORD *)((char *)v104 + 12) = 2097153LL;
      v54 = GreCreateDIBitmapReal(CompatibleDC, 0, 0LL, (unsigned int *)v104, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v102);
      v52 = v54;
      if ( v54 )
      {
        v51 = GreSelectBitmap(CompatibleDC, v54);
        if ( v51 != -1 )
        {
          v57 = W32GetUserSessionState(v56, v55);
          GreAlphaBlend(
            CompatibleDC,
            0,
            0,
            v36,
            DpiDependentMetric,
            *(HDC *)(v57 + 43296),
            0,
            0,
            v36,
            DpiDependentMetric,
            33488896);
          if ( v36 * DpiDependentMetric > 0 )
          {
            v58 = (unsigned __int8 *)v102;
            v59 = (unsigned int)(v36 * DpiDependentMetric);
            do
            {
              v60 = (29 * v58[2] + 150 * v58[1] + 77 * (unsigned int)*v58 + 129) >> 8;
              *(_DWORD *)v58 = v60 | ((v60 | ((v60 | (v58[3] << 8)) << 8)) << 8);
              v58 = (unsigned __int8 *)(v102 + 4);
              v102 += 4LL;
              --v59;
            }
            while ( v59 );
          }
          BYTE2(v96) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)(W32GetUserSessionState(0LL, v49) + 43296);
      if ( !CompatibleDC )
        goto LABEL_89;
    }
    GreAlphaBlend(a1, v98 + v9, v98 + v101, v36, DpiDependentMetric, CompatibleDC, 0, 0, v36, DpiDependentMetric, v96);
LABEL_89:
    if ( !a6 )
    {
LABEL_104:
      v64 = W32GetUserSessionState(v50, v49);
      GreSelectBitmap(*(_QWORD *)(v64 + 43296), v103);
LABEL_66:
      v16 = v94;
      goto LABEL_37;
    }
    if ( v51 == -1 )
    {
LABEL_92:
      if ( v52 )
      {
        GreDecBitmapExclusiveRefCnt(v52);
        GreDeleteObject(v52);
      }
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      goto LABEL_104;
    }
LABEL_91:
    GreSelectBitmap(CompatibleDC, v51);
    goto LABEL_92;
  }
LABEL_37:
  v24 = v100;
  if ( !v100 )
    v24 = *(_QWORD *)v99[0];
  if ( !(unsigned __int8)MNIspItemValid(v24, v13) )
    goto LABEL_140;
  if ( a5 != (_DWORD)v25 )
    goto LABEL_140;
  v26 = (_WORD *)*((_QWORD *)v13 + 3);
  if ( !v26 )
    goto LABEL_140;
  v27 = *(_DWORD *)(*(_QWORD *)v13 + 48LL);
  if ( !v27 )
    goto LABEL_140;
  v102 = *((_QWORD *)v13 + 11);
  if ( !v16 || *(_DWORD *)(*(_QWORD *)v99[0] + 72LL) == (_DWORD)v25 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v13 + 96LL) != v25 )
      v9 += *(_DWORD *)(*(_QWORD *)v13 + 104LL) + 2;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)v99[0] + 72LL);
  }
  DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread();
  v66 = *(_QWORD *)v13;
  v67 = DpiMetricsForCurrentThread;
  v101 = DpiMetricsForCurrentThread;
  v68 = *(_DWORD *)(DpiMetricsForCurrentThread + 28);
  v97 = v68;
  v69 = *(_DWORD *)(v66 + 76) - *(_DWORD *)(DpiMetricsForCurrentThread + 20) - v68 - 1;
  if ( v69 > 0 )
  {
    v67 = v101;
    v97 = v69 / 2 + v68;
  }
  if ( !v94 && !*(_QWORD *)(v66 + 96) )
    v9 += *(_DWORD *)(v67 + 16);
  if ( *v26 == 8 && !v94 )
  {
    ++v26;
    if ( !--v27 )
    {
      v82 = a1;
      goto LABEL_141;
    }
  }
  CharPosition = FindCharPosition(v26, 9LL);
  v71 = FindCharPosition(v26, 8LL);
  v72 = *(_DWORD *)(v66 + 72);
  v73 = v71;
  v74 = GetOemBitmapInfo(63LL);
  v75 = 0;
  v76 = v72 - *(__int16 *)(v74 + 4) - 2;
  if ( !v73 || v73 == v27 )
  {
    if ( CharPosition && v73 == v27 )
    {
      if ( (**(_DWORD **)v13 & 0x2000) != 0 )
      {
        v82 = a1;
        xxxPSMGetTextExtent(a1);
        v89 = v100;
        if ( !v100 )
          v89 = *(_QWORD *)v99[0];
        if ( !(unsigned __int8)MNIspItemValid(v89, v13) || v102 != *((_QWORD *)v13 + 11) )
          goto LABEL_141;
        v9 = v76;
        if ( v94 == (_DWORD)v90 && *(_QWORD *)(*(_QWORD *)v13 + 96LL) == v90 )
          v9 = *(_DWORD *)(v101 + 16) + v76;
      }
      xxxDrawMenuItemText(
        v99,
        v13,
        a1,
        (unsigned int)(v98 + v9),
        v98 + v97,
        v26,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) & 4);
      v91 = v100;
      if ( !v100 )
        v91 = *(_QWORD *)v99[0];
      if ( !(unsigned __int8)MNIspItemValid(v91, v13) )
        goto LABEL_140;
      v79 = v102;
      if ( v102 != *((_QWORD *)v13 + 11) )
        goto LABEL_140;
    }
    else
    {
      v79 = v102;
    }
  }
  else
  {
    if ( (**(_DWORD **)v13 & 0x2000) != 0 && v94 )
    {
      xxxPSMGetTextExtent(a1);
      v77 = v100;
      if ( !v100 )
        v77 = *(_QWORD *)v99[0];
      if ( !(unsigned __int8)MNIspItemValid(v77, v13) || v102 != *((_QWORD *)v13 + 11) )
        goto LABEL_140;
      v9 = v76;
    }
    xxxDrawMenuItemText(
      v99,
      v13,
      a1,
      (unsigned int)(v98 + v9),
      v98 + v97,
      v26,
      v73,
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) & 4);
    v78 = v100;
    if ( !v100 )
      v78 = *(_QWORD *)v99[0];
    if ( !(unsigned __int8)MNIspItemValid(v78, v13) )
      goto LABEL_140;
    v79 = v102;
    if ( v102 != *((_QWORD *)v13 + 11) )
      goto LABEL_140;
    if ( CharPosition > v73 + 1 )
    {
      if ( (**(_DWORD **)v13 & 0x2000) == 0 || v94 == v75 )
      {
        xxxPSMGetTextExtent(a1);
        v80 = v100;
        if ( !v100 )
          v80 = *(_QWORD *)v99[0];
        if ( !(unsigned __int8)MNIspItemValid(v80, v13) || v79 != *((_QWORD *)v13 + 11) )
          goto LABEL_140;
      }
      xxxPSMTextOut(
        a1,
        CharPosition - v73 - 1,
        ~(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) << 18) & 0x100000);
      v81 = v100;
      if ( !v100 )
        v81 = *(_QWORD *)v99[0];
      if ( !(unsigned __int8)MNIspItemValid(v81, v13) || v79 != *((_QWORD *)v13 + 11) )
      {
LABEL_140:
        v82 = a1;
        goto LABEL_141;
      }
    }
  }
  if ( CharPosition >= v27 - 1 )
    goto LABEL_140;
  if ( (**(_DWORD **)v13 & 0x2000) != 0 && v94 != v75 )
  {
    xxxPSMGetTextExtent(a1);
    v92 = v100;
    if ( !v100 )
      v92 = *(_QWORD *)v99[0];
    if ( !(unsigned __int8)MNIspItemValid(v92, v13) || v79 != *((_QWORD *)v13 + 11) )
      goto LABEL_140;
  }
  v82 = a1;
  xxxPSMTextOut(
    a1,
    v27 - CharPosition - 1,
    ~(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v99[0] + 40LL) + 40LL) << 18) & 0x100000);
LABEL_141:
  v83 = v100;
  if ( !v100 )
    v83 = *(_QWORD *)v99[0];
  if ( (unsigned __int8)MNIspItemValid(v83, v13) )
  {
    if ( a5 == (_DWORD)v85 )
    {
      if ( v84 )
      {
        if ( *((_QWORD *)v13 + 2) != v85 )
        {
          v86 = (__int16 *)GetOemBitmapInfo((**(_DWORD **)v13 & 0x2000) != 0 ? 92 : 62);
          if ( *(_DWORD *)(*(_QWORD *)v13 + 76LL) >= v86[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v87 = v86[3];
              v88 = (*(_DWORD *)(*(_QWORD *)v13 + 76LL) - v87 - 2) / 2;
              if ( v88 <= 0 )
                v88 = 0;
              BltColor(v82, v88, v86[2], v87, *v86, v86[1], 1);
            }
          }
        }
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v99);
  return 1LL;
}
