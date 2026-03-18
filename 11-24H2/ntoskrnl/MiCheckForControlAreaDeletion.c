/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x140210220
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiUnlinkUnusedControlArea @ 0x14036FCB8 (MiUnlinkUnusedControlArea.c)
 *     MiClearFilePointer @ 0x140417268 (MiClearFilePointer.c)
 *     MiDecrementControlAreaCount @ 0x14045E248 (MiDecrementControlAreaCount.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v4 = *(_DWORD *)(a1 + 56);
    if ( (v4 & 1) == 0 )
    {
      v5 = v4 | 1u;
      v6 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v5;
      MiClearFilePointer(a1, v5, a3);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 1736)) <= 1 )
        __fastfail(0xEu);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 1728));
      if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
        MiUnlinkUnusedControlArea(a1);
      v7 = *(_QWORD **)(v6 + 1936);
      v8 = (_QWORD *)(a1 + 8);
      if ( *v7 != v6 + 1928 )
        __fastfail(3u);
      *(_QWORD *)(a1 + 16) = v7;
      *v8 = v6 + 1928;
      *v7 = v8;
      *(_QWORD *)(v6 + 1936) = v8;
      *(_DWORD *)(a1 + 56) |= 0x10000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1728));
      KeSetEvent((PRKEVENT)(v6 + 1904), 0, 0);
      MiDecrementControlAreaCount(v6, v6 + 1736);
    }
  }
}
