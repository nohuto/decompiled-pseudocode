/*
 * XREFs of ObpFreeObjectNameBuffer @ 0x14083E740
 * Callers:
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObjectNameBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  v4 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( *(_WORD *)(a1 + 2) == 248 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[5].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[5].L,
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
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
