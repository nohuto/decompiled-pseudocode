/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1401B1250
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B1724 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, ULONG64 a6)
{
  __int128 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21[4]; // [rsp+38h] [rbp-B0h] BYREF
  __int128 *v22; // [rsp+58h] [rbp-90h]
  _BYTE v23[16]; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-70h] BYREF
  __int128 v25; // [rsp+88h] [rbp-60h] BYREF
  int v26; // [rsp+98h] [rbp-50h]

  v10 = (__int128 *)a6;
  v22 = (__int128 *)a6;
  v25 = 0LL;
  v26 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21, v11);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004);
    v13 = 0;
  }
  else
  {
    v14 = ValidateHmenu(a1, 1LL);
    v13 = 0;
    v21[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v21, v14);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    {
      v16 = ValidateHwnd(a5);
      if ( v16 )
      {
        v17 = PtiCurrent(v15, v12);
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v17, v16);
        Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v23, v17, v21);
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v25 = *v10;
          v26 = *((_DWORD *)v10 + 4);
          v10 = &v25;
          v22 = &v25;
        }
        v13 = xxxTrackPopupMenuEx((__int64)v21, a2, a3, a4, v16, (__int64)v10);
        Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v23);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v21, v12);
  UserSessionSwitchLeaveCrit(v19);
  return v13;
}
