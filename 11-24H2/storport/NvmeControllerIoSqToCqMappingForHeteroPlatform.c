/*
 * XREFs of NvmeControllerIoSqToCqMappingForHeteroPlatform @ 0x1400F1C60
 * Callers:
 *     NvmeControllerIoSqToCqMapping @ 0x1400F18F0 (NvmeControllerIoSqToCqMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerIoSqToCqMappingForHeteroPlatform(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r12d
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  unsigned int v6; // edi
  _QWORD *v7; // rsi
  unsigned int i; // r11d
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rbp
  char v15; // r9
  unsigned int v16; // r9d
  unsigned int j; // esi
  unsigned int v18; // ebx
  __int64 v19; // r10
  __int64 v20; // rbp
  unsigned int v21; // r11d
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int k; // ebx
  unsigned int v25; // r11d
  __int64 v26; // r9
  __int64 v27; // rsi
  unsigned int v28; // r10d

  v1 = 0;
  v2 = -1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !g_HeterogenousCPU || *(_WORD *)(a1 + 22) < 2u )
    return 3221225473LL;
  v7 = g_CpuInfo;
  if ( !g_CpuInfo )
    return 3221225701LL;
  for ( i = 1; i < *(_DWORD *)(a1 + 908); ++i )
  {
    v10 = *(_QWORD *)(a1 + 912);
    v11 = 0;
    v12 = 32LL * i;
    v13 = *(_QWORD *)(v12 + v10 + 24);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v12 + v10 + 8);
        if ( _bittest64(&v14, v11) )
          break;
        if ( ++v11 >= 0x40 )
          goto LABEL_11;
      }
      v11 += *(unsigned __int16 *)(v12 + v10 + 16) << 6;
LABEL_11:
      v15 = *(_BYTE *)(56LL * v11 + v7[4] + 4);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          *(_DWORD *)(v13 + 28) = *(_DWORD *)(v13 + 28) & 0xFFFFFFF0 | 1;
          ++v5;
        }
      }
      else
      {
        *(_DWORD *)(v13 + 28) &= 0xFFFFFFF0;
        ++v4;
      }
    }
  }
  if ( FeatureFixTRIMAddSCSIPassthrough )
    *(_QWORD *)(a1 + 136) &= ~0x8000000uLL;
  if ( v4 && v5 && v5 + v4 == *(unsigned __int16 *)(a1 + 26) )
  {
    if ( *(_WORD *)(a1 + 22) )
    {
      while ( 1 )
      {
        v16 = 0;
        for ( j = 0; j < v5; ++j )
        {
          if ( v6 >= *(unsigned __int16 *)(a1 + 22) )
            break;
          v18 = *(unsigned __int16 *)(a1 + 26);
          v19 = *(_QWORD *)(a1 + 728) + 192LL * v6;
          if ( v16 >= v18 )
            goto LABEL_28;
          v20 = *(_QWORD *)(a1 + 864);
          while ( 1 )
          {
            v21 = v16 + 1;
            if ( (*(_DWORD *)(((unsigned __int64)v16 << 7) + v20 + 28) & 0xF) == 1 )
              break;
            ++v16;
            if ( v21 >= v18 )
              goto LABEL_28;
          }
          ++v6;
          v22 = (unsigned __int64)v16++ << 7;
          *(_WORD *)(v19 + 138) = *(_WORD *)(v22 + v20 + 32);
        }
        v23 = 0LL;
        for ( k = 0; k < v4; ++k )
        {
          if ( v6 >= *(unsigned __int16 *)(a1 + 22) )
            break;
          v25 = *(unsigned __int16 *)(a1 + 26);
          v26 = *(_QWORD *)(a1 + 728) + 192LL * v6;
          if ( (unsigned int)v23 >= v25 )
            goto LABEL_28;
          v27 = *(_QWORD *)(a1 + 864);
          while ( 1 )
          {
            v28 = v23 + 1;
            if ( (*(_DWORD *)(((unsigned __int64)(unsigned int)v23 << 7) + v27 + 28) & 0xF) == 0 )
              break;
            v23 = v28;
            if ( v28 >= v25 )
              goto LABEL_28;
          }
          ++v6;
          *(_WORD *)(v26 + 138) = *(_WORD *)((v23 << 7) + v27 + 32);
          v23 = v28;
        }
        if ( v6 >= *(unsigned __int16 *)(a1 + 22) )
          break;
        if ( v2 != -1 && v2 >= v6 )
          goto LABEL_28;
        v2 = v6;
      }
    }
  }
  else
  {
LABEL_28:
    *(_QWORD *)(a1 + 136) |= 0x8000000uLL;
    return (unsigned int)-1073741595;
  }
  return v1;
}
