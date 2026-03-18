/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x1402CC570
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiStoreEvictPageFile @ 0x140326CC0 (MiStoreEvictPageFile.c)
 *     MiStoreContractVirtualPagefileApc @ 0x14036C630 (MiStoreContractVirtualPagefileApc.c)
 *     MiFindPageFileWriteCluster @ 0x1403D9914 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  KIRQL v5; // al
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = a1 + 200;
  v3 = a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v6 = *(_QWORD *)(v3 + 80);
  LOBYTE(v7) = v5;
  ++*(_DWORD *)v6;
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
  LODWORD(v3) = *(_DWORD *)v3;
  result = MiReleaseSpinLockExclusive(v2, v7);
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 24) = v3;
  return result;
}
