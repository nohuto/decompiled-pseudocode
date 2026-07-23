/*
 * XREFs of MiCreateSystemPageTableTail @ 0x14046F510
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
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
