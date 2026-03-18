/*
 * XREFs of NtMITInitMinuserThread @ 0x1C01415E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ProtectHandle @ 0x1C0087A68 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  __int64 *v14; // rdi
  struct tagTHREADINFO *v15; // rdi
  int v16; // r14d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v5;
  v10 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      v7 = -*(_QWORD *)CurrentProcessWin32Process;
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v6 & CurrentProcessWin32Process;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
        {
          v7 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v13 = 0;
          }
          if ( v13 )
          {
            while ( 1 )
            {
              v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v14[2] = 0LL;
              if ( !*(_DWORD *)(*v14 + 8) )
              {
                LODWORD(Object) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v14);
            }
          }
        }
      }
    }
  }
  v15 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) != 0 )
  {
    v10 = 1;
  }
  else
  {
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v16 >= 0 )
    {
      v16 = ProtectHandle(Handle, v6, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v16 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *((_QWORD *)v15 + 92) )
        {
          ProtectHandle(*((void **)v15 + 91), v6, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*((HANDLE *)v15 + 91), 1);
          ObfDereferenceObject(*((PVOID *)v15 + 92));
        }
        *((_QWORD *)v15 + 91) = Handle;
        *((_QWORD *)v15 + 92) = Object;
        *((_DWORD *)v15 + 122) |= 0xC0u;
        *((_DWORD *)v15 + 318) |= 0x1000000u;
      }
    }
    LOBYTE(v10) = v16 >= 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
