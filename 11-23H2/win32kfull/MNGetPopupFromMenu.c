/*
 * XREFs of MNGetPopupFromMenu @ 0x1C00E5C20
 * Callers:
 *     xxxSetMenuInfo @ 0x1C00E4338 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C00E4DD0 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E5A80 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00E5ED8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0215C28 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0237010 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A0B4 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x1C0233B54 (MNAnimate.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v15 = (__int64 *)gSmartObjNullRef;
  v16 = *(_QWORD *)(v4 + 1512);
  *(_QWORD *)(v4 + 1512) = &v16;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 && (v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 608LL)) != 0 && (*(_DWORD *)(v8 + 8) & 4) != 0 )
  {
    if ( a2 )
      *a2 = v8;
    for ( i = *(_QWORD *)v8; ; i = *(_QWORD *)(v13 + 8) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v15, i);
      if ( !*v15 )
      {
        v9 = 0LL;
        v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v10 )
          v9 = *v10;
        if ( v15 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v15 + 2) )
        {
          if ( *((_BYTE *)v15 + 12) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v15);
        }
        v11 = *(_QWORD **)(v9 + 1512);
        if ( v11 )
          *(_QWORD *)(v9 + 1512) = *v11;
        return 0LL;
      }
      if ( *(_QWORD *)(*v15 + 40) == a1 )
        break;
      if ( !*(_QWORD *)(*v15 + 24) )
        goto LABEL_4;
      v13 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*v15 + 24));
      if ( !v13 )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)*v15 & 1) != 0 )
      goto LABEL_4;
    MNAnimate(v8, 0LL);
    v14 = *v15;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15);
    return v14;
  }
  else
  {
LABEL_4:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15);
    return 0LL;
  }
}
