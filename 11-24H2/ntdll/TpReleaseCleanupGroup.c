/*
 * XREFs of TpReleaseCleanupGroup @ 0x180069D30
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpReleaseCleanupGroup(volatile signed __int32 *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1);
  result = (__int64)NtCurrentPeb();
  if ( *(_BYTE *)(*(_QWORD *)(result + 24) + 72LL) )
    return result;
  if ( _InterlockedExchange(a1 + 1, 1) )
    return TppRaiseInvalidParameter(a1);
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, (unsigned __int64)a1);
  return result;
}
