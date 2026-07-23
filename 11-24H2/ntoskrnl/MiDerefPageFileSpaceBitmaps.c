/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x140469F88
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MiStoreContractVirtualPagefileApc @ 0x140476BB0 (MiStoreContractVirtualPagefileApc.c)
 *     MiChangePagingFileMaximum @ 0x14067AF90 (MiChangePagingFileMaximum.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
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
