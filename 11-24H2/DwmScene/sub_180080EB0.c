/*
 * XREFs of sub_180080EB0 @ 0x180080EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 */

_QWORD *__fastcall sub_180080EB0(_QWORD *a1, __int64 a2)
{
  sub_180023FC4(a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
