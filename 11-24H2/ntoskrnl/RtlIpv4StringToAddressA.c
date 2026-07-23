/*
 * XREFs of RtlIpv4StringToAddressA @ 0x140486F10
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1405EB380 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x1404FC250 (__isascii.c)
 *     isdigit @ 0x1404FC270 (isdigit.c)
 *     islower @ 0x1404FC2A0 (islower.c)
 *     isxdigit @ 0x1404FC360 (isxdigit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  BOOLEAN i; // si
  unsigned int v8; // r12d
  char v9; // r15
  int v10; // r14d
  int v11; // esi
  int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rbx
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  unsigned int v27; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-1Ch]
  unsigned int v29; // [rsp+38h] [rbp-18h]
  unsigned int v30; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v27;
  for ( i = Strict; ; i = Strict )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
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
    if ( i && v10 != 10 )
      goto LABEL_28;
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
        if ( !_isascii(v11) || (v23 = islower(v11), v24 = 97, !v23) )
          v24 = 65;
        v12 = 16 * v8 - v24 + 10;
      }
      v13 = v11 + v12;
      if ( v13 < v8 )
        goto LABEL_28;
      ++S;
      v9 = 1;
      v8 = v13;
    }
    if ( *S != 46 )
      break;
    if ( v4 >= &v30 )
      goto LABEL_28;
    *v4 = v8;
    ++S;
    ++v4;
    if ( !v9 )
      goto LABEL_28;
  }
  if ( !v9 )
    goto LABEL_28;
  *v4 = v8;
  v14 = ((char *)v4 - (char *)&v27 + 4) >> 2;
  if ( Strict )
  {
    v15 = (_DWORD)v14 == 4;
LABEL_20:
    if ( v15 && v27 <= 0xFF && v28 <= 0xFF && v29 <= 0xFF && v30 <= 0xFF )
    {
      v16 = (unsigned __int8)v30;
      v17 = ((unsigned __int8)v29 | (((v27 << 8) | (unsigned __int8)v28) << 8)) << 8;
LABEL_26:
      v18 = v16 | v17;
LABEL_27:
      *Terminator = S;
      *(_DWORD *)Addr = _byteswap_ulong(v18);
      return 0;
    }
    goto LABEL_28;
  }
  v20 = v14 - 1;
  if ( !v20 )
  {
    v18 = v27;
    goto LABEL_27;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    if ( v27 <= 0xFF && v28 <= 0xFFFFFF )
    {
      v17 = v27 << 24;
      v16 = v28 & 0xFFFFFF;
      goto LABEL_26;
    }
    goto LABEL_28;
  }
  v22 = v21 - 1;
  if ( v22 )
  {
    v15 = v22 == 1;
    goto LABEL_20;
  }
  if ( v27 <= 0xFF && v28 <= 0xFF && v29 <= 0xFFFF )
  {
    v16 = (unsigned __int16)v29;
    v17 = ((v27 << 8) | (unsigned __int8)v28) << 16;
    goto LABEL_26;
  }
LABEL_28:
  *Terminator = S;
  return -1073741811;
}
