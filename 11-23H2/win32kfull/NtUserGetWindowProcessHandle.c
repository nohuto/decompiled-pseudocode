/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C00A45B0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rdi
  KPROCESSOR_MODE AccessMode; // bp
  __int64 v14; // rcx
  void *v15; // rbx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  HANDLE ThreadProcessId; // rax
  void *Handle; // [rsp+40h] [rbp-28h] BYREF
  PEPROCESS Process; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  Handle = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = PtiCurrentShared();
    v11 = *(_QWORD *)(v7 + 16);
    v12 = v10;
    AccessMode = 0;
    if ( *(_QWORD *)(v11 + 456) == *((_QWORD *)v10 + 57) )
    {
      if ( v3 == 120 || (unsigned int)IsShellProcess(*((_QWORD *)v10 + 53)) && v3 == 4096 )
      {
        v17 = Enforced();
        v18 = *(_QWORD *)(v11 + 424);
        v19 = *((_QWORD *)v12 + 53);
        if ( v17 )
        {
          if ( !(unsigned __int8)CheckAccess(v19 + 896, v18 + 896) )
          {
            if ( *(int *)(*((_QWORD *)v12 + 53) + 12LL) >= 0 )
              goto LABEL_7;
            AccessMode = 1;
          }
        }
        else if ( *(_DWORD *)(v18 + 780) != *(_DWORD *)(v19 + 780) || *(_DWORD *)(v18 + 784) != *(_DWORD *)(v19 + 784) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v11 + 488) & 0xC) == 0 && (*(_DWORD *)(v11 + 1272) & 4) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v11);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, v3, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_9;
          }
          v14 = 87LL;
          goto LABEL_8;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 27062LL);
      }
    }
LABEL_7:
    v14 = 5LL;
LABEL_8:
    UserSetLastError(v14);
  }
LABEL_9:
  v15 = Handle;
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v15;
}
