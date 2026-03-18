/*
 * XREFs of xxxDrawMenuItem @ 0x140069860
 * Callers:
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1401EA0E8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14006B284 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14006B644 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14006B83C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x14020BD94 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x140217D44 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E8DA0 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 *     GreGetTextCharacterExtra @ 0x140310A74 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140310ABC (GreSetTextCharacterExtra.c)
 */

HFONT __fastcall xxxDrawMenuItem(HDC a1, __int64 a2, struct tagMENU ***a3, struct tagITEM *a4, char a5, __int64 a6)
{
  BOOL v6; // r15d
  unsigned int v8; // r13d
  unsigned __int16 v10; // bx
  int v12; // eax
  struct tagMENU *v13; // rcx
  int v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  struct tagMENU *v17; // rcx
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagMENU *v21; // rcx
  HFONT result; // rax
  struct tagMENU *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int16 *OemBitmapInfo; // rdi
  HDC v29; // r10
  _DWORD *v30; // rcx
  int v31; // esi
  int v32; // r8d
  int v33; // r11d
  int v34; // r11d
  int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdi
  struct tagMENU *v40; // rcx
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // r15d
  int v51; // ebx
  struct tagMENU *v52; // rcx
  HFONT v53; // r9
  struct tagMENU *v54; // rcx
  HFONT v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  _DWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 UserSessionState; // rax
  int v78; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+50h] [rbp-78h]
  HFONT v80; // [rsp+58h] [rbp-70h]
  _QWORD v81[2]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v82[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v83; // [rsp+80h] [rbp-48h]
  unsigned __int16 v84; // [rsp+D8h] [rbp+10h]
  int v85; // [rsp+E0h] [rbp+18h]
  int v86; // [rsp+E8h] [rbp+20h]

  v84 = a2;
  v6 = 0;
  v86 = 0;
  v8 = 0;
  v80 = 0LL;
  v10 = a2;
  v12 = MNIsFlatMenu(a1, a2, a3, a4);
  v13 = (struct tagMENU *)a3[2];
  v14 = v12;
  v85 = v12;
  if ( !v13 )
    v13 = **a3;
  v78 = MNIsOwnerDrawItem(v13, a4);
  v15 = MNDrawHilite(a3, a4);
  if ( v14 )
  {
    if ( v15 || (v18 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v18 = 1;
    v17 = **a3;
    v6 = (*(_DWORD *)(*((_QWORD *)v17 + 5) + 40LL) & 1) == 0;
  }
  else
  {
    v18 = v15;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v55 = *(HFONT *)(GetDpiMetricsForDpi(v10) + 56);
    if ( v55 )
    {
      v80 = GreSelectFont(a1, v55);
    }
    else
    {
      v8 = 64;
      GreGetTextCharacterExtra(a1);
      GetDpiServerInfoForDpi(v10);
      GetDpiMetricsForDpi(v84);
      GreSetTextCharacterExtra(a1);
      v14 = v85;
    }
  }
  if ( v78 )
  {
    W32GetUserSessionState(v17, v16);
    GreSetTextColor(a1);
    W32GetUserSessionState(v20, v19);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, (_DWORD)a4, 0, 0, a6);
    v21 = (struct tagMENU *)a3[2];
    if ( !v21 )
      v21 = **a3;
    result = (HFONT)MNIspItemValid(v21, a4);
    if ( (_BYTE)result )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 1) != 0 && *((_QWORD *)a4 + 2) )
      {
        v23 = (struct tagMENU *)a3[2];
        if ( !v23 )
          v23 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v23) )
        {
          v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19928);
          v27 = v18 ? *(_QWORD *)(v26 + 4808) : *(_QWORD *)(v26 + 4752);
          OemBitmapInfo = (__int16 *)GetOemBitmapInfo((**(_DWORD **)a4 & 0x2000) != 0 ? 92 : 62);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfo[3] )
          {
            v29 = PrepareHDCBITSBitmap(0LL);
            if ( v29 )
            {
              v30 = *(_DWORD **)a4;
              v31 = OemBitmapInfo[3];
              v32 = OemBitmapInfo[2];
              v33 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v31 - 2) / 2;
              if ( v33 <= 0 )
                v33 = 0;
              v34 = v30[17] + v33;
              if ( (*v30 & 0x2000) != 0 )
                v35 = v32 + v30[16];
              else
                v35 = v30[16] + v30[18] - v32;
              BltColor(a1, v27, v29, v35, v34, v32, v31, *OemBitmapInfo, OemBitmapInfo[1], 1u);
            }
          }
        }
      }
LABEL_11:
      MNDrawInsertionBar(a1, a4);
      if ( v86 )
        GreSetBkMode(a1, v86);
      result = *(HFONT *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v80 )
        {
          return GreSelectFont(a1, v80);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return (HFONT)GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v18 )
  {
    if ( v14 )
    {
      v61 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
      v41 = *(_DWORD *)(v61 + 4684);
      v64 = *(_QWORD *)(W32GetUserSessionState(v61, v62) + 19928);
      v65 = *(_QWORD *)(v64 + 4928);
    }
    else
    {
      v17 = (struct tagMENU *)*(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL);
      if ( ((unsigned __int8)v17 & 1) == 0 )
        goto LABEL_36;
      v66 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
      v41 = *(_DWORD *)(v66 + 4620);
      v64 = *(_QWORD *)(W32GetUserSessionState(v66, v67) + 19928);
      v65 = *(_QWORD *)(v64 + 4800);
    }
    v79 = v65;
    v68 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 19928);
    v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v68, v69) + 19928) + 4808LL);
    goto LABEL_37;
  }
  if ( !v6 )
  {
LABEL_36:
    v42 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
    v41 = *(_DWORD *)(v42 + 4584);
    v44 = *(_QWORD *)(W32GetUserSessionState(v42, v43) + 19928);
    v79 = *(_QWORD *)(v44 + 4728);
    v46 = *(_QWORD *)(W32GetUserSessionState(v44, v45) + 19928);
    v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v46, v47) + 19928) + 4752LL);
    goto LABEL_37;
  }
  v36 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
  v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v37) + 19928) + 4752LL);
  v40 = **a3;
  if ( *(_QWORD *)(*((_QWORD *)v40 + 5) + 24LL) )
  {
    v41 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v40, v38) + 19928) + 4688LL);
    v79 = *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL);
  }
  else
  {
    v59 = *(_QWORD *)(W32GetUserSessionState(v40, v38) + 19928);
    v41 = *(_DWORD *)(v59 + 4688);
    v79 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v59, v60) + 19928) + 4936LL);
  }
LABEL_37:
  if ( !(unsigned int)MNIsCachedBmpOnly(a4) )
  {
    v56 = *(unsigned int *)(*(_QWORD *)a4 + 4LL);
    if ( (v56 & 1) != 0 || (v56 = *(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL), (v56 & 0x10) != 0) )
    {
      if ( v18
        || (v56 = *(_QWORD *)(W32GetUserSessionState(v56, v48) + 19928), v41 != *(_DWORD *)(v56 + 4628))
        || (v56 = *(_QWORD *)(W32GetUserSessionState(v56, v48) + 19928), *(_DWORD *)(v56 + 2188)) )
      {
        v71 = *(_QWORD *)(W32GetUserSessionState(v56, v48) + 19928);
        if ( *(_DWORD *)(v71 + 4636) != v41 )
        {
          v72 = *(_QWORD *)(W32GetUserSessionState(v71, v70) + 19928);
          v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v72, v73) + 19928) + 4832LL);
          goto LABEL_38;
        }
      }
      else
      {
        v58 = *(_QWORD *)(W32GetUserSessionState(v56, v48) + 19928);
        if ( *(_DWORD *)(v58 + 4632) != v41
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v58, v57) + 19928) + 4648LL) != v41 )
        {
          v8 |= (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 0x10) != 0 ? 256 : 32;
          goto LABEL_38;
        }
      }
      v8 |= 0x10u;
    }
  }
LABEL_38:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) || v18 || v6 )
  {
    v74 = *(_DWORD **)a4;
    v82[0] = *(_DWORD *)(*(_QWORD *)a4 + 64LL);
    v82[1] = v74[17];
    v82[2] = v74[18];
    v82[3] = v74[19];
    v83 = v79;
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v82, 1);
    v50 = v85;
    if ( v18 && v85 )
    {
      UserSessionState = W32GetUserSessionState(v76, v75);
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(*(_QWORD *)(UserSessionState + 19928) + 4800LL));
    }
  }
  else
  {
    v50 = v85;
  }
  if ( *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) )
  {
    v51 = GreSetBkMode(a1, 1);
    v86 = v51;
  }
  else
  {
    v51 = 0;
  }
  GreSelectBrush(a1, v39, v49);
  v52 = (struct tagMENU *)a3[2];
  v81[1] = a4;
  if ( !v52 )
    v52 = **a3;
  v53 = *(HFONT *)a4;
  v81[0] = v52;
  xxxDrawState(
    a1,
    v39,
    v81,
    *((unsigned int *)v53 + 16),
    *((_DWORD *)v53 + 17),
    *((_DWORD *)v53 + 18),
    *((_DWORD *)v53 + 19),
    v8);
  v54 = (struct tagMENU *)a3[2];
  if ( !v54 )
    v54 = **a3;
  result = (HFONT)MNIspItemValid(v54, a4);
  if ( (_BYTE)result )
  {
    if ( !v50 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_11;
  }
  if ( v51 )
    return (HFONT)GreSetBkMode(a1, v51);
  return result;
}
