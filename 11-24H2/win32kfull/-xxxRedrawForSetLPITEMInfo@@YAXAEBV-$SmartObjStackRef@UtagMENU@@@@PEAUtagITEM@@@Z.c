/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140072F38
 * Callers:
 *     xxxSetMenuItemInfo @ 0x14006FFFC (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x14018A854 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v4 = PtiCurrent((__int64)a1, a2);
  v10 = gSmartObjNullRef;
  v11 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v11;
  v5 = (__int64)a1[2];
  if ( !v5 )
    v5 = **a1;
  v7 = MNGetPopupFromMenu(v5, 0LL);
  if ( v7 != *(_QWORD *)v10 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(&v10);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 88);
      ++*(_DWORD *)(v10 + 8);
    }
    else
    {
      v10 = gSmartObjNullRef;
    }
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_19;
  xxxMNUpdateShownMenu(&v10, a2, 1LL);
  v9 = (__int64)a1[2];
  if ( !v9 )
    v9 = **a1;
  if ( MNIspItemValid(v9, a2) )
  {
LABEL_19:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80) )
    {
      DwmUpdateCloseButton(*(struct tagWND **)(**a1 + 80), 1);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v10, v6);
}
