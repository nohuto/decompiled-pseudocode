/*
 * XREFs of hdevEnumerateAll @ 0x1C00C5490
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 */

__int64 __fastcall hdevEnumerateAll(PDEV *a1)
{
  return hdevEnumerate<0>(a1);
}
