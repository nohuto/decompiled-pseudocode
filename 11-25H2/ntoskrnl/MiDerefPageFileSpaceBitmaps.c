/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x1404716D8
 * Callers:
 *     MiStoreContractVirtualPagefileApc @ 0x14036C630 (MiStoreContractVirtualPagefileApc.c)
 *     MiFindPageFileWriteCluster @ 0x1403D9914 (MiFindPageFileWriteCluster.c)
 *     MiChangePagingFileMaximum @ 0x14066E504 (MiChangePagingFileMaximum.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rdi
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  KIRQL v7; // al
  int v8; // ebp

  v3 = *a2;
  v4 = (_DWORD *)(a1 + 200);
  v5 = 0LL;
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = --*v3;
  if ( !a3 )
    MiReleaseSpinLockExclusive(v4, v7);
  if ( !v8 )
    return v3;
  return (_DWORD *)v5;
}
