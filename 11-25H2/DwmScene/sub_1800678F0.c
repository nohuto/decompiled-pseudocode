/*
 * XREFs of sub_1800678F0 @ 0x1800678F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 */

int __fastcall sub_1800678F0(__int64 a1)
{
  sub_180035B30(a1);
  *(_BYTE *)(a1 + 1416) = 0;
  *(_BYTE *)(a1 + 1417) = 0;
  *(_BYTE *)(a1 + 1419) = 0;
  *(_BYTE *)(a1 + 1420) = 0;
  *(_BYTE *)(a1 + 1418) = 0;
  sub_180011B30(a1 + 1504);
  sub_180068494(a1 + 1440);
  return Mtx_unlock((_Mtx_t)(a1 + 1504));
}
