/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C0141F20
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     IsInputThread @ 0x1C0057E50 (IsInputThread.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ProcessInfoFromPID @ 0x1C00AB4A4 (ProcessInfoFromPID.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     SetInputDelegationModeImpl @ 0x1C01E8E5C (SetInputDelegationModeImpl.c)
 *     CitEnableKeyboardDelegation @ 0x1C0234A34 (CitEnableKeyboardDelegation.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r14d
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rbx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-28h]

  v4 = a1;
  v5 = a4;
  LOBYTE(a1) = 1;
  v6 = a3;
  v7 = a2;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v9) )
    {
      while ( 1 )
      {
        v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v10 = *v11;
        v11[2] = 0LL;
        if ( !*(_DWORD *)(v10 + 8) )
        {
          v21 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        }
        HMUnlockObject(*v11);
      }
    }
  }
  if ( !IsInputThread() )
    goto LABEL_9;
  if ( v5 )
  {
    if ( !v4 || !v6 || (v5 & 0xFFFFFFF8) != 0 )
    {
      v12 = 87;
      goto LABEL_10;
    }
    if ( !gptiForeground || v4 != ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
    {
LABEL_9:
      v12 = 5;
LABEL_10:
      v13 = 0;
      UserSetLastError(v12);
      goto LABEL_20;
    }
  }
  v13 = SetInputDelegationModeImpl(v4, v7, v6, v5, v21);
  if ( v13 && v7 )
  {
    v18 = ProcessInfoFromPID(v7);
    v19 = ProcessInfoFromPID(v4);
    CitEnableKeyboardDelegation(v5 & 1, v19, v18);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v13;
}
