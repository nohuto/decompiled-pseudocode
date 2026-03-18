/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C008C490
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetClassLongPtr @ 0x1C008C5A8 (xxxSetClassLongPtr.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, int a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  ULONG64 v16; // rdx
  ULONG64 v17; // rdx
  int v18; // ecx
  ULONG64 v19; // r8
  ULONG64 v20; // rdx
  int v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+38h] [rbp-80h]
  __int128 v23; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp-38h]
  __int128 v25; // [rsp+98h] [rbp-20h]
  ULONG64 v26; // [rsp+A8h] [rbp-10h]

  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v8 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v23;
  *((_QWORD *)&v23 + 1) = v8;
  HMLockObject(v8);
  if ( a2 == -26 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      UserSetLastError(13LL);
      v13 = 0LL;
      goto LABEL_5;
    }
  }
  else if ( a2 == -8 )
  {
    v16 = a3;
    if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
      v16 = MmUserProbeAddress;
    v25 = *(_OWORD *)v16;
    v26 = *(_QWORD *)(v16 + 16);
    v22 = v25;
    v17 = v26;
    if ( v26 >= MmUserProbeAddress )
      v17 = MmUserProbeAddress;
    v18 = *(_DWORD *)v17;
    v21 = *(_DWORD *)v17;
    v19 = *(_QWORD *)(v17 + 8);
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (unsigned __int16)v18 + v19 + 2;
      if ( v20 <= v19 || v20 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v18 > HIWORD(v21) || (v18 & 1) != 0 )
      {
        if ( (v18 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2043LL);
        ExRaiseAccessViolation();
      }
    }
    v13 = xxxSetClassLongPtr(v8);
    v12 = MmUserProbeAddress;
    v11 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v22;
    *(_QWORD *)(a3 + 16) = 0LL;
    goto LABEL_5;
  }
  v13 = xxxSetClassLongPtr(v8);
LABEL_5:
  ThreadUnlock1(v12, v11, v14);
LABEL_6:
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v13;
}
