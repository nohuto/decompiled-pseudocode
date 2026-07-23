/*
 * XREFs of RtlIpv6StringToAddressA @ 0x1800F1670
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1800F13E0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x180123350 (__isascii.c)
 *     isdigit @ 0x180123490 (isdigit.c)
 *     isxdigit @ 0x1801235E0 (isxdigit.c)
 *     strtol @ 0x180128A40 (strtol.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

LONG __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
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
  __int16 v14; // ax
  struct in6_addr *v15; // r9
  char *v16; // rbx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // eax
  char v21; // [rsp+20h] [rbp-58h]
  char *String; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+98h] [rbp+20h]

  v3 = Addr;
  v4 = 0;
  String = 0LL;
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
    {
LABEL_17:
      *Terminator = S;
      if ( v9 )
        goto LABEL_28;
      goto LABEL_18;
    }
    if ( !v6 )
    {
      if ( (_BYTE)v13 != 58 )
      {
LABEL_12:
        if ( v8 > 7 && (v8 > 8 || !v4) )
          goto LABEL_17;
        if ( _isascii(v13) && isdigit(v13) )
        {
          v23 = 0;
        }
        else
        {
          if ( !_isascii(v13) || !isxdigit(v13) )
            goto LABEL_17;
          if ( v9 )
            goto LABEL_27;
          v23 = 1;
        }
        v10 = 1;
        String = (char *)S;
        v6 = 1;
        v7 = S;
        goto LABEL_9;
      }
      if ( v9 )
      {
LABEL_27:
        *Terminator = S;
        goto LABEL_28;
      }
      if ( v8 || S[1] != 58 )
        goto LABEL_17;
      v19 = v12;
      v11 = 1;
      if ( !v12 )
        v4 = 1;
      v21 = v4;
      v26 = ++v12;
      v8 = 2;
      *((_WORD *)v3 + v19) = 0;
      v6 = 2;
      goto LABEL_67;
    }
    if ( v6 != 1 )
      goto LABEL_12;
    if ( _isascii(v13) && isdigit(v13) )
    {
      ++v10;
      goto LABEL_8;
    }
    if ( _isascii(v13) && isxdigit(v13) )
      break;
    if ( (_BYTE)v13 != 58 )
    {
      if ( (_BYTE)v13 != 46 || v23 )
        goto LABEL_17;
      if ( v9 > 2 )
        goto LABEL_27;
      if ( v8 > 6 && !v21 || v8 > 7 )
        goto LABEL_17;
      ++v9;
      goto LABEL_40;
    }
    if ( v9 )
      goto LABEL_27;
    if ( v8 > 6 && !v21 || v8 > 7 )
      goto LABEL_17;
    if ( S[1] != 58 )
    {
      ++v8;
LABEL_40:
      v3 = Addr;
      v6 = 0;
      v7 = String;
      v12 = v26;
      goto LABEL_41;
    }
    if ( v11 )
      goto LABEL_17;
    v11 = v8 + 1;
    v3 = Addr;
    v6 = 2;
    v7 = String;
    v8 += 2;
    v12 = v26;
LABEL_67:
    ++S;
LABEL_41:
    if ( v7 )
    {
      if ( v9 )
      {
        if ( v10 > 3 )
          return -1073741811;
        v18 = strtol(v7, 0LL, 10);
        if ( v18 > 0xFF )
          return -1073741811;
        v12 = v26;
        *((_BYTE *)v3 + 2 * v26 + v9 - 1) = v18;
      }
      else
      {
        if ( v10 > 4 )
          return -1073741811;
        *((_WORD *)v3 + v26) = __ROR2__(strtol(v7, 0LL, 16), 8);
        v12 = ++v26;
      }
      v7 = String;
    }
LABEL_10:
    v3 = Addr;
    ++S;
    v4 = v21;
  }
  ++v10;
  if ( !v9 )
  {
    v23 = 1;
LABEL_8:
    v7 = String;
LABEL_9:
    v12 = v26;
    goto LABEL_10;
  }
  *Terminator = S;
LABEL_28:
  if ( v9 != 3 )
    return -1073741811;
  ++v8;
LABEL_18:
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v6 == 1 )
  {
    if ( v9 )
    {
      if ( v10 > 3 )
        return -1073741811;
      v20 = strtol(String, 0LL, 10);
      if ( v20 > 0xFF )
        return -1073741811;
      v15 = Addr;
      *((_BYTE *)Addr + 2 * v26 + v9) = v20;
    }
    else
    {
      if ( v10 > 4 )
        return -1073741811;
      v14 = strtol(String, 0LL, 16);
      v15 = Addr;
      *((_WORD *)Addr + v26) = __ROR2__(v14, 8);
    }
  }
  else
  {
    if ( v6 != 2 )
      return -1073741811;
    v15 = Addr;
    *((_WORD *)Addr + v26) = 0;
  }
  if ( v11 )
  {
    v16 = (char *)v15 + 2 * v11;
    memmove((char *)v15 + 2 * (v11 - v8) + 16, v16, 2LL * (v8 - v11));
    memset_thunk_772440563353939046(v16, 0, 2LL * (8 - v8));
  }
  return 0;
}
