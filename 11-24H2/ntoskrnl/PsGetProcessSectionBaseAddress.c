/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140480C00
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x140908980 (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x140908E14 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14094BC44 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 688);
}
