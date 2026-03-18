/*
 * XREFs of xxxRecreateSmallIcons @ 0x14021F460
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     xxxCreateWindowSmIcon @ 0x14007AC48 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x14007ADE4 (xxxCreateClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x14007C214 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x14007DF9C (ClassLock.c)
 *     ClassUnlock @ 0x14007E328 (ClassUnlock.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyClassSmIcon @ 0x1400B5370 (DestroyClassSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(struct tagWND *a1)
{
  __int64 v2; // rdx
  bool v3; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // di
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v13, *((_QWORD *)a1 + 17));
  v3 = (unsigned int)DestroyClassSmIcon(v13) && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v13, v2);
  if ( v3 )
  {
    v7 = *((_QWORD *)a1 + 17);
    v14 = 0LL;
    v15 = 0LL;
    if ( (unsigned int)ClassLock(v7, &v14) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v13, *((_QWORD *)a1 + 17));
      xxxCreateClassSmIcon((__int64)v13);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v13, v8);
      ClassUnlock(*((struct tagCLS **)a1 + 17), &v14);
    }
  }
  v9 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v4, v5, v6) && !v9 )
    xxxCreateWindowSmIcon((__int64)a1, *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL), v10, v11);
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
