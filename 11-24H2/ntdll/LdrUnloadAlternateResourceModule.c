/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x1800FB340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall LdrUnloadAlternateResourceModule(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return LdrUnloadAlternateResourceModuleEx(a1, 0LL, a3);
}
