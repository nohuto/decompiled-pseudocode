/*
 * XREFs of sub_1800201C0 @ 0x1800201C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_1800201C0()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = _InterlockedExchangeAdd(&dword_1801C3464, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801B8188 = 0;
    return EventUnregister(v1);
  }
  return result;
}
