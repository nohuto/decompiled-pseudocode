/*
 * XREFs of LockDesktopMenu @ 0x1401A9864
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1401A8EE8 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E1C74 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, __int64 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14, (__int64)a2);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88) + 16LL) )
  {
    v5 = **a2;
    *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40LL) |= 0x40u;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v5, v4) + 62) + 40LL) + 56LL) + 16LL);
    v7 = a2[2];
    if ( !v7 )
      v7 = (__int64 *)**a2;
    HMChangeOwnerProcess(v7, v6);
    v8 = *(_QWORD *)(*(_QWORD *)(**a2 + 88) + 16LL);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v14, v8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) |= 0x40u;
    v9 = v15;
    if ( !v15 )
      v9 = *(_QWORD *)v14[0];
    HMChangeOwnerProcess(v9, v6);
    v10 = a2[2];
    if ( !v10 )
      v10 = (__int64 *)**a2;
    v13[0] = a1;
    v13[1] = v10;
    HMAssignmentLock(v13, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v14, v11);
    return 1LL;
  }
  else
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v14, v4);
    return 0LL;
  }
}
