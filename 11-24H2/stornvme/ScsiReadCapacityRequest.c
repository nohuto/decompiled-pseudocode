/*
 * XREFs of ScsiReadCapacityRequest @ 0x140001940
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeIsLunValid @ 0x140001AC0 (NVMeIsLunValid.c)
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  int *v7; // r14
  __int64 v8; // rbx
  unsigned __int8 v9; // cl
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // r12d
  unsigned __int64 v13; // rdi
  char IsLunValid; // al
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  int v19; // ecx
  __int64 v20; // r9
  unsigned int v21; // ecx
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  char i; // dl
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = (int *)(a2 + 60);
    v8 = *(_QWORD *)(a2 + 64);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v7 = (int *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = v9;
  v11 = *(_QWORD *)(a1 + 8LL * v9 + 1672);
  v12 = *(_DWORD *)(v11 + 52);
  v13 = *(_QWORD *)(v11 + 56) - 1LL;
  v29 = v13;
  IsLunValid = NVMeIsLunValid(a1, v9);
  v17 = 0LL;
  if ( !IsLunValid )
  {
    v13 = 0LL;
    v29 = 0LL;
  }
  if ( (unsigned int)*v7 >= 8 && (a4 != 16 || (unsigned int)*v7 >= 0xC) && v8 )
  {
    if ( a4 != 16 || *a3 != 0x9E )
    {
      *(_BYTE *)(v8 + 6) = BYTE1(v12);
      *(_BYTE *)(v8 + 5) = BYTE2(v12);
      *(_BYTE *)(v8 + 4) = HIBYTE(v12);
      *(_BYTE *)(v8 + 7) = v12;
      if ( v13 >= 0xFFFFFFFF )
      {
        *(_DWORD *)v8 = -1;
      }
      else
      {
        *(_BYTE *)(v8 + 3) = v13;
        *(_BYTE *)(v8 + 2) = BYTE1(v13);
        *(_BYTE *)v8 = BYTE3(v13);
        *(_BYTE *)(v8 + 1) = BYTE2(v13);
      }
      *v7 = 8;
      goto LABEL_12;
    }
    if ( (a3[1] & 0x1F) != 0x10 )
    {
      LOBYTE(v16) = 32;
      LOBYTE(v17) = 5;
      LOBYTE(v15) = 6;
      NVMeSetSenseData(a2, v15, v17, v16);
      LODWORD(v17) = -1056964601;
      return (unsigned int)v17;
    }
    v19 = 12;
    *(_BYTE *)(v8 + 6) = BYTE1(v29);
    *(_BYTE *)(v8 + 5) = BYTE2(v29);
    *(_BYTE *)(v8 + 4) = BYTE3(v29);
    *(_BYTE *)(v8 + 3) = BYTE4(v29);
    *(_BYTE *)(v8 + 2) = BYTE5(v29);
    *(_BYTE *)(v8 + 1) = BYTE6(v29);
    *(_BYTE *)v8 = HIBYTE(v29);
    *(_BYTE *)(v8 + 10) = BYTE1(v12);
    *(_BYTE *)(v8 + 9) = BYTE2(v12);
    *(_BYTE *)(v8 + 8) = HIBYTE(v12);
    *(_BYTE *)(v8 + 7) = v13;
    *(_BYTE *)(v8 + 11) = v12;
    if ( (unsigned int)*v7 < 0x10 )
    {
LABEL_42:
      *v7 = v19;
LABEL_12:
      *(_BYTE *)(a2 + 3) = 1;
      return (unsigned int)v17;
    }
    *(_BYTE *)(v8 + 12) &= 0xF0u;
    v20 = *(_QWORD *)(a1 + 8 * v10 + 1672);
    v21 = *(_DWORD *)(v20 + 104);
    if ( !v21 && !*(_DWORD *)(a1 + 144) )
    {
      v22 = *(_BYTE *)(v8 + 13);
      if ( *(_DWORD *)(v20 + 52) == 512 )
        *(_BYTE *)(v8 + 13) = v22 & 0xF0 | 3;
      else
        *(_BYTE *)(v8 + 13) = v22 & 0xF0;
LABEL_40:
      *(_BYTE *)(v8 + 14) &= 0xC0u;
      *(_BYTE *)(v8 + 15) = 0;
      v19 = 16;
      *(_BYTE *)(v8 + 14) = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1672) + 65LL) << 7;
      if ( (unsigned int)*v7 >= 0x20 )
        v19 = 32;
      goto LABEL_42;
    }
    v23 = *(_DWORD *)(a1 + 144);
    if ( v21 )
    {
      if ( v23 && v21 >= v23 )
        v21 = *(_DWORD *)(a1 + 144);
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 144);
      if ( !v23 )
      {
        v26 = 1;
LABEL_33:
        v27 = v26 / *(_DWORD *)(v20 + 52);
        if ( v27 )
        {
          for ( i = 0; v27 > 1; ++i )
            v27 >>= 1;
          *(_BYTE *)(v8 + 13) ^= (i ^ *(_BYTE *)(v8 + 13)) & 0xF;
        }
        else
        {
          *(_BYTE *)(v8 + 13) &= 0xF0u;
        }
        goto LABEL_40;
      }
    }
    v24 = ((((v21 - 1) >> 1) | (v21 - 1)) >> 2) | ((v21 - 1) >> 1) | (v21 - 1);
    v25 = (((v24 >> 4) | v24) >> 8) | (v24 >> 4) | v24;
    v26 = (v25 | HIWORD(v25)) + 1;
    goto LABEL_33;
  }
  LOBYTE(v16) = 36;
  LOBYTE(v17) = 5;
  LOBYTE(v15) = 6;
  NVMeSetSenseData(a2, v15, v17, v16);
  return 3238002692LL;
}
