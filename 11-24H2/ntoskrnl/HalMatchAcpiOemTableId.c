/*
 * XREFs of HalMatchAcpiOemTableId @ 0x14053A860
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall HalMatchAcpiOemTableId(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebx
  __int64 Table; // rsi
  _BYTE *v7; // rdx
  size_t v8; // r8
  __int64 Buf1; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  if ( a4 == 2 )
  {
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        Table = HalpAcpiGetTable(0LL, **(_DWORD **)a3, 0, 0);
        if ( Table )
        {
          Buf1 = 0LL;
          v7 = *(_BYTE **)(a3 + 8);
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          if ( v8 == 1 )
          {
            if ( *v7 == 42 )
              return 2;
          }
          else if ( v8 > 8 )
          {
            v8 = 8LL;
          }
          memmove(&Buf1, v7, v8);
          return memcmp(&Buf1, (const void *)(Table + 16), 8uLL) == 0 ? 2 : 0;
        }
      }
    }
  }
  return v5;
}
