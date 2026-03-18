/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1404D0E30
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1404D0E50 (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = HalpIommuAddDebuggerException();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
