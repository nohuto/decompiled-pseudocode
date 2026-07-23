/*
 * XREFs of MiEmptyWorkingSetTail @ 0x140295FF0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)(v1 + 8);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v2, *(_DWORD *)v1 & 4);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  return 0LL;
}
