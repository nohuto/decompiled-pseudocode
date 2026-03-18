/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14047FEE0
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x14083CCDC (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14083D17C (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408BEAE4 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 688);
}
