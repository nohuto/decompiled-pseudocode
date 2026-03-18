/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x14092DA30
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     ExCreateDpcEvent @ 0x1406575E0 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  void *v6; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  struct _SLIST_ENTRY *v8; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 - 16);
    if ( v5 )
    {
      v6 = *(void **)(v5 + 32);
      if ( v6 )
      {
        SeReleaseSecurityDescriptor(v6, *(_BYTE *)(v5 + 16), 1);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *(struct _SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v8);
      }
      else
      {
        ++P->FreeMisses;
        if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
          ExFreePool(v8);
        else
          guard_dispatch_icall_no_overrides(v8, v8, CurrentPrcb, a4);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
