/*
 * XREFs of PsReferencePrimaryToken @ 0x140988280
 * Callers:
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
