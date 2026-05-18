/*
 * XREFs of sub_180038A30 @ 0x180038A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023E64 @ 0x180023E64 (sub_180023E64.c)
 */

_QWORD *__fastcall sub_180038A30(_QWORD *a1, __int64 a2)
{
  sub_180023E64(a1, a2);
  *a1 = &Spectre::Engine::EngineInvalidArgException::`vftable';
  return a1;
}
