/*
 * XREFs of sub_180047AF8 @ 0x180047AF8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 */

_QWORD *__fastcall sub_180047AF8(_QWORD *a1, __int64 a2)
{
  sub_180023FC4(a1, a2);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  return a1;
}
