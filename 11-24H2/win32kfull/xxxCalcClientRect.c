/*
 * XREFs of xxxCalcClientRect @ 0x1400712A8
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     NtUserUpdateClientRect @ 0x1402A17B0 (NtUserUpdateClientRect.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetCaptionHeight @ 0x140073078 (GetCaptionHeight.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall xxxCalcClientRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  int v6; // esi
  char v7; // dl
  int v8; // r15d
  int v9; // ebx
  int v10; // r13d
  _DWORD *v11; // rax
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rdx
  int v15; // esi
  int v16; // ebx
  __int64 v17; // rax
  int v18; // r14d
  int v19; // esi
  int v20; // ebx
  __int64 v21; // rdx
  _DWORD *v22; // rax
  int v23; // esi
  int v24; // ebx
  int v25; // r12d
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // r15
  int v29; // ebx
  int v30; // r15d
  int v31; // esi
  int v32; // ebx
  _DWORD *v33; // rax
  int v34; // esi
  __int64 v35; // rdx
  int v36; // ebx
  int v37; // r14d
  int v38; // r15d
  int WindowBordersWithDpiAwareness; // eax
  signed int v40; // r14d
  int v41; // r13d
  signed int v42; // ebx
  int v43; // r12d
  int v44; // r15d
  __int64 v45; // rcx
  __int64 v47; // rsi
  bool v48; // zf
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  struct tagTHREADINFO *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  struct tagTHREADINFO *v55; // rax
  int v56; // esi
  __int64 v57; // rdx
  int v58; // r13d
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // ebx
  int v63; // r15d
  int v64; // r15d
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  void *v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  void *v76; // rax
  int v77; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r12d
  __int64 v80; // rax
  __int64 v81; // rax
  __int128 v82; // [rsp+30h] [rbp-48h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v84; // [rsp+50h] [rbp-28h] BYREF
  __int64 v85; // [rsp+58h] [rbp-20h] BYREF
  __int64 v86; // [rsp+60h] [rbp-18h]
  char v87; // [rsp+C0h] [rbp+48h]
  int v90; // [rsp+D8h] [rbp+60h]
  int v91; // [rsp+D8h] [rbp+60h]

  v4 = PtiCurrent((__int64)a1, (__int64)a2);
  v84 = (__int64 *)gSmartObjNullRef;
  v85 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v85;
  v5 = *((_QWORD *)a1 + 5);
  v86 = 0LL;
  v6 = *(_DWORD *)(v5 + 28);
  v7 = *(_BYTE *)(v5 + 16);
  v8 = *(_DWORD *)(v5 + 24);
  v9 = *(_DWORD *)(v5 + 232);
  *(_BYTE *)(v5 + 16) = v7 & 0xF0;
  v87 = v7 & 0xF;
  v10 = -16;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_5;
  v11 = (_DWORD *)*((_QWORD *)a1 + 5);
  v12 = v11[7];
  v13 = v6 ^ v12;
  v14 = (unsigned int)v11[58];
  v15 = v8 ^ v11[6];
  v16 = v14 ^ v9;
  if ( !v13 )
  {
    if ( v15 )
      goto LABEL_50;
    if ( !v16 )
      goto LABEL_5;
  }
  if ( (v13 & 0xB9CF0000) != 0 )
  {
    v63 = -16;
    goto LABEL_58;
  }
LABEL_50:
  if ( (v15 & 0x4E27A9) != 0 )
  {
    v63 = -20;
    v12 = v11[6];
    goto LABEL_58;
  }
  if ( (v16 & 0x3F2C0) != 0 )
  {
    v63 = -268435456;
    v12 = v11[58];
LABEL_58:
    DirtyVisRgnTrackers(a1, v14);
    v65 = *(_QWORD *)a1;
    v68 = (void *)ReferenceDwmApiPort(v67, v66);
    DwmAsyncChildStyleChange(v68, v65, v63, v12);
  }
  if ( (v13 & 0x1C40000) != 0 || (v15 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_5:
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  v19 = *(_DWORD *)(v17 + 24);
  v20 = *(_DWORD *)(v17 + 232);
  *(_BYTE *)(v17 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_9;
  v22 = (_DWORD *)*((_QWORD *)a1 + 5);
  v23 = v22[6] ^ v19;
  v21 = (unsigned int)v22[58];
  v24 = v21 ^ v20;
  v25 = v22[7];
  v26 = v25 ^ v18;
  if ( !v26 )
  {
    if ( v23 )
      goto LABEL_54;
    if ( !v24 )
      goto LABEL_9;
  }
  if ( (v26 & 0xB9CF0000) != 0 )
  {
    v64 = -16;
    goto LABEL_62;
  }
LABEL_54:
  if ( (v23 & 0x4E27A9) != 0 )
  {
    v64 = -20;
    v25 = v22[6];
    goto LABEL_62;
  }
  if ( (v24 & 0x3F2C0) != 0 )
  {
    v64 = -268435456;
    v25 = v22[58];
LABEL_62:
    DirtyVisRgnTrackers(a1, v21);
    v69 = *(_QWORD *)a1;
    v72 = (void *)ReferenceDwmApiPort(v71, v70);
    DwmAsyncChildStyleChange(v72, v69, v64, v25);
  }
  if ( (v26 & 0x1C40000) != 0 || (v23 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_9:
  v27 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v27 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_22;
  }
  v28 = HIDWORD(*(_QWORD *)a2);
  v90 = v28;
  v29 = HIDWORD(*(_QWORD *)a2);
  v82 = *(_OWORD *)a2;
  if ( (*(_BYTE *)(v27 + 30) & 0xC0) == 0xC0 )
  {
    v30 = *(_DWORD *)(v27 + 28);
    v31 = *(_DWORD *)(v27 + 24);
    v32 = *(_DWORD *)(v27 + 232);
    *(_BYTE *)(v27 + 16) |= 8u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_15:
      LODWORD(v28) = v90;
      v29 = DWORD1(v82) + GetCaptionHeight(a1);
      goto LABEL_16;
    }
    v33 = (_DWORD *)*((_QWORD *)a1 + 5);
    v34 = v33[6] ^ v31;
    v35 = (unsigned int)v33[58];
    v36 = v35 ^ v32;
    v37 = v33[7];
    v38 = v37 ^ v30;
    if ( !v38 )
    {
      if ( v34 )
      {
LABEL_66:
        if ( (v34 & 0x4E27A9) != 0 )
        {
          v10 = -20;
          v37 = v33[6];
        }
        else
        {
          if ( (v36 & 0x3F2C0) == 0 )
          {
LABEL_70:
            if ( (v38 & 0x1C40000) != 0 || (v34 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_15;
          }
          v10 = -268435456;
          v37 = v33[58];
        }
LABEL_69:
        DirtyVisRgnTrackers(a1, v35);
        v73 = *(_QWORD *)a1;
        v76 = (void *)ReferenceDwmApiPort(v75, v74);
        DwmAsyncChildStyleChange(v76, v73, v10, v37);
        goto LABEL_70;
      }
      if ( !v36 )
        goto LABEL_15;
    }
    if ( (v38 & 0xB9CF0000) != 0 )
      goto LABEL_69;
    goto LABEL_66;
  }
LABEL_16:
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v21, 0, 0);
  v40 = v82 + WindowBordersWithDpiAwareness;
  v41 = DWORD2(v82) - WindowBordersWithDpiAwareness;
  v91 = WindowBordersWithDpiAwareness;
  v42 = v29 + WindowBordersWithDpiAwareness;
  v43 = HIDWORD(v82) - WindowBordersWithDpiAwareness;
  LODWORD(v82) = v82 + WindowBordersWithDpiAwareness;
  DWORD2(v82) -= WindowBordersWithDpiAwareness;
  DWORD1(v82) = v42;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v47 = *((_QWORD *)a1 + 21);
    v86 = 0LL;
    if ( v47 != *v84 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v84);
      if ( v47 )
      {
        v84 = *(__int64 **)(v47 + 152);
        ++*((_DWORD *)v84 + 2);
      }
      else
      {
        v84 = (__int64 *)gSmartObjNullRef;
      }
    }
    v48 = v86 == 0;
    if ( !v86 )
      v48 = *v84 == 0;
    if ( !v48 )
    {
      SetOrClrWF(1, a1, 1u, 1);
      if ( !a3 )
      {
        v51 = v86;
        if ( !v86 )
          v51 = *v84;
        v52 = PtiCurrent(v50, v49);
        Win32HM_LockIntoThread<0>(v52, v51, BugCheckParameter3);
        *(_DWORD *)(*(_QWORD *)(v51 + 40) + 40LL) |= 0x200u;
        v42 += xxxMenuBarCompute(&v84, (__int64)a1, v42 - (int)v28, v91, v41 - v40);
        DWORD1(v82) = v42;
        v53 = *(_QWORD *)(BugCheckParameter3[1] + 40);
        *(_DWORD *)(v53 + 40) &= ~0x200u;
        v55 = PtiCurrent(v53, v54);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v55, BugCheckParameter3);
      }
    }
  }
  v44 = v43;
  if ( v42 >= v43 )
    v44 = v42;
  HIDWORD(v82) = v44;
  if ( v40 < v41 )
  {
    if ( v42 < v43 )
    {
      v56 = v41;
      DWORD2(v82) = v41;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 2) != 0 )
      {
        DWORD2(v82) = v41;
        if ( v41 - v40 >= 4 )
        {
          DWORD2(v82) = v41;
          if ( v44 - v42 >= 4 )
          {
            SetOrClrWF(1, a1, 0x410u, 1);
            v40 += 2;
            v56 = v41 - 2;
            v42 += 2;
            *(_QWORD *)&v82 = __PAIR64__(v42, v40);
            v44 -= 2;
            DWORD2(v82) = v41 - 2;
            HIDWORD(v82) = v44;
          }
        }
      }
      v57 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v57 + 30) & 0x10) != 0
        && ((v77 = *(_DWORD *)(v57 + 288) & 0xF, v77 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v57 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v57 + 232) & 0x400) == 0
          ? (v77
          || (v81 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v81 + 8) + 64LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1)),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            v44 - v42 > DpiDependentMetric) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v58 = a3;
        if ( !a3 )
          HIDWORD(v82) = v44 - DpiDependentMetric;
      }
      else
      {
        v58 = a3;
      }
      v59 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v59 + 30) & 0x20) != 0 )
      {
        v60 = *(_DWORD *)(v59 + 288) & 0xF;
        if ( v60 == 3 )
        {
          v61 = (*(_DWORD *)(v59 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v59 + 232) & 0x400) != 0 )
        {
          v61 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v60
               && (v80 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v80 + 8) + 64LL) & 1) != 0 )
        {
          v61 = 96;
        }
        else
        {
          v61 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
        }
        v62 = GetDpiDependentMetric(0LL, v61);
        if ( v56 - v40 >= v62 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v58 )
          {
            if ( ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL)) & 0x40) != 0 )
              LODWORD(v82) = v62 + v40;
            else
              DWORD2(v82) = v56 - v62;
          }
        }
      }
    }
  }
  else
  {
    DWORD2(v82) = v40;
  }
  *(_OWORD *)a2 = v82;
LABEL_22:
  v45 = *((_QWORD *)a1 + 5);
  if ( v87 != (*(_BYTE *)(v45 + 16) & 0xF) && *(char *)(v45 + 23) < 0 )
    xxxWindowEvent(0x8004u, a1, 0, 0, 1);
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v84);
}
