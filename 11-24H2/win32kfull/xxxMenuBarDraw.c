/*
 * XREFs of xxxMenuBarDraw @ 0x1401FBF4C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GetCaptionHeight @ 0x140073078 (GetCaptionHeight.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402E8FE0 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct tagTHREADINFO *v14; // rax
  int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  BOOL v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  struct tagMENU *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  struct tagTHREADINFO *v40; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-29h] BYREF
  __int64 v43; // [rsp+40h] [rbp-21h]
  __int64 *v44[2]; // [rsp+48h] [rbp-19h] BYREF
  struct tagMENU *v45; // [rsp+58h] [rbp-9h]
  _DWORD v46[4]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v47; // [rsp+70h] [rbp+Fh]
  int v48; // [rsp+78h] [rbp+17h]
  int v49; // [rsp+7Ch] [rbp+1Bh]
  int v50; // [rsp+80h] [rbp+1Fh]
  int v51; // [rsp+84h] [rbp+23h]
  __int64 v52; // [rsp+88h] [rbp+27h]
  int v53; // [rsp+C8h] [rbp+67h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v44, (__int64)a2);
  v8 = a1[21];
  v53 = 0;
  v45 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v44, v8);
  if ( v45 || *v44[0] )
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0
      && *(_QWORD *)(a1[2] + 472LL) == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944)
      || (GetAppCompatFlags2(1024LL, v9) & 0x80u) != 0LL )
    {
      v12 = *v44[0];
      *(_DWORD *)(*(_QWORD *)(*v44[0] + 40) + 40LL) &= ~0x10u;
    }
    else
    {
      v12 = *v44[0];
      *(_DWORD *)(*(_QWORD *)(*v44[0] + 40) + 40LL) |= 0x10u;
    }
    v13 = (__int64)v45;
    if ( !v45 )
      v13 = *v44[0];
    v14 = PtiCurrent(v12, v9);
    Win32HM_LockIntoThread<0>((__int64)v14, v13, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
    v15 = GetCaptionHeight((__int64)a1) + a4;
    v16 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    v17 = *v44[0];
    if ( a1 != *(_QWORD **)(*v44[0] + 80) || !*(_DWORD *)(*v44[0] + 64) || !*(_DWORD *)(*v44[0] + 68) )
      xxxMenuBarCompute(v44, (__int64)a1, v15, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    v18 = *v44[0];
    if ( *(_DWORD *)(*v44[0] + 64) > v16
      || (v18 = (unsigned int)(v15 + *(_DWORD *)(*v44[0] + 68)),
          v17 = (unsigned int)(*(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4),
          (int)v18 > (int)v17) )
    {
      UserSessionState = W32GetUserSessionState(v18, v17);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
      v53 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v16,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      v22 = W32GetUserSessionState(v21, v20);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v22 + 57008) + 48LL));
    }
    v23 = MNIsFlatMenu(v18, v17);
    v46[0] = a3;
    v46[1] = v15;
    v46[2] = *(_DWORD *)(*v44[0] + 64);
    v46[3] = *(_DWORD *)(*v44[0] + 68);
    v24 = *v44[0];
    v25 = *(_QWORD *)(*v44[0] + 40);
    if ( *(_QWORD *)(v25 + 24) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*v44[0] + 40) + 24LL);
    }
    else if ( v23 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19928) + 4936LL);
    }
    else
    {
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19928) + 4728LL);
    }
    v47 = v26;
    v48 = a3;
    v27 = *v44[0];
    v51 = 1;
    v49 = v15 + *(_DWORD *)(v27 + 68);
    v28 = a1[5];
    v50 = *(_DWORD *)(*v44[0] + 64);
    if ( (*(_BYTE *)(v28 + 25) & 3) == 0 || (*(_BYTE *)(v28 + 20) & 8) != 0 )
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v24) + 19928) + 4744LL);
    else
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v24) + 19928) + 4816LL);
    v52 = v29;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v46, 2);
    v31 = a1[5];
    if ( (*(_BYTE *)(v31 + 25) & 3) == 0 || (*(_BYTE *)(v31 + 20) & 8) != 0 )
      v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19928) + 4744LL);
    else
      v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19928) + 4816LL);
    v34 = GreSelectBrush(a2, v32, v33);
    v35 = v45;
    v36 = v34;
    if ( !v45 )
      v35 = (struct tagMENU *)*v44[0];
    xxxMenuDraw(a2, v35, 0LL);
    GreSelectBrush(a2, v36, v37);
    if ( v53 )
      RecalcDCVisRgn(a2);
    v11 = *(_DWORD *)(*v44[0] + 68) + 1;
    v38 = v43;
    v39 = *(_QWORD *)(v43 + 40);
    *(_DWORD *)(v39 + 40) &= ~0x200u;
    v40 = PtiCurrent(v38, v39);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v40, &BugCheckParameter3);
  }
  else
  {
    v11 = 1;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v44, v9);
  return v11;
}
