/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x18006BC00
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x1800D7360 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800D76C0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(_BYTE *a1, int a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  _DWORD *v6; // r15
  int v8; // ebp
  __int64 result; // rax
  unsigned int v13; // r14d
  __int64 v14; // r15
  __int64 v15; // r11
  unsigned int *v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-E0h]
  _DWORD *v20; // [rsp+40h] [rbp-D8h]
  unsigned int v21[32]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = 0;
  v6 = a3;
  v8 = 0;
  v20 = a3;
  v19 = qword_1801CF038;
  while ( a5 && a2 )
  {
    v18 = 0;
    if ( a5 >= 0x40 )
    {
      v13 = 64;
      if ( a5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v13 = 63;
    }
    else
    {
      v13 = a5;
    }
    v14 = v19;
    v15 = v13;
    v16 = v21;
    do
    {
      v17 = *(unsigned __int16 *)((char *)v16 + a4 - (_QWORD)v21);
      if ( (unsigned int)v17 >= 0x61 )
      {
        if ( (unsigned int)v17 > 0x7A )
        {
          if ( v14 && (unsigned __int16)v17 >= 0xC0u )
            LOWORD(v17) = *(_WORD *)(v14
                                   + 2
                                   * ((v17 & 0xF)
                                    + *(unsigned __int16 *)(v14
                                                          + 2LL
                                                          * (((unsigned __int8)v17 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v14 + 2 * (v17 >> 8))))))
                        + v17;
        }
        else
        {
          LOWORD(v17) = v17 - 32;
        }
      }
      *(_WORD *)v16 = v17;
      v16 = (unsigned int *)((char *)v16 + 2);
      --v15;
    }
    while ( v15 );
    v6 = v20;
    if ( (int)RtlUnicodeToUTF8N(a1, a2, &v18, v21, 2 * v13) < 0 )
    {
      v8 += v18;
      v5 = -2147483643;
      break;
    }
    a1 += v18;
    a2 -= v18;
    v8 += v18;
    a5 -= v13;
    a4 += 2LL * v13;
  }
  result = v5;
  if ( v6 )
    *v6 = v8;
  return result;
}
