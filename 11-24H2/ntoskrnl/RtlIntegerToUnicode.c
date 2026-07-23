/*
 * XREFs of RtlIntegerToUnicode @ 0x140869BE0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlIntegerToUnicode(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r10d
  int v8; // ecx
  int v9; // r8d
  _WORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  bool v13; // cc
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _WORD *v17; // rdi
  _BYTE v18[14]; // [rsp+62h] [rbp-36h] BYREF

  v6 = a2;
  switch ( a2 )
  {
    case 0xAu:
      goto LABEL_2;
    case 0u:
      v6 = 10;
LABEL_2:
      v8 = 0;
      v9 = 0;
      goto LABEL_3;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return 3221225485LL;
  }
  v9 = (1 << v8) - 1;
LABEL_3:
  v10 = v18;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    *--v10 = RtlpIntegerWChars[v11];
  }
  while ( a1 );
  v12 = (v18 - (_BYTE *)v10) >> 1;
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v13 = (int)v12 <= a3;
  if ( (int)v12 < a3 )
  {
    v15 = 2LL * (unsigned int)(a3 - v12);
    v16 = v15 >> 1;
    v17 = a4;
    while ( v16 )
    {
      *v17++ = 48;
      --v16;
    }
    a3 = (v18 - (_BYTE *)v10) >> 1;
    a4 += v15;
LABEL_8:
    v13 = (int)v12 <= a3;
  }
  if ( !v13 )
    return 2147483653LL;
  memmove(a4, v10, 2LL * (unsigned int)v12);
  if ( (int)v12 < a3 )
    *(_WORD *)&a4[2 * (unsigned int)v12] = 0;
  return 0LL;
}
