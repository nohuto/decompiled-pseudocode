/*
 * XREFs of RtlIpv6StringToAddressA @ 0x14049D200
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1405E1C30 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     strtol @ 0x1404FAF08 (strtol.c)
 *     __isascii @ 0x1404FC210 (__isascii.c)
 *     isdigit @ 0x1404FC230 (isdigit.c)
 *     isxdigit @ 0x1404FC320 (isxdigit.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  struct in6_addr *v3; // rsi
  char v4; // r11
  int v6; // r13d
  const char *v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r10d
  int v13; // ebp
  __int64 v15; // rax
  __int16 v16; // ax
  struct in6_addr *v17; // r9
  unsigned int v18; // eax
  char *v19; // rbx
  unsigned int v20; // eax
  char v21; // [rsp+20h] [rbp-58h]
  char *Str; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+98h] [rbp+20h]

  v3 = Addr;
  v4 = 0;
  Str = 0LL;
  v21 = 0;
  v6 = 0;
  v23 = 0;
  v7 = 0LL;
  v26 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *S;
    if ( !*S )
      break;
    if ( !v6 )
    {
      if ( (_BYTE)v13 != 58 )
      {
LABEL_33:
        if ( v8 > 7 && (v8 > 8 || !v4) )
          break;
        if ( _isascii(v13) && isdigit(v13) )
        {
          v23 = 0;
        }
        else
        {
          if ( !_isascii(v13) || !isxdigit(v13) )
            break;
          if ( v9 )
          {
LABEL_41:
            *Terminator = S;
            goto LABEL_42;
          }
          v23 = 1;
        }
        v10 = 1;
        Str = (char *)S;
        v6 = 1;
        v7 = S;
        goto LABEL_9;
      }
      if ( v9 )
        goto LABEL_41;
      if ( v8 || S[1] != 58 )
        break;
      v15 = v12;
      v11 = 1;
      if ( !v12 )
        v4 = 1;
      v21 = v4;
      v26 = ++v12;
      v8 = 2;
      *((_WORD *)v3 + v15) = 0;
      v6 = 2;
      goto LABEL_28;
    }
    if ( v6 != 1 )
      goto LABEL_33;
    if ( _isascii(v13) && isdigit(v13) )
    {
      ++v10;
      goto LABEL_8;
    }
    if ( _isascii(v13) && isxdigit(v13) )
    {
      ++v10;
      if ( v9 )
      {
        *Terminator = S;
LABEL_42:
        if ( v9 == 3 )
        {
          ++v8;
          goto LABEL_16;
        }
        return -1073741811;
      }
      v23 = 1;
LABEL_8:
      v7 = Str;
LABEL_9:
      v12 = v26;
      goto LABEL_10;
    }
    if ( (_BYTE)v13 == 58 )
    {
      if ( v9 )
        goto LABEL_41;
      if ( v8 > 6 && !v21 || v8 > 7 )
        break;
      if ( S[1] == 58 )
      {
        if ( v11 )
          break;
        v11 = v8 + 1;
        v3 = Addr;
        v6 = 2;
        v7 = Str;
        v8 += 2;
        v12 = v26;
LABEL_28:
        ++S;
        goto LABEL_29;
      }
      ++v8;
    }
    else
    {
      if ( (_BYTE)v13 != 46 || v23 )
        break;
      if ( v9 > 2 )
        goto LABEL_41;
      if ( v8 > 6 && !v21 || v8 > 7 )
        break;
      ++v9;
    }
    v3 = Addr;
    v6 = 0;
    v7 = Str;
    v12 = v26;
LABEL_29:
    if ( v7 )
    {
      if ( v9 )
      {
        if ( v10 > 3 )
          return -1073741811;
        v20 = strtol(v7, 0LL, 10);
        if ( v20 > 0xFF )
          return -1073741811;
        v12 = v26;
        *((_BYTE *)v3 + 2 * v26 + v9 - 1) = v20;
      }
      else
      {
        if ( v10 > 4 )
          return -1073741811;
        *((_WORD *)v3 + v26) = __ROR2__(strtol(v7, 0LL, 16), 8);
        v12 = ++v26;
      }
      v7 = Str;
    }
LABEL_10:
    v3 = Addr;
    ++S;
    v4 = v21;
  }
  *Terminator = S;
  if ( v9 )
    goto LABEL_42;
LABEL_16:
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v6 == 1 )
  {
    if ( v9 )
    {
      if ( v10 > 3 )
        return -1073741811;
      v18 = strtol(Str, 0LL, 10);
      if ( v18 > 0xFF )
        return -1073741811;
      v17 = Addr;
      *((_BYTE *)Addr + 2 * v26 + v9) = v18;
    }
    else
    {
      if ( v10 > 4 )
        return -1073741811;
      v16 = strtol(Str, 0LL, 16);
      v17 = Addr;
      *((_WORD *)Addr + v26) = __ROR2__(v16, 8);
    }
  }
  else
  {
    if ( v6 != 2 )
      return -1073741811;
    v17 = Addr;
    *((_WORD *)Addr + v26) = 0;
  }
  if ( v11 )
  {
    v19 = (char *)v17 + 2 * v11;
    memmove((char *)v17 + 2 * (v11 - v8) + 16, v19, 2LL * (v8 - v11));
    memset_0(v19, 0, 2LL * (8 - v8));
  }
  return 0;
}
