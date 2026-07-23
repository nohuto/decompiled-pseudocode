/*
 * XREFs of RtlIntegerToChar @ 0x140860A00
 * Callers:
 *     CmpInitializeRegistryNode @ 0x1407DEF9C (CmpInitializeRegistryNode.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v9; // ecx
  int v10; // r9d
  char *v11; // r14
  ULONG v12; // edx
  __int64 v13; // rax
  __int64 *v14; // rdx
  int v15; // esp
  __int64 v16; // rsi
  bool v17; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = Base;
  switch ( Base )
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
      return -1073741811;
  }
  v10 = (1 << v9) - 1;
LABEL_9:
  v11 = &v19;
  do
  {
    if ( v9 )
    {
      v12 = Value & v10;
      Value >>= v9;
    }
    else
    {
      v12 = Value % v6;
      Value /= v6;
    }
    --v11;
    v13 = v12;
    v14 = RtlpIntegerChars;
    *v11 = *((_BYTE *)RtlpIntegerChars + v13);
  }
  while ( Value );
  v16 = (unsigned int)(v15 + 65 - (_DWORD)v11);
  if ( OutputLength >= 0 )
    goto LABEL_14;
  OutputLength = -OutputLength;
  v17 = (int)v16 <= OutputLength;
  if ( (int)v16 < OutputLength )
  {
    v18 = (unsigned int)(OutputLength - v16);
    LOBYTE(v14) = 48;
    memset_0(String, (int)v14, v18);
    OutputLength = v16;
    String += v18;
LABEL_14:
    v17 = (int)v16 <= OutputLength;
  }
  if ( !v17 )
    return -2147483643;
  memmove(String, v11, (unsigned int)v16);
  if ( (int)v16 < OutputLength )
    String[v16] = 0;
  return 0;
}
