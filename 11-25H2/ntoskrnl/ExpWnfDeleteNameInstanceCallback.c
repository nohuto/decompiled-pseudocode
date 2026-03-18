/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x140A60234
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x140A60194 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x1408E204C (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 - 16);
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0);
}
