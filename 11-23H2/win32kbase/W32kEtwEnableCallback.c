/*
 * XREFs of W32kEtwEnableCallback @ 0x1C00AF6CC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00AF5D0 (McGenControlCallbackV2.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     FastGetProfileDword @ 0x1C00B7E20 (FastGetProfileDword.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C01382FC (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0233ACC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  LONGLONG v12; // rdx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v32[12]; // [rsp+34h] [rbp-104h] BYREF
  _BYTE v33[208]; // [rsp+40h] [rbp-F8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v33);
  if ( a2 <= 1 )
  {
    v31 = 0;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v32);
    FastGetProfileDword(0, 2, (unsigned int)L"UserCritAcquireDelayLogTimeout", 1, (__int64)&v31);
    if ( !v32[0] )
      UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
    if ( v31 > 1 )
      W32kEtwUserCritAcquireDelayTimeoutms = v31;
    if ( a2 == 1 )
    {
      v11 = 3600 * gliQpcFreq.QuadPart;
      v12 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutms / 1000;
    }
    else
    {
      v11 = -1LL;
      v12 = -1LL;
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
    W32KEtwUserCritTelemetryThrottleQPC = v11;
    WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C0283068 - 1) <= 2u
       || (qword_1C0283050 & 0x8000000000040000uLL) == 0
       || (qword_1C0283058 & 0x8000000000040000uLL) != qword_1C0283058)
      && LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v13 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(
                                      0LL,
                                      0x8000000000040000uLL,
                                      v11,
                                      v10);
      gptiCurrent = v13;
      if ( v13 )
      {
        *((_DWORD *)v13 + 387) = 1;
        if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v15) )
        {
          while ( 1 )
          {
            v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v18 = *v19;
            v19[2] = 0LL;
            if ( !*(_DWORD *)(v18 + 8) )
            {
              v31 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            }
            HMUnlockObject(*v19);
          }
        }
      }
      LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 0;
      UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v23 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v20, v21, v22);
    gptiCurrent = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 387) = 1;
      if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v24) )
      {
        while ( 1 )
        {
          v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v25 = *v26;
          v26[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*v26);
        }
      }
    }
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v33);
}
