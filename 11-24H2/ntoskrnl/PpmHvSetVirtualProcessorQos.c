/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1405D8ED0
 * Callers:
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x1402ACC90 (PoSetProcessorQos.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404CCED0 (HvlpSetRegister64.c)
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
