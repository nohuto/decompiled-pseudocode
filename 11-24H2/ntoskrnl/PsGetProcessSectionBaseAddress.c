/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14047B6D0
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x1408E009C (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1408E0534 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 688);
}
