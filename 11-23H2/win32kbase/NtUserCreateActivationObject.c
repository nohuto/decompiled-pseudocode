/*
 * XREFs of NtUserCreateActivationObject @ 0x1C00B4080
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0068364 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserCreateActivationObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LUID *v4; // r14
  unsigned __int64 *v5; // rsi
  HWND v6; // r15
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _OBJECT_ATTRIBUTES *v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  char v15; // al
  __int64 *v16; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG64 v21; // rcx
  ULONG v23; // ecx
  char v24; // [rsp+20h] [rbp-68h]
  struct _LUID v25; // [rsp+90h] [rbp+8h] BYREF

  v4 = (struct _LUID *)a3;
  v5 = (unsigned __int64 *)a2;
  v6 = (HWND)a1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v7;
  v12 = 0;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v8 & CurrentProcessWin32Process;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v15 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v15 = 0;
          }
          if ( v15 )
          {
            while ( 1 )
            {
              v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v16[2] = 0LL;
              if ( !*(_DWORD *)(*v16 + 8) )
              {
                v25.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v16);
            }
          }
        }
      }
    }
  }
  v25 = 0LL;
  if ( !v6 )
  {
    v23 = 87;
LABEL_24:
    UserSetLastError(v23);
    goto LABEL_17;
  }
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    v5 = (unsigned __int64 *)MmUserProbeAddress;
  v17 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v25,
          v8,
          v10,
          v11,
          v24,
          v6,
          *v5,
          &v25);
  if ( v17 < 0 )
  {
    v23 = RtlNtStatusToDosError(v17);
    goto LABEL_24;
  }
  v12 = 1;
  v21 = MmUserProbeAddress;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (struct _LUID *)MmUserProbeAddress;
  *v4 = v25;
LABEL_17:
  UserSessionSwitchLeaveCrit(v21, v18, v19, v20);
  return v12;
}
