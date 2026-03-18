/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C00E4960
 * Callers:
 *     xxxMNCanClose @ 0x1C00E47A8 (xxxMNCanClose.c)
 *     NtUserGetSysMenuOffset @ 0x1C01D3580 (NtUserGetSysMenuOffset.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200170 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0213DFC (xxxMNLoop.c)
 *     xxxGetSysMenu @ 0x1C02218F0 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C02219A4 (xxxSetSysMenu.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C008DA54 (xxxLoadSysDesktopMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0109704 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v8; // rdx
  __int64 SysDesktopMenu; // rax
  __int64 v10; // rdx
  __int64 *v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = (__int64 *)gSmartObjNullRef;
  v12 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v12;
  v3 = a1[5];
  v13 = 0LL;
  if ( (*(_BYTE *)(v3 + 30) & 8) == 0 )
  {
    v10 = 0LL;
    goto LABEL_12;
  }
  SmartObjStackRefBase<tagMENU>::operator=(&v11, a1[20]);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v11) )
  {
    v8 = *(_QWORD *)(a1[3] + 56LL);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v11, v8);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v11) )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu((__int64 *)(a1[3] + 56LL), 0x10u);
        v13 = 0LL;
        v10 = SysDesktopMenu;
LABEL_12:
        SmartObjStackRefBase<tagMENU>::operator=(&v11, v10);
      }
    }
  }
  v4 = v13;
  if ( !v13 )
    v4 = *v11;
  v5 = W32GetThreadWin32Thread(KeGetCurrentThread());
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v11);
  v6 = *(_QWORD **)(v5 + 1512);
  if ( v6 )
    *(_QWORD *)(v5 + 1512) = *v6;
  return v4;
}
