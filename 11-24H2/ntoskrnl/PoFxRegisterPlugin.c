/*
 * XREFs of PoFxRegisterPlugin @ 0x14074D9D0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x1405D1A68 (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
