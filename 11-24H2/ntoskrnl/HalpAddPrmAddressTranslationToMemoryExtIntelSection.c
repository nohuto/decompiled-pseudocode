/*
 * XREFs of HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x140540A58
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C958 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     WheaPrmTranslatePhysicalAddress @ 0x14065CD60 (WheaPrmTranslatePhysicalAddress.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpAddPrmAddressTranslationToMemoryExtIntelSection(__int64 a1, __int64 *a2)
{
  int v4; // r9d
  char v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[12]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+2Ch] [rbp-D4h]
  __int64 v21; // [rsp+34h] [rbp-CCh]
  __int64 v22; // [rsp+3Ch] [rbp-C4h]
  __int64 v23; // [rsp+44h] [rbp-BCh]
  __int64 v24; // [rsp+4Ch] [rbp-B4h]
  __int64 v25; // [rsp+54h] [rbp-ACh]
  __int64 v26; // [rsp+5Ch] [rbp-A4h]
  __int64 v27; // [rsp+64h] [rbp-9Ch]
  __int64 v28; // [rsp+6Ch] [rbp-94h]
  __int64 v29; // [rsp+74h] [rbp-8Ch]
  __int64 v30; // [rsp+7Ch] [rbp-84h]
  __int64 v31; // [rsp+84h] [rbp-7Ch]
  __int64 v32; // [rsp+8Ch] [rbp-74h]
  __int64 v33; // [rsp+94h] [rbp-6Ch]
  __int64 v34; // [rsp+9Ch] [rbp-64h]
  __int64 v35; // [rsp+A4h] [rbp-5Ch]
  __int64 v36; // [rsp+ACh] [rbp-54h]
  __int64 v37; // [rsp+B4h] [rbp-4Ch]
  __int64 v38; // [rsp+BCh] [rbp-44h]
  __int64 v39; // [rsp+C4h] [rbp-3Ch]
  __int64 v40; // [rsp+CCh] [rbp-34h]
  __int64 v41; // [rsp+D4h] [rbp-2Ch]
  __int64 v42; // [rsp+DCh] [rbp-24h]
  __int64 v43; // [rsp+E4h] [rbp-1Ch]
  __int64 v44; // [rsp+ECh] [rbp-14h]
  __int64 v45; // [rsp+F4h] [rbp-Ch]
  __int64 v46; // [rsp+FCh] [rbp-4h]
  __int64 v47; // [rsp+104h] [rbp+4h]
  __int64 v48; // [rsp+10Ch] [rbp+Ch]
  __int64 v49; // [rsp+114h] [rbp+14h]
  __int64 v50; // [rsp+11Ch] [rbp+1Ch]
  __int64 v51; // [rsp+124h] [rbp+24h]
  __int64 v52; // [rsp+12Ch] [rbp+2Ch]
  __int64 v53; // [rsp+134h] [rbp+34h]
  __int64 v54; // [rsp+13Ch] [rbp+3Ch]
  __int64 v55; // [rsp+144h] [rbp+44h]
  __int64 v56; // [rsp+14Ch] [rbp+4Ch]

  memset_0(v19, 0, 0x134uLL);
  v4 = WheaPrmTranslatePhysicalAddress(a1, v19);
  if ( v4 >= 0 )
  {
    v5 = v25;
    if ( v25 == -1 )
    {
      v12 = v26;
      if ( v26 == -1 )
      {
        v16 = *a2;
        v4 = -1073741823;
        goto LABEL_80;
      }
      v13 = v21;
      v7 = a2 + 1;
      v14 = a2[1] | 1;
      *((_DWORD *)a2 + 4) = 2;
      if ( v13 != -1 )
      {
        *(__int64 *)((char *)a2 + 20) = v13;
        v14 |= 2uLL;
      }
      if ( v30 != -1 )
      {
        *(__int64 *)((char *)a2 + 44) = v30;
        v14 |= 0x10uLL;
      }
      if ( v34 != -1 )
      {
        *(__int64 *)((char *)a2 + 52) = v34;
        v14 |= 0x20uLL;
      }
      v15 = v32;
      v10 = v14 | 0x80;
      *v7 = v10;
      *((_BYTE *)a2 + 61) = v12;
      if ( v15 != -1 )
      {
        v10 |= 0x400uLL;
        *((_BYTE *)a2 + 64) = v15;
        *v7 = v10;
      }
      if ( v36 != -1 )
      {
        v10 |= 0x1000uLL;
        *((_BYTE *)a2 + 66) = v36;
        *v7 = v10;
      }
      if ( v38 != -1 )
      {
        v10 |= 0x2000uLL;
        *((_BYTE *)a2 + 67) = v38;
        *v7 = v10;
      }
      if ( v45 != -1 )
      {
        v10 |= 0x8000uLL;
        *((_BYTE *)a2 + 69) = v45;
        *v7 = v10;
      }
      if ( v47 != -1 )
      {
        v10 |= 0x10000uLL;
        *((_BYTE *)a2 + 70) = v47;
        *v7 = v10;
      }
      if ( v41 != -1 )
      {
        v10 |= 0x20000uLL;
        *(_DWORD *)((char *)a2 + 71) = v41;
        *v7 = v10;
      }
      if ( v43 != -1 )
      {
        v10 |= 0x40000uLL;
        *(_DWORD *)((char *)a2 + 75) = v43;
        *v7 = v10;
      }
      if ( v53 != -1 )
      {
        v10 |= 0x800000uLL;
        *((_BYTE *)a2 + 83) = v53;
        *v7 = v10;
      }
      v11 = v56;
    }
    else
    {
      v6 = v20;
      v7 = a2 + 1;
      v8 = a2[1] | 1;
      *((_DWORD *)a2 + 4) = 1;
      if ( v6 != -1 )
      {
        *(__int64 *)((char *)a2 + 20) = v6;
        v8 |= 2uLL;
      }
      if ( v29 != -1 )
      {
        *(__int64 *)((char *)a2 + 44) = v29;
        v8 |= 0x10uLL;
      }
      if ( v33 != -1 )
      {
        *(__int64 *)((char *)a2 + 52) = v33;
        v8 |= 0x20uLL;
      }
      v9 = v31;
      v10 = v8 | 0x80;
      *v7 = v10;
      *((_BYTE *)a2 + 61) = v5;
      if ( v9 != -1 )
      {
        v10 |= 0x400uLL;
        *((_BYTE *)a2 + 64) = v9;
        *v7 = v10;
      }
      if ( v35 != -1 )
      {
        v10 |= 0x1000uLL;
        *((_BYTE *)a2 + 66) = v35;
        *v7 = v10;
      }
      if ( v37 != -1 )
      {
        v10 |= 0x2000uLL;
        *((_BYTE *)a2 + 67) = v37;
        *v7 = v10;
      }
      if ( v44 != -1 )
      {
        v10 |= 0x8000uLL;
        *((_BYTE *)a2 + 69) = v44;
        *v7 = v10;
      }
      if ( v46 != -1 )
      {
        v10 |= 0x10000uLL;
        *((_BYTE *)a2 + 70) = v46;
        *v7 = v10;
      }
      if ( v40 != -1 )
      {
        v10 |= 0x20000uLL;
        *(_DWORD *)((char *)a2 + 71) = v40;
        *v7 = v10;
      }
      if ( v42 != -1 )
      {
        v10 |= 0x40000uLL;
        *(_DWORD *)((char *)a2 + 75) = v42;
        *v7 = v10;
      }
      if ( v52 != -1 )
      {
        v10 |= 0x800000uLL;
        *((_BYTE *)a2 + 83) = v52;
        *v7 = v10;
      }
      v11 = v55;
    }
    if ( v11 != -1 )
    {
      v10 |= 0x2000000uLL;
      *((_BYTE *)a2 + 85) = v11;
      *v7 = v10;
    }
    if ( v22 != -1 )
    {
      v10 |= 4uLL;
      *(__int64 *)((char *)a2 + 28) = v22;
      *v7 = v10;
    }
    if ( v23 != -1 )
    {
      v10 |= 8uLL;
      *(__int64 *)((char *)a2 + 36) = v23;
      *v7 = v10;
    }
    if ( v24 != -1 )
    {
      v10 |= 0x40uLL;
      *((_BYTE *)a2 + 60) = v24;
      *v7 = v10;
    }
    if ( v27 != -1 )
    {
      v10 |= 0x100uLL;
      *((_BYTE *)a2 + 62) = v27;
      *v7 = v10;
    }
    if ( v28 != -1 )
    {
      v10 |= 0x200uLL;
      *((_BYTE *)a2 + 63) = v28;
      *v7 = v10;
    }
    if ( v39 != -1 )
    {
      v10 |= 0x4000uLL;
      *((_BYTE *)a2 + 68) = v39;
      *v7 = v10;
    }
    if ( v48 != -1 )
    {
      v10 |= 0x80000uLL;
      *((_BYTE *)a2 + 79) = v48;
      *v7 = v10;
    }
    if ( v49 != -1 )
    {
      v10 |= 0x100000uLL;
      *((_BYTE *)a2 + 80) = v49;
      *v7 = v10;
    }
    if ( v50 != -1 )
    {
      v10 |= 0x200000uLL;
      *((_BYTE *)a2 + 81) = v50;
      *v7 = v10;
    }
    if ( v51 != -1 )
    {
      v10 |= 0x400000uLL;
      *((_BYTE *)a2 + 82) = v51;
      *v7 = v10;
    }
    if ( v54 != -1 )
    {
      *((_BYTE *)a2 + 84) = v54;
      *v7 = v10 | 0x1000000;
      v16 = *a2;
      goto LABEL_74;
    }
  }
  v16 = *a2;
  if ( v4 == -1073741637 )
  {
    v17 = v16 | 4;
    goto LABEL_75;
  }
  if ( v4 < 0 )
  {
LABEL_80:
    v17 = v16 | 2;
    goto LABEL_75;
  }
LABEL_74:
  v17 = v16 | 1;
LABEL_75:
  *a2 = v17;
  return (unsigned int)v4;
}
