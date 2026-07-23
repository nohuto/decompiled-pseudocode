/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140A8ACF8
 * Callers:
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
