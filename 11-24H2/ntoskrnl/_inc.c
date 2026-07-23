/*
 * XREFs of _inc @ 0x140503C50
 * Callers:
 *     ReadString @ 0x140503930 (ReadString.c)
 *     _input_s @ 0x140503C80 (_input_s.c)
 * Callees:
 *     xHalTimerQueryRtcErrors @ 0x14057F730 (xHalTimerQueryRtcErrors.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)xHalTimerQueryRtcErrors();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
