/*
 * XREFs of MiDeleteSegmentPages @ 0x1403707BC
 * Callers:
 *     MiInitializeImageExtents @ 0x1407F0358 (MiInitializeImageExtents.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 */

void __fastcall MiDeleteSegmentPages(__int64 a1)
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
  v4 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  if ( *(_QWORD *)(a1 + 64) )
    v1 = (*(_DWORD *)(a1 + 56) & 0x20) == 0;
  v5 = (_QWORD *)(a1 + 128);
  v6 = *(_WORD *)(*(_QWORD *)a1 + 12LL);
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
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  while ( 1 )
  {
    v8 = (volatile LONG *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    MiReleaseSpinLockExclusive(v8, v7);
    KeYieldProcessorEx(&v13);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
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
