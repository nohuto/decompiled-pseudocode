/*
 * XREFs of ?CompletionHandler@CGlobalMit@@CAJPEAX00@Z @ 0x1801DB0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalMit::CompletionHandler(void *a1, void *a2, void *a3)
{
  NtMITDispatchCompletion(a2, a3);
  return 0LL;
}
