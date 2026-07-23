/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FC720
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x18013F740 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rtt
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v16; // rbx
  int v17; // r8d
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( Base )
  {
    case 0u:
      Base = 10;
      goto LABEL_8;
    case 0xAu:
LABEL_8:
      v7 = 0;
      v8 = 0;
      goto LABEL_9;
    case 0x10u:
      v7 = 4;
      break;
    case 8u:
      v7 = 3;
      break;
    case 2u:
      v7 = 1;
      break;
    default:
      return -1073741811;
  }
  v8 = (1 << v7) - 1;
LABEL_9:
  v9 = &v18;
  QuadPart = Value->QuadPart;
  if ( v7 )
  {
    do
    {
      v17 = QuadPart;
      QuadPart >>= v7;
      *--v9 = RtlpIntegerChars[v8 & v17];
    }
    while ( QuadPart );
  }
  else
  {
    v11 = Base;
    do
    {
      v12 = QuadPart;
      QuadPart /= v11;
      *(_QWORD *)&Base = v12 % v11;
      *--v9 = RtlpIntegerChars[(unsigned int)(v12 % v11)];
    }
    while ( QuadPart );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v9);
  if ( OutputLength >= 0 )
    goto LABEL_13;
  OutputLength = -OutputLength;
  v15 = (int)v14 <= OutputLength;
  if ( (int)v14 < OutputLength )
  {
    v16 = (unsigned int)(OutputLength - v14);
    LOBYTE(Base) = 48;
    memset_thunk_772440563353939046(String, Base, v16);
    OutputLength = v14;
    String += v16;
LABEL_13:
    v15 = (int)v14 <= OutputLength;
  }
  if ( !v15 )
    return -2147483643;
  memmove(String, v9, (unsigned int)v14);
  if ( (int)v14 < OutputLength )
    String[v14] = 0;
  return 0;
}
