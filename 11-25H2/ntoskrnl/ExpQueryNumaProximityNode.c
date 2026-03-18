/*
 * XREFs of ExpQueryNumaProximityNode @ 0x1407A5EF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQueryNumaProximityNode(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r9d
  __int64 v6; // rcx
  unsigned __int16 i; // r8
  unsigned __int16 v9; // [rsp+58h] [rbp+10h]

  if ( a2 >= 8 )
  {
    v6 = *a1;
    v5 = 0;
    v9 = 0;
    if ( PnpQueryProximityNode )
    {
      v5 = guard_dispatch_icall_no_overrides(v6);
      if ( v5 >= 0 )
      {
        for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
        {
          if ( !*(_WORD *)KeNodeBlock[i] )
          {
            v9 = i;
            break;
          }
        }
        if ( i >= (unsigned __int16)KeNumberNodes )
          v5 = -1073741595;
      }
    }
    if ( v5 >= 0 )
      *((_WORD *)a1 + 2) = v9;
  }
  else
  {
    v5 = -1073741820;
  }
  if ( a3 )
    *a3 = 8;
  return (unsigned int)v5;
}
