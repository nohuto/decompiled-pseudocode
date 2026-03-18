/*
 * XREFs of MiRevokeExecuteTail @ 0x1404892C0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
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
