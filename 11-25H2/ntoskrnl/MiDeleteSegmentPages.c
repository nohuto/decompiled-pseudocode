/*
 * XREFs of MiDeleteSegmentPages @ 0x14044A758
 * Callers:
 *     MiInitializeImageExtents @ 0x1407E04B8 (MiInitializeImageExtents.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiDeleteSubsectionPages @ 0x14044A8C4 (MiDeleteSubsectionPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
 */

void __fastcall MiDeleteSegmentPages(_QWORD *a1)
{
  BOOL v1; // esi
  __int64 v2; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int16 v6; // r15
  unsigned __int64 v7; // rsi
  volatile LONG *v8; // rcx
  __int64 v9; // rdx
  __int64 CommittedPages; // rax
  __int64 v11; // rbx
  void *v12; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v4 = *((_QWORD *)qword_140E2FD48 + (*((_WORD *)a1 + 30) & 0x3FF));
  if ( a1[8] )
    v1 = (a1[7] & 0x20) == 0;
  v5 = a1 + 16;
  v6 = *(_WORD *)(*a1 + 12LL);
  while ( v5 )
  {
    v2 += MiDeleteSubsectionPages((ULONG_PTR)v5);
    if ( v1 )
    {
      if ( *(_QWORD *)(*v5 + 64LL) )
      {
        if ( (*(_BYTE *)(*v5 + 62LL) & 0xC) == 8 )
        {
          v12 = (void *)v5[14];
          if ( v12 )
          {
            MiDeleteFileExtentList(v12);
            v5[14] = 0LL;
          }
        }
      }
    }
    v5 = (_QWORD *)v5[2];
  }
  v13 = 0;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  while ( 1 )
  {
    v8 = (volatile LONG *)(a1 + 9);
    if ( !a1[4] )
      break;
    MiReleaseSpinLockExclusive(v8, v7);
    KeYieldProcessorEx(&v13);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( (_BYTE)v7 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = v7;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(v7);
  }
  CommittedPages = MiGetCommittedPages(a1);
  v11 = CommittedPages;
  if ( CommittedPages )
  {
    if ( (v6 & 0x400) != 0 )
      MiReturnResident(v4, CommittedPages - v2);
    MiReturnCommit(v4, v11 - v2, 0);
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 19640), -v11);
  }
}
