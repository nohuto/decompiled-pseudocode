/*
 * XREFs of sub_180067A50 @ 0x180067A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_1800685F4 @ 0x1800685F4 (sub_1800685F4.c)
 */

int __fastcall sub_180067A50(__int64 a1)
{
  sub_180035C90(a1);
  *(_BYTE *)(a1 + 1416) = 0;
  *(_BYTE *)(a1 + 1417) = 0;
  *(_BYTE *)(a1 + 1419) = 0;
  *(_BYTE *)(a1 + 1420) = 0;
  *(_BYTE *)(a1 + 1418) = 0;
  sub_180011C30(a1 + 1504);
  sub_1800685F4(a1 + 1440);
  return Mtx_unlock((_Mtx_t)(a1 + 1504));
}
