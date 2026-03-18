/*
 * XREFs of EnterCrit @ 0x1C0048270
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(__int64 a1, int a2)
{
  struct tagTHREADINFO *result; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *i; // rdi
  __int64 v8; // rax

  LOBYTE(a1) = (_DWORD)a1 == 0;
  result = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = result;
  v5 = result;
  if ( result )
  {
    if ( !a2 )
      *((_DWORD *)result + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          for ( i = gpSharedUserCritDeferredUnlockListHead;
                gpSharedUserCritDeferredUnlockListHead;
                i = gpSharedUserCritDeferredUnlockListHead )
          {
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
            v8 = *(_QWORD *)i;
            *((_QWORD *)i + 2) = 0LL;
            if ( !*(_DWORD *)(v8 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)i);
          }
        }
      }
    }
    return v5;
  }
  return result;
}
