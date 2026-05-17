/*
 * XREFs of CsrGetProcessId @ 0x1801174D0
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
