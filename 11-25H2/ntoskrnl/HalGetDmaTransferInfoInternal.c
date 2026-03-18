/*
 * XREFs of HalGetDmaTransferInfoInternal @ 0x140333120
 * Callers:
 *     HalpBuildScatterGatherList @ 0x140332DE0 (HalpBuildScatterGatherList.c)
 *     HalGetDmaTransferInfo @ 0x1403330E0 (HalGetDmaTransferInfo.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140333410 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalGetDmaTransferInfoInternal(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6)
{
  _DWORD *v6; // r15
  __int64 *v7; // r10
  __int64 v9; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // ebp
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r11
  unsigned int v17; // eax
  int v18; // edx
  unsigned int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // r9
  __int64 *v24; // r14
  char v25; // r15
  __int64 v26; // r13
  unsigned int v27; // r10d
  int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  int v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+24h] [rbp-44h]
  __int64 *v33; // [rsp+78h] [rbp+10h]
  unsigned int v34; // [rsp+88h] [rbp+20h]
  unsigned __int8 v35; // [rsp+90h] [rbp+28h]

  v33 = a2;
  v6 = a6;
  v7 = a2;
  v9 = *a6;
  v32 = v9;
  if ( (unsigned int)v9 > 2 )
    return 3221225659LL;
  if ( !v7 )
    return 3221225485LL;
  while ( 1 )
  {
    v11 = *((unsigned int *)v7 + 10);
    if ( a3 < v11 )
      break;
    v7 = (__int64 *)*v7;
    a3 -= v11;
    v33 = v7;
    if ( !v7 )
      return 3221225485LL;
  }
  v12 = *(_DWORD *)(a1 + 448);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( v12 < 0x40 )
    v16 = ~((1LL << v12) - 1);
  if ( a4 )
  {
    v19 = a4;
    while ( 1 )
    {
      if ( !v7 )
      {
LABEL_34:
        v6 = a6;
        LODWORD(v9) = v32;
        goto LABEL_8;
      }
      LOBYTE(v9) = 0;
      v35 = 0;
      v20 = 0LL;
      v21 = v19;
      if ( *((_DWORD *)v7 + 10) - (int)a3 <= v19 )
        v21 = *((_DWORD *)v7 + 10) - a3;
      v22 = v21;
      v23 = ((_WORD)a3 + *((_WORD *)v7 + 22)) & 0xFFF;
      v19 -= v21;
      v34 = v19;
      v15 += ((unsigned __int64)v21 + v23 + 4095) >> 12;
      v24 = &v7[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)v7 + 11)) >> 12) + 6];
      v31 = v15;
      if ( v21 )
        break;
LABEL_33:
      v7 = (__int64 *)*v7;
      LODWORD(a3) = 0;
      v33 = v7;
      if ( !v19 )
        goto LABEL_34;
    }
    v25 = *(_BYTE *)(a1 + 442);
    while ( 1 )
    {
      v26 = (unsigned int)v23;
      v27 = v22;
      if ( 4096 - (int)v23 <= v22 )
        v27 = 4096 - v23;
      v28 = v13 + 1;
      if ( v25 )
        v28 = v13;
      v29 = *v24 << 12;
      v13 = v28;
      if ( (HalpDmaCvmConfiguration || *(_QWORD *)(a1 + 144) < v27 + v29 + (unsigned __int64)(unsigned int)v23 - 1)
        && *(_DWORD *)(a1 + 520) != 3 )
      {
        break;
      }
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v9 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v9, v29, v23) - 1;
        if ( (v9 & (v29 + v26)) != 0 || (v27 & (unsigned int)v9) != 0 )
          break;
        v9 = v35;
      }
      if ( !(_DWORD)v23
        && v29 == v20 + 1
        && ((v29 ^ v20) & v16) == 0
        && ((v29 ^ v20) & 0x100000000LL) == 0
        && !(_BYTE)v9 )
      {
        goto LABEL_31;
      }
      ++v14;
      LOBYTE(v9) = 0;
LABEL_30:
      v35 = v9;
LABEL_31:
      ++v24;
      v23 = 0LL;
      v20 = v29 + v26 + v27 - 1LL;
      v22 -= v27;
      if ( !v22 )
      {
        v7 = v33;
        v19 = v34;
        v15 = v31;
        goto LABEL_33;
      }
    }
    v30 = v13 + 1;
    ++v14;
    LOBYTE(v9) = 1;
    if ( !v25 )
      v30 = v13;
    v13 = v30;
    goto LABEL_30;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 442) || v14 == 1 && !v13 )
  {
    v17 = 24 * v14 + 208;
    if ( v17 < 0xA8 )
      v17 = 168;
  }
  else
  {
    v14 = 1;
    v13 = v15;
    v17 = 232;
  }
  v18 = v9 - 1;
  if ( !v18 )
    goto LABEL_12;
  if ( v18 == 1 )
  {
    v6[4] = v15;
LABEL_12:
    v6[1] = v13;
    v6[2] = v14;
    v6[3] = v17;
    return 0LL;
  }
  return 3221225659LL;
}
