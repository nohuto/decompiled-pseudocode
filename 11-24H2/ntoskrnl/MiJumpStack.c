/*
 * XREFs of MiJumpStack @ 0x1404C0250
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx((__int64)MiDoStackCopy, a1);
}
