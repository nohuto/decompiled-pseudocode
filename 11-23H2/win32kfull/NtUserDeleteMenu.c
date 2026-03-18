/*
 * XREFs of NtUserDeleteMenu @ 0x1C00E2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00E5ED8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 ThreadWin32Thread; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]

  v22 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v7 = 0;
  v18 = (__int64 *)gSmartObjNullRef;
  v19 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v19;
  v20 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    v8 = ValidateHmenu(a1);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v18, v8);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v18)
      && (*(_DWORD *)(*(_QWORD *)(*v18 + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v18 + 40) + 40LL) & 0x200) == 0 )
    {
      v9 = v20;
      if ( !v20 )
        v9 = *v18;
      ThreadLock(v9, &v21);
      v7 = xxxRemoveDeleteMenuHelper(&v18, a2, a3, 1LL);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v18);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v7;
}
