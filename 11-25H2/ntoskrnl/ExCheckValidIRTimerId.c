/*
 * XREFs of ExCheckValidIRTimerId @ 0x1404F84E8
 * Callers:
 *     ExpCheckIRTimerAccess @ 0x140A1671C (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x14u && a2 < (unsigned __int8)byte_140E09280[24 * a1];
}
