/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1401A8EE8
 * Callers:
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x14009CDF0 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x140201DA4 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysMenu @ 0x1401A910C (xxxLoadSysMenu.c)
 *     LockDesktopMenu @ 0x1401A9864 (LockDesktopMenu.c)
 */

struct _HEAD *__fastcall xxxLoadSysDesktopMenu(struct _HEAD **a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SysMenu; // rax
  struct _HEAD *v5; // rbx
  __int64 v6; // rdx
  struct _HEAD *v7; // rcx
  struct _HEAD *v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-20h] BYREF
  struct _HEAD *v11; // [rsp+30h] [rbp-10h]

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, a2);
  SysMenu = xxxLoadSysMenu(v3);
  v5 = 0LL;
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, SysMenu);
  v7 = v11;
  if ( !v11 )
  {
    if ( !*(_QWORD *)v10[0] )
      goto LABEL_15;
    v7 = v11;
  }
  if ( *a1 )
  {
    if ( !v7 )
      v7 = *(struct _HEAD **)v10[0];
    DestroyMenu(v7);
    v5 = *a1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 40LL) |= 0x80u;
    if ( !(unsigned int)LockDesktopMenu(a1, v10) )
    {
      v8 = v11;
      if ( !v11 )
        v8 = *(struct _HEAD **)v10[0];
      DestroyMenu(v8);
      v11 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, 0LL);
    }
    if ( v11 )
      v5 = v11;
    else
      v5 = *(struct _HEAD **)v10[0];
  }
LABEL_15:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v6);
  return v5;
}
