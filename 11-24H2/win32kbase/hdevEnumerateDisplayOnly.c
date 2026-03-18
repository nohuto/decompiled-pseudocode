/*
 * XREFs of hdevEnumerateDisplayOnly @ 0x140023260
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 */

__int64 __fastcall hdevEnumerateDisplayOnly(PDEV *a1)
{
  return hdevEnumerate<1>(a1);
}
