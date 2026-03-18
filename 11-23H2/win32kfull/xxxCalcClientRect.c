/*
 * XREFs of xxxCalcClientRect @ 0x1C010BA30
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156276 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     NtUserUpdateClientRect @ 0x1C01DEAC0 (NtUserUpdateClientRect.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0080794 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetCaptionHeight @ 0x1C00EA380 (GetCaptionHeight.c)
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0109704 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxMenuBarCompute @ 0x1C0238990 (xxxMenuBarCompute.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // esi
  int v11; // edi
  char v12; // dl
  _DWORD *v13; // rax
  int v14; // esi
  int v15; // edi
  int v16; // r13d
  int v17; // r12d
  __int64 v18; // rax
  int v19; // r12d
  int v20; // esi
  int v21; // edi
  _DWORD *v22; // rax
  int v23; // esi
  int v24; // edi
  int v25; // r13d
  int v26; // r12d
  __int64 v27; // rcx
  int v28; // r15d
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // edi
  __int64 v32; // rax
  int v33; // r12d
  int v34; // eax
  int v35; // r13d
  int v36; // esi
  int v37; // r8d
  int DpiDependentMetric; // eax
  int v39; // r13d
  signed int v40; // esi
  signed int v41; // edi
  signed int v42; // r12d
  signed int v43; // r15d
  __int64 v44; // rdi
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 *v48; // rax
  _QWORD *result; // rax
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  int v52; // r15d
  __int64 v53; // rcx
  int v54; // edx
  int v55; // eax
  int v56; // edi
  int v57; // r15d
  int v58; // esi
  int v59; // edi
  _DWORD *v60; // rax
  int v61; // esi
  int v62; // edi
  int v63; // r12d
  int v64; // r15d
  __int64 v65; // rax
  int v66; // edx
  int WindowDpiLastNotify; // eax
  int v68; // r13d
  int v69; // edx
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // [rsp+38h] [rbp-39h]
  __int64 v89; // [rsp+40h] [rbp-31h]
  __int128 v90; // [rsp+48h] [rbp-29h]
  __int128 v91; // [rsp+48h] [rbp-29h]
  __int64 *v92; // [rsp+58h] [rbp-19h] BYREF
  __int64 v93; // [rsp+60h] [rbp-11h] BYREF
  __int64 v94; // [rsp+68h] [rbp-9h]
  __int128 v95; // [rsp+70h] [rbp-1h] BYREF
  __int64 v96; // [rsp+80h] [rbp+Fh]
  char v97; // [rsp+D8h] [rbp+67h]
  int v100; // [rsp+F0h] [rbp+7Fh]
  int v101; // [rsp+F0h] [rbp+7Fh]
  int v102; // [rsp+F0h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v92 = (__int64 *)gSmartObjNullRef;
  v93 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v93;
  v8 = a1[5];
  v96 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(v8 + 24);
  v11 = *(_DWORD *)(v8 + 232);
  v12 = *(_BYTE *)(v8 + 16) & 0xF;
  *(_BYTE *)(v8 + 16) &= 0xF0u;
  v97 = v12;
  v88 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = (_DWORD *)a1[5];
    v14 = v13[6] ^ v10;
    v15 = v13[58] ^ v11;
    v16 = v13[7];
    v17 = v16 ^ v9;
    if ( !v17 )
    {
      if ( v14 )
        goto LABEL_95;
      if ( !v15 )
        goto LABEL_7;
    }
    if ( (v17 & 0xB1CF0000) != 0 )
    {
      v101 = -16;
      goto LABEL_99;
    }
LABEL_95:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v101 = -20;
      v16 = v13[6];
    }
    else
    {
      if ( (v15 & 0x12C0) == 0 )
        goto LABEL_100;
      v101 = -268435456;
      v16 = v13[58];
    }
LABEL_99:
    DirtyVisRgnTrackers((__int64)a1);
    v70 = *a1;
    v73 = (void *)ReferenceDwmApiPort(v72, v71);
    DwmAsyncChildStyleChange(v73, v70, v101, v16);
LABEL_100:
    if ( (v14 & 0x200A0381) != 0 || (v17 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges((struct tagWND *)a1, 1);
  }
LABEL_7:
  v18 = a1[5];
  v19 = *(_DWORD *)(v18 + 28);
  v20 = *(_DWORD *)(v18 + 24);
  v21 = *(_DWORD *)(v18 + 232);
  *(_BYTE *)(v18 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_11;
  v22 = (_DWORD *)a1[5];
  v23 = v22[6] ^ v20;
  v24 = v22[58] ^ v21;
  v25 = v22[7];
  v26 = v25 ^ v19;
  if ( !v26 )
  {
    if ( v23 )
      goto LABEL_104;
    if ( !v24 )
      goto LABEL_11;
  }
  if ( (v26 & 0xB1CF0000) != 0 )
  {
    v102 = -16;
LABEL_108:
    DirtyVisRgnTrackers((__int64)a1);
    v74 = *a1;
    v77 = (void *)ReferenceDwmApiPort(v76, v75);
    DwmAsyncChildStyleChange(v77, v74, v102, v25);
    goto LABEL_109;
  }
LABEL_104:
  if ( (v23 & 0x4E27A9) != 0 )
  {
    v102 = -20;
    v25 = v22[6];
    goto LABEL_108;
  }
  if ( (v24 & 0x12C0) != 0 )
  {
    v102 = -268435456;
    v25 = v22[58];
    goto LABEL_108;
  }
LABEL_109:
  if ( (v26 & 0xC40000) != 0 || (v23 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1);
LABEL_11:
  v27 = a1[5];
  if ( (*(_BYTE *)(v27 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
    goto LABEL_43;
  }
  v89 = HIDWORD(*(_QWORD *)a2);
  v90 = *(_OWORD *)a2;
  if ( (*(_BYTE *)(v27 + 30) & 0xC0) == 0xC0 )
  {
    v57 = *(_DWORD *)(v27 + 28);
    v58 = *(_DWORD *)(v27 + 24);
    v59 = *(_DWORD *)(v27 + 232);
    *(_BYTE *)(v27 + 16) |= 8u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_70:
      v28 = GetCaptionHeight((__int64)a1) + DWORD1(v90);
      goto LABEL_14;
    }
    v60 = (_DWORD *)a1[5];
    v61 = v60[6] ^ v58;
    v62 = v60[58] ^ v59;
    v63 = v60[7];
    v64 = v63 ^ v57;
    if ( !v64 )
    {
      if ( v61 )
      {
LABEL_113:
        if ( (v61 & 0x4E27A9) != 0 )
        {
          v88 = -20;
          v63 = v60[6];
        }
        else
        {
          if ( (v62 & 0x12C0) == 0 )
          {
LABEL_118:
            if ( (v64 & 0xC40000) != 0 || (v61 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges((struct tagWND *)a1, 1);
            goto LABEL_70;
          }
          v88 = -268435456;
          v63 = v60[58];
        }
LABEL_117:
        DirtyVisRgnTrackers((__int64)a1);
        v78 = *a1;
        v81 = (void *)ReferenceDwmApiPort(v80, v79);
        DwmAsyncChildStyleChange(v81, v78, v88, v63);
        goto LABEL_118;
      }
      if ( !v62 )
        goto LABEL_70;
    }
    if ( (v64 & 0xB1CF0000) != 0 )
      goto LABEL_117;
    goto LABEL_113;
  }
  v28 = HIDWORD(*(_QWORD *)a2);
LABEL_14:
  v29 = a1[5];
  v30 = *(_DWORD *)(v29 + 288) & 0xF;
  if ( v30 == 3 )
  {
    v31 = (*(_DWORD *)(v29 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v29 + 232) & 0x400) != 0 )
  {
    v50 = *(_WORD *)(v29 + 286);
    if ( !v50 )
      v50 = *(_WORD *)(v29 + 284);
    v31 = v50;
  }
  else if ( !v30 && (v65 = *(_QWORD *)(a1[2] + 456)) != 0 && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
  {
    v31 = 96;
  }
  else
  {
    v31 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL);
  }
  v32 = a1[2];
  if ( *(_DWORD *)(v32 + 632) > 0x9900u )
    v33 = 0;
  else
    v33 = *(_DWORD *)(v32 + 648);
  v34 = *(_DWORD *)(v29 + 24);
  v35 = *(_DWORD *)(v29 + 28);
  if ( (v34 & 0x100) != 0 )
    v69 = 2;
  else
    v69 = (v34 & 0x20000) != 0;
  v36 = v69 + 1;
  v37 = v35 & 0xC00000;
  if ( (v35 & 0xC00000) == 0 && (v34 & 1) == 0 )
    v36 = v69;
  if ( (v33 & 0x10000000) != 0 )
  {
    DpiDependentMetric = 0;
  }
  else if ( (v33 & 0x20000000) != 0 )
  {
    DpiDependentMetric = 0;
  }
  else if ( v31 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    DpiDependentMetric = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( v31 == 96 )
  {
    DpiDependentMetric = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(v31) == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v31);
    else
      DpiDependentMetric = GetDpiDependentMetric(29, v31);
    v37 = v35 & 0xC00000;
  }
  if ( (v35 & 0x40000) != 0 || (v39 = v36, DpiDependentMetric > 0) && v37 == 12582912 && (v33 & 0x30000000) == 0 )
    v39 = v36 + DpiDependentMetric + GetResizeBorderWidthForDpiWithAppCompat2(v31, v33);
  v40 = v90 + v39;
  v41 = HIDWORD(v90) - v39;
  LODWORD(v90) = v90 + v39;
  v42 = DWORD2(v90) - v39;
  HIDWORD(v90) = v41;
  v43 = v28 + v39;
  DWORD2(v91) = DWORD2(v90) - v39;
  DWORD1(v91) = v43;
  v100 = v41;
  if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) != 0x40 )
  {
    v44 = a1[21];
    v94 = 0LL;
    if ( v44 != *v92 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v92);
      if ( v44 )
      {
        v92 = *(__int64 **)(v44 + 152);
        ++*((_DWORD *)v92 + 2);
      }
      else
      {
        v92 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( (v94 || *v92) && (SetOrClrWF(1, a1, 1u, 1), !a3) )
    {
      v82 = v94;
      if ( !v94 )
        v82 = *v92;
      *(_DWORD *)(*(_QWORD *)(v82 + 40) + 40LL) |= 0x200u;
      ThreadLockAlways(v82, &v95);
      v42 = DWORD2(v91);
      v40 = v91;
      v43 += xxxMenuBarCompute((unsigned int)&v92, (_DWORD)a1, v43 - (int)v89, v39, DWORD2(v91) - (int)v91);
      DWORD1(v91) = v43;
      v83 = *(_QWORD *)(*((_QWORD *)&v95 + 1) + 40LL);
      *(_DWORD *)(v83 + 40) &= ~0x200u;
      ThreadUnlock1(v83, v84, v85);
    }
    else
    {
      v42 = DWORD2(v91);
      v40 = v91;
    }
    v41 = HIDWORD(v91);
  }
  v45 = a1[5];
  v46 = 0;
  if ( v43 >= v41 )
    v41 = v43;
  HIDWORD(v91) = v41;
  if ( (*(_BYTE *)(v45 + 21) & 2) != 0 && v40 >= v42 )
  {
    DWORD2(v91) = v40;
  }
  else
  {
    LOBYTE(v46) = v43 >= v100;
    if ( !v46 )
    {
      if ( (*(_BYTE *)(v45 + 25) & 2) != 0 && v42 - v40 >= 4 && v41 - v43 >= 4 )
      {
        SetOrClrWF(1, a1, 0x410u, 1);
        v40 += 2;
        v42 -= 2;
        v43 += 2;
        *(_QWORD *)&v91 = __PAIR64__(v43, v40);
        v41 -= 2;
        *((_QWORD *)&v91 + 1) = __PAIR64__(v41, v42);
      }
      v51 = a1[5];
      if ( (*(_BYTE *)(v51 + 30) & 0x10) != 0
        && ((v66 = *(_DWORD *)(v51 + 288) & 0xF, v66 == 3)
          ? (WindowDpiLastNotify = (*(_DWORD *)(v51 + 288) >> 8) & 0x1FF)
          : (*(_DWORD *)(v51 + 232) & 0x400) != 0
          ? (WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1))
          : v66 || (v86 = *(_QWORD *)(a1[2] + 456)) == 0 || (*(_DWORD *)(**(_QWORD **)(v86 + 8) + 64LL) & 1) == 0
          ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL))
          : (WindowDpiLastNotify = 96),
            v68 = GetDpiDependentMetric(1, WindowDpiLastNotify),
            v41 - v43 > v68) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v52 = a3;
        if ( !a3 )
          HIDWORD(v91) = v41 - v68;
      }
      else
      {
        v52 = a3;
      }
      v53 = a1[5];
      if ( (*(_BYTE *)(v53 + 30) & 0x20) != 0 )
      {
        v54 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v54 == 3 )
        {
          v55 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x400) != 0 )
        {
          v55 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v54 && (v87 = *(_QWORD *)(a1[2] + 456)) != 0 && (*(_DWORD *)(**(_QWORD **)(v87 + 8) + 64LL) & 1) != 0 )
        {
          v55 = 96;
        }
        else
        {
          v55 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL);
        }
        v56 = GetDpiDependentMetric(0, v55);
        if ( v42 - v40 >= v56 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v52 )
          {
            if ( ((*(_BYTE *)(a1[5] + 26) & 0x40) != 0) == ((*(_BYTE *)(a1[5] + 25) & 0x40) != 0) )
              DWORD2(v91) = v42 - v56;
            else
              LODWORD(v91) = v56 + v40;
          }
        }
      }
    }
  }
  *(_OWORD *)a2 = v91;
LABEL_43:
  v47 = a1[5];
  if ( v97 != (*(_BYTE *)(v47 + 16) & 0xF) && *(char *)(v47 + 23) < 0 )
    xxxWindowEvent(0x8004u, (struct tagWND *)a1, 0, 0, 1);
  v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v48 )
    v4 = *v48;
  if ( v92 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v92 + 2) )
  {
    if ( *((_BYTE *)v92 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v92);
  }
  result = *(_QWORD **)(v4 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v4 + 1512) = result;
  }
  return result;
}
