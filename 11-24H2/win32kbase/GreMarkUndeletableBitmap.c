/*
 * XREFs of GreMarkUndeletableBitmap @ 0x14010BC70
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBitmap(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 5;
  return HmgMarkUndeletable(a1, a2);
}
