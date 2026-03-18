/*
 * XREFs of ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x1C013CA04
 * Callers:
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C005BCE4 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

__int64 __fastcall GetTooltipIdFromHitTest(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // r10
  __int64 v11; // rdx

  v2 = 0;
  v3 = a2 - 2;
  if ( v3 )
  {
    v4 = v3 - 6;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 11;
        if ( !v6 )
          return 6;
        v7 = v6 - 1;
        if ( !v7 )
          return 5;
        v8 = v7 - 45;
        if ( !v8 )
          return 4;
        v9 = v8 - 1;
        if ( !v9 )
          return 1;
        if ( v9 == 1 )
          return 6;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 1) != 0
             && !ShellWindowManagement::BehaviorEnabled(
                   *(ShellWindowManagement **)(a1 + 24),
                   (const struct tagDESKTOP *)0x100) )
      {
        return (*(_BYTE *)(v10 + 31) & 1) != 0 ? 4 : 2;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v11 + 30) & 2) != 0 )
        return (*(_BYTE *)(v11 + 31) & 0x20 | 0x10u) >> 4;
    }
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 8) != 0 )
  {
    return 7;
  }
  return v2;
}
