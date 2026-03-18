/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1401565C0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x140092EE8 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x14014F600 (CheckDwmProcessSecurityIdentifier.c)
 *     xxxDwmControl @ 0x14017A7C0 (xxxDwmControl.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsUserEnableConsoleModeSupported @ 0x14019E5D8 (IsUserEnableConsoleModeSupported.c)
 *     GreDxgkRegisterDwmProcess @ 0x14019F320 (GreDxgkRegisterDwmProcess.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     UserEnableConsoleMode @ 0x14023B868 (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessStartup(void *a1)
{
  bool v1; // r12
  PVOID v2; // r15
  void *v3; // r14
  void **v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  PVOID v22; // [rsp+48h] [rbp-60h]
  void *v23; // [rsp+50h] [rbp-58h]
  void **v24; // [rsp+58h] [rbp-50h]
  bool v26; // [rsp+B8h] [rbp+10h] BYREF
  char v27; // [rsp+C0h] [rbp+18h] BYREF
  int v28; // [rsp+C8h] [rbp+20h]

  v1 = 0;
  v26 = 0;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = (void **)(W32GetUserSessionState(a1) + 70808);
  v24 = v4;
  if ( *v4 )
    v5 = -1073741768;
  else
    v5 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v27, 1);
    v5 = UserEnableConsoleMode(0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v27);
    v1 = v5 >= 0;
    v26 = v5 >= 0;
  }
  if ( *v4 )
    v5 = -1073741768;
  if ( v5 < 0 )
    goto LABEL_27;
  v7 = (__int64)a1;
  if ( a1 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v2 = Object;
    v22 = Object;
  }
  if ( v5 < 0 )
    goto LABEL_27;
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8, v9);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v5 < 0 )
    goto LABEL_27;
  v3 = (void *)PsGetCurrentProcess(v7, v11, v12, v13);
  v23 = v3;
  GreLockDwmState(v14);
  if ( *v4 )
  {
    v5 = -1073741768;
  }
  else
  {
    *v4 = v3;
    SetDwmApiPort(v2);
  }
  GreUnlockDwmState(v15);
  if ( v5 < 0 || (v5 = GreDxgkRegisterDwmProcess(), v5 < 0) )
  {
LABEL_27:
    GreLockDwmState(v7);
    if ( *v4 == v3 )
    {
      SetDwmApiPort(0LL);
      *v4 = 0LL;
    }
    GreUnlockDwmState(v19);
    if ( v2 )
      ObfDereferenceObject(v2);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( !*v4 && v1 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v26, 1);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v26);
    }
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(v3);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v17 = *(_QWORD *)(ProcessWin32Process + 328);
    if ( *(_QWORD *)(v17 + 704) )
    {
      v28 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 361LL);
    }
    if ( *(_QWORD *)(v17 + 520) )
      *(_QWORD *)(*(_QWORD *)(v17 + 520) + 224LL) |= 0x24uLL;
    v18 = PsGetProcessWin32Process(v3);
    if ( v18 )
      v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
    *(_DWORD *)(v18 + 276) |= 0xC0u;
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
