/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0018EB0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C0018F24 (IsUserResetPointerSupported.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C001C364 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, unsigned int a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  struct tagKERNELHANDLETABLEENTRY *v8; // rbx
  struct _LUID v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+40h] [rbp+18h]

  v9 = a1;
  v3 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v8 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v7 = *(_QWORD *)v8;
          *((_QWORD *)v8 + 2) = 0LL;
          if ( !*(_DWORD *)(v7 + 8) )
          {
            v10 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*(_QWORD *)v8);
        }
      }
    }
  }
  if ( (int)IsUserResetPointerSupported() >= 0 && qword_1C0294438 )
    qword_1C0294438();
  DrvUpdatePDevForWDDMVidPnSource(&v9, a2);
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
