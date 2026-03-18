/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x14046FA2C
 * Callers:
 *     MiStoreContractVirtualPagefileApc @ 0x1403659B0 (MiStoreContractVirtualPagefileApc.c)
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiChangePagingFileMaximum @ 0x140679DB0 (MiChangePagingFileMaximum.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
