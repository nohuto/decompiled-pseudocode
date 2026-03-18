/*
 * XREFs of MiCreateSystemPageTableTail @ 0x140473190
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)(v1 + 136);
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(v1 + 136) = 0LL;
  }
  return 0LL;
}
