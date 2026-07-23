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

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  volatile int Flags; // eax
  volatile int v3; // eax
  volatile int v4; // ett
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  void *ThreadPoolData; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_WORK *)(*(_QWORD *)ThreadPoolData + 240LL) != Work)
    || (__int64 (__fastcall **)())Work->CleanupGroupMember.VFuncs != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_20:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw(&Work->CleanupGroupMember.168);
  v3 = Work->CleanupGroupMember.Flags;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(&Work->CleanupGroupMember.Flags, v3 | 0x10000, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_20;
  if ( (v3 & 0x30000) == 0 )
  {
    Work->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    if ( _InterlockedExchangeAdd(&Work->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
    {
      Free = Work->CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(Work);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, Work);
      }
      else if ( (char *)Free == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(Work);
      }
      else if ( (char *)Free == (char *)TppWorkpFree )
      {
        TppWorkpFree(Work);
      }
      else
      {
        Free(&Work->CleanupGroupMember);
      }
    }
  }
}
