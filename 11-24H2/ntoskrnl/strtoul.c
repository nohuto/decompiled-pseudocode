/*
 * XREFs of strtoul @ 0x1404FAFA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140C1840C (EmpParseCallbacks.c)
 *     EmpParseRuleTermArgMapping @ 0x140C18FD0 (EmpParseRuleTermArgMapping.c)
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 *     CmpGetBiosDate @ 0x140C4B2B4 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140C64A08 (EmpCacheBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1404FAD20 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
