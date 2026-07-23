/*
 * XREFs of PfSnGetAppVersion @ 0x14047A764
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 */

__int64 __fastcall PfSnGetAppVersion(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  _QWORD v7[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 688);
    if ( v3 )
    {
      v7[0] = 16LL;
      v7[1] = 1LL;
      v7[2] = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v4 = LdrResSearchResource(v3, (unsigned int)v7, 3, 48, (__int64)&v9, (__int64)&v8, 0LL, 0LL);
      if ( v4 >= 0 )
      {
        if ( v8 < 0x5C )
          return (unsigned int)-1073741811;
        v5 = v9;
        if ( *(_WORD *)(v9 + 4) || *(_WORD *)(v9 + 2) != 52 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = *(_DWORD *)(v5 + 52);
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 48);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
