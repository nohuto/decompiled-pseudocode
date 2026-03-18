/*
 * XREFs of xxxMNCompute @ 0x14006A318
 * Callers:
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x14006B8A4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxSendUAHInitMenuMessage @ 0x14006BAE0 (xxxSendUAHInitMenuMessage.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagMENU ***a1,
        HFONT a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // r12d
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int16 WindowDpiLastNotify; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  HDC v18; // rdi
  __int64 DpiMetricsForDpi; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int v23; // r13d
  unsigned int v24; // ebp
  struct tagMENU *v25; // r14
  __int64 v26; // r14
  struct tagMENU *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  BOOL v30; // eax
  int v31; // ebx
  struct tagMENU *v32; // rcx
  struct tagMENU *v33; // rcx
  _WORD *v34; // rax
  int v35; // ebx
  struct tagMENU *v36; // rdi
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  struct tagMENU *v43; // rcx
  unsigned int v44; // ebx
  struct tagMENU *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // ebx
  unsigned int v54; // ebx
  __int64 v55; // rax
  int v56; // r8d
  struct tagMENU *v57; // rcx
  int v58; // r10d
  struct tagMENU *v59; // rcx
  struct tagMENU *v60; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagMENU **v62; // rax
  struct tagMENU *v63; // rbx
  int v64; // edx
  unsigned int v65; // r10d
  __int64 *i; // r9
  __int64 v67; // r8
  int v68; // [rsp+40h] [rbp-98h]
  int v69; // [rsp+44h] [rbp-94h]
  int v70; // [rsp+48h] [rbp-90h]
  unsigned int v71; // [rsp+4Ch] [rbp-8Ch]
  int v72; // [rsp+50h] [rbp-88h]
  __int64 v73; // [rsp+58h] [rbp-80h] BYREF
  HDC DCEx; // [rsp+60h] [rbp-78h]
  HFONT v75[3]; // [rsp+70h] [rbp-68h] BYREF
  struct tagTHREADINFO *v76; // [rsp+88h] [rbp-50h]
  unsigned int v77; // [rsp+E0h] [rbp+8h]
  unsigned int v79; // [rsp+F0h] [rbp+18h]

  v8 = 0;
  v73 = 0LL;
  v79 = 0;
  v76 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( a3 )
  {
    v12 = *(_QWORD *)(a3 + 40);
    v13 = *(_DWORD *)(v12 + 288) & 0xF;
    if ( v13 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    }
    else if ( _bittest((const signed __int32 *)(v12 + 232), 0xAu) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    }
    else if ( !v13
           && (v55 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 464LL) + 272LL);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    WindowDpiLastNotify = *(_WORD *)(CurrentProcessWin32Process + 272);
  }
  else
  {
    WindowDpiLastNotify = 96;
  }
  if ( a2 != *((HFONT *)**a1 + 10) )
  {
    v62 = *a1;
    v75[1] = a2;
    v75[0] = (HFONT)((char *)*v62 + 80);
    HMAssignmentLock(v75, 0LL);
  }
  if ( a7 )
    v79 = *a7;
  if ( !*(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    return 0LL;
  v70 = *(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 1;
  if ( v70 )
  {
    v79 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)**a1 + 16) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 3
    || a3
    && PtiCurrent(v48, v47)
    && *((_QWORD *)PtiCurrent(v50, v49) + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v52, v51) + 62) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v16 = 65539LL;
    v17 = a3;
  }
  else
  {
    v17 = 0LL;
    v16 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v17, 0LL, v16);
  v18 = DCEx;
  DpiMetricsForDpi = GetDpiMetricsForDpi(WindowDpiLastNotify);
  v75[0] = GreSelectFont(DCEx, *(HFONT *)(DpiMetricsForDpi + 8));
  v71 = 0;
  v69 = 0;
  v77 = 0;
  if ( IsInsideUserApiHook(v21, v20) && a2 )
    xxxSendUAHInitMenuMessage(a2, a1, DCEx);
  v22 = 0;
  v68 = a5;
  v23 = a4;
  v24 = 0;
  v72 = 0;
  *((_DWORD *)**a1 + 18) = 0;
  v25 = (struct tagMENU *)a1[2];
  if ( !v25 )
    v25 = **a1;
  if ( *(_DWORD *)(*((_QWORD *)v25 + 5) + 44LL) )
    v26 = *((_QWORD *)v25 + 11);
  else
    v26 = 0LL;
  if ( !*(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    goto LABEL_57;
  while ( v26 )
  {
    v27 = (struct tagMENU *)a1[2];
    if ( !v27 )
      v27 = **a1;
    v28 = MNIsOwnerDrawItem(v27, (struct tagITEM *)v26);
    v29 = *(_QWORD *)v26;
    if ( (**(_DWORD **)v26 & 0x800) == 0 || v28 && *((_WORD *)v76 + 336) >= 0x400u )
    {
      v30 = *(_QWORD *)(v29 + 96) && *(_QWORD *)(v26 + 24);
      v72 = v30 | v22;
      v31 = v70;
      xxxMNItemSize(a1, a2, WindowDpiLastNotify, v18, v26, v70, &v73);
      v32 = (struct tagMENU *)a1[2];
      if ( !v32 )
        v32 = **a1;
      if ( !(unsigned __int8)MNIspItemValid(v32, v26) )
        break;
      *(_QWORD *)(*(_QWORD *)v26 + 72LL) = v73;
      if ( !v70 && (!*(_QWORD *)(*(_QWORD *)v26 + 96LL) || *(_QWORD *)(v26 + 24)) )
      {
        v33 = (struct tagMENU *)a1[2];
        if ( !v33 )
          v33 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v33) )
          *(_DWORD *)(*(_QWORD *)v26 + 72LL) += 2 * *(_DWORD *)(GetDpiMetricsForDpi(WindowDpiLastNotify) + 16);
      }
    }
    else
    {
      *(_DWORD *)(v29 + 72) = 0;
      v31 = v70;
      *(_DWORD *)(*(_QWORD *)v26 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
    }
    if ( v79 && *(_DWORD *)(*(_QWORD *)v26 + 76LL) < v79 )
      *(_DWORD *)(*(_QWORD *)v26 + 76LL) = v79;
    if ( !v24 )
      v8 = *(_DWORD *)(*(_QWORD *)v26 + 76LL);
    if ( v31 )
    {
      v53 = **(_DWORD **)v26 & 0x60;
      if ( v53 || *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
      {
        v56 = v69;
        if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 && *(_DWORD *)(*(_QWORD *)v26 + 72LL) > v69 )
          v56 = *(_DWORD *)(*(_QWORD *)v26 + 72LL);
        xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v77, v24 + (v53 == 0), v56, v68);
        v57 = (struct tagMENU *)a1[2];
        if ( !v57 )
          v57 = **a1;
        if ( !(unsigned __int8)MNIspItemValid(v57, v26) )
          break;
        if ( v53 )
        {
          v23 = a4;
          v44 = v24;
          v68 = v58 + 4;
          v77 = v24;
          v69 = *(_DWORD *)(*(_QWORD *)v26 + 72LL);
          if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
          {
            xxxMNRecalcTabStrings((_DWORD)v18, (_DWORD)a1, v24, v24 + 1, *(_DWORD *)(*(_QWORD *)v26 + 72LL), v58 + 4);
            v59 = (struct tagMENU *)a1[2];
            if ( !v59 )
              v59 = **a1;
            if ( !(unsigned __int8)MNIspItemValid(v59, v26) )
              goto LABEL_56;
          }
        }
        if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) == v24 + 1 )
          *((_DWORD *)**a1 + 16) = v58;
      }
      v54 = v71;
      *(_DWORD *)(*(_QWORD *)v26 + 64LL) = v68;
      *(_DWORD *)(*(_QWORD *)v26 + 68LL) = v23;
      v39 = *(_QWORD *)v26;
      v23 += *(_DWORD *)(*(_QWORD *)v26 + 76LL);
      if ( v71 < v23 )
        v54 = v23;
      v71 = v54;
    }
    else
    {
      v34 = *(_WORD **)(v26 + 24);
      if ( v34 && *v34 == 8 )
      {
        v46 = (struct tagMENU *)a1[2];
        if ( !v46 )
          v46 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v46) )
          *(_DWORD *)(*(_QWORD *)v26 + 72LL) -= *(_DWORD *)(GetDpiMetricsForDpi(WindowDpiLastNotify) + 16);
      }
      if ( (**(_DWORD **)v26 & 0x60) != 0
        || (v35 = *(_DWORD *)(*(_QWORD *)v26 + 72LL),
            v36 = **a1,
            v37 = GetDpiMetricsForDpi(WindowDpiLastNotify),
            v38 = v68,
            v68 + v35 + *(_DWORD *)(v37 + 16) > (unsigned int)(*((_DWORD *)v36 + 16) + a5))
        && v24 )
      {
        v23 += v8;
        v38 = a5;
        v8 = *(_DWORD *)(*(_QWORD *)v26 + 76LL);
      }
      v18 = DCEx;
      *(_DWORD *)(*(_QWORD *)v26 + 68LL) = v23;
      *(_DWORD *)(*(_QWORD *)v26 + 64LL) = v38;
      v39 = *(_QWORD *)v26;
      v68 = *(_DWORD *)(*(_QWORD *)v26 + 72LL) + v38;
    }
    v40 = *(_DWORD *)(v39 + 72);
    v41 = v8;
    if ( v69 >= v40 )
      v40 = v69;
    v69 = v40;
    v42 = *(_DWORD *)(v39 + 76);
    if ( v8 != v42 )
    {
      v8 = *(_DWORD *)(v39 + 76);
      if ( v41 >= v42 )
        v8 = v41;
      if ( v70 )
        goto LABEL_52;
      v79 = v8;
LABEL_51:
      v71 = v8 + v23;
      goto LABEL_52;
    }
    if ( !v70 )
      goto LABEL_51;
LABEL_52:
    v43 = (struct tagMENU *)a1[2];
    ++v24;
    if ( !v43 )
      v43 = **a1;
    v26 = MNGetpItemFromIndex(v43, v24);
    v22 = v72;
    if ( v24 >= *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
      break;
  }
  v44 = v77;
LABEL_56:
  if ( !v72 || v44 )
  {
LABEL_57:
    *((_DWORD *)**a1 + 18) = 0;
    goto LABEL_58;
  }
  v60 = **a1;
  if ( *(int *)(*((_QWORD *)v60 + 5) + 40LL) >= 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v60 + 5) + 40LL) & 0x4000000) == 0 )
    {
      *((_DWORD *)**a1 + 18) += *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 2;
      goto LABEL_59;
    }
    v63 = **a1;
    if ( *((_DWORD *)v63 + 18) <= (unsigned int)*(__int16 *)(GetOemBitmapInfo(63LL) + 4) )
      v64 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
    else
      v64 = *((_DWORD *)**a1 + 18);
    *((_DWORD *)**a1 + 18) = v64;
    *((_DWORD *)**a1 + 18) += 2;
LABEL_58:
    v44 = v77;
    goto LABEL_59;
  }
  *((_DWORD *)v60 + 18) += 2;
LABEL_59:
  if ( *((_DWORD *)**a1 + 18) )
    *((_DWORD *)**a1 + 18) += 2;
  if ( v44 )
  {
    if ( *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL) )
    {
      if ( (***((_DWORD ***)**a1 + 11) & 0x4000) != 0 )
      {
        v65 = 0;
        for ( i = (__int64 *)*((_QWORD *)**a1 + 11);
              v65 < *(_DWORD *)(*((_QWORD *)**a1 + 5) + 44LL);
              *(_DWORD *)(v67 + 64) = *((_DWORD *)**a1 + 16) - *(_DWORD *)(v67 + 72) - *(_DWORD *)(v67 + 64) )
        {
          ++v65;
          v67 = *i;
          i += 12;
        }
      }
    }
  }
  GreSelectFont(v18, v75[0]);
  _ReleaseDC(v18);
  *((_DWORD *)**a1 + 17) = v71 - a4;
  if ( a7 )
    *a7 = v79;
  return *((unsigned int *)**a1 + 17);
}
