/*
 * XREFs of MiQueuePageFileExtension @ 0x1403EF6FC
 * Callers:
 *     MiContractPagingFiles @ 0x1403EF5FC (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x140686110 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
