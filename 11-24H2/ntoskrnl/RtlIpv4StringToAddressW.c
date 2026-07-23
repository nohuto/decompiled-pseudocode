/*
 * XREFs of RtlIpv4StringToAddressW @ 0x140471110
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x140470FA0 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  int v7; // r14d
  char v8; // r13
  unsigned int v9; // r15d
  int v10; // esi
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  bool v17; // zf
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  BOOLEAN v22; // [rsp+20h] [rbp-30h]
  unsigned int v24; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-1Ch]
  unsigned int v26; // [rsp+38h] [rbp-18h]
  unsigned int v27; // [rsp+3Ch] [rbp-14h] BYREF

  v22 = Strict;
  v6 = &v24;
  while ( 1 )
  {
    v7 = 10;
    v8 = 0;
    v9 = 0;
    if ( *S == 48 )
    {
      if ( *++S < 0x80u && (v20 = iswctype(*S, 4u), Strict = v22, v20) )
      {
        v7 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v7 = 16;
        ++S;
      }
    }
    if ( Strict && v7 != 10 )
      goto LABEL_11;
    while ( 1 )
    {
      v10 = *S;
      if ( !(_WORD)v10 )
        break;
      if ( (unsigned __int16)v10 < 0x80u && iswctype(v10, 4u) && v10 - 48 < v7 )
      {
        v12 = v9 * v7 + v10 - 48;
      }
      else
      {
        if ( v7 != 16 || (unsigned __int16)v10 >= 0x80u || !iswctype(v10, 0x80u) )
          break;
        v12 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
      }
      if ( v12 < v9 )
        goto LABEL_11;
      ++S;
      v8 = 1;
      v9 = v12;
    }
    if ( *S != 46 )
      break;
    if ( v6 >= &v27 )
      goto LABEL_11;
    *v6 = v9;
    ++S;
    ++v6;
    if ( !v8 )
      goto LABEL_11;
    Strict = v22;
  }
  if ( !v8 )
  {
LABEL_11:
    *Terminator = S;
    return -1073741811;
  }
  *v6 = v9;
  v13 = ((char *)v6 - (char *)&v24 + 4) >> 2;
  if ( v22 )
  {
    v17 = (_DWORD)v13 == 4;
LABEL_24:
    if ( !v17 || v24 > 0xFF || v25 > 0xFF || v26 > 0xFF || v27 > 0xFF )
      goto LABEL_11;
    v18 = (unsigned __int8)v27;
    v19 = ((unsigned __int8)v26 | (((v24 << 8) | (unsigned __int8)v25) << 8)) << 8;
    goto LABEL_49;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 == 1;
        goto LABEL_24;
      }
      if ( v24 > 0xFF || v25 > 0xFF || v26 > 0xFFFF )
        goto LABEL_11;
      v18 = (unsigned __int16)v26;
      v19 = ((v24 << 8) | (unsigned __int8)v25) << 16;
    }
    else
    {
      if ( v24 > 0xFF || v25 > 0xFFFFFF )
        goto LABEL_11;
      v19 = v24 << 24;
      v18 = v25 & 0xFFFFFF;
    }
LABEL_49:
    v21 = v18 | v19;
    goto LABEL_50;
  }
  v21 = v24;
LABEL_50:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v21);
  return 0;
}
