/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800D8D00
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D8A94 (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8C50 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  unsigned __int64 v9; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v9 = v5[9];
        v4 = (__int64)v5;
        if ( a2 )
        {
          if ( a1 == v9 )
            break;
        }
        else if ( a1 >= v9 && a1 - v9 < v5[10] )
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
      RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(v4 + 112), v6);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v7);
    }
  }
}
