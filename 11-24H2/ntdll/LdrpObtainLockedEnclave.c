/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800D40D0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D3B60 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D3E5C (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D3F10 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D4020 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180130E90 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // r8
  unsigned __int64 v7; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v7 = v5[9];
        v4 = v5;
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
      RtlLeaveCriticalSection(&LdrpEnclaveListLock);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)v4 + 15);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    if ( v4[9] )
      return v4;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 15, 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap(LdrpHeap, 0, (PVOID)v4[14]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
}
