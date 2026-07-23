/*
 * XREFs of RtlIpv4StringToAddressW @ 0x1800C0FB0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800BF260 (RtlIpv4StringToAddressExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x180126600 (iswctype.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

LONG __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  char v8; // r14
  int v9; // r12d
  unsigned int v10; // ebp
  wint_t v11; // cx
  int v12; // esi
  __int64 v13; // rbx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  bool v17; // zf
  unsigned int v18; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v26; // [rsp+30h] [rbp-48h]
  unsigned int v27; // [rsp+34h] [rbp-44h] BYREF

  v4 = &v24;
  while ( 1 )
  {
    v8 = 0;
    v9 = 10;
    v10 = 0;
    if ( *S == 48 )
    {
      v11 = S[1];
      ++S;
      if ( v11 < 0x80u && iswctype(v11, 4u) )
      {
        v9 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v9 = 16;
        ++S;
      }
    }
    if ( Strict && v9 != 10 )
      goto LABEL_36;
    while ( 1 )
    {
      v12 = *S;
      if ( !(_WORD)v12 )
        break;
      if ( (unsigned __int16)v12 < 0x80u && iswctype(v12, 4u) && v12 - 48 < v9 )
      {
        v22 = v10 * v9 + v12 - 48;
      }
      else
      {
        if ( v9 != 16 || (unsigned __int16)v12 >= 0x80u || !iswctype(v12, 0x80u) )
          break;
        v20 = iswctype(v12, 2u);
        v21 = 65;
        if ( v20 )
          v21 = 97;
        v22 = v12 + 16 * v10 - v21 + 10;
      }
      if ( v22 < v10 )
        goto LABEL_36;
      ++S;
      v8 = 1;
      v10 = v22;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v27 )
    {
      *v4 = v10;
      ++S;
      ++v4;
      if ( v8 )
        continue;
    }
    goto LABEL_36;
  }
  if ( !v8 )
    goto LABEL_36;
  *v4 = v10;
  v13 = ((char *)v4 - (char *)&v24 + 4) >> 2;
  if ( Strict )
  {
    v17 = (_DWORD)v13 == 4;
  }
  else
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v18 = v24;
      goto LABEL_21;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( v24 <= 0xFF && v25 <= 0xFFFFFF )
      {
        v18 = v25 & 0xFFFFFF | (v24 << 24);
        goto LABEL_21;
      }
      goto LABEL_36;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( v24 <= 0xFF && v25 <= 0xFF && v26 <= 0xFFFF )
      {
        v18 = (unsigned __int16)v26 | (((v24 << 8) | (unsigned __int8)v25) << 16);
        goto LABEL_21;
      }
      goto LABEL_36;
    }
    v17 = v16 == 1;
  }
  if ( v17 && v24 <= 0xFF && v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFF )
  {
    v18 = (unsigned __int8)v27 | (((unsigned __int8)v26 | (((v24 << 8) | (unsigned __int8)v25) << 8)) << 8);
LABEL_21:
    *Terminator = S;
    *(_DWORD *)Addr = _byteswap_ulong(v18);
    return 0;
  }
LABEL_36:
  *Terminator = S;
  return -1073741811;
}
