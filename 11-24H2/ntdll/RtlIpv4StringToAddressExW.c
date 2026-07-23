/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x1800B1FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x1800B3D10 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x180122D50 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v4; // si
  LPCWSTR v6; // rdi
  unsigned __int16 v7; // bp
  WCHAR v8; // r15
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  __int16 v12; // si
  int v13; // eax
  __int16 v14; // cx
  LPCWSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  Terminator = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &Terminator, Address) < 0 )
    return -1073741811;
  if ( *Terminator != 58 )
  {
    if ( !*Terminator )
      goto LABEL_28;
    return -1073741811;
  }
  v6 = Terminator + 1;
  v7 = 10;
  if ( Terminator[1] == 48 )
  {
    v7 = 8;
    v6 = Terminator + 2;
    if ( ((Terminator[2] - 88) & 0xFFDF) == 0 )
    {
      v7 = 16;
      v6 = Terminator + 3;
    }
  }
  v8 = *v6;
  while ( 1 )
  {
    v9 = *v6++;
    if ( !(_WORD)v9 )
      break;
    if ( (unsigned __int16)v9 < 0x80u && iswctype(v9, 4u) && (unsigned __int16)(v9 - 48) < v7 )
    {
      if ( v9 + v4 * (unsigned int)v7 - 48 > 0xFFFF )
        return -1073741811;
      v4 = v9 + v4 * v7 - 48;
    }
    else
    {
      if ( v7 != 16 || (unsigned __int16)v9 >= 0x80u || !iswctype(v9, 0x80u) )
        return -1073741811;
      v10 = iswctype(v9, 2u);
      v11 = 65;
      if ( v10 )
        v11 = 97;
      if ( v9 + 16 * (unsigned int)v4 - v11 + 10 > 0xFFFF )
        return -1073741811;
      v12 = 16 * v4;
      v13 = iswctype(v9, 2u);
      v14 = 65;
      if ( v13 )
        v14 = 97;
      v4 = v9 - v14 + 10 + v12;
    }
  }
  if ( !v8 )
    return -1073741811;
LABEL_28:
  *Port = __ROR2__(v4, 8);
  return 0;
}
