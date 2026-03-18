/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00B6E50
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  int v16; // ecx
  __int64 v17; // rax

  v4 = a1;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  v9 = 0LL;
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v17 = *v11;
          v11[2] = 0LL;
          if ( !*(_DWORD *)(v17 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v11);
        }
      }
    }
  }
  if ( (v4 != 0) != v4 )
  {
    v16 = 87;
    goto LABEL_17;
  }
  if ( v4 && qword_1C0295E50 && (qword_1C0295E50(gptiCurrent) & 0x80000000000LL) != 0
    || (v12 = *((_QWORD *)gptiCurrent + 53), v13 = *(_DWORD *)(v12 + 824), v4 != ((v13 >> 2) & 1)) && (v13 & 8) != 0 )
  {
    v16 = 5;
LABEL_17:
    UserSetLastError(v16);
    goto LABEL_15;
  }
  v14 = v13 & 0xFFFFFFFB;
  v9 = 1LL;
  *(_DWORD *)(v12 + 824) = v14 | (4 * (v4 & 1 | 2));
LABEL_15:
  UserSessionSwitchLeaveCrit(v14, v12, v7, v8);
  return v9;
}
