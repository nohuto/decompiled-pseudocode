/*
 * XREFs of MiRevokeExecuteTail @ 0x140488980
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 */

__int64 __fastcall MiRevokeExecuteTail(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return 0LL;
}
