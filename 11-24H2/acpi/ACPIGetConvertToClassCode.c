/*
 * XREFs of ACPIGetConvertToClassCode @ 0x140060AC8
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x140034B40 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIGetConvertToClassCode(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _DWORD *a6)
{
  __int64 result; // rax
  _DWORD *v7; // r9
  __int64 i; // rdx
  unsigned __int64 v9; // rdx
  _WORD v10[2]; // [rsp+20h] [rbp-18h]
  __int16 v11; // [rsp+24h] [rbp-14h]

  result = (unsigned int)a2;
  if ( a2 >= 0 )
  {
    if ( a5 )
    {
      if ( *(_WORD *)(a3 + 2) == 1 )
      {
        v9 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        if ( *(_WORD *)(a3 + 2) != 4 )
          ACPIInternalError(0x60248uLL);
        v7 = *(_DWORD **)(a3 + 32);
        if ( *v7 != 3 )
          ACPIInternalError(0x6022DuLL);
        for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
        {
          if ( HIWORD(v7[10 * i + 2]) != 1 )
            ACPIInternalError(0x6023CuLL);
          v10[i] = v7[10 * i + 6];
        }
        v9 = ((unsigned __int8)v11 | ((v10[1] | ((unsigned __int64)v10[0] << 16)) << 8)) << 24;
      }
      result = 0LL;
      *a5 = v9;
      if ( a6 )
        *a6 = 8;
    }
    else
    {
      return 3222536207LL;
    }
  }
  return result;
}
