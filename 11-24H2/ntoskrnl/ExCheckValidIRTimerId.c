/*
 * XREFs of ExCheckValidIRTimerId @ 0x1404F7ADC
 * Callers:
 *     ExpCheckIRTimerAccess @ 0x140A16AEC (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x14u && a2 < *((unsigned __int8 *)&unk_140E093D0 + 24 * a1);
}
