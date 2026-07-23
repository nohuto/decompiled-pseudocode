/*
 * XREFs of TpCancelAsyncIoOperation @ 0x1800868A0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  __int64 v1; // rdx
  volatile int Flags; // eax
  volatile int PendingIrpCount; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !Io
    || (Flags = Io->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Io->CleanupGroupMember.VFuncs != &TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr);
  }
  else
  {
    _m_prefetchw((const void *)&Io->PendingIrpCount);
    PendingIrpCount = Io->PendingIrpCount;
    while ( PendingIrpCount > 0 )
    {
      v6 = _InterlockedCompareExchange(&Io->PendingIrpCount, PendingIrpCount - 1, PendingIrpCount);
      v5 = PendingIrpCount == v6;
      PendingIrpCount = v6;
      if ( v5 )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)&Io->CleanupGroupMember.CallbackBarrier, -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd(&Io->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
    {
      Free = Io->CleanupGroupMember.VFuncs->Free;
      if ( (char *)Free == (char *)TppSimplepFree )
      {
        TppSimplepFree(Io, v1);
      }
      else if ( (char *)Free == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(Io);
      }
      else if ( (char *)Free == (char *)TppWorkpFree )
      {
        TppWorkpFree(Io);
      }
      else
      {
        Free(&Io->CleanupGroupMember);
      }
    }
  }
}
