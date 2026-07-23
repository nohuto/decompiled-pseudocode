/*
 * XREFs of MiGetBestPageToZero @ 0x140413ED0
 * Callers:
 *     MiGetSinglePageToZero @ 0x1403332A0 (MiGetSinglePageToZero.c)
 * Callees:
 *     MiSetPageZeroInProgress @ 0x140414240 (MiSetPageZeroInProgress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiGetBestPageToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // r14
  const void *v12; // rdx
  size_t v13; // r8
  unsigned int v14; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // edi
  _QWORD *v18; // r11
  __int64 v19; // r9
  unsigned int v20; // r10d
  unsigned __int64 v21; // r12
  unsigned int v22; // r13d
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  unsigned int v25; // r13d
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // ecx
  char v29; // al
  unsigned int v30; // [rsp+20h] [rbp-B8h]
  unsigned int v31; // [rsp+24h] [rbp-B4h]
  char v32; // [rsp+28h] [rbp-B0h]
  _BYTE v33[12]; // [rsp+2Ch] [rbp-ACh]
  __int64 v34; // [rsp+38h] [rbp-A0h]
  __int64 v35; // [rsp+40h] [rbp-98h] BYREF
  __int64 v36; // [rsp+48h] [rbp-90h]
  __int64 *v37; // [rsp+50h] [rbp-88h]
  int v38; // [rsp+58h] [rbp-80h]
  unsigned int v39; // [rsp+5Ch] [rbp-7Ch]
  __int64 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  _OWORD v43[2]; // [rsp+78h] [rbp-60h] BYREF

  v41 = a1;
  v4 = 0LL;
  v35 = a2;
  v36 = 0LL;
  v40 = 0LL;
  v5 = (a3 >> 18) & 3;
  v38 = 1;
  v39 = a3;
  v37 = &MiFreeThenFree;
  result = MiSetPageZeroInProgress(&v35);
  if ( !result )
  {
    v8 = (a3 >> 15) & 1;
    v9 = a2 + 1280LL * (HIWORD(a3) & 3);
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v10 = (a3 >> 8) & 1;
    else
      v10 = 0LL;
    v36 = *(_QWORD *)(a2 + 8 * (v5 + 4 * (v10 + 4 * (v8 + 10LL * (HIWORD(a3) & 3)))) + 1056);
    v11 = 32 * (v5 + 4LL * v8);
LABEL_5:
    v12 = *(const void **)(v11 + v9 + 152);
    v13 = *(_QWORD *)(v11 + v9 + 144) >> 3;
    memset(v43, 0, sizeof(v43));
    memmove(v43, v12, v13);
    v14 = 0;
    v15 = v43;
    while ( !*v15 )
    {
      ++v14;
      ++v15;
      if ( v14 >= 4 )
      {
        if ( v14 == 4 )
          return 0LL;
        break;
      }
    }
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v16 = (_QWORD *)(a2 + 16LL * ((a3 >> 8) & 1) + 15160);
    else
      v16 = (_QWORD *)(v9 + 16);
    if ( *v16 )
    {
      v17 = v39;
      v18 = 0LL;
      v19 = 0LL;
      v32 = v40;
      *(_DWORD *)&v33[8] = 0;
      v34 = 0LL;
      v20 = *(&MiState + (HIWORD(v39) & 3) + 1120);
      v21 = 0LL;
      *(_QWORD *)v33 = (unsigned __int8)v39;
      v22 = (unsigned __int8)v39;
      v31 = v20;
      v30 = v20;
      if ( (v40 & 0x40) != 0 )
      {
        v28 = v39 & 0xF;
        do
        {
          v29 = v28;
          v28 += 16;
          v19 |= 1LL << (v29 & 0x3F);
        }
        while ( v28 < 0x40 && v28 < *(&MiState + (HIWORD(v39) & 3) + 1120) );
        v34 = v19;
      }
LABEL_15:
      while ( 1 )
      {
        v23 = *(_QWORD *)(v11 + v9 + 152);
        v42 = v23;
        while ( 1 )
        {
          v24 = (_QWORD *)(v23 + 8 * ((unsigned __int64)v22 >> 6));
          if ( v18 != v24 )
          {
            v18 = v24;
            *(_QWORD *)&v33[4] = v24;
            v21 = *v24 & ~((1LL << (v22 & 0x3F)) - 1);
            if ( (v32 & 0x40) != 0 )
              v21 &= ~v34;
            if ( ((v22 ^ (unsigned __int64)v20) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
              v21 &= (1LL << (v20 & 0x3F)) - 1;
          }
          v25 = v22 & 0xFFFFFFC0;
          if ( v21 )
            break;
          v23 = v42;
          v22 = v25 + 64;
          if ( v22 >= v20 )
          {
            v18 = 0LL;
            *(_QWORD *)&v33[4] = 0LL;
            if ( *(_DWORD *)v33 && v20 == v31 )
            {
              v20 = *(_DWORD *)v33;
              v30 = *(_DWORD *)v33;
              v22 = 0;
              goto LABEL_15;
            }
            if ( (v40 & 0x400) == 0 && (v40 & 2) != 0 )
            {
              LODWORD(v40) = v40 | 0x400;
              goto LABEL_5;
            }
            return v4;
          }
        }
        _BitScanForward64(&v26, v21);
        v22 = v26 + v25;
        v17 ^= (unsigned __int8)(v17 ^ (v22 % *(&MiState + (HIWORD(v17) & 3) + 1120)));
        _bittestandreset64((__int64 *)&v21, (unsigned int)v26);
        v39 = v17;
        v27 = MiSetPageZeroInProgress(&v35);
        if ( v27 )
          return v27;
        v20 = v30;
        v18 = *(_QWORD **)&v33[4];
      }
    }
    return 0LL;
  }
  return result;
}
