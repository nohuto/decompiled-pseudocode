/*
 * XREFs of ExpQueryNumaProximityNode @ 0x1407B5710
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQueryNumaProximityNode(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r9d
  __int64 v6; // rcx
  unsigned __int16 i; // r8
  unsigned __int16 v9; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+18h]

  v10 = a3;
  if ( a2 >= 8 )
  {
    v6 = *a1;
    v5 = 0;
    v9 = 0;
    if ( PnpQueryProximityNode )
    {
      v5 = guard_dispatch_icall_no_overrides(v6, &v9);
      if ( v5 >= 0 )
      {
        for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
        {
          if ( *(_WORD *)KeNodeBlock[i] == v9 )
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
