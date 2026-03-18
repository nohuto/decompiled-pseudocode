/*
 * XREFs of KeAllocateXStateContext @ 0x14043BD00
 * Callers:
 *     KiSaveExtendedAndSupervisorState @ 0x14043B9BC (KiSaveExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140B91DA4 (VfCtxInit.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeAllocateXStateContext(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY Pool2; // rcx
  unsigned __int64 v8; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Type; // rcx

  v3 = 576;
  *(_BYTE *)(a1 + 12) = 0;
  if ( a3 >= 0x240 )
    v3 = a3;
  if ( v3 == MEMORY[0xFFFFF780000003E8] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[9].P;
    ++P->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( Pool2 )
      goto LABEL_5;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[9].L;
    ++L->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( Pool2
      || (Size = L->Size,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (Pool2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
    {
LABEL_5:
      LODWORD(Pool2->Next) = CurrentPrcb->Number;
    }
    *(_BYTE *)(a1 + 12) |= 1u;
  }
  else
  {
    Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x42uLL);
  }
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)(a1 + 8) = v3;
  v8 = ((unsigned __int64)&Pool2[3].Next + 15) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(a1 + 16) = v8;
  memset_0((void *)(v8 + 512), 0, 0x40uLL);
  return 0LL;
}
