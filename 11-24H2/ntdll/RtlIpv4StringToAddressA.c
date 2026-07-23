/*
 * XREFs of RtlIpv4StringToAddressA @ 0x1800E5100
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800E4F30 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x18011FAA0 (__isascii.c)
 *     isdigit @ 0x18011FBE0 (isdigit.c)
 *     islower @ 0x18011FC40 (islower.c)
 *     isxdigit @ 0x18011FD30 (isxdigit.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

LONG __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rsi
  unsigned int v8; // ebp
  char v9; // r15
  int v10; // r14d
  int v11; // edi
  int v12; // ecx
  unsigned int v13; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  unsigned int v25; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v27; // [rsp+30h] [rbp-48h]
  unsigned int v28; // [rsp+34h] [rbp-44h] BYREF

  v4 = &v25;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      v15 = *++S;
      if ( _isascii(v15) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( Strict && v10 != 10 )
      goto LABEL_15;
    while ( *S )
    {
      v11 = *S;
      if ( _isascii(v11) && isdigit(v11) && v11 - 48 < v10 )
      {
        v12 = v8 * v10 - 48;
      }
      else
      {
        if ( v10 != 16 || !_isascii(v11) || !isxdigit(v11) )
          break;
        if ( !_isascii(v11) || (v22 = islower(v11), v21 = 97, !v22) )
          v21 = 65;
        v12 = 16 * v8 - v21 + 10;
      }
      v13 = v11 + v12;
      if ( v13 < v8 )
        goto LABEL_15;
      ++S;
      v9 = 1;
      v8 = v13;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v28 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_15;
  }
  if ( !v9 )
    goto LABEL_15;
  *v4 = v8;
  v16 = ((char *)v4 - (char *)&v25 + 4) >> 2;
  if ( !Strict )
  {
    if ( (_DWORD)v16 != 4 )
    {
      v20 = v16 - 1;
      if ( !v20 )
      {
        v19 = v25;
        goto LABEL_29;
      }
      v23 = v20 - 1;
      if ( v23 )
      {
        if ( v23 == 1 && v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFFFF )
        {
          v17 = (unsigned __int16)v27;
          v18 = ((v25 << 8) | (unsigned __int8)v26) << 16;
          goto LABEL_28;
        }
      }
      else if ( v25 <= 0xFF && v26 <= 0xFFFFFF )
      {
        v18 = v25 << 24;
        v17 = v26 & 0xFFFFFF;
        goto LABEL_28;
      }
LABEL_15:
      *Terminator = S;
      return -1073741811;
    }
LABEL_23:
    if ( v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFF && v28 <= 0xFF )
    {
      v17 = (unsigned __int8)v28;
      v18 = ((unsigned __int8)v27 | (((v25 << 8) | (unsigned __int8)v26) << 8)) << 8;
LABEL_28:
      v19 = v17 | v18;
LABEL_29:
      *Terminator = S;
      *(_DWORD *)Addr = _byteswap_ulong(v19);
      return 0;
    }
    goto LABEL_15;
  }
  if ( (_DWORD)v16 == 4 )
    goto LABEL_23;
  *Terminator = S;
  return -1073741811;
}
