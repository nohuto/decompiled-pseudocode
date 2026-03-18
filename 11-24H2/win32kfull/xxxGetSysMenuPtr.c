/*
 * XREFs of xxxGetSysMenuPtr @ 0x140070C28
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1400708B0 (xxxMNCanClose.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 *     NtUserGetSysMenuOffset @ 0x140296EC0 (NtUserGetSysMenuOffset.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxLoadSysDesktopMenu @ 0x1401A8EE8 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v8; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9);
  v4 = (*(_BYTE *)(a1[5] + 30LL) & 8) == 0;
  v10 = 0LL;
  if ( v4 )
  {
    if ( !*(_QWORD *)v9[0] )
      goto LABEL_7;
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v9);
    v9[0] = gSmartObjNullRef;
LABEL_11:
    v6 = v10;
    if ( v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v5 = a1[20];
  if ( v5 != *(_QWORD *)v9[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v9);
    if ( v5 )
    {
      v9[0] = *(_QWORD *)(v5 + 152);
      ++*(_DWORD *)(v9[0] + 8LL);
    }
    else
    {
      v9[0] = gSmartObjNullRef;
    }
    if ( v10 )
      goto LABEL_11;
  }
  if ( !*(_QWORD *)v9[0] )
  {
    v8 = *(_QWORD *)(a1[3] + 56LL);
    v10 = 0LL;
    if ( v8 == *(_QWORD *)v9[0]
      || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v9), !v8)
        ? (v9[0] = gSmartObjNullRef)
        : (v9[0] = *(_QWORD *)(v8 + 152), ++*(_DWORD *)(v9[0] + 8LL)),
          !v10) )
    {
      if ( *(_QWORD *)v9[0] )
        goto LABEL_7;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v3, v2) + 132, 0, 0) & 5) == 0 )
      {
        xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v10 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v9);
      }
    }
    goto LABEL_11;
  }
LABEL_7:
  v6 = *(_QWORD *)v9[0];
LABEL_8:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
  return v6;
}
