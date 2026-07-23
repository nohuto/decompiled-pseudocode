/*
 * XREFs of PopAdaptiveStandbySetPolicyTimer @ 0x140761C4C
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 */

char __fastcall PopAdaptiveStandbySetPolicyTimer(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  unsigned int *v4; // rax

  v3 = 0;
  if ( a2 < a3 )
  {
    v4 = (unsigned int *)(a1 + 328);
    if ( !*(_BYTE *)(a1 + 324) || *v4 != a3 )
    {
      *v4 = a3;
      v3 = 1;
      *(_BYTE *)(a1 + 324) = 1;
      KeSetTimer2(a1 + 336, (LARGE_INTEGER)(-10000000LL * (a3 - a2 + 1)), 0LL, 0LL);
    }
  }
  return v3;
}
