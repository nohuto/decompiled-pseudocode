/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1400BEA94
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x140046D58 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIQueryDeviceBiosNameEx @ 0x1400396E8 (ACPIQueryDeviceBiosNameEx.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  return ACPIQueryDeviceBiosNameEx(a1, 1LL, a2);
}
