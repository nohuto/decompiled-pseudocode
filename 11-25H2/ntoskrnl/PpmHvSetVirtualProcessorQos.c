/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1405D6E20
 * Callers:
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404D3E70 (HvlpSetRegister64.c)
 */

void __fastcall PpmHvSetVirtualProcessorQos(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 36536);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) = a2;
    *(_DWORD *)(v2 + 12) = 1;
    HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
}
