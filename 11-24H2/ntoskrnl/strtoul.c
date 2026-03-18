/*
 * XREFs of strtoul @ 0x1404FD6E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140C1640C (EmpParseCallbacks.c)
 *     EmpParseRuleTermArgMapping @ 0x140C16FD0 (EmpParseRuleTermArgMapping.c)
 *     EmpParseRules @ 0x140C172EC (EmpParseRules.c)
 *     CmpGetBiosDate @ 0x140C49190 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140C6288C (EmpCacheBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1404FD460 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
