/*
 * XREFs of CmpTransSilentIgnore @ 0x14043DF80
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE5(NlsMbOemCodePageTag) != 0;
}
