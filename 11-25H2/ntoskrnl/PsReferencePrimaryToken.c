/*
 * XREFs of PsReferencePrimaryToken @ 0x14099C740
 * Callers:
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
