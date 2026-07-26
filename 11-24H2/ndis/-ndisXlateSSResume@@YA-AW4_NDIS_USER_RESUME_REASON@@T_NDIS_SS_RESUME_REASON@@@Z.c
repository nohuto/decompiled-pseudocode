/*
 * XREFs of ?ndisXlateSSResume@@YA?AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z @ 0x14009BEA0
 * Callers:
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14008B2E0 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlateSSResume(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 15LL;
  if ( a1 >= 15 )
  {
    if ( a1 > 49 )
    {
      if ( a1 == 50 )
        return 13LL;
      if ( a1 == 52 )
        return 14LL;
      if ( a1 != 54 )
      {
        result = 16LL;
        if ( a1 != 65 )
          return 0LL;
      }
      return result;
    }
    if ( a1 == 49 )
      return 12LL;
  }
  else
  {
    result = 5LL;
    if ( a1 > 5 )
    {
      result = 6LL;
      switch ( a1 )
      {
        case 6:
          return result;
        case 7:
          return 17LL;
        case 8:
          return 18LL;
        case 9:
          return 19LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 5:
          return result;
        case 0:
          return 0LL;
        case 1:
          return 1LL;
        case 2:
          return 2LL;
        case 3:
          return 3LL;
        case 4:
          return 4LL;
      }
    }
  }
  v2 = a1 - 33;
  if ( !v2 )
    return 7LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 9LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return 11LL;
    return 0LL;
  }
  return 10LL;
}
