/*
 * XREFs of EditionCancelCoolSwitch @ 0x1C0152ED0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCancelCoolSwitch @ 0x1C0152EF2 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall EditionCancelCoolSwitch(_DWORD *a1)
{
  __int64 result; // rax

  result = xxxCancelCoolSwitch();
  if ( a1 )
    *a1 = result;
  return result;
}
