/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C0142930
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C019002C (RIMSetPointerDeviceInputSpace.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *v6; // r12
  int v7; // edi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // rsi
  __int64 *v19; // rcx
  __int128 *v20; // rdx
  NTSTATUS v21; // eax
  ULONG v22; // eax
  PVOID Object; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int128 v26; // [rsp+50h] [rbp-58h]
  __int128 v27; // [rsp+60h] [rbp-48h] BYREF

  v6 = (char *)a1;
  v7 = 1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v12 = 0;
          }
          if ( v12 )
          {
            while ( 1 )
            {
              v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v13[2] = 0LL;
              if ( !*(_DWORD *)(*v13 + 8) )
              {
                LODWORD(Object) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v13);
            }
          }
        }
      }
    }
  }
  Object = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
    {
      v19 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v19 = (__int64 *)MmUserProbeAddress;
      v25 = *v19;
    }
    if ( a3 )
    {
      v20 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v20 = (__int128 *)MmUserProbeAddress;
      v26 = *v20;
      v27 = v26;
    }
    v18 = Object;
    v21 = RIMSetPointerDeviceInputSpace(
            Object,
            (unsigned __int64)&v25 & -(__int64)(a2 != 0),
            (unsigned __int64)&v27 & -(__int64)(a3 != 0));
    if ( v21 < 0 )
    {
      v7 = 0;
      v22 = RtlNtStatusToDosError(v21);
      UserSetLastError(v22);
    }
  }
  else
  {
    v7 = 0;
    UserSetLastError(87);
    v18 = Object;
  }
  if ( v18 )
    ObfDereferenceObject(v18);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v7;
}
