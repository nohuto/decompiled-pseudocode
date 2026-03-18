/*
 * XREFs of CmpCleanupPathInfo @ 0x14086E730
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

void __fastcall CmpCleanupPathInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx

  v4 = *(struct _SLIST_ENTRY **)(a1 + 160);
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[8].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v4);
    }
    else
    {
      ++P->FreeMisses;
      if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
        ExFreePool(v4);
      else
        guard_dispatch_icall_no_overrides(v4, v4, CurrentPrcb, a4);
    }
  }
}
