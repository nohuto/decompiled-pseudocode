/*
 * XREFs of MiLockStandbyOldestPage @ 0x1403F41B8
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRebuildStandbyLookasideList @ 0x1403F43F0 (MiRebuildStandbyLookasideList.c)
 *     MiRepurposeDecayNode @ 0x1403F49D0 (MiRepurposeDecayNode.c)
 */

__int64 __fastcall MiLockStandbyOldestPage(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v6; // r15
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // edi
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
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) == 2 && *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) == a1 )
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
  if ( qword_140E2DB80 )
  {
    if ( (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2DB80;
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
