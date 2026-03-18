/*
 * XREFs of _RegisterUserApiHook @ 0x140284A8C
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x140210530 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     GetHmodTableIndex @ 0x140083C34 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140083E60 (AddHmodDependency.c)
 *     RemoveHmodDependency @ 0x140083EF8 (RemoveHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RegisterUserApiHook(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v6; // rsi
  ULONG64 v7; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rbx
  int v16; // ecx
  ULONG64 v17; // r10
  ULONG64 v18; // rdx
  int v19; // ecx
  char *v20; // r8
  ULONG64 v21; // rdx
  __int64 v22; // r11
  int v23; // ecx
  unsigned __int64 v24; // rdi
  ULONG64 v25; // rdx
  int v26; // ecx
  char *v27; // r8
  ULONG64 v28; // r9
  __int64 v29; // r10
  int HmodTableIndex; // eax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx

  v6 = a2;
  v7 = a1;
  if ( IsInsideUserApiHook(a1, a2) || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_65;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_DWORD *)(v10 + 772) != luidSystem[0] )
    goto LABEL_65;
  v11 = PsGetCurrentProcessWin32Process(luidSystem[0]);
  v12 = v11;
  if ( v11 )
    v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
  if ( *(_DWORD *)(v12 + 776) != luidSystem[1] || !(unsigned __int8)HasTcbPrivilege() )
  {
LABEL_65:
    v31 = 5;
    goto LABEL_66;
  }
  UserSessionState = W32GetUserSessionState(v14, v13);
  if ( v7 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v16 = *(_DWORD *)v7;
  v17 = *(_QWORD *)(v7 + 8);
  if ( (v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = v17 + (unsigned __int16)v16 + 2LL;
  if ( v18 <= v17 || v18 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v16 > (unsigned __int16)HIWORD(*(_DWORD *)v7) )
  {
    if ( (v16 & 1) == 0 )
      goto LABEL_63;
    goto LABEL_62;
  }
  if ( (v16 & 1) != 0 )
  {
LABEL_62:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2947);
LABEL_63:
    ExRaiseAccessViolation();
  }
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v19 = *(_DWORD *)v6;
  v20 = *(char **)(v6 + 8);
  if ( ((unsigned __int8)v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (ULONG64)&v20[(unsigned __int16)v19 + 2];
  if ( v21 <= (unsigned __int64)v20 || v21 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v19 > (unsigned __int16)HIWORD(*(_DWORD *)v6) )
  {
    if ( (v19 & 1) == 0 )
      goto LABEL_59;
    goto LABEL_58;
  }
  if ( (v19 & 1) != 0 )
  {
LABEL_58:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2950);
LABEL_59:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(UserSessionState + 64260), 260LL, v20);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v23 = *(_DWORD *)a3;
  v24 = *(_QWORD *)(a3 + 8);
  if ( (v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = v24 + (unsigned __int16)v23 + 2LL;
  if ( v25 <= v24 || v25 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v23 > (unsigned __int16)HIWORD(*(_DWORD *)a3) )
  {
    if ( (v23 & 1) == 0 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( (v23 & 1) != 0 )
  {
LABEL_54:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2956);
LABEL_55:
    ExRaiseAccessViolation();
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v26 = *(_DWORD *)a4;
  v27 = *(char **)(a4 + 8);
  if ( ((unsigned __int8)v27 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v28 = (ULONG64)&v27[(unsigned __int16)v26 + 2];
  if ( v28 <= (unsigned __int64)v27 || v28 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v26 > (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v26 & 1) == 0 )
      goto LABEL_51;
    goto LABEL_50;
  }
  if ( (v26 & 1) != 0 )
  {
LABEL_50:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2959);
LABEL_51:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(UserSessionState + 64784), v22, v27);
  HmodTableIndex = GetHmodTableIndex(v29);
  *(_DWORD *)(UserSessionState + 64256) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v31 = 126;
LABEL_66:
    UserSetLastError(v31);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v32 = GetHmodTableIndex(v24);
  *(_DWORD *)(UserSessionState + 64780) = v32;
  if ( v32 == -1 )
  {
    UserSetLastError(126);
    RemoveHmodDependency(*(_DWORD *)(UserSessionState + 64256));
    *(_DWORD *)(UserSessionState + 64256) = -1;
    return 0LL;
  }
  AddHmodDependency(v32);
  v34 = PsGetCurrentProcessWin32Process(v33);
  if ( v34 )
  {
    v36 = -*(_QWORD *)v34;
    v35 = -(__int64)(*(_QWORD *)v34 != 0LL);
    v34 &= v35;
  }
  *(_QWORD *)(UserSessionState + 64248) = v34;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v36, v35) + 19928), 0x10u);
  return 1LL;
}
