/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0
 * Callers:
 *     xxxSetMenuItemInfo @ 0x14006FFFC (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1401744B4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401A4CD4 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401A5220 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401BED74 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401C3714 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(
        struct tagMENU ***a1,
        struct _HEAD **a2,
        __int64 a3,
        unsigned __int16 *a4,
        _DWORD *a5)
{
  int v9; // r12d
  int v10; // r15d
  struct tagMENU *v11; // rcx
  struct _HEAD *v12; // rax
  struct _HEAD *v13; // r12
  int v14; // r15d
  struct _HEAD *v15; // r8
  struct _HEAD *v16; // rdx
  char *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _HEAD **v21; // r12
  struct _HEAD *v22; // rax
  struct _HEAD *v23; // rcx
  struct _HEAD *v25; // rcx
  bool v26; // al
  int v27; // r15d
  bool v28; // al
  struct _HEAD *v29; // rax
  __int64 v30; // rdx
  int MenuDepth; // ebx
  struct tagMENU *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  struct _HEAD *v35; // rcx
  _QWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37[2]; // [rsp+40h] [rbp-58h] BYREF
  struct _HEAD *v38; // [rsp+50h] [rbp-48h]
  __int64 v39[3]; // [rsp+58h] [rbp-40h] BYREF
  int BaseAddress; // [rsp+B0h] [rbp+18h]

  v9 = 0;
  BaseAddress = 0;
  v10 = 0;
  *a5 = 0;
  v11 = (struct tagMENU *)a1[2];
  if ( !v11 )
    v11 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v11, (__int64)a2) )
    *((_DWORD *)*a2 + 26) = -1;
  if ( (*(_DWORD *)(a3 + 4) & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(a3 + 8);
    if ( (*(_DWORD *)(a3 + 8) & 0x800) != 0 )
      *((_DWORD *)*a2 + 1) |= 3u;
    v9 = 1;
    BaseAddress = 1;
    v10 = *(_DWORD *)(a3 + 8) & 0x100;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x40) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      v12 = (struct _HEAD *)DesktopAlloc(*((_QWORD *)**a1 + 3), (unsigned int)*a4 + 2, 8LL);
      v13 = v12;
      if ( !v12 )
        return 0LL;
      memmove(v12, *((const void **)a4 + 1), *a4);
      v14 = *a4 >> 1;
    }
    else
    {
      v14 = 0;
      v13 = 0LL;
    }
    v15 = a2[3];
    if ( v15 )
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)**a1 + 3) + 136LL), 0, v15);
    *((_QWORD *)*a2 + 5) = 0LL;
    *((_DWORD *)*a2 + 12) = v14;
    v16 = *a2;
    if ( v13 )
      v17 = (char *)v13 + a2[1] - v16;
    else
      v17 = 0LL;
    *((_QWORD *)v16 + 5) = v17;
    a2[3] = v13;
    a2[11] = (struct _HEAD *)((char *)a2[11] + 1);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *((_QWORD *)*a2 + 12) = 0LL;
    *((_QWORD *)*a2 + 12) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
    *((_DWORD *)*a2 + 26) = -1;
    v25 = *a2;
    if ( (unsigned __int64)(*((_QWORD *)*a2 + 12) - 1LL) <= 0xA )
      *((_DWORD *)v25 + 1) |= 0x20000000u;
    else
      *((_DWORD *)v25 + 1) &= ~0x20000000u;
  }
  if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    *((_DWORD *)*a2 + 2) = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 4) & 0x20) != 0 )
    *((_QWORD *)*a2 + 7) = *(_QWORD *)(a3 + 48);
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    *((_DWORD *)*a2 + 1) &= 0xFFFFFFF4;
    *((_DWORD *)*a2 + 1) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *((_DWORD *)*a2 + 1) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87);
        return 0LL;
      }
      *(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) |= 0x400u;
    }
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
  {
    *((_QWORD *)*a2 + 3) = *(_QWORD *)(a3 + 32);
    *((_QWORD *)*a2 + 4) = *(_QWORD *)(a3 + 40);
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 4) == 0 )
    goto LABEL_37;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37, 0LL);
  v19 = *(_QWORD *)(a3 + 24);
  if ( v19 )
  {
    v20 = ValidateHmenu(v19, 16LL);
    v38 = 0LL;
    if ( v20 != *(_QWORD *)v37[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v37);
      if ( v20 )
      {
        v37[0] = *(_QWORD *)(v20 + 152);
        ++*(_DWORD *)(v37[0] + 8);
      }
      else
      {
        v37[0] = gSmartObjNullRef;
      }
    }
  }
  v21 = a2 + 2;
  v22 = a2[2];
  if ( v22 != *(struct _HEAD **)v37[0] )
  {
    if ( v22 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39, (__int64)v18);
      RemoveParentMenu(a1, a2);
      DestroyMenu(*v21);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39, v34);
    }
    if ( v38 )
      v26 = 0;
    else
      v26 = *(_QWORD *)v37[0] == 0LL;
    if ( v26 )
    {
      UnlockSubMenu(a1, a2);
LABEL_64:
      v10 = 1;
      goto LABEL_36;
    }
    v27 = 0;
    if ( v38 )
    {
      if ( v38 == (struct _HEAD *)a1[2] )
      {
LABEL_78:
        InternalCreateMenu(0);
        v38 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v37);
        if ( !v38 && !*(_QWORD *)v37[0] )
        {
LABEL_67:
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37, v33);
          return 0LL;
        }
        v27 = 1;
LABEL_55:
        v29 = v38;
        if ( !v38 )
          v29 = *(struct _HEAD **)v37[0];
        if ( v29 )
          v30 = *((_QWORD *)v29 + 6);
        else
          v30 = 0LL;
        *((_QWORD *)*a2 + 2) = v30;
        v36[0] = a2 + 2;
        v36[1] = v29;
        HMAssignmentLock(v36, 0LL);
        *(_DWORD *)(*((_QWORD *)*v21 + 5) + 40LL) |= 1u;
        MenuDepth = GetMenuDepth(v37, 25LL);
        if ( (unsigned int)GetMenuAncestors(a1) + MenuDepth < 0x19 )
        {
          v18 = (_QWORD *)Win32AllocPoolZInit(16LL, 1953066325LL);
          if ( v18 )
          {
            v32 = (struct tagMENU *)a1[2];
            if ( !v32 )
              v32 = **a1;
            v18[1] = v32;
            *v18 = *(_QWORD *)(*(_QWORD *)v37[0] + 104LL);
            *(_QWORD *)(*(_QWORD *)v37[0] + 104LL) = v18;
            goto LABEL_64;
          }
        }
        *(_DWORD *)(*((_QWORD *)*v21 + 5) + 40LL) &= ~1u;
        *((_QWORD *)*a2 + 2) = 0LL;
        HMAssignmentUnlock(a2 + 2);
        if ( v27 )
        {
          v35 = v38;
          if ( !v38 )
            v35 = *(struct _HEAD **)v37[0];
          DestroyMenu(v35);
        }
        goto LABEL_67;
      }
      v28 = 0;
    }
    else
    {
      v28 = *(_QWORD *)v37[0] == (_QWORD)**a1;
    }
    if ( !v28 )
      goto LABEL_55;
    goto LABEL_78;
  }
LABEL_36:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37, (__int64)v18);
  v9 = BaseAddress;
LABEL_37:
  v23 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*((_QWORD *)v23 + 12) )
  {
    *(_DWORD *)v23 = 2048;
    *((_DWORD *)*a2 + 1) |= 3u;
  }
  if ( v9 )
  {
    *((_DWORD *)*a2 + 20) = 0;
    *((_DWORD *)*a2 + 21) = 0x7FFFFFFF;
    *((_DWORD *)*a2 + 22) = 0;
    *((_DWORD *)**a1 + 16) = 0;
    *((_DWORD *)**a1 + 17) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
