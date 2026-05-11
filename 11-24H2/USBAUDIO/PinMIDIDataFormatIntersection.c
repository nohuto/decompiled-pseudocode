/*
 * XREFs of PinMIDIDataFormatIntersection @ 0x140030C90
 * Callers:
 *     <none>
 * Callees:
 *     PinValidateDataFormat @ 0x14003B108 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinMIDIDataFormatIntersection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        unsigned int a6,
        _OWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax

  *a8 = 64;
  if ( !a6 )
    return 2147483653LL;
  if ( a6 < 0x40 )
    return 3221225507LL;
  result = PinValidateDataFormat(0LL, a4, a5);
  if ( (int)result >= 0 )
  {
    *a7 = *a5;
    a7[1] = a5[1];
    a7[2] = a5[2];
    a7[3] = a5[3];
  }
  return result;
}
