/*
 * XREFs of sub_180023FC4 @ 0x180023FC4
 * Callers:
 *     sub_180028488 @ 0x180028488 (sub_180028488.c)
 *     sub_180038B90 @ 0x180038B90 (sub_180038B90.c)
 *     sub_180044DB4 @ 0x180044DB4 (sub_180044DB4.c)
 *     sub_180047AF8 @ 0x180047AF8 (sub_180047AF8.c)
 *     sub_180080EB0 @ 0x180080EB0 (sub_180080EB0.c)
 * Callees:
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 */

_QWORD *__fastcall sub_180023FC4(_QWORD *a1, __int64 a2)
{
  sub_1800172A8((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
