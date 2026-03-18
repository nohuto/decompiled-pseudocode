/*
 * XREFs of xxxBeginPaint @ 0x140034CB0
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140032E88 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x140034B50 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BD38C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140035564 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     xxxSendEraseBkgnd @ 0x140035C60 (xxxSendEraseBkgnd.c)
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1400363D4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     CalcWindowRgn @ 0x1400367C4 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxBeginPaint(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // eax
  int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  int v19; // r14d
  int v20; // ecx
  int v21; // edx
  int v22; // ebp
  int v23; // eax
  int v24; // r15d
  unsigned int *v25; // rax
  char v26; // cl
  unsigned int v27; // ebx
  unsigned int v28; // esi
  unsigned int v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int *v32; // rax
  int v33; // r14d
  int v34; // ebp
  int v35; // eax
  int v36; // r15d
  _QWORD *CurrentThreadNonPaged; // rax
  unsigned int *v38; // rax
  int v39; // r13d
  unsigned int v40; // ebx
  unsigned int v41; // esi
  unsigned int v42; // r12d
  unsigned int *v43; // rax
  int v44; // r14d
  int v45; // ecx
  int v46; // edx
  int v47; // ebp
  int v48; // eax
  int v49; // r15d
  int v50; // r12d
  unsigned int *v51; // rax
  unsigned int v52; // r15d
  unsigned int v53; // ebp
  unsigned int v54; // ebx
  unsigned int *v55; // rax
  int v56; // ebp
  int v57; // ebx
  int v58; // r14d
  int v59; // r15d
  unsigned int *v60; // rcx
  unsigned int v61; // r14d
  unsigned int v62; // esi
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int *v66; // rax
  int v67; // esi
  int v68; // ebx
  int v69; // ebp
  int v70; // r14d
  unsigned int *v71; // rax
  __int64 v72; // rsi
  __int64 DCEx; // rax
  __int64 v74; // rbx
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  int v77; // esi
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  void *v81; // rax
  int v82; // esi
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  void *v86; // rax
  int v87; // esi
  int v88; // esi
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  void *v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  void *v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  void *v100; // rax
  int v101; // esi
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  void *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 UserSessionState; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 EmptyRgnPublic; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  int v121; // ebx
  __int64 v122; // rax
  _OWORD v123[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 67056) & 0x10000000) == 0 )
    goto LABEL_6;
  v3 = a1[5];
  v4 = v3[7];
  v5 = v3[6];
  v6 = v3[58];
  *((_BYTE *)v3 + 20) |= 4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_6;
  v7 = a1[5];
  v8 = v7[7];
  v9 = v7[6];
  v10 = v7[58];
  v11 = v5 ^ v9;
  v12 = v6 ^ v10;
  v13 = v4 ^ v8;
  if ( v4 == v8 )
  {
    if ( v11 )
      goto LABEL_87;
    if ( !v12 )
      goto LABEL_6;
  }
  if ( (v13 & 0xB9CF0000) != 0 )
  {
    v101 = -16;
    goto LABEL_91;
  }
LABEL_87:
  if ( (v11 & 0x4E27A9) != 0 )
  {
    v101 = -20;
    v8 = v9;
    goto LABEL_91;
  }
  if ( (v12 & 0x3F2C0) != 0 )
  {
    v101 = -268435456;
    v8 = v10;
LABEL_91:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v102 = (__int64)*a1;
    v105 = (void *)ReferenceDwmApiPort(v104, v103);
    DwmAsyncChildStyleChange(v105, v102, v101, v8);
  }
  if ( (v13 & 0x1C40000) != 0 || (v11 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_6:
  v14 = a1[5];
  v15 = v14[7];
  v16 = v14[6];
  v17 = v14[58];
  *((_BYTE *)v14 + 18) &= ~0x40u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v18 = a1[5];
  v19 = v18[7];
  v20 = v18[6];
  v21 = v18[58];
  v22 = v16 ^ v20;
  v23 = v17 ^ v21;
  v24 = v15 ^ v19;
  if ( v15 == v19 )
  {
    if ( v22 )
      goto LABEL_47;
    if ( !v23 )
      goto LABEL_10;
  }
  if ( (v24 & 0xB9CF0000) != 0 )
  {
    v77 = -16;
    goto LABEL_62;
  }
LABEL_47:
  if ( (v22 & 0x4E27A9) != 0 )
  {
    v77 = -20;
    v19 = v20;
    goto LABEL_62;
  }
  if ( (v23 & 0x3F2C0) != 0 )
  {
    v77 = -268435456;
    v19 = v21;
LABEL_62:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v83 = (__int64)*a1;
    v86 = (void *)ReferenceDwmApiPort(v85, v84);
    DwmAsyncChildStyleChange(v86, v83, v77, v19);
  }
  if ( (v24 & 0x1C40000) != 0 || (v22 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_10:
  v25 = a1[5];
  v26 = *((_BYTE *)v25 + 17);
  if ( (v26 & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0LL, a1, 288LL, 1LL);
      NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 0);
      xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1[5] + 17) & 0x20) != 0 );
    goto LABEL_15;
  }
  v27 = v25[7];
  v28 = v25[6];
  v29 = v25[58];
  *((_BYTE *)v25 + 17) = v26 & 0xDF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_15;
  v32 = a1[5];
  v33 = v32[7];
  v31 = v32[6];
  v30 = v32[58];
  v34 = v28 ^ v32[6];
  v35 = v29 ^ v32[58];
  v36 = v27 ^ v33;
  if ( v27 == v33 )
  {
    if ( v34 )
      goto LABEL_58;
    if ( !v35 )
      goto LABEL_15;
  }
  if ( (v36 & 0xB9CF0000) != 0 )
  {
    v82 = -16;
    goto LABEL_75;
  }
LABEL_58:
  if ( (v34 & 0x4E27A9) != 0 )
  {
    v82 = -20;
    v33 = v31;
    goto LABEL_75;
  }
  if ( (v35 & 0x3F2C0) != 0 )
  {
    v82 = -268435456;
    v33 = v30;
LABEL_75:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v89 = (__int64)*a1;
    v92 = (void *)ReferenceDwmApiPort(v91, v90);
    DwmAsyncChildStyleChange(v92, v89, v82, v33);
  }
  if ( (v36 & 0x1C40000) != 0 || (v34 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_15:
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v31, v30);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( a1 == *(unsigned int ***)(CurrentThreadNonPaged[59] + 344LL) )
    zzzInternalHideCaret();
  v38 = a1[5];
  v39 = *((_BYTE *)v38 + 17) & 2;
  if ( (*((_BYTE *)v38 + 17) & 2) == 0 )
  {
    v50 = -16;
    goto LABEL_29;
  }
  v40 = v38[7];
  v41 = v38[6];
  v42 = v38[58];
  *((_BYTE *)v38 + 17) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_24;
  v43 = a1[5];
  v44 = v43[7];
  v45 = v43[6];
  v46 = v43[58];
  v47 = v41 ^ v45;
  v48 = v42 ^ v46;
  v49 = v40 ^ v44;
  if ( v40 == v44 )
  {
    if ( v47 )
      goto LABEL_66;
    if ( !v48 )
    {
LABEL_24:
      v50 = -16;
      goto LABEL_25;
    }
  }
  if ( (v49 & 0xB9CF0000) != 0 )
  {
    v50 = -16;
    v87 = -16;
    goto LABEL_83;
  }
LABEL_66:
  if ( (v47 & 0x4E27A9) != 0 )
  {
    v87 = -20;
    v44 = v45;
  }
  else
  {
    if ( (v48 & 0x3F2C0) == 0 )
    {
      v50 = -16;
      goto LABEL_84;
    }
    v87 = -268435456;
    v44 = v46;
  }
  v50 = -16;
LABEL_83:
  DirtyVisRgnTrackers((struct tagWND *)a1);
  v97 = (__int64)*a1;
  v100 = (void *)ReferenceDwmApiPort(v99, v98);
  DwmAsyncChildStyleChange(v100, v97, v87, v44);
LABEL_84:
  if ( (v49 & 0x1C40000) != 0 || (v47 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_25:
  v51 = a1[5];
  v52 = v51[7];
  v53 = v51[6];
  v54 = v51[58];
  *((_BYTE *)v51 + 17) &= ~2u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_29;
  v55 = a1[5];
  v56 = v55[6] ^ v53;
  v57 = v55[58] ^ v54;
  v58 = v55[7];
  v59 = v58 ^ v52;
  if ( !v59 )
  {
    if ( v56 )
      goto LABEL_71;
    if ( !v57 )
      goto LABEL_29;
  }
  if ( (v59 & 0xB9CF0000) != 0 )
  {
    v88 = -16;
    goto LABEL_79;
  }
LABEL_71:
  if ( (v56 & 0x4E27A9) != 0 )
  {
    v88 = -20;
    v58 = v55[6];
    goto LABEL_79;
  }
  if ( (v57 & 0x3F2C0) != 0 )
  {
    v88 = -268435456;
    v58 = v55[58];
LABEL_79:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v93 = (__int64)*a1;
    v96 = (void *)ReferenceDwmApiPort(v95, v94);
    DwmAsyncChildStyleChange(v96, v93, v88, v58);
  }
  if ( (v59 & 0x1C40000) != 0 || (v56 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_29:
  v60 = a1[5];
  if ( *((_QWORD *)v60 + 17) || (*((_BYTE *)v60 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    v60 = a1[5];
  }
  v61 = v60[7];
  v62 = v60[6];
  v63 = v60[58];
  *((_BYTE *)v60 + 17) &= ~0x10u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v66 = a1[5];
    v65 = v66[6];
    v67 = v65 ^ v62;
    v64 = v66[58];
    v68 = v64 ^ v63;
    v69 = v66[7];
    v70 = v69 ^ v61;
    if ( !v70 )
    {
      if ( v67 )
      {
LABEL_51:
        if ( (v67 & 0x4E27A9) != 0 )
        {
          v50 = -20;
          v69 = v66[6];
        }
        else
        {
          if ( (v68 & 0x3F2C0) == 0 )
          {
LABEL_55:
            if ( (v70 & 0x1C40000) != 0 || (v67 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_35;
          }
          v50 = -268435456;
          v69 = v66[58];
        }
LABEL_54:
        DirtyVisRgnTrackers((struct tagWND *)a1);
        v78 = (__int64)*a1;
        v81 = (void *)ReferenceDwmApiPort(v80, v79);
        DwmAsyncChildStyleChange(v81, v78, v50, v69);
        goto LABEL_55;
      }
      if ( !v68 )
        goto LABEL_35;
    }
    if ( (v70 & 0xB9CF0000) != 0 )
      goto LABEL_54;
    goto LABEL_51;
  }
LABEL_35:
  v71 = a1[5];
  v72 = *((_QWORD *)v71 + 17);
  *((_QWORD *)v71 + 17) = 0LL;
  if ( (a1[5][5] & 2) != 0 && v72 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v65, v64) + 43112) )
    {
      EmptyRgnPublic = CreateEmptyRgnPublic();
      *(_QWORD *)(W32GetUserSessionState(v120, v119) + 43112) = EmptyRgnPublic;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v107, v106) + 43112) )
    {
      UserSessionState = W32GetUserSessionState(v109, v108);
      if ( v72 == 1 )
      {
        v121 = *(_DWORD *)(UserSessionState + 63460);
        v122 = W32GetUserSessionState(v112, v111);
        CalcWindowRgn(a1, *(_QWORD *)(v122 + 43112), (v121 & 0x400) == 0);
      }
      else
      {
        v113 = *(_QWORD *)(UserSessionState + 43112);
        v114 = W32GetUserSessionState(v112, v111);
        GreCombineRgn(*(_QWORD *)(v114 + 43112), v113, v72, 2LL);
      }
      v117 = W32GetUserSessionState(v116, v115);
      ++*(_DWORD *)(v117 + 43308);
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v72, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v123[0] = 0LL;
  v74 = DCEx;
  if ( (unsigned int)GreGetClipBox(DCEx, a2 + 12, 1LL) != 1 )
  {
    if ( *(char *)(*((_QWORD *)a1[17] + 1) + 8LL) >= 0
      || (GetRect(a1, v123, 17LL), (unsigned int)IntersectRect(a2 + 12, a2 + 12, v123)) )
    {
      if ( v39 )
        xxxSendEraseBkgnd(a1, v74, v72);
    }
  }
  xxxSendChildNCPaint((struct tagWND *)a1);
  result = v74;
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1[5] + 17) >> 2) & 1;
  return result;
}
