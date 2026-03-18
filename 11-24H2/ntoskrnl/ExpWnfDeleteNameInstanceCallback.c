/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x140A60564
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x140A604C4 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExpWnfDeleteNameInstance @ 0x1408AA6E8 (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 - 16);
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0);
}
