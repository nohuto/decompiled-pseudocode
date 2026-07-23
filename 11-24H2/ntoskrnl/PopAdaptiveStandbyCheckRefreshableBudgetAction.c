/*
 * XREFs of PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x14075FD6C
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 * Callees:
 *     <none>
 */

char __fastcall PopAdaptiveStandbyCheckRefreshableBudgetAction(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  char v5; // r11
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // eax

  v5 = 0;
  if ( *(_BYTE *)a2 )
  {
    *a4 = 13;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 8);
    if ( v8 && (v9 = *(_DWORD *)(a2 + 4)) != 0 )
    {
      if ( *(_BYTE *)(a1 + 196) )
      {
        *a4 = 12;
      }
      else
      {
        v10 = *a3;
        if ( v9 <= *a3 )
        {
          v11 = *(_DWORD *)(a2 + 16);
          if ( v11 && (v12 = *(_DWORD *)(a2 + 12)) != 0 )
          {
            v13 = v10 / v11;
            if ( v10 / v11 >= v12 )
              v13 = *(_DWORD *)(a2 + 12);
            v14 = v13 + 1;
          }
          else
          {
            v14 = 1;
          }
          if ( (int)a3[4] >= v14 * v8 )
          {
            *a4 = 0;
            v5 = 1;
            *(_BYTE *)a2 = 1;
          }
          else
          {
            *a4 = 3;
          }
        }
        else
        {
          *a4 = 2;
        }
      }
    }
    else
    {
      *a4 = 1;
    }
  }
  return v5;
}
