/*
 * XREFs of MiLockStandbyOldestPage @ 0x1403ED798
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRebuildStandbyLookasideList @ 0x1403ED9D0 (MiRebuildStandbyLookasideList.c)
 *     MiRepurposeDecayNode @ 0x1403EDFB0 (MiRepurposeDecayNode.c)
 */

__int64 __fastcall MiLockStandbyOldestPage(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v6; // r15
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r8
  int PfnSlabType; // eax
  unsigned __int64 v13; // rdi
  ULONG_PTR v14; // rdi
  int v15; // eax

  *a4 = 0;
  v6 = 88LL * a3;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + a1 + 3280);
    if ( v7 == 0x3FFFFFFFFFLL )
      return -1LL;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) == 2 && *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) == a1 )
      break;
LABEL_6:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + a1 + 3296));
  if ( v7 != *(_QWORD *)(v6 + a1 + 3280) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + a1 + 3296));
    goto LABEL_6;
  }
  LOBYTE(v10) = 1;
  MiRebuildStandbyLookasideList(v8, 0LL, v10);
  if ( MiIsDecayPfn(v7) )
    PfnSlabType = 9;
  else
    PfnSlabType = MiGetPfnSlabType(v8);
  MiReplaceStandbyLookaside(v7, 0xFFFFFFFFFFFFFFFFuLL, PfnSlabType, 0);
  if ( !MiIsDecayPfn(v7) )
    return v7;
  v13 = *(_QWORD *)(v8 + 16);
  if ( qword_140E2D940 )
  {
    if ( (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2D940;
  }
  v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  if ( v14 == v7 )
  {
    MiRepurposeDecayNode((PSLIST_ENTRY)v8);
LABEL_22:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + a1 + 3296));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a4 = 1;
    return -1LL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v14 - 0x220000000000LL + 24), 0x3FuLL) )
    goto LABEL_22;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = MiGetPfnSlabType(48 * v14 - 0x220000000000LL);
  MiReplaceStandbyLookaside(v14, 0xFFFFFFFFFFFFFFFFuLL, v15, 0);
  return v14;
}
