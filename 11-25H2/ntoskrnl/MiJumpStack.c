/*
 * XREFs of MiJumpStack @ 0x140417820
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx(MiDoStackCopy, a1);
}
