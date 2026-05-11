/*
 * XREFs of BusApiBuildMIDIFunctionUnit @ 0x14003486C
 * Callers:
 *     USBParseMIDIElement @ 0x1400386D0 (USBParseMIDIElement.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x14002D1DC (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildMIDIFunctionUnit(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        const WCHAR *a7,
        int a8)
{
  __int64 result; // rax
  __int64 v9[3]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = 0LL;
  result = BusApiBuildFunctionUnit(a1, a2, 8, 0, 0, a5, a6, a7, 0, v9);
  if ( (int)result >= 0 )
  {
    if ( v9[0] )
      *(_DWORD *)(v9[0] + 64) = a8;
  }
  return result;
}
