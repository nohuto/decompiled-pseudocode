/*
 * XREFs of NtUserSetClassLongPtr @ 0x14029CC20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSetClassLongPtr @ 0x14007D1D8 (xxxSetClassLongPtr.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rbx
  ULONG64 v11; // rdx
  int v12; // ecx
  ULONG64 v13; // r8
  ULONG64 v14; // rdx
  __int64 v15; // rdx
  int v17; // [rsp+20h] [rbp-A8h]
  __int128 Src; // [rsp+38h] [rbp-90h] BYREF
  __int128 *v19; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-78h] BYREF
  ULONG64 v21; // [rsp+68h] [rbp-60h]
  __int128 v22; // [rsp+70h] [rbp-58h] BYREF
  __int128 v23; // [rsp+80h] [rbp-48h] BYREF
  ULONG64 v24; // [rsp+90h] [rbp-38h]

  v22 = 0LL;
  Src = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v7);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13);
        v10 = 0LL;
LABEL_24:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
        goto LABEL_25;
      }
    }
    else if ( a2 == -8 )
    {
      v21 = a3;
      v23 = 0LL;
      v24 = 0LL;
      RtlCopyFromUser(&v23, (void *)a3, 0x18uLL);
      Src = v23;
      v19 = (__int128 *)v24;
      v11 = v24;
      if ( v24 >= MmUserProbeAddress )
        v11 = MmUserProbeAddress;
      v12 = *(_DWORD *)v11;
      v17 = *(_DWORD *)v11;
      LODWORD(v22) = *(_DWORD *)v11;
      v13 = *(_QWORD *)(v11 + 8);
      *((_QWORD *)&v22 + 1) = v13;
      if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v13 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = v13 + (unsigned __int16)v12 + 2LL;
        if ( v14 <= v13 || v14 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v12 > HIWORD(v17) || (v12 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2203);
          ExRaiseAccessViolation();
        }
      }
      v19 = &v22;
      v10 = xxxSetClassLongPtr(v9, 4294967288LL, (__int64)&Src);
      v19 = 0LL;
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)a3, &Src, 0x18uLL);
      goto LABEL_24;
    }
    v10 = xxxSetClassLongPtr(v9, a2, a3);
    goto LABEL_24;
  }
  v10 = 0LL;
LABEL_25:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
