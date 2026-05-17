/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FA820
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x18013E010 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rtt
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v16; // rbx
  int v17; // r8d
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = 10;
      goto LABEL_8;
    case 0xA:
LABEL_8:
      v7 = 0;
      v8 = 0;
      goto LABEL_9;
    case 0x10:
      v7 = 4;
      break;
    case 8:
      v7 = 3;
      break;
    case 2:
      v7 = 1;
      break;
    default:
      return 3221225485LL;
  }
  v8 = (1 << v7) - 1;
LABEL_9:
  v9 = &v18;
  v10 = *a1;
  if ( v7 )
  {
    do
    {
      v17 = v10;
      v10 >>= v7;
      *--v9 = RtlpIntegerChars[v8 & v17];
    }
    while ( v10 );
  }
  else
  {
    v11 = (unsigned int)a2;
    do
    {
      v12 = v10;
      v10 /= v11;
      a2 = v12 % v11;
      *--v9 = RtlpIntegerChars[(unsigned int)(v12 % v11)];
    }
    while ( v10 );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v9);
  if ( a3 >= 0 )
    goto LABEL_13;
  a3 = -a3;
  v15 = (int)v14 <= a3;
  if ( (int)v14 < a3 )
  {
    v16 = (unsigned int)(a3 - v14);
    LOBYTE(a2) = 48;
    memset_thunk_772440563353939046(a4, a2, v16);
    a3 = v14;
    a4 += v16;
LABEL_13:
    v15 = (int)v14 <= a3;
  }
  if ( !v15 )
    return 2147483653LL;
  memmove(a4, v9, (unsigned int)v14);
  if ( (int)v14 < a3 )
    a4[v14] = 0;
  return 0LL;
}
