/*
 * XREFs of ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180206260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 113) <= 0xF && (v2 = 33281, _bittest(&v2, a2 - 113)) || a2 == 182;
  return result;
}
