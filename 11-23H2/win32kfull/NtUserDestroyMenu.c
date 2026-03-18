/*
 * XREFs of NtUserDestroyMenu @ 0x1C00E3000
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  char v16; // [rsp+58h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 0;
  v13 = (__int64 *)gSmartObjNullRef;
  v14 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v14;
  v15 = 0LL;
  v4 = ValidateHmenu(a1);
  v15 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v13, v4);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v13)
    && (*(_DWORD *)(*(_QWORD *)(*v13 + 40) + 40LL) & 0x40) == 0 )
  {
    v5 = v15;
    if ( !v15 )
      v5 = *v13;
    v3 = DestroyMenu(v5);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v13);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v6, v7);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v3;
}
