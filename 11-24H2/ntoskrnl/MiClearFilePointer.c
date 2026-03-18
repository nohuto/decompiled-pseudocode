/*
 * XREFs of MiClearFilePointer @ 0x140417268
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140210220 (MiCheckForControlAreaDeletion.c)
 *     MiDestroySection @ 0x140417200 (MiDestroySection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
    v3 = *(_QWORD **)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (v1 & 0x20) != 0 )
      v3[2] = 0LL;
    else
      *v3 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
  }
}
