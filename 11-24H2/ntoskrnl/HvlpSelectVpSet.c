/*
 * XREFs of HvlpSelectVpSet @ 0x1405821AC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x14057FBB4 (HvlIsSingleGroupRequired.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140581324 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x140581B38 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140662478 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // r15
  unsigned int i; // esi
  _WORD *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int128 *v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  __int128 *v14; // r10
  __int64 v15; // rdx
  unsigned int j; // ecx
  bool IsSingleGroupRequired; // al
  unsigned int v18; // r8d
  unsigned int v19; // edx
  unsigned __int64 v20; // r10
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r8d
  _WORD *v25; // rcx
  __int64 v26; // r9
  _DWORD *v27; // rcx
  int v28; // r9d
  __int64 v29; // r11
  unsigned int v30; // r8d
  unsigned int k; // r8d
  unsigned __int64 v32; // r9
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  unsigned int v35; // esi
  _BYTE *v36; // rbp
  unsigned int v37; // r9d
  unsigned int m; // edx
  __int64 v39; // r8
  __int64 v40; // rcx
  _BYTE *v41; // rsi
  __int64 v42; // rcx
  char v43; // r12
  unsigned int v44; // ebp
  __int64 v45; // rsi
  char v46; // al
  unsigned int n; // ecx
  unsigned int v48; // edx
  __int64 v49; // rax
  __int128 v51; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v52[64]; // [rsp+40h] [rbp-78h] BYREF

  v2 = a1;
  v51 = 0LL;
  v3 = 0;
  HvlpMinrootConfigurationError = 0;
  HviGetImplementationLimits(&v51);
  if ( (HvlpFlags & 0x800000) != 0 && (HvlpRootFlags & 0x800) == 0 )
  {
    v3 = 1;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      HvlpComputeLpComparisonMetrics(v2, a2, i);
      if ( *(_BYTE *)(a2 + 40LL * i + 2) && !*(_DWORD *)(a2 + 40LL * i + 28) )
      {
        v3 = 0;
        break;
      }
    }
  }
  if ( (_DWORD)v2 )
  {
    v6 = (_WORD *)(a2 + 8);
    v7 = v2;
    do
    {
      v6[2] = *v6;
      v8 = 0;
      *(v6 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v8 = *((_BYTE *)v6 - 6);
      *((_BYTE *)v6 - 5) = v8;
      v6 += 20;
      --v7;
    }
    while ( v7 );
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
  v9 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v10 = 0;
    v11 = &KeRootProcNumaNodes;
    do
    {
      if ( *(_WORD *)v11 == *(_WORD *)(a2 + 8) )
        break;
      ++v10;
      v11 = (__int128 *)((char *)v11 + 2);
    }
    while ( v10 < KeRootProcNumaNodesSpecified );
    if ( v10 == KeRootProcNumaNodesSpecified )
    {
      v9 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_52;
  memset_0(v52, 0, sizeof(v52));
  v12 = 0;
  if ( !v9 )
    v9 = (unsigned __int16)KeNumberNodes;
  v13 = 0;
  if ( !v9 )
  {
LABEL_45:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_52;
  }
  v14 = &KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v15 = *(unsigned __int16 *)v14;
      if ( (unsigned int)v15 >= 0x40 || v52[v15] )
        goto LABEL_43;
      v52[v15] = 1;
    }
    else
    {
      LODWORD(v15) = v13;
    }
    for ( j = 0; j < (unsigned int)v2; ++j )
    {
      if ( *(_BYTE *)(a2 + 40LL * j + 2) && *(unsigned __int16 *)(a2 + 40LL * j + 8) == (_DWORD)v15 )
      {
        ++v12;
        break;
      }
    }
LABEL_43:
    ++v13;
    v14 = (__int128 *)((char *)v14 + 2);
  }
  while ( v13 < v9 );
  if ( !v12 )
    goto LABEL_45;
  if ( KeRootProcSpecified <= v12 )
  {
    IsSingleGroupRequired = HvlIsSingleGroupRequired();
    HvlpMinrootConfigurationError = 1;
    if ( IsSingleGroupRequired )
    {
      KeRootProcSpecified = 64;
      if ( v12 >= 0x40 )
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
      v18 = 1;
      v19 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
      while ( v18 < (unsigned int)v2 )
      {
        if ( (v19 & *(_DWORD *)(a2 + 40LL * v18 + 4)) == (v19 & *(_DWORD *)(a2 + 4)) )
        {
          v20 = *(unsigned int *)(a2 + 40LL * v18 + 36);
          if ( v20 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
            || !_bittest64(
                  (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1] + 8 * (v20 >> 6)),
                  *(_DWORD *)(a2 + 40LL * v18 + 36) & 0x3F) )
          {
            goto LABEL_61;
          }
        }
        ++v18;
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
  v21 = 1;
  while ( 2 )
  {
    if ( !(_DWORD)v2 )
    {
      v33 = 0;
      goto LABEL_102;
    }
    v22 = a2;
    v23 = v2;
    while ( 2 )
    {
      if ( *(_BYTE *)v22 )
      {
        if ( *(_BYTE *)(v22 + 1) || !*(_BYTE *)(v22 + 2) || v21 == (_DWORD)v51 )
          goto LABEL_95;
        if ( KeRootProcPerNodeSpecified )
        {
          v24 = 0;
          v25 = (_WORD *)(a2 + 8);
          v26 = v2;
          do
          {
            if ( *((_BYTE *)v25 - 7) && *v25 == *(_WORD *)(v22 + 8) )
              ++v24;
            v25 += 20;
            --v26;
          }
          while ( v26 );
          if ( v24 == KeRootProcPerNodeSpecified )
            goto LABEL_95;
        }
        if ( KeRootProcPerCoreSpecified )
        {
          v27 = (_DWORD *)(a2 + 4);
          v28 = 0;
          v29 = v2;
          v30 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
          do
          {
            if ( *((_BYTE *)v27 - 3) && (v30 & *v27) == (v30 & *(_DWORD *)(v22 + 4)) )
              ++v28;
            v27 += 10;
            --v29;
          }
          while ( v29 );
          if ( v28 == KeRootProcPerCoreSpecified )
            goto LABEL_95;
        }
        if ( KeRootProcNumaNodesSpecified )
        {
          for ( k = 0; k < KeRootProcNumaNodesSpecified; ++k )
          {
            if ( *((_WORD *)&KeRootProcNumaNodes + k) == *(_WORD *)(v22 + 12) )
              goto LABEL_90;
          }
LABEL_95:
          *(_BYTE *)v22 = 0;
        }
        else
        {
LABEL_90:
          if ( KeRootProcSpecified && v21 == KeRootProcSpecified )
            goto LABEL_95;
          if ( KeRootProcNumaNodeLpsSpecified )
          {
            v32 = *(unsigned int *)(v22 + 36);
            if ( v32 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v22 + 8)]
              || !_bittest64(
                    (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v22 + 8) + 1]
                                           + 8 * (v32 >> 6)),
                    *(_DWORD *)(v22 + 36) & 0x3F) )
            {
              goto LABEL_95;
            }
          }
        }
      }
      v22 += 40LL;
      if ( --v23 )
        continue;
      break;
    }
    v33 = 0;
    v34 = (_BYTE *)a2;
    do
    {
      if ( *v34 )
        break;
      ++v33;
      v34 += 40;
    }
    while ( v33 < (unsigned int)v2 );
LABEL_102:
    if ( v33 != (_DWORD)v2 )
    {
      v35 = 0;
      if ( (_DWORD)v2 )
      {
        v36 = (_BYTE *)a2;
        do
        {
          if ( *v36 )
            HvlpComputeLpComparisonMetrics(v2, a2, v35);
          ++v35;
          v36 += 40;
        }
        while ( v35 < (unsigned int)v2 );
      }
      v37 = -1;
      for ( m = 0; m < (unsigned int)v2; ++m )
      {
        if ( *(_BYTE *)(a2 + 40LL * m) )
        {
          v37 = m;
          break;
        }
      }
      v39 = v37 + 1;
      if ( (unsigned int)v39 < (unsigned int)v2 )
      {
        v40 = 5 * v39;
        v41 = (_BYTE *)(a2 + 40 * v39);
        do
        {
          if ( *v41 )
          {
            if ( (unsigned int)HvlpLpComparison(v40, a2, v39, v37) == -1 )
              v37 = v39;
          }
          LODWORD(v39) = v39 + 1;
          v41 += 40;
        }
        while ( (unsigned int)v39 < (unsigned int)v2 );
      }
      ++v21;
      v42 = 5LL * v37;
      *(_BYTE *)(a2 + 8 * v42 + 1) = 1;
      *(_BYTE *)(a2 + 8 * v42 + 3) = 1;
      continue;
    }
    break;
  }
  v43 = 0;
  if ( v3 )
  {
    v44 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v45 = a2 + 41;
      do
      {
        if ( *(_BYTE *)v45 )
        {
          HvlpComputeLpComparisonMetrics(v2, a2, v44);
          if ( !*(_DWORD *)(v45 + 27) )
          {
            *(_BYTE *)v45 = 0;
            v46 = 0;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v46 = *(_BYTE *)(v45 + 1);
            *(_BYTE *)(v45 + 2) = v46;
            v43 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v44;
        v45 += 40LL;
      }
      while ( v44 < (unsigned int)v2 );
    }
  }
  if ( !KeRootProcNumaNodesSpecified && !KeRootProcNumaNodeLpsSpecified && !v43 )
  {
    for ( n = 0; n < (unsigned int)v2; ++n )
    {
      if ( *(_BYTE *)(a2 + 40LL * n + 2) )
      {
        v48 = 0;
        if ( (_DWORD)v2 )
        {
          v49 = a2 + 1;
          do
          {
            if ( *(_WORD *)(v49 + 7) == *(_WORD *)(a2 + 40LL * n + 8) && *(_BYTE *)v49 )
              break;
            ++v48;
            v49 += 40LL;
          }
          while ( v48 < (unsigned int)v2 );
        }
        if ( v48 == (_DWORD)v2 )
          return 3221225473LL;
      }
    }
  }
  return 0LL;
}
