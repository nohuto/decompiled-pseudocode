/*
 * XREFs of CcNotifyWriteBehindEx @ 0x1403A7590
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindEx(char a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, result);
  return result;
}
