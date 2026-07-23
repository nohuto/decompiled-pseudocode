/*
 * XREFs of CmpTransSilentIgnore @ 0x1404329E0
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE6(NlsMbOemCodePageTag) != 0;
}
