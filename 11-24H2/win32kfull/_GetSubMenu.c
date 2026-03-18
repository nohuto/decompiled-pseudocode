/*
 * XREFs of _GetSubMenu @ 0x14006F7B4
 * Callers:
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E1C74 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x14006F88C (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 *v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h]
  _QWORD v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v3 = PtiCurrent(a1, a2);
  v8 = (__int64 *)gSmartObjNullRef;
  v9 = *((_QWORD *)v3 + 209);
  *((_QWORD *)v3 + 209) = &v9;
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v11, a1);
  v11[2] = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 44LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v11);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    if ( v5 )
    {
      v10 = 0LL;
      if ( v5 == *v8 )
      {
LABEL_6:
        v6 = *v8;
        goto LABEL_7;
      }
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v8);
      v8 = *(__int64 **)(v5 + 152);
      ++*((_DWORD *)v8 + 2);
    }
  }
  v6 = v10;
  if ( !v10 )
    goto LABEL_6;
LABEL_7:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v8);
  return v6;
}
