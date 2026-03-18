/*
 * XREFs of CcNotifyWriteBehindEx @ 0x1402CF21C
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1402CF240 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402CF16C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindEx(int a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    LOBYTE(a1) = CcNotifyWriteBehindInternal(v3, a1);
  return a1;
}
