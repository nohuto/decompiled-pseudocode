/*
 * XREFs of HalpInitializeConfigurationFromMadt @ 0x140C13674
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalpParseChannelCount @ 0x140565BF0 (HalpParseChannelCount.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpAllocateNumaConfigData @ 0x140C1322C (HalpAllocateNumaConfigData.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140C16C38 (HalpChannelInitializeStaticConfiguration.c)
 */

__int64 __fastcall HalpInitializeConfigurationFromMadt(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  char *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdx
  char *v7; // rax
  char v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  char *v13; // r10
  unsigned __int64 v14; // r9
  char *v15; // r14
  unsigned __int64 v16; // r11
  char *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int16 v25; // r8
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // r9d
  __int64 v37; // r11
  __int64 v38; // rcx

  v1 = 0;
  result = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( result )
  {
    v3 = (char *)(result + 44);
    v4 = result + *(unsigned int *)(result + 4);
    v5 = 2048;
    if ( result + 46 <= v4 )
    {
      do
      {
        v6 = (unsigned __int8)v3[1];
        if ( (unsigned __int8)v6 < 2u || (unsigned __int64)&v3[v6] > v4 )
          break;
        v7 = v3;
        v3 += v6;
        v8 = *v7;
        if ( !*v7 && (_BYTE)v6 == 8 || v8 == 9 && (_BYTE)v6 == 16 || v8 == 11 && (unsigned __int8)v6 >= 0x28u )
          ++v1;
      }
      while ( (unsigned __int64)(v3 + 2) <= v4 );
      if ( v1 > 0x800 )
        v1 = 2048;
    }
    if ( HalpSplitLargeNumaNodes )
    {
      v5 = HalpMaximumGroupSize;
      v9 = (v1 + HalpMaximumGroupSize - 1) / HalpMaximumGroupSize;
      if ( v9 > 0x40 )
      {
        v9 = 64;
        v1 = HalpMaximumGroupSize << 6;
      }
    }
    else
    {
      v9 = 1;
    }
    v10 = HalpParseChannelCount();
    result = HalpAllocateNumaConfigData(v9, v1, 0, v10);
    v11 = HalpNumaConfig;
    if ( HalpNumaConfig )
    {
      *(_DWORD *)(HalpNumaConfig + 60) = v1;
      v12 = 0;
      *(_DWORD *)(v11 + 56) = v9;
      if ( v1 )
      {
        if ( v1 < 4 )
          goto LABEL_35;
        v13 = *(char **)v11;
        v14 = v11 + 8;
        v15 = *(char **)(v11 + 8);
        v16 = *(_QWORD *)v11 + 4LL * (v1 - 1);
        v17 = &v15[4 * v1 - 4];
        if ( (unsigned __int64)v15 <= v16 && v17 >= v13 )
          goto LABEL_35;
        if ( (unsigned __int64)v15 <= v11 && (unsigned __int64)v17 >= v11 )
          goto LABEL_35;
        if ( (unsigned __int64)v15 <= v14 && (unsigned __int64)v17 >= v14 )
          goto LABEL_35;
        if ( (unsigned __int64)v13 <= v11 && v16 >= v11 )
          goto LABEL_35;
        if ( (unsigned __int64)v13 <= v14 && v16 >= v14 )
          goto LABEL_35;
        v18 = v1 & 0xFFFFFFFC;
        do
        {
          v12 += 4;
          v19 = v12;
        }
        while ( v12 < (unsigned int)v18 );
        v20 = 4 * v18;
        memset_0(v13, -1, 4 * v18);
        memset_0(v15, -1, v20 & 0xFFFFFFFFFFFFFFFCuLL);
        v12 = v19;
        if ( v19 < v1 )
        {
LABEL_35:
          v21 = (_QWORD *)HalpNumaConfig;
          v22 = 4LL * v12;
          v23 = v1 - v12;
          do
          {
            *(_DWORD *)(v22 + *v21) = -1;
            *(_DWORD *)(v22 + v21[1]) = -1;
            v22 += 4LL;
            --v23;
          }
          while ( v23 );
        }
      }
      v24 = HalpNumaConfig;
      v25 = 0;
      if ( *(_DWORD *)(HalpNumaConfig + 56) )
      {
        v26 = 0;
        do
        {
          v27 = v25++;
          *(_DWORD *)(*(_QWORD *)(v24 + 24) + 4 * v27) = v26;
          v26 = v25;
          *(_DWORD *)(*(_QWORD *)(v24 + 32) + 4 * v27) = 0;
          *(_DWORD *)(*(_QWORD *)(v24 + 40) + 4 * v27) = v5;
        }
        while ( (unsigned int)v25 < *(_DWORD *)(v24 + 56) );
      }
      v28 = HalpNumaConfig;
      v29 = v25;
      v30 = 0LL;
      *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4 * v29 - 4) = v1 - v5 * (v29 - 1);
      if ( v1 )
      {
        v31 = 0LL;
        do
        {
          v29 = *(_QWORD *)(v28 + 16);
          v32 = v30;
          v30 = (unsigned int)(v30 + 1);
          *(_DWORD *)(v31 + v29) = v32 / v5;
          v31 += 4LL;
        }
        while ( (unsigned int)v30 < v1 );
      }
      v33 = HalpNumaConfig;
      v34 = 0LL;
      v35 = *(_DWORD *)(HalpNumaConfig + 56);
      if ( v35 )
      {
        v36 = 0;
        do
        {
          v30 = 0LL;
          v29 = v35;
          if ( v35 )
          {
            v37 = HalpNumaConfig;
            do
            {
              v38 = (unsigned int)(v30 + *(_DWORD *)(v37 + 64) * v36);
              v30 = (unsigned int)(v30 + 1);
              *(_WORD *)(*(_QWORD *)(v37 + 48) + 2 * v38) = 0;
              v29 = *(unsigned int *)(v33 + 56);
            }
            while ( (unsigned int)v30 < (unsigned int)v29 );
          }
          LOWORD(v34) = v34 + 1;
          v35 = v29;
          v36 = (unsigned __int16)v34;
        }
        while ( (unsigned __int16)v34 < (unsigned int)v29 );
      }
      return HalpChannelInitializeStaticConfiguration(v29, v34, v30);
    }
  }
  return result;
}
