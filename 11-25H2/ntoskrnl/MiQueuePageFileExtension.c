/*
 * XREFs of MiQueuePageFileExtension @ 0x14045A3AC
 * Callers:
 *     MiContractPagingFiles @ 0x14045A2AC (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x14046DC64 (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x140679750 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

LONG __fastcall MiQueuePageFileExtension(__int64 a1, KIRQL a2)
{
  __int64 v2; // rbx
  KIRQL v3; // si
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v8; // rdx
  volatile LONG *v9; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2;
  if ( a2 == 17 )
  {
    v9 = (volatile LONG *)(v2 + 1728);
    if ( KeGetCurrentIrql() == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    else
      v3 = ExAcquireSpinLockExclusive(v9);
  }
  v5 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v8 = *(_QWORD **)(v2 + 1952);
    if ( *v8 != v2 + 1944 )
LABEL_4:
      __fastfail(3u);
    *v5 = v2 + 1944;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v5;
    *(_QWORD *)(v2 + 1952) = v5;
  }
  else
  {
    v6 = *(_QWORD **)(v2 + 1968);
    if ( *v6 != v2 + 1960 )
      goto LABEL_4;
    *v5 = v2 + 1960;
    *(_QWORD *)(a1 + 16) = v6;
    *v6 = v5;
    *(_QWORD *)(v2 + 1968) = v5;
    if ( *(_QWORD *)(a1 + 32) != -1LL )
      ++*(_DWORD *)(v2 + 2444);
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 1728), v3);
  return KeSetEvent((PRKEVENT)(v2 + 1904), 0, 0);
}
