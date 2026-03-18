/*
 * XREFs of MiGetBestPageToZero @ 0x140432590
 * Callers:
 *     MiGetSinglePageToZero @ 0x140210180 (MiGetSinglePageToZero.c)
 * Callees:
 *     MiSetPageZeroInProgress @ 0x1404328F0 (MiSetPageZeroInProgress.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  _QWORD *v18; // r8
  unsigned __int64 v19; // r12
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned int v22; // r10d
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned int v25; // r15d
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // ecx
  char v29; // al
  unsigned int v30; // [rsp+20h] [rbp-B8h]
  unsigned int v31; // [rsp+24h] [rbp-B4h]
  char v32; // [rsp+28h] [rbp-B0h]
  unsigned int v33; // [rsp+2Ch] [rbp-ACh]
  _QWORD *v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+40h] [rbp-98h] BYREF
  __int64 v37; // [rsp+48h] [rbp-90h]
  __int64 *v38; // [rsp+50h] [rbp-88h]
  int v39; // [rsp+58h] [rbp-80h]
  unsigned int v40; // [rsp+5Ch] [rbp-7Ch]
  __int64 v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  _OWORD v43[2]; // [rsp+70h] [rbp-68h] BYREF

  v42 = a1;
  v4 = 0LL;
  v36 = a2;
  v37 = 0LL;
  v41 = 0LL;
  v5 = (a3 >> 18) & 3;
  v39 = 1;
  v40 = a3;
  v38 = &MiFreeThenFree;
  result = MiSetPageZeroInProgress(&v36);
  if ( !result )
  {
    v8 = (a3 >> 15) & 1;
    v9 = a2 + 1280LL * (HIWORD(a3) & 3);
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v10 = (a3 >> 8) & 1;
    else
      v10 = 0LL;
    v37 = *(_QWORD *)(a2 + 8 * (v5 + 4 * (v10 + 4 * (v8 + 10LL * (HIWORD(a3) & 3)))) + 1056);
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
      v17 = v40;
      v18 = 0LL;
      v19 = 0LL;
      v33 = (unsigned __int8)v40;
      v32 = v41;
      v34 = 0LL;
      v20 = (unsigned __int8)v40;
      v31 = *(&MiState + (HIWORD(v40) & 3) + 1120);
      v21 = 0LL;
      v35 = 0LL;
      v22 = v31;
      v30 = v31;
      if ( (v41 & 0x40) != 0 )
      {
        v28 = v40 & 0xF;
        do
        {
          v29 = v28;
          v28 += 16;
          v21 |= 1LL << (v29 & 0x3F);
        }
        while ( v28 < 0x40 && v28 < *(&MiState + (HIWORD(v40) & 3) + 1120) );
        v35 = v21;
      }
LABEL_15:
      while ( 1 )
      {
        v23 = *(_QWORD *)(v11 + v9 + 152);
        while ( 1 )
        {
          v24 = (unsigned __int64)v20 >> 6;
          if ( v18 != (_QWORD *)(v23 + 8 * v24) )
          {
            v18 = (_QWORD *)(v23 + 8 * v24);
            v34 = v18;
            v19 = *v18 & ~((1LL << (v20 & 0x3F)) - 1);
            if ( (v32 & 0x40) != 0 )
              v19 &= ~v35;
            if ( ((v20 ^ (unsigned __int64)v22) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
              v19 &= (1LL << (v22 & 0x3F)) - 1;
          }
          v25 = v20 & 0xFFFFFFC0;
          if ( v19 )
            break;
          v20 = v25 + 64;
          if ( v20 >= v22 )
          {
            v18 = 0LL;
            v34 = 0LL;
            if ( v33 && v22 == v31 )
            {
              v22 = v33;
              v30 = v33;
              v20 = 0;
              goto LABEL_15;
            }
            if ( (v41 & 0x400) == 0 && (v41 & 2) != 0 )
            {
              LODWORD(v41) = v41 | 0x400;
              goto LABEL_5;
            }
            return v4;
          }
        }
        _BitScanForward64(&v26, v19);
        v20 = v26 + v25;
        v17 ^= (unsigned __int8)(v17 ^ (v20 % *(&MiState + (HIWORD(v17) & 3) + 1120)));
        _bittestandreset64((__int64 *)&v19, (unsigned int)v26);
        v40 = v17;
        v27 = MiSetPageZeroInProgress(&v36);
        if ( v27 )
          return v27;
        v18 = v34;
        v22 = v30;
      }
    }
    return 0LL;
  }
  return result;
}
