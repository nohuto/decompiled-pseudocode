/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1401A8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140046E7C (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxSetMenuInfo @ 0x1401A95B8 (xxxSetMenuInfo.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v11[4]; // [rsp+28h] [rbp-70h] BYREF
  __int128 v12; // [rsp+48h] [rbp-50h] BYREF
  __int128 v13; // [rsp+58h] [rbp-40h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+78h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v11, v4);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v12 = *(_OWORD *)a2;
  v13 = *(_OWORD *)(a2 + 16);
  v14 = *(_QWORD *)(a2 + 32);
  v5 = ValidateHmenu(a1, (BYTE4(v12) & 8) != 0 ? 1024 : 64);
  v6 = 0;
  v11[2] = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v11, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11)
    && (*(_DWORD *)(*(_QWORD *)(*v11[0] + 40) + 40LL) & 0x40) == 0 )
  {
    Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(BugCheckParameter3, v11);
    v6 = xxxSetMenuInfo(v11, &v12);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v8);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v11, v7);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
