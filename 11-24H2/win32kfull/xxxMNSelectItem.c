/*
 * XREFs of xxxMNSelectItem @ 0x14009DA30
 * Callers:
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BD900 (MNSetTimerToCloseHierarchy.c)
 */

struct tagITEM *__fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  struct tagITEM *v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rcx
  struct tagWND *v20; // r12
  __int64 v21; // rdx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  struct tagTHREADINFO *v26; // rax
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  struct tagWND *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 *v43[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v44[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 *v45[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v46; // [rsp+68h] [rbp-69h]
  __int64 *v47[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v48; // [rsp+80h] [rbp-51h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-49h] BYREF
  ULONG_PTR v50[2]; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v51[2]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG_PTR v52[2]; // [rsp+B8h] [rbp-19h] BYREF
  ULONG_PTR v53[2]; // [rsp+C8h] [rbp-9h] BYREF
  ULONG_PTR v54[2]; // [rsp+D8h] [rbp+7h] BYREF
  ULONG_PTR v55[2]; // [rsp+E8h] [rbp+17h] BYREF
  ULONG_PTR v56[2]; // [rsp+F8h] [rbp+27h] BYREF

  v4 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v47, a2);
  if ( *(_DWORD *)(**a1 + 80) == (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v6 = *(_QWORD *)(**a1 + 40);
      v7 = (struct tagITEM *)(*(_QWORD *)(v6 + 88) + 96 * v4);
      goto LABEL_12;
    }
LABEL_11:
    v7 = 0LL;
    goto LABEL_12;
  }
  v13 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v13 )
    goto LABEL_11;
  MNAnimate((__int64 *)a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v14 = *(_QWORD *)(**a1 + 40);
  v48 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v47, v14);
  v17 = v48;
  if ( !v48 )
    v17 = *v47[0];
  v18 = PtiCurrent(v16, v15);
  Win32HM_LockIntoThread<1>((__int64)v18, v17, (__int64 *)v50);
  v19 = **a1;
  v20 = *(struct tagWND **)(v19 + 8);
  v22 = PtiCurrent(v19, v21);
  Win32HM_LockIntoThread<1>((__int64)v22, (__int64)v20, (__int64 *)BugCheckParameter3);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v28 = *(_QWORD *)(v13 + 8);
    if ( v28 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v43, v28);
      FindTimer(*(_QWORD *)(*v43[0] + 16), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v43[0] &= ~0x4000u;
      if ( (**(_DWORD **)v43[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*v43[0] + 16), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v43[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*v43[0] + 80) != *(_DWORD *)(*v43[0] + 84) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v45, *(_QWORD *)(*v43[0] + 40));
        v29 = v46;
        v30 = *(struct tagWND **)(*v43[0] + 8);
        if ( !v46 )
          v29 = *v45[0];
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v53, v29);
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v52, (__int64)v30);
        if ( *(_DWORD *)(*v43[0] + 80) != -1 )
          xxxMNInvertItem(v43, v45, *(_DWORD *)(*v43[0] + 80), v30, 0);
        *(_DWORD *)(*v43[0] + 80) = *(_DWORD *)(*v43[0] + 84);
        xxxMNInvertItem(v43, v45, *(_DWORD *)(*v43[0] + 84), v30, 1);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v52, v31);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v53, v32);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v45, v33);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v34 = **a1;
      v51[1] = *(_QWORD *)(v34 + 16);
      v51[0] = *(_QWORD *)(v34 + 64) + 56LL;
      HMAssignmentLock(v51, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v43, v35);
    }
  }
  v23 = **a1;
  if ( *(int *)(v23 + 80) >= 0 )
  {
    if ( *(_QWORD *)(v23 + 24) )
    {
      if ( (*(_DWORD *)**a1 & 1) != 0 )
        xxxMNCloseHierarchy(**a1, a2);
      else
        MNSetTimerToCloseHierarchy(a1);
    }
    goto LABEL_21;
  }
  if ( (unsigned int)(*(_DWORD *)(v23 + 80) + 4) <= 1 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
LABEL_21:
    xxxMNInvertItem(a1, v47, *(_DWORD *)(**a1 + 80), v20, 0);
  }
  *(_DWORD *)(**a1 + 80) = v4;
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v8 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v8 = -4;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v8, 0, 0);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v10 = PtiCurrent(v9, v6);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v10, BugCheckParameter3);
    }
    if ( v50[0] != -1LL )
    {
      v11 = PtiCurrent(v9, v6);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v11, v50);
    }
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_11;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v44, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v36 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v37 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v37 || (v36 = *(_QWORD *)(v37 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v44, v36);
        goto LABEL_11;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v44, v36);
    if ( *(_QWORD *)v44[0] && *(_QWORD *)(*(_QWORD *)v44[0] + 8LL) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v56, *(_QWORD *)(*(_QWORD *)v44[0] + 8LL));
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v55, *(_QWORD *)(*(_QWORD *)v44[0] + 16LL));
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v54, *(_QWORD *)(*(_QWORD *)v44[0] + 40LL));
      v38 = *(_DWORD *)(*(_QWORD *)v44[0] + 80LL);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v45, *(_QWORD *)(*(_QWORD *)v44[0] + 40LL));
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v44[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v44[0] + 16LL),
        (unsigned int)v45,
        v38,
        a2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v45, v39);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v54, v40);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v55, v41);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v56, v42);
    }
    goto LABEL_56;
  }
  v24 = *(_DWORD *)(a2 + 8) & 0xFFFFAFFF;
  *(_DWORD *)(a2 + 8) = v24;
  if ( (v24 & 8) != 0 )
    xxxMNDoScroll(a1, (unsigned int)v4, 1LL);
  v7 = xxxMNInvertItem(a1, v47, v4, v20, 1);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v26 = PtiCurrent(v25, v6);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v26, BugCheckParameter3);
  }
  if ( v50[0] != -1LL )
  {
    v27 = PtiCurrent(v25, v6);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v27, v50);
  }
LABEL_12:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v47, v6);
  return v7;
}
