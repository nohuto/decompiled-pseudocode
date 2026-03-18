/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C022D48C
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00135C0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ClassLock @ 0x1C00135E8 (ClassLock.c)
 *     SendDwmIconChange @ 0x1C003F904 (SendDwmIconChange.c)
 *     DestroyClassSmIcon @ 0x1C00829C0 (DestroyClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0086D04 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C00924C8 (xxxCreateWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00B4B74 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     xxxCreateClassSmIcon @ 0x1C00DE29C (xxxCreateClassSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     DestroyWindowSmIcon @ 0x1C013C988 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 *a1)
{
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct tagCLS *v5; // rbx
  __int64 ThreadWin32Thread; // rax
  char v7; // bl
  __int64 result; // rax
  __int64 *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v9, a1[17]);
  v2 = (unsigned int)DestroyClassSmIcon(v9) && *(_QWORD *)(a1[17] + 80);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v9);
  if ( v2 )
  {
    v3 = a1[17];
    v10 = 0LL;
    v11 = 0LL;
    if ( (unsigned int)ClassLock(v3, (__int64)&v10) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v9, a1[17]);
      xxxCreateClassSmIcon((__int64 *)v9, v4);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v9);
      v5 = (struct tagCLS *)a1[17];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v10;
      ClassUnlockWorker(v5);
    }
  }
  v7 = *(_BYTE *)(a1[5] + 23) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1) && !v7 )
    xxxCreateWindowSmIcon((__int64)a1, *(_QWORD *)(a1[5] + 272), 1);
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
