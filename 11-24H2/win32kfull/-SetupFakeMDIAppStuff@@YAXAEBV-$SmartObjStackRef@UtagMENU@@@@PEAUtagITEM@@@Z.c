/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402C8924
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1402C88CC (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct tagWND *FakeMDIChild; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v8, (__int64)a2);
  v4 = a2[2];
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v8, v4);
  if ( v9 || *(_QWORD *)v8[0] )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      FakeMDIChild = FindFakeMDIChild(*(struct tagWND **)(**(_QWORD **)a1 + 80LL));
      if ( FakeMDIChild )
        *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v8, v5);
}
