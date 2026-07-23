/*
 * XREFs of PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x14075FE30
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 * Callees:
 *     <none>
 */

char __fastcall PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4)
{
  char result; // al
  unsigned int v6; // ecx

  result = 0;
  if ( *(_BYTE *)a2 )
  {
    *a4 = 13;
  }
  else if ( *(_DWORD *)(a2 + 24) && (v6 = *(_DWORD *)(a2 + 20)) != 0 )
  {
    if ( *(_BYTE *)(a1 + 196) )
    {
      *a4 = 12;
    }
    else if ( v6 <= *a3 )
    {
      return 1;
    }
    else
    {
      *a4 = 2;
    }
  }
  else
  {
    *a4 = 1;
  }
  return result;
}
