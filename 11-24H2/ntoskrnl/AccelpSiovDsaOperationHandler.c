/*
 * XREFs of AccelpSiovDsaOperationHandler @ 0x140402E10
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x140402CBC (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     DsaValidateDescriptorFlags @ 0x140402FF0 (DsaValidateDescriptorFlags.c)
 *     IaaBuildDescriptorCommon @ 0x140473A54 (IaaBuildDescriptorCommon.c)
 *     AccelBuildDescriptorNop @ 0x140663F40 (AccelBuildDescriptorNop.c)
 *     AccelpSiovUpdateStatsOnWorkCompletion @ 0x1406652E0 (AccelpSiovUpdateStatsOnWorkCompletion.c)
 */

__int64 __fastcall AccelpSiovDsaOperationHandler(int *a1, unsigned int *a2)
{
  __int64 v2; // r10
  int v4; // ecx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // ecx
  _BYTE *v9; // r8
  __int64 result; // rax
  int v11; // ecx
  int v12; // ecx
  int *v13; // rdx
  int v14; // r10d
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // r14
  char v18; // r9
  int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r10
  int v29; // r11d
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // r11
  __int64 v37; // r10

  v2 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v5 = 33;
  v6 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v6 + 192);
  if ( !v4 )
  {
    *a2 = 64;
    a2[1] = 32;
    a2[2] = 32;
    if ( a2 != (unsigned int *)-12LL )
      a2[3] = 64;
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
  }
  v8 = v4 - 3;
  if ( v8 )
  {
    v11 = v8 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v13 = (int *)*((_QWORD *)a1 + 3);
        v5 = 4;
        v14 = a1[4];
        v15 = *((_QWORD *)a1 + 8);
        v16 = *((_QWORD *)a1 + 7);
        v17 = *((_QWORD *)a1 + 6);
        v18 = *((_BYTE *)v13 + 4) | 0xC;
        *((_QWORD *)v13 + 1) = *((_QWORD *)a1 + 4);
        v19 = *v13;
        v20 = (v14 ^ *v13) & 0xFFFFF;
        *((_BYTE *)v13 + 7) = 4;
        v21 = v19 ^ v20;
        *((_BYTE *)v13 + 4) = v18;
        if ( (v7 & 0x80u) != 0LL )
          *((_BYTE *)v13 + 4) = v18 | 2;
        if ( (v7 & 0x400) != 0 )
          *((_BYTE *)v13 + 5) |= 1u;
        *((_QWORD *)v13 + 3) = v17;
        v13[8] = v16;
        *((_QWORD *)v13 + 2) = v15;
        *v13 = v14 ^ (v14 ^ v21) & 0x7FFFFFFF;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
      v23 = v12 - 1;
      if ( !v23 )
      {
        v34 = *((_QWORD *)a1 + 8);
        v35 = *((_QWORD *)a1 + 7);
        IaaBuildDescriptorCommon(
          3,
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 4),
          (unsigned int)a1[4] >> 31,
          a1[4] & 0xFFFFF,
          (unsigned __int8)*(_QWORD *)(v6 + 192) >> 7,
          (*(_QWORD *)(v6 + 192) & 0x400LL) != 0);
        *(_QWORD *)(v36 + 24) = v35;
        v5 = 3;
        *(_QWORD *)(v36 + 16) = v37;
        *(_DWORD *)(v36 + 32) = v34;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        v30 = *((_QWORD *)a1 + 8);
        IaaBuildDescriptorCommon(
          5,
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 4),
          (unsigned int)a1[4] >> 31,
          a1[4] & 0xFFFFF,
          (unsigned __int8)v7 >> 7,
          0);
        *(_DWORD *)(v31 + 32) = v30;
        v5 = 5;
        *(_QWORD *)(v31 + 16) = v32;
        *(_QWORD *)(v31 + 24) = v33;
        *(_BYTE *)(v31 + 40) = 1;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        IaaBuildDescriptorCommon(
          0,
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 4),
          (unsigned int)a1[4] >> 31,
          a1[4] & 0xFFFFF,
          0,
          0);
        v5 = 0;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
      if ( v25 == 1 )
      {
        v26 = *((_QWORD *)a1 + 6);
        if ( *(_DWORD *)(v26 + 32) < 2u )
          return 3221225473LL;
        if ( *((_QWORD *)a1 + 8) == 1LL )
        {
          *((_QWORD *)a1 + 8) = 2LL;
          result = AccelBuildDescriptorNop(*(_QWORD *)(v26 + 40) + 40LL);
          if ( (int)result < 0 )
            return result;
        }
        IaaBuildDescriptorCommon(
          1,
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 4),
          (unsigned int)a1[4] >> 31,
          a1[4] & 0xFFFFF,
          0,
          0);
        *(_QWORD *)(v27 + 16) = v28;
        v5 = 1;
        *(_DWORD *)(v27 + 32) = v29;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
    }
    else if ( (*(_BYTE *)(v6 + 216) & 1) != 0 )
    {
      v22 = a1[12];
      if ( v22 <= *(_DWORD *)(v6 + 224) )
      {
        *a2 = v22;
        if ( a1[12] == 1 )
          *a2 = 2;
        return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
      }
    }
    return 3221225659LL;
  }
  v9 = (_BYTE *)*((_QWORD *)a1 + 4);
  if ( (*v9 & 0x3F) == 0 )
    return 259LL;
  if ( (*v9 & 0x3F) != 1 )
    return 3221225473LL;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 3) + 7LL) == 5 )
    result = v9[1] != 0 ? 0xC0000001 : 0;
  else
    result = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 16) + 152LL) & 1) != 0 )
      AccelpSiovUpdateStatsOnWorkCompletion(v2, *((_QWORD *)a1 + 3));
    return DsaValidateDescriptorFlags(v5, *((_QWORD *)a1 + 3), *((_QWORD *)a1 + 5));
  }
  return result;
}
