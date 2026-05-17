/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x1801155E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  return LdrQueryProcessModuleInformationEx(0LL, 2, a1, a2, a3);
}
