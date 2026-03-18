/*
 * XREFs of KeFreeXStateContext @ 0x140406E58
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x140406C00 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140BA1D84 (VfCtxInit.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( a1 )
  {
    v4 = *(struct _SLIST_ENTRY **)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[9].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[9].L,
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
            guard_dispatch_icall_no_overrides(v4, CurrentPrcb, v4, a4);
        }
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x76615358u);
      }
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
    }
  }
}
