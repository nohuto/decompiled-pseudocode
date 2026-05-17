/*
 * XREFs of TpReleaseWork @ 0x18003A420
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18003A2D4 (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 *     RtlpCtContextFree @ 0x180148F48 (RtlpCtContextFree.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax
  int v6; // ett
  __int64 (__fastcall *v7)(); // rax
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    if ( *(_BYTE *)(*(_QWORD *)(result + 24) + 72LL) )
      return result;
    return TppRaiseInvalidParameter();
  }
  _m_prefetchw((const void *)(a1 + 168));
  LODWORD(result) = *(_DWORD *)(a1 + 168);
  do
  {
    v6 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), result | 0x10000, result);
  }
  while ( v6 != (_DWORD)result );
  if ( (result & 0x10000) != 0 )
    return TppRaiseInvalidParameter();
  if ( (result & 0x30000) == 0 )
  {
    *(_QWORD *)(a1 + 184) = retaddr;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v7 = **(__int64 (__fastcall ***)())(a1 + 8);
      if ( v7 == TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(a1);
        return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
      }
      else if ( (char *)v7 == (char *)TppAlpcpFree )
      {
        return TppAlpcpFree(a1, a2, a3);
      }
      else if ( (char *)v7 == (char *)TppWorkpFree )
      {
        return TppWorkpFree(a1, a2, a3);
      }
      else
      {
        return ((__int64 (__fastcall *)(__int64))v7)(a1);
      }
    }
  }
  return result;
}
