/*
 * XREFs of CmpExpandPathInfo @ 0x14087246C
 * Callers:
 *     CmpComputeComponentHashes @ 0x140872190 (CmpComputeComponentHashes.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CmpExpandPathInfo(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
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
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v5 = (_DWORD *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
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
