/*
 * XREFs of RtlIntegerToChar @ 0x1408EF200
 * Callers:
 *     CmpInitializeRegistryNode @ 0x1407DEA4C (CmpInitializeRegistryNode.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v9; // ecx
  int v10; // r9d
  char *v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 *v14; // rdx
  int v15; // esp
  __int64 v16; // rsi
  bool v17; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  switch ( a2 )
  {
    case 0u:
      v6 = 10;
      goto LABEL_8;
    case 0xAu:
LABEL_8:
      v9 = 0;
      v10 = 0;
      goto LABEL_9;
    case 0x10u:
      v9 = 4;
      break;
    case 2u:
      v9 = 1;
      break;
    case 8u:
      v9 = 3;
      break;
    default:
      return 3221225485LL;
  }
  v10 = (1 << v9) - 1;
LABEL_9:
  v11 = &v19;
  do
  {
    if ( v9 )
    {
      v12 = a1 & v10;
      a1 >>= v9;
    }
    else
    {
      v12 = a1 % v6;
      a1 /= v6;
    }
    --v11;
    v13 = v12;
    v14 = RtlpIntegerChars;
    *v11 = *((_BYTE *)RtlpIntegerChars + v13);
  }
  while ( a1 );
  v16 = (unsigned int)(v15 + 65 - (_DWORD)v11);
  if ( a3 >= 0 )
    goto LABEL_14;
  a3 = -a3;
  v17 = (int)v16 <= a3;
  if ( (int)v16 < a3 )
  {
    v18 = (unsigned int)(a3 - v16);
    LOBYTE(v14) = 48;
    memset_0(a4, (int)v14, v18);
    a3 = v16;
    a4 += v18;
LABEL_14:
    v17 = (int)v16 <= a3;
  }
  if ( !v17 )
    return 2147483653LL;
  memmove(a4, v11, (unsigned int)v16);
  if ( (int)v16 < a3 )
    a4[v16] = 0;
  return 0LL;
}
