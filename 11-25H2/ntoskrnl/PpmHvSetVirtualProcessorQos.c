/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1405D6E20
 * Callers:
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404D3E70 (HvlpSetRegister64.c)
 */

__int64 __fastcall PpmHvSetVirtualProcessorQos(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 36536);
  if ( result )
  {
    *(_DWORD *)(result + 4) = a2;
    *(_DWORD *)(result + 12) = 1;
    return HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
  return result;
}
