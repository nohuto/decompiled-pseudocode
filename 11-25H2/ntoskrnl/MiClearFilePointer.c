/*
 * XREFs of MiClearFilePointer @ 0x140419C34
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 *     MiCheckForControlAreaDeletion @ 0x140419AE0 (MiCheckForControlAreaDeletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    v3 = *(_QWORD **)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (v1 & 0x20) != 0 )
      v3[2] = 0LL;
    else
      *v3 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  }
}
