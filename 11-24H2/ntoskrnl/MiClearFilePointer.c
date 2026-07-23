/*
 * XREFs of MiClearFilePointer @ 0x140270398
 * Callers:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339580 (MiCheckForControlAreaDeletion.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiClearFilePointer(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  _QWORD *v3; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80000) == 0 )
  {
    *(_DWORD *)(a1 + 56) = v1 | 0x80000;
    v2 = *(_QWORD *)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CD40);
    v3 = *(_QWORD **)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (v1 & 0x20) != 0 )
      v3[2] = 0LL;
    else
      *v3 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
  }
}
