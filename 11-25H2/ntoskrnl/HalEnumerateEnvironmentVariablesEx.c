/*
 * XREFs of HalEnumerateEnvironmentVariablesEx @ 0x14053EC70
 * Callers:
 *     <none>
 * Callees:
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404429E0 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 */

__int64 __fastcall HalEnumerateEnvironmentVariablesEx(int a1, unsigned __int64 a2, _DWORD *a3)
{
  return HalpEnumerateEnvironmentVariablesWithFilter(a1, 0LL, a2, a3);
}
