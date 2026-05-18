/*
 * XREFs of sub_180028488 @ 0x180028488
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 */

_QWORD *__fastcall sub_180028488(_QWORD *a1, __int64 a2)
{
  sub_180023FC4(a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
