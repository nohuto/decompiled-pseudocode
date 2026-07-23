/*
 * XREFs of RtlIpv6StringToAddressW @ 0x14046A8A0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x14046A670 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     wcstol @ 0x1404FE024 (wcstol.c)
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  char v4; // r11
  int v6; // r12d
  const wchar_t *v7; // r9
  char v8; // r8
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // r10d
  WCHAR v14; // bx
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  char v20; // [rsp+20h] [rbp-48h]
  wchar_t *Str; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+70h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v4 = 0;
  Str = 0LL;
  v22 = 0;
  v6 = 0;
  v20 = 0;
  v24 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = *S;
    if ( !*S )
    {
LABEL_9:
      *Terminator = S;
      if ( v10 )
        goto LABEL_20;
      goto LABEL_10;
    }
    if ( !v6 )
    {
      if ( v14 != 58 )
        break;
      if ( v10 )
        goto LABEL_19;
      if ( v9 || S[1] != 58 )
        goto LABEL_9;
      v19 = v13;
      v9 = 2;
      v12 = 1;
      if ( !v13 )
        v4 = 1;
      v6 = 2;
      v20 = v4;
      ++v13;
      *((_WORD *)Addr + v19) = 0;
      v24 = v13;
      ++S;
      goto LABEL_40;
    }
    if ( v6 != 1 )
      break;
    if ( v14 < 0x80u )
    {
      if ( iswctype(v14, 4u) )
      {
        v8 = v22;
        ++v11;
        goto LABEL_26;
      }
      if ( iswctype(v14, 0x80u) )
      {
        ++v11;
        if ( v10 )
          goto LABEL_19;
        v8 = 1;
        v22 = 1;
LABEL_26:
        v7 = Str;
LABEL_27:
        v13 = v24;
        goto LABEL_28;
      }
      v8 = v22;
      v7 = Str;
      v13 = v24;
      v4 = v20;
    }
    if ( v14 != 58 )
    {
      if ( v14 != 46 || v8 )
        goto LABEL_9;
      if ( v10 > 2 )
        goto LABEL_19;
      if ( v9 > 6 && !v4 || v9 > 7 )
        goto LABEL_9;
      ++v10;
      goto LABEL_39;
    }
    if ( v10 )
      goto LABEL_19;
    if ( v9 > 6 && !v4 || v9 > 7 )
      goto LABEL_9;
    if ( S[1] != 58 )
    {
      ++v9;
LABEL_39:
      v6 = 0;
      goto LABEL_40;
    }
    if ( v12 )
      goto LABEL_9;
    v12 = v9 + 1;
    v6 = 2;
    v9 += 2;
    ++S;
LABEL_40:
    if ( v7 )
    {
      if ( v10 )
      {
        if ( v11 > 3 )
          return -1073741811;
        v17 = wcstol(v7, 0LL, 10);
        if ( v17 > 0xFF )
          return -1073741811;
        v13 = v24;
        v8 = v22;
        v7 = Str;
        *((_BYTE *)Addr + 2 * v24 + v10 - 1) = v17;
      }
      else
      {
        if ( v11 > 4 )
          return -1073741811;
        v16 = wcstol(v7, 0LL, 16);
        v8 = v22;
        v7 = Str;
        *((_WORD *)Addr + v24) = __ROR2__(v16, 8);
        v13 = ++v24;
      }
    }
LABEL_28:
    v4 = v20;
    ++S;
  }
  if ( v9 > 7 && (v9 > 8 || !v4) || v14 >= 0x80u )
    goto LABEL_9;
  if ( iswctype(v14, 4u) )
  {
    v8 = 0;
    v22 = 0;
LABEL_45:
    Str = (wchar_t *)S;
    v7 = S;
    v6 = 1;
    v11 = 1;
    goto LABEL_27;
  }
  if ( !iswctype(v14, 0x80u) )
    goto LABEL_9;
  if ( !v10 )
  {
    v8 = 1;
    v22 = 1;
    goto LABEL_45;
  }
LABEL_19:
  *Terminator = S;
LABEL_20:
  if ( v10 != 3 )
    return -1073741811;
  ++v9;
LABEL_10:
  if ( !v12 && v9 != 7 )
    return -1073741811;
  if ( v6 == 1 )
  {
    if ( v10 )
    {
      if ( v11 > 3 )
        return -1073741811;
      v18 = wcstol(Str, 0LL, 10);
      if ( v18 > 0xFF )
        return -1073741811;
      *((_BYTE *)Addr + 2 * v24 + v10) = v18;
    }
    else
    {
      if ( v11 > 4 )
        return -1073741811;
      *((_WORD *)Addr + v24) = __ROR2__(wcstol(Str, 0LL, 16), 8);
    }
  }
  else
  {
    if ( v6 != 2 )
      return -1073741811;
    *((_WORD *)Addr + v24) = 0;
  }
  if ( v12 )
  {
    memmove((char *)Addr + 2 * (v12 - v9) + 16, (char *)Addr + 2 * v12, 2LL * (v9 - v12));
    memset_0((char *)Addr + 2 * v12, 0, 2LL * (8 - v9));
  }
  return 0;
}
