/*
 * XREFs of DpiQueryFeatureInterface @ 0x14007C030
 * Callers:
 *     <none>
 * Callees:
 *     DpiQueryFeatureOsInterface @ 0x140247358 (DpiQueryFeatureOsInterface.c)
 */

__int64 __fastcall DpiQueryFeatureInterface(int a1, __int64 a2)
{
  return DpiQueryFeatureOsInterface(a1, *(_DWORD *)a2, *(unsigned __int16 *)(a2 + 4), (int)a2 + 6, *(_QWORD *)(a2 + 8));
}
