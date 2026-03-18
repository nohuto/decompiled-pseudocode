/*
 * XREFs of NtUserSetWinEventHook @ 0x14029EEF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     _SetWinEventHook @ 0x140084C1C (_SetWinEventHook.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400850E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // r9
  int v15; // ecx
  ULONG64 v16; // rdx
  __int64 *v17; // rdi
  __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-98h]
  unsigned __int64 v21; // [rsp+58h] [rbp-90h]
  int v22; // [rsp+68h] [rbp-80h]
  unsigned __int64 v23; // [rsp+70h] [rbp-78h]
  _BYTE v24[48]; // [rsp+78h] [rbp-70h] BYREF

  v20 = a5;
  EnterLeaveCritShared::EnterLeaveCritShared(&v19, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004);
    v13 = 0LL;
    goto LABEL_22;
  }
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>((__int64)v24);
  v13 = 0LL;
  v14 = 0LL;
  if ( (a8 & 4) != 0 && a3 && a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v15 = *(_DWORD *)a4;
    LODWORD(v19) = v15;
    v22 = v15;
    v14 = *(_QWORD *)(a4 + 8);
    v23 = v14;
    if ( (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v14 + (unsigned __int16)v15 + 2LL;
    if ( v16 <= v14 || v16 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v15 > WORD1(v19) )
    {
      if ( (v15 & 1) == 0 )
        goto LABEL_17;
    }
    else if ( (v15 & 1) == 0 )
    {
      v21 = v14;
      goto LABEL_19;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3619);
LABEL_17:
    ExRaiseAccessViolation();
  }
LABEL_19:
  v17 = (__int64 *)SetWinEventHook(a1, a2, a3, v14, v20, (int)a6, a7, a8);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v24);
  if ( v17 )
    v13 = *v17;
  EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v13);
LABEL_22:
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
