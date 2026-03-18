/*
 * XREFs of xxxLoadSysMenu @ 0x1401A910C
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1401A8EE8 (xxxLoadSysDesktopMenu.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetMenuItemInfo @ 0x14006FFFC (xxxSetMenuItemInfo.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxClientLoadMenu @ 0x1401A9338 (xxxClientLoadMenu.c)
 *     xxxSetMenuInfo @ 0x1401A95B8 (xxxSetMenuInfo.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 Menu; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  __int64 v20[3]; // [rsp+38h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-31h] BYREF
  _DWORD v23[3]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v24; // [rsp+7Ch] [rbp-15h]
  __int64 v25; // [rsp+8Ch] [rbp-5h]
  int v26; // [rsp+94h] [rbp+3h]
  _DWORD v27[18]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+4Fh]

  v25 = 0LL;
  v26 = 0;
  v24 = 0LL;
  memset_0(v27, 0, 0x50uLL);
  v22[1] = (unsigned __int16)a1;
  v22[0] = 0LL;
  Menu = xxxClientLoadMenu(0LL, v22);
  if ( !Menu )
    return 0LL;
  v5 = PtiCurrent(v3, v2);
  Win32HM_LockIntoThread<0>((__int64)v5, Menu, BugCheckParameter3);
  v23[0] = 40;
  v23[1] = -2147483632;
  v23[2] = 0x4000000;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, Menu);
  xxxSetMenuInfo(v20, v23);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20, v6);
  v27[0] = 80;
  v27[1] = 128;
  v28 = 8LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, Menu);
  xxxSetMenuItemInfo((_QWORD **)v20, 61536LL, 0, (__int64)v27, 0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20, v7);
  if ( a1 != 48 )
  {
    v28 = 11LL;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, Menu);
    xxxSetMenuItemInfo((_QWORD **)v20, 61472LL, 0, (__int64)v27, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20, v10);
    v28 = 10LL;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, Menu);
    xxxSetMenuItemInfo((_QWORD **)v20, 61488LL, 0, (__int64)v27, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20, v11);
    v28 = 9LL;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, Menu);
    xxxSetMenuItemInfo((_QWORD **)v20, 61728LL, 0, (__int64)v27, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20, v12);
  }
  v13 = PtiCurrent(v9, v8);
  v14 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v13, BugCheckParameter3);
  BugCheckParameter3[0] = -1LL;
  BugCheckParameter3[1] = 0LL;
  if ( !v14 )
    return 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) != 0 )
  {
    if ( BugCheckParameter3[0] != -1LL )
    {
      v19 = PtiCurrent(v17, v16);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v19, BugCheckParameter3);
    }
    return 0LL;
  }
  if ( BugCheckParameter3[0] != -1LL )
  {
    v18 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
  }
  return Menu;
}
