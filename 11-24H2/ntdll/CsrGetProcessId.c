/*
 * XREFs of CsrGetProcessId @ 0x180114520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CsrGetProcessId()
{
  __int64 result; // rax

  result = CsrProcessId;
  if ( LdrpIsSecureProcess )
    return 0LL;
  return result;
}
