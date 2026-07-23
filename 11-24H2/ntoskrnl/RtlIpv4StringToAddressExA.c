/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x1405EB380
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x140486F10 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x1404FC250 (__isascii.c)
 *     isdigit @ 0x1404FC270 (isdigit.c)
 *     islower @ 0x1404FC2A0 (islower.c)
 *     isxdigit @ 0x1404FC360 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExA(
        PCSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  PCSTR v5; // rdi
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // bx
  CHAR v8; // r12
  int v9; // r14d
  int v10; // eax
  int v11; // ecx
  __int16 v12; // bx
  int v13; // eax
  __int16 v14; // cx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 != 58 )
  {
    if ( !*v16 )
    {
      v7 = 0;
      goto LABEL_31;
    }
    return -1073741811;
  }
  v5 = v16 + 1;
  v6 = 10;
  v7 = 0;
  if ( v16[1] == 48 )
  {
    v6 = 8;
    v5 = v16 + 2;
    if ( ((v16[2] - 88) & 0xDF) == 0 )
    {
      v6 = 16;
      v5 = v16 + 3;
    }
  }
  v8 = *v5;
  while ( 1 )
  {
    v9 = *v5++;
    if ( !(_BYTE)v9 )
      break;
    if ( _isascii(v9) && isdigit(v9) && (unsigned __int16)(v9 - 48) < v6 )
    {
      if ( v9 + v6 * (unsigned int)v7 - 48 > 0xFFFF )
        return -1073741811;
      v7 = v9 + v7 * v6 - 48;
    }
    else
    {
      if ( v6 != 16 || !_isascii(v9) || !isxdigit(v9) )
        return -1073741811;
      if ( !_isascii(v9) || (v10 = islower(v9), v11 = 97, !v10) )
        v11 = 65;
      if ( v9 + 16 * (unsigned int)v7 - v11 + 10 > 0xFFFF )
        return -1073741811;
      v12 = 16 * v7;
      if ( !_isascii(v9) || (v13 = islower(v9), v14 = 97, !v13) )
        v14 = 65;
      v7 = v9 - v14 + 10 + v12;
    }
  }
  if ( !v8 )
    return -1073741811;
LABEL_31:
  *Port = __ROR2__(v7, 8);
  return 0;
}
