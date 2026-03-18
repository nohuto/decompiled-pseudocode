/*
 * XREFs of UserEnterUserCritSec @ 0x1C00C4B00
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserEnterUserCritSec(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rbx

  result = PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = (struct tagTHREADINFO *)result;
  if ( result )
  {
    *(_DWORD *)(result + 1548) = 1;
    result = PsGetCurrentProcessWin32Process(v5);
    if ( result )
    {
      if ( *(_QWORD *)result )
      {
        if ( (*(_DWORD *)(result + 12) & 0x8000) != 0 && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 )
        {
          result = *((unsigned int *)gptiCurrent + 318);
          if ( (result & 0x80u) == 0LL )
          {
            while ( 1 )
            {
              v7 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v6 = *v7;
              v7[2] = 0LL;
              if ( !*(_DWORD *)(v6 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              result = HMUnlockObject(*v7);
            }
          }
        }
      }
    }
  }
  return result;
}
