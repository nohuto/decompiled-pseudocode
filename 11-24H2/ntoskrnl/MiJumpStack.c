/*
 * XREFs of MiJumpStack @ 0x140270650
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx(MiDoStackCopy, a1);
}
