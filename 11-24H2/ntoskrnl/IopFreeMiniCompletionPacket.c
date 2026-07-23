/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x140990680
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     IopFreeCompletionListPackets @ 0x1409905F8 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x140990660 (IoFreeMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A06FB0 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x14021ACC0 (ExReturnPoolQuota.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(ULONG_PTR BugCheckParameter2)
{
  void (__fastcall *v2)(__int64, __int64); // rax
  _DWORD *v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( *(_BYTE *)(BugCheckParameter2 + 16) == 4 )
  {
    v2 = *(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 56);
    if ( v2 )
    {
      v3 = *(_DWORD **)(BugCheckParameter2 + 64);
      if ( (char *)v2 == (char *)&PspIoMiniPacketCallbackRoutine )
      {
        *v3 = 0;
        ObfDereferenceObject(v3);
      }
      else if ( (char *)v2 == (char *)AlpcpLookasidePacketCallbackRoutine )
      {
        AlpcpLookasidePacketCallbackRoutine(BugCheckParameter2, v3);
      }
      else if ( v2 == ExpWorkerFactoryCompletionPacketRoutine )
      {
        ExpWorkerFactoryCompletionPacketRoutine(BugCheckParameter2, (__int64)v3);
      }
      else
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter2, v3);
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
        ExReturnPoolQuota(BugCheckParameter2);
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter2);
    }
    else
    {
      ++P->FreeMisses;
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
