/*
 * XREFs of sub_18001F10C @ 0x18001F10C
 * Callers:
 *     sub_18002B070 @ 0x18002B070 (sub_18002B070.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F10C(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
