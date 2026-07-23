/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x1800EA7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x1800EAA40 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x18011FAA0 (__isascii.c)
 *     isdigit @ 0x18011FBE0 (isdigit.c)
 *     islower @ 0x18011FC40 (islower.c)
 *     isxdigit @ 0x18011FD30 (isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  CHAR v7; // r14
  bool v8; // zf
  const CHAR *v9; // rcx
  unsigned __int16 v10; // si
  ULONG v11; // r15d
  LONG result; // eax
  PCSTR v13; // rbx
  CHAR v14; // al
  bool v15; // dl
  int v16; // edi
  unsigned __int16 v17; // bp
  CHAR *v18; // rdi
  CHAR v19; // r14
  int v20; // ebx
  __int16 v21; // ax
  __int16 v22; // si
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  __int16 v26; // cx
  PCSTR v27; // [rsp+20h] [rbp-38h] BYREF
  bool v28; // [rsp+60h] [rbp+8h]

  v27 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = *AddressString == 91;
  v9 = AddressString + 1;
  v10 = 0;
  if ( !v8 )
    v9 = AddressString;
  v11 = 0;
  v28 = v8;
  if ( RtlIpv6StringToAddressA(v9, &v27, Address) < 0 )
    return -1073741811;
  v13 = v27;
  if ( *v27 == 37 )
  {
    v13 = v27 + 1;
    v16 = v27[1];
    if ( !_isascii(v16) || !isdigit(v16) )
      return -1073741811;
    while ( (_BYTE)v16 && (_BYTE)v16 != 93 )
    {
      if ( !_isascii((char)v16) || !isdigit((char)v16) || (char)v16 + 2 * (5 * (unsigned __int64)v11 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v11 = (char)v16 - 48 + 10 * v11;
      LOBYTE(v16) = *v13;
    }
  }
  v14 = *v13;
  if ( *v13 != 93 )
    goto LABEL_11;
  if ( v7 != 91 )
    return -1073741811;
  v14 = v13[1];
  v15 = 0;
  v28 = 0;
  if ( v14 == 58 )
  {
    v17 = 10;
    v18 = (CHAR *)(v13 + 2);
    if ( v13[2] == 48 )
    {
      v17 = 8;
      v18 = (CHAR *)(v13 + 3);
      if ( ((v13[3] - 88) & 0xDF) == 0 )
      {
        v17 = 16;
        v18 = (CHAR *)(v13 + 4);
      }
    }
    while ( 1 )
    {
      v14 = *v18;
      v19 = *v18;
      if ( !*v18 )
        break;
      v20 = v14;
      if ( _isascii(v14) && isdigit(v20) && v20 - 48 < v17 )
      {
        if ( v20 + v17 * (unsigned int)v10 - 48 > 0xFFFF )
          return -1073741811;
        v21 = v19;
        v22 = v10 * v17 - 48;
      }
      else
      {
        if ( v17 != 16 || !_isascii(v20) || !isxdigit(v20) )
          return -1073741811;
        if ( !_isascii(v20) || (v23 = islower(v20), v24 = 97, !v23) )
          v24 = 65;
        if ( v20 + 16 * (unsigned int)v10 - v24 + 10 > 0xFFFF )
          return -1073741811;
        v22 = 16 * v10;
        if ( !_isascii(v20) || (v25 = islower(v20), v26 = 97, !v25) )
          v26 = 65;
        v21 = v19 - v26 + 10;
      }
      v10 = v21 + v22;
      ++v18;
    }
LABEL_11:
    v15 = v28;
  }
  if ( v14 || v15 )
    return -1073741811;
  *Port = __ROR2__(v10, 8);
  result = 0;
  *ScopeId = v11;
  return result;
}
