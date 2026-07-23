/*
 * XREFs of LdrpCreateLoaderEvents @ 0x18010221C
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x180104C78 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 */

int LdrpCreateLoaderEvents()
{
  int result; // eax

  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( result >= 0 )
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  return result;
}
