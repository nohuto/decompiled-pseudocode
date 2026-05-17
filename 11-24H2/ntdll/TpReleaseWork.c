/*
 * XREFs of TpReleaseWork @ 0x18006CCA0
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     LdrpDetectDetour @ 0x18006CBA0 (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F7B3C (RtlpFcFreeChangeRegistration.c)
 *     RtlpCtContextFree @ 0x180147998 (RtlpCtContextFree.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseWork(unsigned __int64 a1)
{
  int v2; // eax
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  void (__fastcall *v5)(unsigned __int64); // rax
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_20:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw((const void *)(a1 + 168));
  v3 = *(_DWORD *)(a1 + 168);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v3 | 0x10000, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_20;
  if ( (v3 & 0x30000) == 0 )
  {
    *(_QWORD *)(a1 + 184) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    {
      v5 = **(void (__fastcall ***)(unsigned __int64))(a1 + 8);
      if ( (char *)v5 == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy((_QWORD *)a1);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
      }
      else if ( (char *)v5 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree((_QWORD *)a1);
      }
      else if ( (char *)v5 == (char *)TppWorkpFree )
      {
        TppWorkpFree(a1);
      }
      else
      {
        v5(a1);
      }
    }
  }
}
