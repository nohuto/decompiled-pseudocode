/*
 * XREFs of HalGetDmaTransferInfoInternal @ 0x1403867B0
 * Callers:
 *     HalpBuildScatterGatherList @ 0x140386448 (HalpBuildScatterGatherList.c)
 *     HalGetDmaTransferInfo @ 0x140386770 (HalGetDmaTransferInfo.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalGetDmaTransferInfoInternal(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  __int64 *v7; // r10
  int v9; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // ebp
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r11
  unsigned int v17; // eax
  int v18; // edx
  unsigned int v19; // r15d
  char v20; // dl
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // r9d
  __int64 *v25; // r14
  char v26; // r15
  __int64 v27; // r13
  unsigned int v28; // r10d
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  int v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+24h] [rbp-44h]
  __int64 *v35; // [rsp+78h] [rbp+10h]
  unsigned int v36; // [rsp+88h] [rbp+20h]
  char v37; // [rsp+90h] [rbp+28h]

  v35 = a2;
  v6 = a6;
  v7 = a2;
  v9 = *a6;
  v34 = *a6;
  if ( *a6 > 2u )
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
    v35 = v7;
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
        v9 = v34;
        goto LABEL_8;
      }
      v20 = 0;
      v37 = 0;
      v21 = 0LL;
      v22 = v19;
      if ( *((_DWORD *)v7 + 10) - (int)a3 <= v19 )
        v22 = *((_DWORD *)v7 + 10) - a3;
      v23 = v22;
      v24 = ((_WORD)a3 + *((_WORD *)v7 + 22)) & 0xFFF;
      v19 -= v22;
      v36 = v19;
      v15 += (v22 + (unsigned __int64)(((_WORD)a3 + *((_WORD *)v7 + 22)) & 0xFFF) + 4095) >> 12;
      v25 = &v7[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)v7 + 11)) >> 12) + 6];
      v33 = v15;
      if ( v22 )
        break;
LABEL_33:
      v7 = (__int64 *)*v7;
      LODWORD(a3) = 0;
      v35 = v7;
      if ( !v19 )
        goto LABEL_34;
    }
    v26 = *(_BYTE *)(a1 + 442);
    while ( 1 )
    {
      v27 = v24;
      v28 = v23;
      if ( 4096 - v24 <= v23 )
        v28 = 4096 - v24;
      v29 = v13 + 1;
      if ( v26 )
        v29 = v13;
      v30 = *v25 << 12;
      v13 = v29;
      if ( (HalpDmaCvmConfiguration || *(_QWORD *)(a1 + 144) < v28 + v30 + (unsigned __int64)v24 - 1)
        && *(_DWORD *)(a1 + 520) != 3 )
      {
        break;
      }
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v31 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v31 & (v30 + v27)) != 0 || (v28 & (unsigned int)v31) != 0 )
          break;
        v20 = v37;
      }
      if ( !v24 && v30 == v21 + 1 && ((v30 ^ v21) & v16) == 0 && ((v30 ^ v21) & 0x100000000LL) == 0 && !v20 )
        goto LABEL_31;
      ++v14;
      v20 = 0;
LABEL_30:
      v37 = v20;
LABEL_31:
      ++v25;
      v24 = 0;
      v21 = v30 + v27 + v28 - 1LL;
      v23 -= v28;
      if ( !v23 )
      {
        v7 = v35;
        v19 = v36;
        v15 = v33;
        goto LABEL_33;
      }
    }
    v32 = v13 + 1;
    ++v14;
    v20 = 1;
    if ( !v26 )
      v32 = v13;
    v13 = v32;
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
