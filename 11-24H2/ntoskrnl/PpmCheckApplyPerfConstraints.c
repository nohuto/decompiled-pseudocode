/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140A8E688
 * Callers:
 *     PpmRegisterPerfCap @ 0x1404249F0 (PpmRegisterPerfCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1403B45DC (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
