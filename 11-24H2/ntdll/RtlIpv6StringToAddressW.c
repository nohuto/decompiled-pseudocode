/*
 * XREFs of RtlIpv6StringToAddressW @ 0x1800B2A40
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1800B2770 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     iswctype @ 0x180122D50 (iswctype.c)
 *     wcstol @ 0x180126400 (wcstol.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

LONG __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  char v3; // al
  char v5; // r8
  unsigned int v6; // edx
  int v8; // r14d
  const wchar_t *v9; // r9
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  WCHAR v14; // di
  unsigned int v16; // eax
  unsigned int v17; // eax
  char v18; // [rsp+20h] [rbp-48h]
  wchar_t *String; // [rsp+28h] [rbp-40h]
  char v20; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v3 = 0;
  String = 0LL;
  v5 = 0;
  v20 = 0;
  v6 = 0;
  v18 = 0;
  v22 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = *S;
    if ( !*S )
    {
LABEL_16:
      *Terminator = S;
      if ( v11 )
        goto LABEL_28;
      goto LABEL_19;
    }
    if ( v8 == 1 )
    {
      if ( v14 >= 0x80u )
        goto LABEL_5;
      if ( iswctype(v14, 4u) )
      {
        ++v12;
      }
      else
      {
        if ( !iswctype(v14, 0x80u) )
        {
          v3 = v20;
          v9 = String;
          v5 = v18;
LABEL_5:
          if ( v14 == 58 )
          {
            if ( v11 )
              goto LABEL_27;
            if ( v10 > 6 && !v5 || v10 > 7 )
              goto LABEL_16;
            if ( S[1] == 58 )
            {
              if ( v13 )
                goto LABEL_16;
              v13 = v10 + 1;
              v8 = 2;
              v10 += 2;
              ++S;
              goto LABEL_37;
            }
            ++v10;
          }
          else
          {
            if ( v14 != 46 || v3 )
              goto LABEL_16;
            if ( v11 > 2 )
              goto LABEL_27;
            if ( v10 > 6 && !v5 || v10 > 7 )
              goto LABEL_16;
            ++v11;
          }
          v8 = 0;
LABEL_37:
          if ( !v9 )
            goto LABEL_55;
          if ( v11 )
          {
            if ( v12 > 3 )
              return -1073741811;
            v16 = wcstol(v9, 0LL, 10);
            if ( v16 > 0xFF )
              return -1073741811;
            *((_BYTE *)Addr + 2 * v22 + v11 - 1) = v16;
          }
          else
          {
            if ( v12 > 4 )
              return -1073741811;
            *((_WORD *)Addr + v22++) = __ROR2__(wcstol(v9, 0LL, 16), 8);
          }
          goto LABEL_54;
        }
        ++v12;
        if ( v11 )
          goto LABEL_27;
        v20 = 1;
      }
LABEL_54:
      v9 = String;
      goto LABEL_55;
    }
    if ( !v8 && v14 == 58 )
    {
      if ( v11 )
        goto LABEL_27;
      if ( v10 || S[1] != 58 )
        goto LABEL_16;
      v10 = 2;
      if ( !v6 )
        v5 = 1;
      v13 = 1;
      v18 = v5;
      v22 = v6 + 1;
      ++S;
      *((_WORD *)Addr + v6) = 0;
      v8 = 2;
      goto LABEL_37;
    }
    if ( v10 > 7 && (v10 > 8 || !v5) || v14 >= 0x80u )
      goto LABEL_16;
    if ( !iswctype(v14, 4u) )
      break;
    v20 = 0;
LABEL_68:
    v8 = 1;
    String = (wchar_t *)S;
    v12 = 1;
    v9 = S;
LABEL_55:
    v3 = v20;
    ++S;
    v6 = v22;
    v5 = v18;
  }
  if ( !iswctype(v14, 0x80u) )
    goto LABEL_16;
  if ( !v11 )
  {
    v20 = 1;
    goto LABEL_68;
  }
LABEL_27:
  *Terminator = S;
LABEL_28:
  if ( v11 != 3 )
    return -1073741811;
  ++v10;
LABEL_19:
  if ( !v13 && v10 != 7 )
    return -1073741811;
  if ( v8 == 1 )
  {
    if ( v11 )
    {
      if ( v12 > 3 )
        return -1073741811;
      v17 = wcstol(String, 0LL, 10);
      if ( v17 > 0xFF )
        return -1073741811;
      *((_BYTE *)Addr + 2 * v22 + v11) = v17;
    }
    else
    {
      if ( v12 > 4 )
        return -1073741811;
      *((_WORD *)Addr + v22) = __ROR2__(wcstol(String, 0LL, 16), 8);
    }
  }
  else
  {
    if ( v8 != 2 )
      return -1073741811;
    *((_WORD *)Addr + v22) = 0;
  }
  if ( v13 )
  {
    memmove((char *)Addr + 2 * (v13 - v10) + 16, (char *)Addr + 2 * v13, 2LL * (v10 - v13));
    memset_thunk_772440563353939046((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
