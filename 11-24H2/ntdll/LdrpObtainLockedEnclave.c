/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800D8D60
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D8AEC (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D8BA0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8CB0 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // r8
  unsigned __int64 v7; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v7 = v5[9];
        v4 = (unsigned __int64)v5;
        if ( a2 )
        {
          if ( a1 == v7 )
            break;
        }
        else if ( a1 >= v7 && a1 - v7 < v5[10] )
        {
          break;
        }
        v5 = (__int64 *)*v5;
        if ( v5 == &LdrpEnclaveList )
          goto LABEL_7;
      }
    }
    if ( !v4 )
    {
LABEL_7:
      RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 60));
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    RtlEnterCriticalSection(v4 + 16);
    if ( *(_QWORD *)(v4 + 72) )
      return v4;
    RtlLeaveCriticalSection(v4 + 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 60), 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(v4 + 112));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
}
