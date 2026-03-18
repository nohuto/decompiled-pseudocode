/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00E558C
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C00E3ECC (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00E4DD0 (xxxInsertMenuItem.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C007F558 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E2E40 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E3708 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C00E3CE8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00E3D10 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E3DCC (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00E4940 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0139FC4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A068 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(__int64 **a1, __int64 *a2, __int64 a3, unsigned __int16 *a4, _DWORD *a5)
{
  int v9; // r8d
  int v10; // r15d
  __int64 *v11; // rdx
  __int64 v13; // rcx
  char *Heap; // r12
  int v15; // r15d
  void *v16; // r8
  __int64 v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  int MenuDepth; // ebx
  _QWORD *v32; // rdx
  __int64 *v33; // rax
  struct tagMENU *Menu; // rax
  __int64 v35; // rcx
  _QWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h]
  _BYTE v39[24]; // [rsp+58h] [rbp-40h] BYREF
  int BaseAddress; // [rsp+B0h] [rbp+18h]

  v9 = 0;
  BaseAddress = 0;
  v10 = 0;
  *a5 = 0;
  v11 = a1[2];
  if ( !v11 )
    v11 = (__int64 *)**a1;
  if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(v11[5] + 40) & 0x800) != 0 )
    *(_DWORD *)(*a2 + 104) = -1;
  if ( (*(_DWORD *)(a3 + 4) & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(a3 + 8);
    if ( (*(_DWORD *)(a3 + 8) & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4) |= 3u;
    v9 = 1;
    BaseAddress = 1;
    v10 = *(_DWORD *)(a3 + 8) & 0x100;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x40) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      v13 = *(_QWORD *)(**a1 + 24);
      if ( (*(_DWORD *)(v13 + 48) & 8) != 0 )
        return 0LL;
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(v13 + 136), 0, *a4 + 2LL);
      if ( !Heap && (*gpsi & 0x100) != 0 )
      {
        _InterlockedAnd(gpsi, 0xFFFFFEFF);
        UserLogError(2147483891LL);
      }
      if ( !Heap )
        return 0LL;
      memmove(Heap, *((const void **)a4 + 1), *a4);
      v15 = *a4 >> 1;
    }
    else
    {
      v15 = 0;
      Heap = 0LL;
    }
    v16 = (void *)a2[3];
    if ( v16 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**a1 + 24) + 136LL), 0, v16);
    *(_QWORD *)(*a2 + 40) = 0LL;
    *(_DWORD *)(*a2 + 48) = v15;
    v17 = *a2;
    if ( Heap )
      v18 = &Heap[a2[1] - v17];
    else
      v18 = 0LL;
    *(_QWORD *)(v17 + 40) = v18;
    a2[3] = (__int64)Heap;
    ++a2[11];
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *(_QWORD *)(*a2 + 96) = 0LL;
    *(_QWORD *)(*a2 + 96) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
    *(_DWORD *)(*a2 + 104) = -1;
    v21 = *a2;
    if ( (unsigned __int64)(*(_QWORD *)(*a2 + 96) - 1LL) <= 0xA )
      *(_DWORD *)(v21 + 4) |= 0x20000000u;
    else
      *(_DWORD *)(v21 + 4) &= ~0x20000000u;
  }
  if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 4) & 0x20) != 0 )
    *(_QWORD *)(*a2 + 56) = *(_QWORD *)(a3 + 48);
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    *(_DWORD *)(*a2 + 4) &= 0xFFFFFFF4;
    *(_DWORD *)(*a2 + 4) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87LL);
        return 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) |= 0x400u;
    }
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
  {
    *(_QWORD *)(*a2 + 24) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(*a2 + 32) = *(_QWORD *)(a3 + 40);
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 4) == 0 )
    goto LABEL_36;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37, 0LL);
  v22 = *(_QWORD *)(a3 + 24);
  if ( v22 )
  {
    v25 = ValidateHmenu(v22);
    v38 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v37, v25);
  }
  v23 = a2 + 2;
  v24 = a2[2];
  if ( v24 != *(_QWORD *)v37[0] )
  {
    if ( v24 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39);
      RemoveParentMenu(a1, (__int64)a2);
      DestroyMenu(*v23);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v37) )
    {
      UnlockSubMenu(a1, a2);
LABEL_62:
      v10 = 1;
      goto LABEL_47;
    }
    v26 = 0;
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v37, (__int64)a1) )
    {
      Menu = InternalCreateMenu(0, v27, v28);
      v38 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v37, (__int64)Menu);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v37) )
      {
LABEL_70:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37);
        return 0LL;
      }
      v26 = 1;
    }
    v29 = v38;
    if ( !v38 )
      v29 = *(_QWORD *)v37[0];
    if ( v29 )
      v30 = *(_QWORD *)(v29 + 48);
    else
      v30 = 0LL;
    *(_QWORD *)(*a2 + 16) = v30;
    v36[0] = a2 + 2;
    v36[1] = v29;
    HMAssignmentLock(v36, 0LL);
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) |= 1u;
    MenuDepth = GetMenuDepth((__int64)v37, 25);
    if ( (unsigned int)GetMenuAncestors((__int64)a1) + MenuDepth < 0x19 )
    {
      v32 = (_QWORD *)Win32AllocPoolZInit(16LL, 1953066325LL);
      if ( v32 )
      {
        v33 = a1[2];
        if ( !v33 )
          v33 = (__int64 *)**a1;
        v32[1] = v33;
        *v32 = *(_QWORD *)(*(_QWORD *)v37[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v37[0] + 104LL) = v32;
        goto LABEL_62;
      }
    }
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) &= ~1u;
    *(_QWORD *)(*a2 + 16) = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v26 )
    {
      v35 = v38;
      if ( !v38 )
        v35 = *(_QWORD *)v37[0];
      DestroyMenu(v35);
    }
    goto LABEL_70;
  }
LABEL_47:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37);
  v9 = BaseAddress;
LABEL_36:
  v19 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*(_QWORD *)(v19 + 96) )
  {
    *(_DWORD *)v19 = 2048;
    *(_DWORD *)(*a2 + 4) |= 3u;
  }
  if ( v9 )
  {
    *(_DWORD *)(*a2 + 80) = 0;
    *(_DWORD *)(*a2 + 84) = 0x7FFFFFFF;
    *(_DWORD *)(*a2 + 88) = 0;
    *(_DWORD *)(**a1 + 64) = 0;
    *(_DWORD *)(**a1 + 68) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
