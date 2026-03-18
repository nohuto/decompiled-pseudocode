/*
 * XREFs of xxxLoadSysMenu @ 0x1C00E3AD4
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C008DA54 (xxxLoadSysDesktopMenu.c)
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00DFB00 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     xxxSetMenuItemInfo @ 0x1C00E3ECC (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C00E4338 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 v1; // rbx
  unsigned __int8 *Menu; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v10; // [rsp+48h] [rbp-59h]
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v12[3]; // [rsp+60h] [rbp-41h] BYREF
  __int128 v13; // [rsp+6Ch] [rbp-35h]
  __int64 v14; // [rsp+7Ch] [rbp-25h]
  int v15; // [rsp+84h] [rbp-1Dh]
  _DWORD v16[18]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+2Fh]
  __int128 v18; // [rsp+D8h] [rbp+37h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+47h]

  v1 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  memset_0(v16, 0, 0x50uLL);
  v18 = 0LL;
  v19 = 0LL;
  v11 = 0LL;
  RtlInitUnicodeStringOrId(&v11, (WCHAR *)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, (void **)&v11);
  v4 = (__int64)Menu;
  if ( !Menu )
    return 0LL;
  ThreadLockAlways(Menu, &v18);
  v12[0] = 40;
  v12[1] = -2147483632;
  v12[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v9, v4);
  v10 = 0LL;
  xxxSetMenuInfo(v9, v12);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  v16[0] = 80;
  v16[1] = 128;
  v17 = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v9, v4);
  v10 = 0LL;
  xxxSetMenuItemInfo((unsigned int)v9, 61536, 0, (unsigned int)v16, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  if ( a1 != 48 )
  {
    v17 = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61472, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
    v17 = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61488, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
    v17 = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v9, v4);
    v10 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v9, 61728, 0, (unsigned int)v16, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  }
  if ( !ThreadUnlock1(v6, v5, v7) )
    return 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) == 0 )
    return v4;
  return v1;
}
