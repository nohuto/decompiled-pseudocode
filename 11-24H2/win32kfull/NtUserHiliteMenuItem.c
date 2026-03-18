/*
 * XREFs of NtUserHiliteMenuItem @ 0x140298630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1402DFF5C (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v21[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, v13);
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004);
    }
    else
    {
      v15 = ValidateHmenu(a2, 64LL);
      v23 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v15);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v16 = v23;
        if ( !v23 )
          v16 = *(_QWORD *)v22[0];
        Win32HM_LockIntoThread<0>(v8, v16, v21);
        v11 = xxxHiliteMenuItem(v12, v22, a3, a4);
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v21, v17);
      }
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22, v14);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
