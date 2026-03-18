/*
 * XREFs of MiEmptyWorkingSetTail @ 0x140464930
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rdx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)(v1 + 8);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v2, *(_BYTE *)v1 & 4);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  return 0LL;
}
