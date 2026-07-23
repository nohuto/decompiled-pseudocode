/*
 * XREFs of KeAllocateXStateContext @ 0x1403D3E40
 * Callers:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D3AFC (KiSaveExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140BA3D84 (VfCtxInit.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeAllocateXStateContext(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  _DWORD *Pool2; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Type; // rcx
  unsigned __int64 v11; // rcx

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
      goto LABEL_7;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[9].L;
    ++L->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( Pool2
      || (Size = L->Size,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
    {
LABEL_7:
      *Pool2 = CurrentPrcb->Number;
    }
    *(_BYTE *)(a1 + 12) |= 1u;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x42uLL, (unsigned int)(v3 + 63), 0x76615358u);
  }
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)(a1 + 8) = v3;
  v11 = ((unsigned __int64)Pool2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(a1 + 16) = v11;
  memset_0((void *)(v11 + 512), 0, 0x40uLL);
  return 0LL;
}
