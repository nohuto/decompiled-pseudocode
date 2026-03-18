/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02214C4
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0221404 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022158C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C024BEB8 (_GetMenuDefaultItem.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  struct tagWND *v5; // rbx
  __int64 v6; // rcx
  struct tagWND *FakeMDIChild; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = a2[2];
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v4);
  if ( (v10 || *(_QWORD *)v9[0]) && *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
  {
    v5 = *(struct tagWND **)(**(_QWORD **)a1 + 80LL);
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 21LL) & 2) == 0 )
    {
      v6 = v10;
      if ( !v10 )
        v6 = *(_QWORD *)v9[0];
      if ( (unsigned int)GetMenuDefaultItem(v6, 1LL, 1LL) == -1 )
        _SetCloseDefault(v9);
    }
    FakeMDIChild = FindFakeMDIChild(v5);
    if ( FakeMDIChild )
      *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
}
