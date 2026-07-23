/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1409130A0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     ExCreateDpcEvent @ 0x14064B680 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v8; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 - 16);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( v6 )
      {
        LOBYTE(v5) = *(_BYTE *)(v5 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v6, v5, a3, a4);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *(_SLIST_ENTRY **)(a1 - 16);
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
          guard_dispatch_icall_no_overrides(v8);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
