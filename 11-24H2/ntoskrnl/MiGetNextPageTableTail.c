/*
 * XREFs of MiGetNextPageTableTail @ 0x140450100
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    MiFlushTbList(v1);
  return 0LL;
}
