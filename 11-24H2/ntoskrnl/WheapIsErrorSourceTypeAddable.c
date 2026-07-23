/*
 * XREFs of WheapIsErrorSourceTypeAddable @ 0x14065A538
 * Callers:
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapIsErrorSourceTypeAddable(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  result = (*(_DWORD *)(a1 + 36) & 0x40000000) != 0
        || (v1 = *(_DWORD *)(a1 + 8), v1 <= 0xD) && (v2 = 12592, _bittest(&v2, v1))
        || (int)v1 >= 14;
  return result;
}
