/*
 * XREFs of GreMarkUndeletableBrush @ 0x14010BC50
 * Callers:
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    LOBYTE(a2) = 16;
    return HmgMarkUndeletable(a1, a2);
  }
  return result;
}
