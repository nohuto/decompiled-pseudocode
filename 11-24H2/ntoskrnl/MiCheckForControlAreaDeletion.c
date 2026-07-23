/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x140339580
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiClearFilePointer @ 0x140270398 (MiClearFilePointer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x140432D38 (MiUnlinkUnusedControlArea.c)
 *     MiDecrementControlAreaCount @ 0x140453308 (MiDecrementControlAreaCount.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( (v2 & 1) == 0 )
    {
      v3 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v2 | 1;
      MiClearFilePointer(a1);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1736)) <= 1 )
        __fastfail(0xEu);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 1728));
      if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
        MiUnlinkUnusedControlArea(a1);
      v4 = *(_QWORD **)(v3 + 1936);
      v5 = (_QWORD *)(a1 + 8);
      if ( *v4 != v3 + 1928 )
        __fastfail(3u);
      *(_QWORD *)(a1 + 16) = v4;
      *v5 = v3 + 1928;
      *v4 = v5;
      *(_QWORD *)(v3 + 1936) = v5;
      *(_DWORD *)(a1 + 56) |= 0x10000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1728));
      KeSetEvent((PRKEVENT)(v3 + 1904), 0, 0);
      MiDecrementControlAreaCount(v3, v3 + 1736);
    }
  }
}
