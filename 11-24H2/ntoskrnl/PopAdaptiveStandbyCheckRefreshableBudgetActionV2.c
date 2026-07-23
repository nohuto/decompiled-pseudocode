/*
 * XREFs of PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x14075FE84
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 * Callees:
 *     <none>
 */

char __fastcall PopAdaptiveStandbyCheckRefreshableBudgetActionV2(__int64 a1, int a2, unsigned int a3, int *a4)
{
  unsigned int v4; // edi
  int v5; // r10d
  char v6; // r11
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax

  v4 = *(_DWORD *)(a1 + 32);
  v5 = 0;
  v6 = 0;
  if ( v4 && (v7 = *(_DWORD *)(a1 + 28)) != 0 )
  {
    v8 = a3 / v4;
    if ( a3 / v4 >= v7 )
      v8 = *(_DWORD *)(a1 + 28);
    v9 = v8 + 1;
  }
  else
  {
    v9 = 1;
  }
  if ( a2 >= *(_DWORD *)(a1 + 24) * v9 )
  {
    *(_BYTE *)a1 = 1;
    v6 = 1;
  }
  else
  {
    v5 = 3;
  }
  *a4 = v5;
  return v6;
}
