/*
 * XREFs of USBParseConvertUnitsToFunctionUnits @ 0x140037230
 * Callers:
 *     <none>
 * Callees:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 */

__int64 __fastcall USBParseConvertUnitsToFunctionUnits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_BYTE *)(v4 + 5) )
    return USBParseConvertMIDIJacksAndElements(a1);
  result = USBParseConvertControlUnits(a1, v4, a3);
  if ( (int)result >= 0 )
    return USBParseConvertMIDIJacksAndElements(a1);
  return result;
}
