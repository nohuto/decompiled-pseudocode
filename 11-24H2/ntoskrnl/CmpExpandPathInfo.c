/*
 * XREFs of CmpExpandPathInfo @ 0x14086E13C
 * Callers:
 *     CmpComputeComponentHashes @ 0x14086DE60 (CmpComputeComponentHashes.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall CmpExpandPathInfo(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 v7; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v4 = 0;
  v5 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v5 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v5 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v5
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v5 = (_DWORD *)guard_dispatch_icall_no_overrides(Type, Size, Tag, v7)) != 0LL) )
  {
LABEL_4:
    *v5 = CurrentPrcb->Number;
  }
  if ( v5 )
  {
    memset_0(v5, 0, 0x1E0uLL);
    *(_QWORD *)(a1 + 160) = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
