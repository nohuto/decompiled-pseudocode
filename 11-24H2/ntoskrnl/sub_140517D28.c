/*
 * XREFs of sub_140517D28 @ 0x140517D28
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

char __fastcall sub_140517D28(__int64 a1, int *a2)
{
  unsigned __int64 j; // rax
  _QWORD *v5; // r11
  __int64 v6; // r8
  _QWORD *v7; // r9
  const char *v8; // rax
  int v9; // r10d
  __int64 v10; // rbp
  unsigned int v11; // esi
  unsigned __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // r8
  BOOL v22; // esi
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r8
  _QWORD *v36; // r9
  unsigned __int64 v37; // r11
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned int v41; // edx
  _BYTE *v42; // r8
  char *v43; // r9
  __int64 v44; // rcx
  char v45; // cl
  _DWORD *v46; // rdi
  int v47; // r13d
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rbp
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // r12
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r8
  __int64 *v58; // rdx
  unsigned __int64 v59; // r9
  __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rax
  _BYTE v64[72]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+78h] [rbp+10h]
  unsigned __int8 v66; // [rsp+78h] [rbp+10h]
  __int64 v67; // [rsp+80h] [rbp+18h]

  LODWORD(j) = a2[10];
  if ( (j & 4) != 0 )
    return j;
  v5 = (_QWORD *)*((_QWORD *)a2 + 1);
  v6 = (unsigned int)a2[4];
  v7 = v5;
  *(_DWORD *)(a1 + 2120) += v6;
  v8 = (const char *)v5;
  v9 = *(_DWORD *)(a1 + 2100);
  v10 = *(_QWORD *)(a1 + 2104);
  if ( v5 < (_QWORD *)((char *)v5 + v6) )
  {
    do
    {
      _mm_prefetch(v8, 0);
      v8 += 64;
    }
    while ( v8 < (const char *)v5 + v6 );
  }
  v11 = (unsigned int)v6 >> 7;
  for ( i = *(_QWORD *)(a1 + 2104); v11; --v11 )
  {
    v13 = 8LL;
    do
    {
      v14 = v7[1] ^ __ROL8__(*v7 ^ i, v9);
      v7 += 2;
      i = __ROL8__(v14, v9);
      --v13;
    }
    while ( v13 );
    v15 = __ROL8__(v10 ^ ((char *)v7 - (char *)v5), 17);
    LOBYTE(v15) = v9 ^ (((v15 ^ v10 ^ (unsigned __int64)((char *)v7 - (char *)v5))
                       * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v15 ^ v10 ^ ((_BYTE)v7 - (_BYTE)v5);
    LOBYTE(v9) = 1;
    v16 = v15 & 0x3F;
    if ( v16 )
      LOBYTE(v9) = v16;
  }
  v17 = v6 & 0x7F;
  if ( v17 >= 8 )
  {
    v18 = (unsigned __int64)v17 >> 3;
    do
    {
      i = __ROL8__(*v7++ ^ i, v9);
      v17 -= 8;
      --v18;
    }
    while ( v18 );
  }
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v7;
    v7 = (_QWORD *)((char *)v7 + 1);
    i = __ROL8__(v19 ^ i, v9);
  }
  for ( j = i; ; LODWORD(i) = j ^ i )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  v20 = i & 0x7FFFFFFF;
  v21 = 2LL;
  v22 = 0;
  v23 = 0xA3A03F5891C8B4E8uLL;
  if ( v20 != a2[5] )
  {
    if ( !*a2 )
      v22 = a2[6] != 0;
    v24 = (unsigned int)a2[4];
    v25 = *((_QWORD *)a2 + 1);
    if ( a2[4] && (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v26 = v25 & 0xFFFFFFFFFFFFF000uLL;
      v27 = (v25 + v24 - 1) | 0xFFF;
      v28 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(a1 + 1128))(
                  v26,
                  0LL,
                  v21,
                  v23);
          if ( v29 == -1073741267 )
            break;
          if ( v29 < 0 )
          {
LABEL_31:
            __writecr8(CurrentIrql);
            goto LABEL_32;
          }
LABEL_29:
          LOBYTE(j) = 0;
          v26 += 4096LL;
          v28 += 4096LL;
          if ( v28 == v27 )
          {
            __writecr8(CurrentIrql);
            goto LABEL_45;
          }
        }
        if ( v22 )
          goto LABEL_31;
        if ( CurrentIrql > 1u )
          goto LABEL_29;
        __writecr8(CurrentIrql);
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
    }
LABEL_32:
    LODWORD(j) = a2[5];
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      v30 = v20 ^ (unsigned __int64)(unsigned int)j;
      j = *(_QWORD *)(a1 + 1416);
      *(_QWORD *)(j + 24) = v30;
    }
    v31 = *((_QWORD *)a2 + 1);
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
      j = *a2;
      *(_QWORD *)(a1 + 2352) = j;
      *(_QWORD *)(a1 + 2360) = v31;
      v32 = *(_DWORD *)(a1 + 2520);
      *(_DWORD *)(a1 + 2328) = 1;
      if ( (v32 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v32 & 1) != 0 )
      {
        v33 = *(unsigned int *)(a1 + 2676);
        v34 = *(_QWORD *)(a1 + 2104);
        LODWORD(j) = *(_DWORD *)(a1 + 2052) - v33;
        v35 = *(_QWORD *)(a1 + 2680);
        v36 = (_QWORD *)(v33 + a1);
        v37 = v33 + a1 + 8 * ((unsigned __int64)(unsigned int)j >> 3);
        while ( v36 != (_QWORD *)v37 )
        {
          *v36 ^= v35;
          j = v34 ^ *v36;
          v35 = (j + __ROR8__(v35, v35 & 0x3F)) ^ 0xEFA;
          ++v36;
        }
        *(_DWORD *)(a1 + 2524) &= ~0x200000u;
        if ( v35 != *(_QWORD *)(a1 + 2688) )
        {
          v38 = *(_DWORD *)(a1 + 2052);
          v39 = *(_QWORD *)(a1 + 1416);
          *(_QWORD *)v39 = a1;
          *(_DWORD *)(v39 + 16) = v38;
          if ( !*(_DWORD *)(a1 + 2328) )
            *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v35 ^ *(_QWORD *)(a1 + 2688);
          LOBYTE(j) = sub_140BDA384(a1, 0LL, v35, 256LL);
        }
      }
    }
  }
LABEL_45:
  v40 = (unsigned int)a2[4];
  if ( !(_DWORD)v40 )
    return j;
  sub_140516B3C(a1, *((_QWORD *)a2 + 1), v40, (__int64)v64);
  v41 = 16;
  v42 = a2 + 6;
  v43 = v64;
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    v43 += 8;
    j = *(_QWORD *)v42;
    v42 += 8;
    if ( v44 != j )
      break;
    v41 -= 8;
    if ( v41 < 8 )
    {
      if ( !v41 )
        goto LABEL_74;
      while ( 1 )
      {
        v45 = *v43++;
        LOBYTE(j) = *v42++;
        if ( v45 != (_BYTE)j )
          goto LABEL_53;
        if ( !--v41 )
          goto LABEL_74;
      }
    }
  }
LABEL_53:
  v46 = (_DWORD *)(a1 + 2524);
  LODWORD(j) = *(_DWORD *)(a1 + 2524);
  v47 = a2[10] & 1;
  v48 = *((_QWORD *)a2 + 1);
  if ( (j & 0x40) == 0 )
    goto LABEL_63;
  v49 = KeGetCurrentIrql();
  v66 = v49;
  __writecr8(2uLL);
  v50 = (unsigned __int8)v49;
  v51 = v48 & 0xFFFFFFFFFFFFF000uLL;
  v67 = (v40 + v48 - 1) | 0xFFF;
  v52 = (v48 & 0xFFFFFFFFFFFFF000uLL) - 1;
  while ( 1 )
  {
    LODWORD(j) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(a1 + 1128))(v51, 0LL, v49, v43);
    if ( (_DWORD)j != -1073741267 )
      break;
    if ( v47 )
      goto LABEL_62;
    if ( v66 > 1u )
    {
LABEL_60:
      LOBYTE(j) = 0;
      v51 += 4096LL;
      v52 += 4096LL;
      if ( v52 == v67 )
      {
        __writecr8(v50);
        goto LABEL_74;
      }
    }
    else
    {
      __writecr8(v50);
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  if ( (j & 0x80000000) == 0LL )
    goto LABEL_60;
LABEL_62:
  __writecr8(v50);
LABEL_63:
  v53 = *((_QWORD *)a2 + 1);
  if ( !*(_DWORD *)(a1 + 2328) )
  {
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2344) = (char *)a2 - 0x4C48B4211BBACBEBLL;
    j = *a2;
    *(_QWORD *)(a1 + 2352) = j;
    *(_QWORD *)(a1 + 2360) = v53;
    v54 = *(_DWORD *)(a1 + 2520);
    *(_DWORD *)(a1 + 2328) = 1;
    if ( (v54 & 0x20000000) == 0 && (*v46 & 0x200000) != 0 && (v54 & 1) != 0 )
    {
      v55 = *(unsigned int *)(a1 + 2676);
      v56 = *(_QWORD *)(a1 + 2104);
      LODWORD(j) = *(_DWORD *)(a1 + 2052) - v55;
      v57 = *(_QWORD *)(a1 + 2680);
      v58 = (__int64 *)(v55 + a1);
      v59 = v55 + a1 + 8 * ((unsigned __int64)(unsigned int)j >> 3);
      if ( v55 + a1 != v59 )
      {
        do
        {
          *v58 ^= v57;
          v60 = *v58++;
          j = v56 ^ v60;
          v57 = (j + __ROR8__(v57, v57 & 0x3F)) ^ 0xEFA;
        }
        while ( v58 != (__int64 *)v59 );
        v46 = (_DWORD *)(a1 + 2524);
      }
      *v46 &= ~0x200000u;
      if ( v57 != *(_QWORD *)(a1 + 2688) )
      {
        v61 = *(_DWORD *)(a1 + 2052);
        v62 = *(_QWORD *)(a1 + 1416);
        *(_QWORD *)v62 = a1;
        *(_DWORD *)(v62 + 16) = v61;
        if ( !*(_DWORD *)(a1 + 2328) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v57 ^ *(_QWORD *)(a1 + 2688);
        LOBYTE(j) = sub_140BDA384(a1, 0LL, v57, 256LL);
      }
    }
  }
LABEL_74:
  *(_DWORD *)(a1 + 2120) += 16 * v40;
  return j;
}
