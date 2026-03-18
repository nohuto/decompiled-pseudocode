/*
 * XREFs of NtUserRemoveMenu @ 0x140070AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
    v7 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1, 32LL);
    v7 = 0;
    v17 = 0LL;
    if ( v6 != *(_QWORD *)v16[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v16);
      if ( v6 )
      {
        v16[0] = *(_QWORD *)(v6 + 152);
        ++*(_DWORD *)(v16[0] + 8LL);
      }
      else
      {
        v16[0] = gSmartObjNullRef;
      }
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v16)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v9 = v17;
      if ( !v17 )
        v9 = *(_QWORD *)v16[0];
      v10 = PtiCurrent(*(_QWORD *)v16[0], v8);
      Win32HM_LockIntoThread<1>(v10, v9, BugCheckParameter3);
      v7 = xxxRemoveDeleteMenuHelper((__int64)v16, a2, a3, 0);
      v13 = PtiCurrent(v12, v11);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, BugCheckParameter3);
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
  UserSessionSwitchLeaveCrit();
  return v7;
}
