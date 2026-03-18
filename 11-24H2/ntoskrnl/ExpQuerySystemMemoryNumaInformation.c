/*
 * XREFs of ExpQuerySystemMemoryNumaInformation @ 0x1407C5A30
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaInformation(
        __int64 *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v6; // ecx
  __int64 v7; // r9
  __int64 v9; // [rsp+38h] [rbp-60h]
  int v10; // [rsp+48h] [rbp-50h] BYREF
  __int128 v11; // [rsp+50h] [rbp-48h]
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h]
  int v14; // [rsp+A0h] [rbp+8h] BYREF

  v14 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v10 = 0;
  if ( a1
    && a2 >= 0xC
    && (v9 = *a1, (unsigned int)*a1 == 1)
    && !*((_DWORD *)a1 + 2)
    && HIDWORD(v9) < (unsigned __int16)KeNumberNodes
    && (a3 || !a4) )
  {
    if ( a4 >= 0x10 )
    {
      v11 = 0x1000000001uLL;
      v6 = guard_dispatch_icall_no_overrides(50LL, 24LL, &v12, &v10);
      if ( v6 >= 0 )
      {
        v6 = guard_dispatch_icall_no_overrides(1LL, HIDWORD(v9), &v14, v7);
        if ( v6 >= 0 )
        {
          HIDWORD(v11) |= 1u;
          DWORD2(v11) = v14;
          *a3 = v11;
          if ( a5 )
            *a5 = 16;
          return 0;
        }
      }
    }
    else
    {
      v6 = -1073741789;
      if ( a5 )
        *a5 = 16;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
