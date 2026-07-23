/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1404C9E70
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1404C9E90 (HalpIommuAddDebuggerException.c)
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
