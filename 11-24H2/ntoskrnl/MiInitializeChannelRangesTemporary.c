/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140C5782C
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiInitializeChannelRangesTemporary()
{
  __int64 result; // rax
  _QWORD *v1; // rcx
  int v2; // r10d
  unsigned __int8 v3; // r8
  unsigned __int8 *v4; // r9
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned __int8 *v7; // rax
  char v8; // r8
  char *i; // r8
  unsigned int v10; // eax
  unsigned int v11; // r10d
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // r11d
  _BYTE *v15; // r15
  unsigned int v16; // edi
  unsigned int v17; // edx
  char *v18; // rdx
  __int64 j; // r9
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r10d
  int v23; // ebx
  _BYTE *v24; // rsi
  unsigned int v25; // r9d
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // edx
  char *v29; // rdx
  __int64 k; // r8
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  char *v33; // r8
  _QWORD *v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+38h] [rbp-38h] BYREF
  int v36; // [rsp+3Ch] [rbp-34h]
  unsigned int v37; // [rsp+40h] [rbp-30h]
  __int128 v38; // [rsp+50h] [rbp-20h] BYREF
  _BYTE vars0[24]; // [rsp+70h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v35 = 0;
  v34 = 0LL;
  v38 = 0LL;
  if ( !dword_140FC4208 )
    return result;
  if ( byte_140E37515 )
    return result;
  if ( !dword_140FC421C )
    return result;
  v37 = 128;
  result = guard_dispatch_icall_no_overrides(31LL, 8LL, &v34, &v35);
  v1 = v34;
  if ( !v34 )
    return result;
  v2 = 0;
  v3 = 0;
  if ( *v34 == -1LL )
    goto LABEL_16;
  v4 = (unsigned __int8 *)v34 + 12;
  do
  {
    v5 = *(unsigned __int16 *)v4;
    if ( v3 <= (unsigned __int16)v5 )
      v3 = *v4;
    if ( v4[2] )
    {
      v2 = 1;
    }
    else
    {
      v6 = *((unsigned __int16 *)v4 - 1);
      if ( v6 < 0x40 && v5 < 2 )
      {
        vars0[(unsigned __int64)(v5 + 2 * v6) >> 3] |= 1 << ((v5 + 2 * v6) & 7);
        v1 = v34;
      }
    }
    v7 = v4;
    v4 += 16;
    result = (v7 - (unsigned __int8 *)v1 - 12) >> 4;
    byte_140E2DACB = result;
  }
  while ( *(_QWORD *)(v4 - 12) != -1LL );
  if ( !v2 )
LABEL_16:
    v3 = 0;
  v8 = v3 + 1;
  MmNumberOfChannels = v8;
  if ( v8 == 1 )
    return result;
  if ( (unsigned __int8)v8 > 2u )
  {
    for ( i = (char *)v1 + 12; ; i += 16 )
    {
      if ( *(_QWORD *)(i - 12) == -1LL )
      {
        MmNumberOfChannels = 2;
        break;
      }
      if ( *(_WORD *)i < 2u )
        continue;
      v10 = *((unsigned __int16 *)i - 1);
      if ( v10 >= 0x40 )
        continue;
      v11 = 2 * v10;
      v12 = v37 - 1;
      v13 = (((unsigned __int8)vars0 - 32) & 4) != 0LL ? 0x20 : 0;
      v14 = v11 < v37 ? v11 : 0;
      v15 = &vars0[-(__int64)((((unsigned __int8)vars0 - 32) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL];
      while ( 1 )
      {
        v36 = 0;
        v16 = v13 + v12;
        if ( v12 - v14 == -1 )
          goto LABEL_25;
        v18 = &v15[8 * ((unsigned __int64)(v13 + v14) >> 6)];
        for ( j = ~*(_QWORD *)v18 | ((1LL << ((v13 + v14) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v18 )
        {
          v18 += 8;
          if ( v18 > &v15[8 * ((unsigned __int64)v16 >> 6)] )
            goto LABEL_25;
        }
        _BitScanForward64(&v20, ~j);
        v17 = v20 + ((unsigned int)((v18 - v15) >> 3) << 6);
        if ( v17 > v16 )
        {
LABEL_25:
          v17 = -1;
          goto LABEL_32;
        }
        if ( v17 != -1 )
          break;
LABEL_32:
        if ( !v14 )
          goto LABEL_37;
        v21 = v11 + 1;
        if ( v11 + 1 > v37 )
          v21 = v37;
        v12 = v21 - 1;
        v14 = 0;
      }
      v17 -= v13;
LABEL_37:
      if ( v17 < v11 || v17 >= v11 + 2 )
      {
        i[2] = 0;
        *(_WORD *)i = 1;
      }
      else
      {
        *(_WORD *)i = v17 & 1;
      }
    }
  }
  v22 = 0;
  v23 = (((unsigned __int8)vars0 - 32) & 4) != 0LL ? 0x20 : 0;
  v24 = &vars0[-((((unsigned __int8)vars0 - 32) & 4) != 0LL ? 4 : 0)];
  while ( 2 )
  {
    v25 = v22 < v37 ? v22 : 0;
    v26 = v37 - 1;
    while ( 1 )
    {
      v36 = 0;
      v27 = v23 + v26;
      if ( v26 - v25 == -1 )
        goto LABEL_46;
      v29 = &v24[8 * ((unsigned __int64)(v23 + v25) >> 6)];
      for ( k = ~*(_QWORD *)v29 | ((1LL << ((v23 + v25) & 0x3F)) - 1); k == -1; k = ~*(_QWORD *)v29 )
      {
        v29 += 8;
        if ( v29 > &v24[8 * ((unsigned __int64)v27 >> 6)] )
          goto LABEL_46;
      }
      _BitScanForward64(&v31, ~k);
      v28 = v31 + ((unsigned int)((v29 - v24) >> 3) << 6);
      if ( v28 > v27 )
      {
LABEL_46:
        v28 = -1;
        goto LABEL_53;
      }
      if ( v28 != -1 )
        break;
LABEL_53:
      if ( !v25 )
        goto LABEL_58;
      v32 = v22 + 1;
      if ( v22 + 1 > v37 )
        v32 = v37;
      v26 = v32 - 1;
      v25 = 0;
    }
    v28 -= v23;
LABEL_58:
    if ( v28 != -1 && v28 >= v22 )
    {
      v22 = v28 + 1;
      if ( *v34 != -1LL )
      {
        v33 = (char *)v34 + 12;
        do
        {
          if ( *((unsigned __int16 *)v33 - 1) == v28 >> 1 && *(_WORD *)v33 == (v28 & 1) )
            v33[2] = 0;
          v33 += 16;
        }
        while ( *(_QWORD *)(v33 - 12) != -1LL );
      }
      continue;
    }
    break;
  }
  result = (__int64)v34;
  qword_140E2DB28 = v34;
  return result;
}
