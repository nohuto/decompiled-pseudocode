/*
 * XREFs of sub_180020320 @ 0x180020320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_180020320()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = _InterlockedExchangeAdd(&dword_1801C4474, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801B9188 = 0;
    return EventUnregister(v1);
  }
  return result;
}
