/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140A69408
 * Callers:
 *     PpmRegisterPerfCap @ 0x14042C980 (PpmRegisterPerfCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
