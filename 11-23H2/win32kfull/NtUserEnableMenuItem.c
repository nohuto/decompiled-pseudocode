/*
 * XREFs of NtUserEnableMenuItem @ 0x1C01CEA50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
  v18 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_3:
    v6 = -1;
    goto LABEL_9;
  }
  v7 = ValidateHmenu(a1);
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_3;
  }
  v8 = v18;
  if ( !v18 )
    v8 = *(_QWORD *)v17[0];
  ThreadLockAlways(v8, &v19);
  v6 = xxxEnableMenuItem(v17, a2, a3);
  ThreadUnlock1(v10, v9, v11);
LABEL_9:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v6;
}
