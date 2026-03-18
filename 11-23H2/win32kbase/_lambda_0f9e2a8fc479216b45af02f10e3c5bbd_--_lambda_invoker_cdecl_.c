/*
 * XREFs of _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00589A0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ProcessMouseEvent @ 0x1C0055B10 (ProcessMouseEvent.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0132190 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7EA0 (ExecuteMarshaledInterceptRequest.c)
 */

void __fastcall lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int32 i; // esi
  int v6; // ebx
  const char *v7; // rax
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 *v16[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v16, "HandleMITWakeSignal", 0LL);
  for ( i = _InterlockedExchange(&gdwMITWakeReason, 0); i; i &= ~v6 )
  {
    v6 = i & -i;
    if ( ((unsigned __int8)i & (unsigned __int8)-(char)i & 7) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 347LL);
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    {
      switch ( v6 )
      {
        case 1:
          v7 = "Mouse";
          break;
        case 2:
          v7 = "InputSinkFromPoint";
          break;
        case 4:
          v7 = "MouseInterceptCallout";
          break;
        default:
          v7 = "UNKNOWN";
          break;
      }
      v17 = (__int64)v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C0289810,
        (__int64)&v17);
    }
    switch ( v6 )
    {
      case 1:
        ProcessMouseEvent(v2, v1, v3, v4);
        break;
      case 2:
        v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v1, v3, v4);
        gptiCurrent = v8;
        if ( v8 )
        {
          *((_DWORD *)v8 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                v10 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v14 = *v15;
                    v15[2] = 0LL;
                    if ( !*(_DWORD *)(v14 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*v15);
                  }
                }
              }
            }
          }
        }
        if ( qword_1C0296E70 )
          qword_1C0296E70();
        UserSessionSwitchLeaveCrit((__int64)v10, v9, v11, v12);
        break;
      case 4:
        ExecuteMarshaledInterceptRequest();
        break;
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v16);
}
