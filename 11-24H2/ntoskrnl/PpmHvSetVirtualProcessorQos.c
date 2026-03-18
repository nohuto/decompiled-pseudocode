/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1405DC000
 * Callers:
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x14029E1A0 (PoSetProcessorQos.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404D3CC0 (HvlpSetRegister64.c)
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
