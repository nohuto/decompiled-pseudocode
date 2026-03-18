/*
 * XREFs of HvlpSelectVpSet @ 0x140584E2C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x140582834 (HvlIsSingleGroupRequired.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140583FA4 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1405847B8 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140663B88 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char v3; // r15
  unsigned __int64 v5; // r9
  unsigned int i; // esi
  _WORD *v7; // rcx
  unsigned __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int128 *v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // r8d
  __int128 *v15; // r10
  __int64 v16; // rdx
  unsigned int j; // ecx
  bool IsSingleGroupRequired; // al
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned __int64 v21; // r10
  int v22; // r14d
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  int v25; // r8d
  _WORD *v26; // rcx
  _DWORD *v27; // rcx
  unsigned __int64 v28; // r11
  unsigned int v29; // r8d
  unsigned int k; // r8d
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  unsigned int v33; // esi
  _BYTE *v34; // rbp
  unsigned int m; // edx
  __int64 v36; // r8
  __int64 v37; // rcx
  _BYTE *v38; // rsi
  __int64 v39; // rcx
  char v40; // r12
  unsigned int v41; // ebp
  __int64 v42; // rsi
  char v43; // al
  unsigned int n; // ecx
  unsigned int v45; // edx
  __int64 v46; // rax
  __int128 v48; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v49[64]; // [rsp+40h] [rbp-78h] BYREF

  v2 = a1;
  v48 = 0LL;
  v3 = 0;
  HvlpMinrootConfigurationError = 0;
  HviGetImplementationLimits(&v48);
  if ( (HvlpFlags & 0x800000) != 0 && (HvlpRootFlags & 0x800) == 0 )
  {
    v3 = 1;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      HvlpComputeLpComparisonMetrics(v2, a2, i, v5);
      if ( *(_BYTE *)(a2 + 40LL * i + 2) && !*(_DWORD *)(a2 + 40LL * i + 28) )
      {
        v3 = 0;
        break;
      }
    }
  }
  if ( (_DWORD)v2 )
  {
    v7 = (_WORD *)(a2 + 8);
    v8 = v2;
    do
    {
      v7[2] = *v7;
      v9 = 0;
      *(v7 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v9 = *((_BYTE *)v7 - 6);
      *((_BYTE *)v7 - 5) = v9;
      v7 += 20;
      --v8;
    }
    while ( v8 );
  }
  if ( !v3 )
    goto LABEL_64;
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcPerCoreSpecified & 1) != 0 )
  {
    KeRootProcPerCoreSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    HvlpMinrootConfigurationError = 1;
    ++KeRootProcSpecified;
  }
  v10 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v11 = 0;
    v12 = &KeRootProcNumaNodes;
    do
    {
      if ( *(_WORD *)v12 == *(_WORD *)(a2 + 8) )
        break;
      ++v11;
      v12 = (__int128 *)((char *)v12 + 2);
    }
    while ( v11 < KeRootProcNumaNodesSpecified );
    if ( v11 == KeRootProcNumaNodesSpecified )
    {
      v10 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_52;
  memset_0(v49, 0, sizeof(v49));
  v13 = 0;
  if ( !v10 )
    v10 = (unsigned __int16)KeNumberNodes;
  v14 = 0;
  if ( !v10 )
  {
LABEL_45:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_52;
  }
  v15 = &KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v16 = *(unsigned __int16 *)v15;
      if ( (unsigned int)v16 >= 0x40 || v49[v16] )
        goto LABEL_43;
      v49[v16] = 1;
    }
    else
    {
      LODWORD(v16) = v14;
    }
    for ( j = 0; j < (unsigned int)v2; ++j )
    {
      v5 = 5LL * j;
      if ( *(_BYTE *)(a2 + 40LL * j + 2) && *(unsigned __int16 *)(a2 + 40LL * j + 8) == (_DWORD)v16 )
      {
        ++v13;
        break;
      }
    }
LABEL_43:
    ++v14;
    v15 = (__int128 *)((char *)v15 + 2);
  }
  while ( v14 < v10 );
  if ( !v13 )
    goto LABEL_45;
  if ( KeRootProcSpecified <= v13 )
  {
    IsSingleGroupRequired = HvlIsSingleGroupRequired();
    HvlpMinrootConfigurationError = 1;
    if ( IsSingleGroupRequired )
    {
      KeRootProcSpecified = 64;
      if ( v13 >= 0x40 )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcNumaNodesSpecified = 1;
      }
    }
    else
    {
      KeRootProcSpecified = 0;
    }
  }
LABEL_52:
  if ( KeRootProcNumaNodeLpsSpecified )
  {
    if ( KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
      && _bittest64((const signed __int64 *)KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1], 0) )
    {
      v19 = 1;
      v20 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
      while ( v19 < (unsigned int)v2 )
      {
        if ( (v20 & *(_DWORD *)(a2 + 40LL * v19 + 4)) == (v20 & *(_DWORD *)(a2 + 4)) )
        {
          v21 = *(unsigned int *)(a2 + 40LL * v19 + 36);
          v5 = 2LL * *(unsigned __int16 *)(a2 + 8);
          if ( v21 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
            || !_bittest64(
                  (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1] + 8 * (v21 >> 6)),
                  *(_DWORD *)(a2 + 40LL * v19 + 36) & 0x3F) )
          {
            goto LABEL_61;
          }
        }
        ++v19;
      }
    }
    else
    {
LABEL_61:
      if ( HvlIsSingleGroupRequired() )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcSpecified = 64;
        KeRootProcNumaNodesSpecified = 1;
      }
      KeRootProcNumaNodeLpsSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
LABEL_64:
  *(_BYTE *)(a2 + 1) = 1;
  *(_BYTE *)(a2 + 3) = 1;
  v22 = 1;
  while ( 2 )
  {
    if ( !(_DWORD)v2 )
    {
      v31 = 0;
      goto LABEL_102;
    }
    v23 = a2;
    v24 = v2;
    while ( 2 )
    {
      if ( *(_BYTE *)v23 )
      {
        if ( *(_BYTE *)(v23 + 1) || !*(_BYTE *)(v23 + 2) || v22 == (_DWORD)v48 )
          goto LABEL_95;
        if ( KeRootProcPerNodeSpecified )
        {
          v25 = 0;
          v26 = (_WORD *)(a2 + 8);
          v5 = v2;
          do
          {
            if ( *((_BYTE *)v26 - 7) && *v26 == *(_WORD *)(v23 + 8) )
              ++v25;
            v26 += 20;
            --v5;
          }
          while ( v5 );
          if ( v25 == KeRootProcPerNodeSpecified )
            goto LABEL_95;
        }
        if ( KeRootProcPerCoreSpecified )
        {
          v27 = (_DWORD *)(a2 + 4);
          v5 = 0LL;
          v28 = v2;
          v29 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
          do
          {
            if ( *((_BYTE *)v27 - 3) && (v29 & *v27) == (v29 & *(_DWORD *)(v23 + 4)) )
              v5 = (unsigned int)(v5 + 1);
            v27 += 10;
            --v28;
          }
          while ( v28 );
          if ( (_DWORD)v5 == KeRootProcPerCoreSpecified )
            goto LABEL_95;
        }
        v5 = (unsigned int)KeRootProcNumaNodesSpecified;
        if ( KeRootProcNumaNodesSpecified )
        {
          for ( k = 0; k < KeRootProcNumaNodesSpecified; ++k )
          {
            if ( *((_WORD *)&KeRootProcNumaNodes + k) == *(_WORD *)(v23 + 12) )
              goto LABEL_90;
          }
LABEL_95:
          *(_BYTE *)v23 = 0;
        }
        else
        {
LABEL_90:
          if ( KeRootProcSpecified && v22 == KeRootProcSpecified )
            goto LABEL_95;
          if ( KeRootProcNumaNodeLpsSpecified )
          {
            v5 = *(unsigned int *)(v23 + 36);
            if ( v5 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v23 + 8)] )
              goto LABEL_95;
            v5 >>= 6;
            if ( !_bittest64(
                    (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v23 + 8) + 1] + 8 * v5),
                    *(_DWORD *)(v23 + 36) & 0x3F) )
              goto LABEL_95;
          }
        }
      }
      v23 += 40LL;
      if ( --v24 )
        continue;
      break;
    }
    v31 = 0;
    v32 = (_BYTE *)a2;
    do
    {
      if ( *v32 )
        break;
      ++v31;
      v32 += 40;
    }
    while ( v31 < (unsigned int)v2 );
LABEL_102:
    if ( v31 != (_DWORD)v2 )
    {
      v33 = 0;
      if ( (_DWORD)v2 )
      {
        v34 = (_BYTE *)a2;
        do
        {
          if ( *v34 )
            HvlpComputeLpComparisonMetrics(v2, a2, v33, v5);
          ++v33;
          v34 += 40;
        }
        while ( v33 < (unsigned int)v2 );
      }
      v5 = 0xFFFFFFFFLL;
      for ( m = 0; m < (unsigned int)v2; ++m )
      {
        if ( *(_BYTE *)(a2 + 40LL * m) )
        {
          v5 = m;
          break;
        }
      }
      v36 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v36 < (unsigned int)v2 )
      {
        v37 = 5 * v36;
        v38 = (_BYTE *)(a2 + 40 * v36);
        do
        {
          if ( *v38 )
          {
            if ( (unsigned int)HvlpLpComparison(v37, a2, v36, v5) == -1 )
              v5 = (unsigned int)v36;
          }
          LODWORD(v36) = v36 + 1;
          v38 += 40;
        }
        while ( (unsigned int)v36 < (unsigned int)v2 );
      }
      ++v22;
      v39 = 5LL * (unsigned int)v5;
      *(_BYTE *)(a2 + 8 * v39 + 1) = 1;
      *(_BYTE *)(a2 + 8 * v39 + 3) = 1;
      continue;
    }
    break;
  }
  v40 = 0;
  if ( v3 )
  {
    v41 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v42 = a2 + 41;
      do
      {
        if ( *(_BYTE *)v42 )
        {
          HvlpComputeLpComparisonMetrics(v2, a2, v41, v5);
          if ( !*(_DWORD *)(v42 + 27) )
          {
            *(_BYTE *)v42 = 0;
            v43 = 0;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v43 = *(_BYTE *)(v42 + 1);
            *(_BYTE *)(v42 + 2) = v43;
            v40 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v41;
        v42 += 40LL;
      }
      while ( v41 < (unsigned int)v2 );
    }
  }
  if ( !KeRootProcNumaNodesSpecified && !KeRootProcNumaNodeLpsSpecified && !v40 )
  {
    for ( n = 0; n < (unsigned int)v2; ++n )
    {
      if ( *(_BYTE *)(a2 + 40LL * n + 2) )
      {
        v45 = 0;
        if ( (_DWORD)v2 )
        {
          v46 = a2 + 1;
          do
          {
            if ( *(_WORD *)(v46 + 7) == *(_WORD *)(a2 + 40LL * n + 8) && *(_BYTE *)v46 )
              break;
            ++v45;
            v46 += 40LL;
          }
          while ( v45 < (unsigned int)v2 );
        }
        if ( v45 == (_DWORD)v2 )
          return 3221225473LL;
      }
    }
  }
  return 0LL;
}
