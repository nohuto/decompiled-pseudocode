/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x14092FB70
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     ExCreateDpcEvent @ 0x140655CE0 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1)
{
  __int64 v2; // rdx
  void *v3; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v5; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 - 16);
    if ( v2 )
    {
      v3 = *(void **)(v2 + 32);
      if ( v3 )
      {
        SeReleaseSecurityDescriptor(v3, *(_BYTE *)(v2 + 16), 1);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = *(_SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v5);
      }
      else
      {
        ++P->FreeMisses;
        if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
          ExFreePool(v5);
        else
          guard_dispatch_icall_no_overrides(v5, v5);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
