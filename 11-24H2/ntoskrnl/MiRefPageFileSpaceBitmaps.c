/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x1403C5EE8
 * Callers:
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiStoreEvictPageFile @ 0x140337B90 (MiStoreEvictPageFile.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  __int64 v3; // rbx
  KIRQL v5; // al
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 200);
  v3 = a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v6 = *(_QWORD *)(v3 + 80);
  ++*(_DWORD *)v6;
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
  LODWORD(v3) = *(_DWORD *)v3;
  result = MiReleaseSpinLockExclusive(v2, v5);
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 24) = v3;
  return result;
}
