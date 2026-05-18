/*
 * XREFs of sub_180023E64 @ 0x180023E64
 * Callers:
 *     sub_180028328 @ 0x180028328 (sub_180028328.c)
 *     sub_180038A30 @ 0x180038A30 (sub_180038A30.c)
 *     sub_180044C54 @ 0x180044C54 (sub_180044C54.c)
 *     sub_180047998 @ 0x180047998 (sub_180047998.c)
 *     sub_180080D50 @ 0x180080D50 (sub_180080D50.c)
 * Callees:
 *     sub_1800171A8 @ 0x1800171A8 (sub_1800171A8.c)
 */

_QWORD *__fastcall sub_180023E64(_QWORD *a1, __int64 a2)
{
  sub_1800171A8((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
