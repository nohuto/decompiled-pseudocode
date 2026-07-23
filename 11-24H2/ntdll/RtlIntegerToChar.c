/*
 * XREFs of RtlIntegerToChar @ 0x1800DCD40
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToUnicodeString @ 0x1800DCCA0 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r10d
  int v8; // ecx
  int v9; // r8d
  char *v10; // rbx
  __int64 v11; // rdx
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  size_t v16; // rdi
  char v17; // [rsp+41h] [rbp-27h] BYREF

  v6 = Base;
  if ( Base == 16 )
  {
    v8 = 4;
LABEL_6:
    v9 = (1 << v8) - 1;
    goto LABEL_7;
  }
  if ( !Base )
  {
    v6 = 10;
    goto LABEL_4;
  }
  if ( Base != 10 )
  {
    if ( Base == 8 )
    {
      v8 = 3;
    }
    else
    {
      if ( Base != 2 )
        return -1073741811;
      v8 = 1;
    }
    goto LABEL_6;
  }
LABEL_4:
  v8 = 0;
  v9 = 0;
LABEL_7:
  v10 = &v17;
  do
  {
    if ( v8 )
    {
      v11 = Value & v9;
      Value >>= v8;
    }
    else
    {
      v11 = Value % v6;
      Value /= v6;
    }
    *--v10 = RtlpIntegerChars[v11];
  }
  while ( Value );
  v13 = (unsigned int)(v12 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_12;
  OutputLength = -OutputLength;
  v14 = (int)v13 <= OutputLength;
  if ( (int)v13 < OutputLength )
  {
    v16 = (unsigned int)(OutputLength - v13);
    LOBYTE(v11) = 48;
    memset_thunk_772440563353939046(String, v11, v16);
    OutputLength = v13;
    String += v16;
LABEL_12:
    v14 = (int)v13 <= OutputLength;
  }
  if ( !v14 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v13);
  if ( (int)v13 < OutputLength )
    String[v13] = 0;
  return 0;
}
