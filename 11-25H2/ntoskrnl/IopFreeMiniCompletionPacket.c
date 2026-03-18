/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1409A6C70
 * Callers:
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     IopFreeCompletionListPackets @ 0x1409A6BE8 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A6C50 (IoFreeMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A07AF4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140304090 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v5)(__int64, __int64); // rax
  _DWORD *v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( *(_BYTE *)(BugCheckParameter2 + 16) == 4 )
  {
    v5 = *(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 56);
    if ( v5 )
    {
      v6 = *(_DWORD **)(BugCheckParameter2 + 64);
      if ( (char *)v5 == (char *)&PspIoMiniPacketCallbackRoutine )
      {
        *v6 = 0;
        ObfDereferenceObject(v6);
      }
      else if ( (char *)v5 == (char *)AlpcpLookasidePacketCallbackRoutine )
      {
        AlpcpLookasidePacketCallbackRoutine(BugCheckParameter2, v6);
      }
      else if ( v5 == ExpWorkerFactoryCompletionPacketRoutine )
      {
        ExpWorkerFactoryCompletionPacketRoutine(BugCheckParameter2, (__int64)v6);
      }
      else
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter2);
      }
    }
    else if ( *(_BYTE *)(BugCheckParameter2 + 72) )
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[7].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      if ( *(_BYTE *)(BugCheckParameter2 + 16) == 3 )
        ExReturnPoolQuota(BugCheckParameter2, a2, a3, a4);
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter2);
    }
    else
    {
      ++P->FreeMisses;
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
