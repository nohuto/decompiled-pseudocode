/*
 * XREFs of xxxMNSetTop @ 0x1402BE960
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     xxxInvalidateRect @ 0x1402BD274 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 a1, signed int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  LONG v9; // r14d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct tagTHREADINFO *v15; // rax
  int v16; // eax
  struct tagWND *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR v28[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v29) )
    goto LABEL_30;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v29[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v29[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v29[0] + 116LL) )
    goto LABEL_30;
  if ( v30 )
    v5 = v30;
  else
    v5 = *(_QWORD *)v29[0];
  MNGetpItemFromIndex(v5, *(_DWORD *)(v5 + 116));
  if ( !v6 )
    v6 = *(_QWORD *)v29[0];
  v7 = MNGetpItemFromIndex(v6, a2);
  if ( !v8 || !v7 )
    goto LABEL_30;
  v9 = *(_DWORD *)(*(_QWORD *)v8 + 68LL) - *(_DWORD *)(*(_QWORD *)v7 + 68LL);
  v10 = *(_DWORD *)(*(_QWORD *)v29[0] + 124LL);
  if ( (v10 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v29[0] + 124LL) = v10 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v11 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v10 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v29[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v29[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 24LL) )
    {
      v11 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v11);
    }
  }
LABEL_21:
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v28, *(_QWORD *)(**(_QWORD **)a1 + 16LL));
  v14 = v30;
  if ( !v30 )
    v14 = *(_QWORD *)v29[0];
  v15 = PtiCurrent(v13, v12);
  Win32HM_LockIntoThread<1>((__int64)v15, v14, (__int64 *)BugCheckParameter3);
  v16 = -v9;
  if ( v9 > 0 )
    v16 = v9;
  v17 = *(struct tagWND **)(**(_QWORD **)a1 + 16LL);
  if ( v16 <= *(_DWORD *)(*(_QWORD *)v29[0] + 68LL) )
    xxxScrollWindowEx(v17, 0LL, v9, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v17, 0LL, 1);
  v19 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v18);
  v30 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v29, v19);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v29) )
  {
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v20);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v28, v21);
LABEL_30:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v29, v4);
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)v29[0] + 116LL) = a2;
  v23 = *(_QWORD *)v29[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v23 + 120) )
      goto LABEL_38;
    *(_DWORD *)(*(_QWORD *)v29[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 24LL) )
      goto LABEL_38;
    v24 = 4294967292LL;
    goto LABEL_37;
  }
  *(_DWORD *)(v23 + 124) = *(_DWORD *)(v23 + 124) & 0xFFFFFFFC | 2;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 24LL) )
  {
    v24 = 4294967293LL;
LABEL_37:
    MNDrawArrow(0LL, a1, v24);
  }
LABEL_38:
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 24LL) )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 16LL) )
    {
      Win32HM_ExchangeThreadLock<1>(*(_QWORD *)(**(_QWORD **)a1 + 16LL), (__int64)v28);
      xxxMNDrawFullNC(*(_QWORD *)(**(_QWORD **)a1 + 16LL), 0LL, a1);
    }
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v20);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v28, v25);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v29, v26);
  return 1LL;
}
