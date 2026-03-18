/*
 * XREFs of sub_140655B60 @ 0x140655B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407B82EC @ 0x1407B82EC (sub_1407B82EC.c)
 */

__int64 __fastcall sub_140655B60(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  *a6 = 1;
  return sub_1407B82EC(a2, a3, a4, a5, *(_DWORD *)(a1 + 8));
}
