/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01D4340
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxHiliteMenuItem @ 0x1C022FC84 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]

  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v26;
    *((_QWORD *)&v26 + 1) = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
    v25 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004);
    }
    else
    {
      v15 = ValidateHmenu(a2);
      v25 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v24, v15);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v24)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v16 = v25;
        if ( !v25 )
          v16 = *(_QWORD *)v24[0];
        *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v28;
        *((_QWORD *)&v28 + 1) = v16;
        HMLockObject(v16);
        v13 = xxxHiliteMenuItem(v14, v24, a3, a4);
        ThreadUnlock1(v18, v17, v19);
      }
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
    ThreadUnlock1(v21, v20, v22);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
