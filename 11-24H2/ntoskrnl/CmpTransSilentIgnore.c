/*
 * XREFs of CmpTransSilentIgnore @ 0x14043E2F0
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE6(NlsMbOemCodePageTag) != 0;
}
