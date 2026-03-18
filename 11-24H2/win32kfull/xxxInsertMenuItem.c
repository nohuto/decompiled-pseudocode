/*
 * XREFs of xxxInsertMenuItem @ 0x140071A30
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1402A12D0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 *     MNFreeItem @ 0x140071110 (MNFreeItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140072F38 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x140073BE8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     MNGetpItemIndex @ 0x14019FB5C (MNGetpItemIndex.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1402E07F4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1402E7E6C (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1402E9818 (MakeMenuRtoL.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall xxxInsertMenuItem(__int64 **a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  int v8; // r14d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rcx
  unsigned int **v20; // rsi
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rbx
  struct tagTHREADINFO *v25; // rax
  ULONG_PTR *p_BugCheckParameter3; // rcx
  ULONG_PTR v27; // rdx
  ULONG_PTR *v28; // rax
  ULONG_PTR v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r9
  __int64 v35; // r10
  struct tagMENU *v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  unsigned __int64 v40; // r8
  ULONG_PTR *v41; // rax
  ULONG_PTR v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rsi
  ULONG_PTR *v47; // rbx
  void *CurrentWin32kStackRefLookAside; // rax
  _QWORD *v49; // rax
  __int64 *v51; // rbx
  struct tagTHREADINFO *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct tagTHREADINFO *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  unsigned int v58; // edx
  unsigned int v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 *v65; // r13
  __int64 *v66; // r13
  __int64 *v67; // rax
  __int64 *v68; // rcx
  size_t v69; // r15
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 *v73; // rcx
  signed int v74; // eax
  __int64 *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  struct tagTHREADINFO *v78; // rax
  __int64 v79; // rdx
  char v80; // cl
  int v81; // eax
  __int64 *v82; // rcx
  __int64 v83; // rcx
  unsigned int v84; // r15d
  unsigned __int64 v85; // rsi
  __int64 v86; // r9
  _DWORD *v87; // [rsp+30h] [rbp-61h] BYREF
  __int64 v88; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v89; // [rsp+40h] [rbp-51h]
  ULONG_PTR *v90; // [rsp+48h] [rbp-49h] BYREF
  __int64 v91; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v93; // [rsp+60h] [rbp-31h]
  __int64 **v94; // [rsp+68h] [rbp-29h] BYREF
  __int64 v95; // [rsp+70h] [rbp-21h] BYREF
  __int64 *v96; // [rsp+78h] [rbp-19h]
  __int64 *v97; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v98[16]; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v99[9]; // [rsp+98h] [rbp+7h] BYREF
  __int64 *v100; // [rsp+F0h] [rbp+5Fh] BYREF
  int v101; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v102; // [rsp+108h] [rbp+77h]

  v102 = a4;
  v6 = a2;
  v8 = 1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v11 = 0;
  if ( CurrentThreadNonPaged )
    v12 = *CurrentThreadNonPaged;
  else
    v12 = 0LL;
  v94 = (__int64 **)gSmartObjNullRef;
  v95 = *(_QWORD *)(v12 + 1672);
  *(_QWORD *)(v12 + 1672) = &v95;
  v96 = 0LL;
  v100 = 0LL;
  v97 = 0LL;
  v13 = PtiCurrent(v10, v12);
  v14 = 0;
  v90 = (ULONG_PTR *)gSmartObjNullRef;
  v101 = 0;
  v91 = *((_QWORD *)v13 + 209);
  *((_QWORD *)v13 + 209) = &v91;
  v15 = **a1;
  v17 = (__int64 *)W32GetCurrentThreadNonPaged(&v91, v16);
  if ( v17 )
    v18 = *v17;
  else
    v18 = 0LL;
  v87 = (_DWORD *)gSmartObjNullRef;
  if ( v15 )
  {
    v87 = *(_DWORD **)(v15 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v15 + 152) + 8LL);
  }
  v88 = *(_QWORD *)(v18 + 1672);
  *(_QWORD *)(v18 + 1672) = &v88;
  v19 = a1[2];
  v89 = v19;
  if ( v6 == -1 )
  {
    v20 = 0LL;
  }
  else
  {
    v63 = v96;
    if ( !v96 )
    {
      v19 = v89;
      v63 = *v94;
    }
    v100 = v63;
    if ( !v19 )
      v19 = *(__int64 **)v87;
    v64 = MNLookUpItem(v19, v6, a3, &v100);
    v65 = v100;
    v20 = (unsigned int **)v64;
    v96 = 0LL;
    if ( v100 != *v94 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v94);
      if ( v65 )
      {
        v94 = (__int64 **)v65[19];
        ++*((_DWORD *)v94 + 2);
      }
      else
      {
        v94 = (__int64 **)gSmartObjNullRef;
      }
    }
    if ( v20 )
    {
      v89 = v96;
      v66 = *v94;
      if ( *v94 != *(__int64 **)v87 )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v87);
        if ( v66 )
        {
          v87 = (_DWORD *)v66[19];
          ++v87[2];
        }
        else
        {
          v87 = (_DWORD *)gSmartObjNullRef;
        }
      }
    }
    else
    {
      v6 = -1;
    }
  }
  v21 = v102;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL)
    && ((*(_DWORD *)(v102 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v102 + 72) - 1LL) > 6) )
  {
    v58 = v6;
    v59 = v6;
    if ( v20 && !a3 )
    {
      v82 = v89;
      if ( !v89 )
        v82 = *(__int64 **)v87;
      v58 = MNGetpItemIndex(v82, v20);
    }
    if ( v58 )
    {
      if ( v58 == -1 )
        v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL);
      v60 = v58 - 1;
      v61 = *(_QWORD *)(*(_QWORD *)v87 + 88LL) + 96 * v60;
      if ( !(_DWORD)v60 )
        goto LABEL_10;
      do
      {
        v62 = *(_QWORD *)(*(_QWORD *)v61 + 96LL);
        if ( !v62 )
          break;
        if ( v62 >= 7 )
          break;
        v61 -= 96LL;
        v6 = v60;
        a3 = 1;
        LODWORD(v60) = v60 - 1;
      }
      while ( (_DWORD)v60 );
    }
    else
    {
      if ( *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v87 + 88LL) + 96LL) == 1LL )
      {
        v80 = 1;
        v6 = 1;
      }
      else
      {
        v80 = 0;
      }
      v81 = 1;
      if ( !v80 )
        v81 = a3;
      a3 = v81;
    }
    if ( v6 != v59 )
      v20 = (unsigned int **)(*(_QWORD *)(*(_QWORD *)v87 + 88LL) + 96LL * v6);
  }
LABEL_10:
  v22 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL);
  v23 = *(_QWORD *)v87;
  if ( (unsigned int)v22 < *(_DWORD *)(*(_QWORD *)v87 + 60LL) )
  {
LABEL_11:
    v24 = v89;
    goto LABEL_12;
  }
  if ( !(unsigned int)MNAllocMenuItems(&v87, 0LL) )
  {
LABEL_121:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v87);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v90, v79);
    goto LABEL_55;
  }
  if ( v6 == -1 )
    goto LABEL_11;
  v67 = v96;
  if ( !v96 )
    v67 = *v94;
  v68 = v89;
  v100 = v67;
  if ( !v89 )
    v68 = *(__int64 **)v87;
  v20 = (unsigned int **)MNLookUpItem(v68, v6, a3, &v100);
  v96 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v94);
  v24 = v89;
  if ( v89 )
  {
    if ( v89 == v96 )
    {
LABEL_12:
      if ( v24 )
        goto LABEL_14;
      goto LABEL_13;
    }
    goto LABEL_121;
  }
  v22 = *(_QWORD *)v87;
  if ( *(__int64 **)v87 != *v94 )
    goto LABEL_121;
LABEL_13:
  v24 = *(__int64 **)v87;
LABEL_14:
  v25 = PtiCurrent(v23, v22);
  p_BugCheckParameter3 = &BugCheckParameter3;
  v27 = *((_QWORD *)v25 + 57);
  BugCheckParameter3 = v27;
  *((_QWORD *)v25 + 57) = &BugCheckParameter3;
  v93 = v24;
  if ( v24 )
    HMLockObject(v24);
  if ( v20 )
  {
    v70 = (__int64)v89;
    if ( !v89 )
      v70 = *(_QWORD *)v87;
    v71 = MNGetPopupFromMenu(v70, &v97);
    p_BugCheckParameter3 = v90;
    v72 = v71;
    if ( v71 != *v90 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree((__int64 *)&v90);
      if ( v72 )
      {
        v90 = *(ULONG_PTR **)(v72 + 88);
        ++*((_DWORD *)v90 + 2);
      }
      else
      {
        v90 = (ULONG_PTR *)gSmartObjNullRef;
      }
    }
    if ( *v90 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v98);
      v73 = v89;
      if ( !v89 )
        v73 = *(__int64 **)v87;
      v14 = MNGetpItemIndex(v73, v20);
      if ( *(_DWORD *)(*v90 + 80) >= v14 )
        ++*(_DWORD *)(*v90 + 80);
      if ( (*(_DWORD *)*v90 & 0x20) != 0 && *(_DWORD *)(*v90 + 84) >= v14 )
        ++*(_DWORD *)(*v90 + 84);
      if ( v97[8] == *(_QWORD *)(*v90 + 16) )
      {
        v74 = *((_DWORD *)v97 + 18);
        if ( v74 >= (int)v14 )
          *((_DWORD *)v97 + 18) = v74 + 1;
      }
      v75 = v97;
      if ( v97[10] == *(_QWORD *)(*v90 + 16) )
      {
        v76 = *((unsigned int *)v97 + 22);
        if ( (int)v76 >= (int)v14 )
        {
          *((_DWORD *)v97 + 22) = v76 + 1;
          if ( (_DWORD)v76 == v14 )
          {
            v77 = *((unsigned int *)v75 + 23);
            if ( (v77 & 1) != 0 )
              xxxMNSetGapState(v75[10], v76, v77, 0LL);
          }
        }
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v98);
    }
  }
  v28 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(p_BugCheckParameter3, v27);
  if ( v28 )
    v29 = *v28;
  else
    v29 = 0LL;
  v30 = Win32HM_UnlockFromThread<1>(v29, &BugCheckParameter3);
  v32 = (__int64)v87;
  v33 = v30;
  BugCheckParameter3 = -1LL;
  v93 = 0LL;
  v89 = 0LL;
  if ( v30 == *(_QWORD *)v87
    || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v87), !v33)
      ? (v87 = (_DWORD *)gSmartObjNullRef)
      : (_DWORD *)(v87 = *(_DWORD **)(v33 + 152), ++v87[2]),
        !v89) )
  {
    if ( !*(_QWORD *)v87 )
    {
      if ( BugCheckParameter3 != -1LL )
      {
        v78 = PtiCurrent(v32, v31);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v78, &BugCheckParameter3);
      }
      goto LABEL_121;
    }
  }
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL);
  if ( v20 )
  {
    v69 = *(_QWORD *)(*(_QWORD *)v87 + 88LL)
        + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL) - 1)
        - (_QWORD)v20;
    if ( v69 )
    {
      memmove(
        v20[12],
        *v20,
        **(_QWORD **)(*(_QWORD *)v87 + 88LL)
      + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL) - 1)
      - (_QWORD)*v20);
      memmove(v20 + 12, v20, v69);
      v35 = ((__int64)v20 - *(_QWORD *)(*(_QWORD *)v87 + 88LL) + 96) / 96;
      while ( (unsigned int)v35 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL) )
      {
        v34 = 96LL * (int)v35;
        *(_QWORD *)(v34 + *(_QWORD *)(*(_QWORD *)v87 + 88LL)) = *(_QWORD *)(*(_QWORD *)v87 + 96LL)
                                                              + 112LL * (unsigned int)v35;
        LODWORD(v35) = v35 + 1;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 88LL) + v34 + 8) = *(_QWORD *)(v34 + *(_QWORD *)(*(_QWORD *)v87 + 88LL))
                                                                  - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 24LL) + 16LL);
      }
    }
  }
  else
  {
    v20 = (unsigned int **)(96LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL)
                          + *(_QWORD *)(*(_QWORD *)v87 + 88LL)
                          - 96LL);
  }
  **v20 = 0;
  (*v20)[1] = 0;
  (*v20)[2] = 0;
  *((_QWORD *)*v20 + 2) = 0LL;
  v20[2] = 0LL;
  *((_QWORD *)*v20 + 3) = 0LL;
  *((_QWORD *)*v20 + 4) = 0LL;
  (*v20)[12] = 0;
  *((_QWORD *)*v20 + 7) = 0LL;
  (*v20)[16] = 0;
  (*v20)[17] = 0;
  (*v20)[18] = 0;
  (*v20)[19] = 0;
  *((_QWORD *)*v20 + 12) = 0LL;
  (*v20)[26] = -1;
  *((_QWORD *)*v20 + 5) = 0LL;
  v20[3] = 0LL;
  v20[11] = 0LL;
  v36 = (struct tagMENU *)v89;
  if ( !v89 )
    v36 = *(struct tagMENU **)v87;
  if ( (unsigned int)MNIsUAHMenu(v36) )
  {
    *(_OWORD *)((char *)v20 + 52) = 0LL;
    *(_OWORD *)((char *)v20 + 68) = 0LL;
  }
  if ( (unsigned int)SetLPITEMInfoNoRedraw((unsigned int)&v87, (_DWORD)v20, v21, a5, (__int64)&v101) )
  {
    if ( !v101 )
      goto LABEL_34;
    v51 = v89;
    if ( !v89 )
      v51 = *(__int64 **)v87;
    v52 = PtiCurrent(v38, v37);
    BugCheckParameter3 = *((_QWORD *)v52 + 57);
    *((_QWORD *)v52 + 57) = &BugCheckParameter3;
    v93 = v51;
    if ( v51 )
      HMLockObject(v51);
    xxxRedrawForSetLPITEMInfo(&v87, v20);
    v55 = PtiCurrent(v54, v53);
    v56 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v55, &BugCheckParameter3);
    v38 = (__int64)v87;
    v57 = v56;
    BugCheckParameter3 = -1LL;
    v93 = 0LL;
    v89 = 0LL;
    if ( v56 != *(_QWORD *)v87 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v87);
      if ( v57 )
      {
        v87 = *(_DWORD **)(v57 + 152);
        ++v87[2];
      }
      else
      {
        v87 = (_DWORD *)gSmartObjNullRef;
      }
      v39 = v89;
      if ( v89 )
        goto LABEL_36;
    }
    if ( *(_QWORD *)v87 )
    {
LABEL_34:
      v39 = v89;
      if ( !v89 )
        v39 = *(__int64 **)v87;
LABEL_36:
      v40 = (unsigned __int64)v20 - v39[11];
      if ( (v40 & 0x8000000000000000uLL) == 0LL )
      {
        v38 = *(unsigned int *)(v39[5] + 44);
        if ( v40 < 96 * v38 )
        {
          v37 = v40 / 0x60;
          if ( (unsigned int)(v40 / 0x60) != -1 && v40 == 96 * (v40 / 0x60) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 40LL) & 0x20) != 0
              || (v38 = **v20, (v38 & 0x2000) != 0) && (v38 & 4) == 0 )
            {
              **v20 |= 0x6000u;
              v38 = (__int64)v20[2];
              if ( v38 )
                MakeMenuRtoL(v38, 1LL);
            }
          }
        }
      }
      goto LABEL_42;
    }
  }
  else
  {
    if ( *v90 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v99, *v90);
      MNDeleteAdjustIndexes(v97, v99, v14);
    }
    v83 = (__int64)v89;
    if ( !v89 )
      v83 = *(_QWORD *)v87;
    MNFreeItem(v83, v20, 1);
    v37 = *(_QWORD *)v87;
    v84 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL)
        + *(_DWORD *)(*(_QWORD *)v87 + 88LL)
        - (_DWORD)v20
        - 96;
    if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL) + *(_DWORD *)(*(_QWORD *)v87 + 88LL) - (_DWORD)v20 != 96 )
    {
      memmove(
        *v20,
        v20[12],
        (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL)
                     + **(_DWORD **)(*(_QWORD *)v87 + 88LL)
                     - *((_DWORD *)v20 + 24)));
      memmove(v20, v20 + 12, v84);
      v85 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v20 - *(_QWORD *)(*(_QWORD *)v87 + 88LL)) >> 5);
      while ( (unsigned int)v85 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL) - 1 )
      {
        v86 = 96LL * (int)v85;
        *(_QWORD *)(v86 + *(_QWORD *)(*(_QWORD *)v87 + 88LL)) = *(_QWORD *)(*(_QWORD *)v87 + 96LL)
                                                              + 112LL * (unsigned int)v85;
        v37 = *(_QWORD *)(*(_QWORD *)v87 + 88LL);
        LODWORD(v85) = v85 + 1;
        *(_QWORD *)(v37 + v86 + 8) = *(_QWORD *)(v86 + v37) - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 24LL) + 16LL);
      }
    }
    v38 = *(_QWORD *)v87;
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 40LL) + 44LL);
  }
  v8 = 0;
LABEL_42:
  if ( BugCheckParameter3 != -1LL )
  {
    v41 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v38, v37);
    if ( v41 )
      v42 = *v41;
    else
      v42 = 0LL;
    Win32HM_UnlockFromThread<1>(v42, &BugCheckParameter3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v87);
  v45 = (__int64 *)W32GetCurrentThreadNonPaged(v44, v43);
  if ( v45 )
    v46 = *v45;
  else
    v46 = 0LL;
  if ( v90 != (ULONG_PTR *)gSmartObjNullRef && !--*((_DWORD *)v90 + 2) )
  {
    if ( *((_BYTE *)v90 + 12) )
    {
      v47 = v90;
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v47);
    }
  }
  v49 = *(_QWORD **)(v46 + 1672);
  if ( v49 )
    *(_QWORD *)(v46 + 1672) = *v49;
  v11 = v8;
LABEL_55:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v94);
  return v11;
}
