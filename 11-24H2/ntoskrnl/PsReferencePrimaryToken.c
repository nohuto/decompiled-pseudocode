/*
 * XREFs of PsReferencePrimaryToken @ 0x14099FAD0
 * Callers:
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
