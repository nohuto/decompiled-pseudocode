/*
 * XREFs of MNGetPopupFromMenu @ 0x14006F050
 * Callers:
 *     xxxEnableMenuItem @ 0x14006F560 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140072F38 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1401A95B8 (xxxSetMenuInfo.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B175C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rdi
  _DWORD *v15; // rbx
  void *CurrentWin32kStackRefLookAside; // rax
  _QWORD *v17; // rax
  struct tagTHREADINFO *v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  _DWORD *v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h] BYREF

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  v22 = (_DWORD *)gSmartObjNullRef;
  v23 = *(_QWORD *)(v7 + 1672);
  *(_QWORD *)(v7 + 1672) = &v23;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 && (v9 = *(__int64 **)(*(_QWORD *)(v8 + 16) + 648LL)) != 0LL && (v9[1] & 4) != 0 )
  {
    if ( a2 )
      *a2 = v9;
    v10 = *v9;
    if ( *v9 != *(_QWORD *)v22 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(&v22);
      if ( v10 )
      {
        v22 = *(_DWORD **)(v10 + 88);
        ++v22[2];
      }
      else
      {
        v22 = (_DWORD *)gSmartObjNullRef;
      }
    }
    while ( 1 )
    {
      if ( !*(_QWORD *)v22 )
      {
        v19 = PtiCurrent(v6, v5);
        SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(&v22);
        v20 = (_QWORD *)*((_QWORD *)v19 + 209);
        if ( v20 )
          *((_QWORD *)v19 + 209) = *v20;
        return 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)v22 + 40LL) == a1 )
        break;
      if ( !*(_QWORD *)(*(_QWORD *)v22 + 24LL) )
        goto LABEL_29;
      v11 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v22 + 24LL));
      if ( !v11 )
      {
        v14 = PtiCurrent(v13, v12);
        if ( v22 != (_DWORD *)gSmartObjNullRef && !--v22[2] )
        {
          if ( *((_BYTE *)v22 + 12) )
          {
            v15 = v22;
            CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
            Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v15);
          }
        }
        v17 = (_QWORD *)*((_QWORD *)v14 + 209);
        if ( v17 )
          *((_QWORD *)v14 + 209) = *v17;
        return 0LL;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v22, *(_QWORD *)(v11 + 8));
    }
    if ( (**(_DWORD **)v22 & 1) != 0 )
      goto LABEL_29;
    MNAnimate(v9, 0LL);
    v21 = *(_QWORD *)v22;
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v22);
    return v21;
  }
  else
  {
LABEL_29:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v22);
    return 0LL;
  }
}
