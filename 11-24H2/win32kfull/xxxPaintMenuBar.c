/*
 * XREFs of xxxPaintMenuBar @ 0x1401D8150
 * Callers:
 *     NtUserPaintMenuBar @ 0x1401D8040 (NtUserPaintMenuBar.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxSendUAHInitMenuMessage @ 0x14006BAE0 (xxxSendUAHInitMenuMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     xxxSendUAHMenuMessage @ 0x1401D8418 (xxxSendUAHMenuMessage.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rax
  int v17; // r14d
  struct tagWND *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  struct tagMENU *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  struct tagMENU *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  struct tagMENU *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rsi
  struct tagMENU *v36; // rdx
  __int64 v37; // r8
  ULONG_PTR v38[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v40[2]; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v41; // [rsp+60h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v40, (__int64)a2);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v41 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v40, v10);
  v14 = (__int64)v41;
  if ( !v41 )
  {
    if ( !*v40[0] )
      goto LABEL_17;
    v14 = *v40[0];
  }
  v15 = PtiCurrent(v13, v12);
  Win32HM_LockIntoThread<0>((__int64)v15, v14, v38);
  *(_DWORD *)(*(_QWORD *)(v14 + 40) + 40LL) |= 0x200u;
  v16 = *(_QWORD *)(*v40[0] + 40);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v16 + 40) &= ~0x10u;
  else
    *(_DWORD *)(v16 + 40) |= 0x10u;
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
  v18 = *(struct tagWND **)(*v40[0] + 80);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v18);
  if ( a1 != *(_QWORD *)(*v40[0] + 80) || !*(_DWORD *)(*v40[0] + 64) || (v20 = *v40[0], !*(_DWORD *)(*v40[0] + 68)) )
    xxxMenuBarCompute(v40, a1, a5, a3, v17);
  if ( IsInsideUserApiHook(v20, v19) && v18 && (unsigned int)xxxSendUAHInitMenuMessage(v18, (__int64)v40) )
  {
    v33 = v41;
    if ( !v41 )
      v33 = (struct tagMENU *)*v40[0];
    xxxSendUAHMenuMessage(v18, 145LL, v33, a2);
  }
  v23 = PtiCurrent(v22, v21);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v23, BugCheckParameter3);
  v25 = v41;
  if ( !v41 )
    v25 = (struct tagMENU *)*v40[0];
  if ( (unsigned int)MNIsUAHMenu(v25, v24) )
  {
    v28 = v41;
    if ( !v41 )
      v28 = (struct tagMENU *)*v40[0];
    xxxMenuDraw(a2, v28, 0LL);
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)(*v40[0] + 40) + 24LL) )
      v34 = *(_QWORD *)(*(_QWORD *)(*v40[0] + 40) + 24LL);
    else
      v34 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(*v40[0], v26) + 19928) + 4936LL);
    v35 = GreSelectBrush(a2, v34, v27);
    GrePatBlt(a2, a3, a5, *(_DWORD *)(*v40[0] + 64), *(_DWORD *)(*v40[0] + 68), 15728673);
    v36 = v41;
    if ( !v41 )
      v36 = (struct tagMENU *)*v40[0];
    xxxMenuDraw(a2, v36, 0LL);
    GreSelectBrush(a2, v35, v37);
  }
  v11 = *(_DWORD *)(*v40[0] + 68);
  v30 = *(_QWORD *)(v38[1] + 40);
  *(_DWORD *)(v30 + 40) &= ~0x200u;
  v31 = PtiCurrent(v30, v29);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v31, v38);
LABEL_17:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v40, v12);
  return v11;
}
