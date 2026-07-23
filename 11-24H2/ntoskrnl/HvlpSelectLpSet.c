/*
 * XREFs of HvlpSelectLpSet @ 0x140581D70
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x14053EF20 (HalEnumerateProcessors.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140581324 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x140581B38 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140581CA0 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140662478 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  unsigned int i; // r14d
  int ApicIdAndNumaNode; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbx
  int v14; // r11d
  int v15; // r14d
  unsigned int v16; // r10d
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // eax
  _BYTE *v25; // rcx
  unsigned int v26; // ebx
  _BYTE *v27; // r14
  unsigned int v28; // r9d
  __int64 j; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  _BYTE *v32; // rbx
  unsigned int v33; // ecx
  int v34; // r8d
  _DWORD *v35; // rdx
  unsigned int v36; // ecx
  _WORD *v37; // rdx
  unsigned __int16 v39[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v40; // [rsp+24h] [rbp-3Ch] BYREF
  int v41; // [rsp+28h] [rbp-38h]
  unsigned int v42; // [rsp+2Ch] [rbp-34h]
  unsigned int v43; // [rsp+30h] [rbp-30h]
  int v44; // [rsp+34h] [rbp-2Ch]
  int v45; // [rsp+38h] [rbp-28h] BYREF
  int v46; // [rsp+3Ch] [rbp-24h]
  _BYTE *v47; // [rsp+40h] [rbp-20h]
  __int128 v48; // [rsp+48h] [rbp-18h] BYREF

  v47 = (_BYTE *)a2;
  v39[0] = 0;
  v2 = a2;
  v43 = 0;
  v40 = 0;
  v45 = 0;
  v42 = 0;
  v48 = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 0;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 1;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  HviGetImplementationLimits(&v48);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( (unsigned int)v48 < 0x40 )
    v4 = v48;
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 && !KeRootProcNumaNodesSpecified )
    v4 = KeRootProcSpecified;
  v46 = HalEnumerateProcessors(KeRegisteredProcessors);
  for ( i = 0; i < a1; ++i )
  {
    *(_BYTE *)(v2 + 40LL * i) = 1;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(i, (_DWORD *)(v2 + 4 + 40LL * i), v39);
    v42 = ApicIdAndNumaNode;
    v8 = ApicIdAndNumaNode;
    if ( ApicIdAndNumaNode == -1073741275 )
    {
      v42 = 0;
      *(_BYTE *)(v2 + 40LL * i) = 0;
    }
    else
    {
      if ( ApicIdAndNumaNode < 0 )
        return v8;
      v9 = HvlpQueryProximityId;
      v10 = v39[0];
      *(_WORD *)(v2 + 40LL * i + 8) = v39[0];
      if ( v9 )
      {
        if ( (int)guard_dispatch_icall_no_overrides(v10, &v45) < 0
          || !HvlpQueryProximityNode
          || (v11 = guard_dispatch_icall_no_overrides(v43, &v40), LOWORD(v10) = v40, v11 < 0) )
        {
          LOWORD(v10) = v39[0];
        }
      }
      *(_WORD *)(v2 + 40LL * i + 10) = v10;
      *(_WORD *)(v2 + 40LL * i + 12) = v10;
    }
  }
  v12 = 1;
  v13 = v2 + 1;
  *(_BYTE *)(v2 + 1) = 1;
  v14 = 1;
  v41 = 1;
  v15 = 1;
LABEL_24:
  v44 = v15;
  while ( 1 )
  {
    v16 = 0;
    if ( a1 )
    {
      v17 = v2;
      v18 = v46;
      do
      {
        if ( *(_BYTE *)v17 )
        {
          if ( *(_BYTE *)(v17 + 1) )
            goto LABEL_51;
          v19 = *(unsigned __int16 *)(v17 + 8);
          if ( (unsigned __int16)v19 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v19] + 10) & 2) == 0
            || v12 == 2048
            || v12 == v18
            || KeBootprocSpecified && v12 == KeBootprocSpecified )
          {
            goto LABEL_51;
          }
          if ( KeNumprocSpecified && v16 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v12 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_51;
          }
          if ( v15 == v4 )
          {
            v20 = 0;
            v21 = v13;
            do
            {
              if ( *(_WORD *)(v21 + 7) == (_WORD)v19 && *(_BYTE *)v21 )
                break;
              ++v20;
              v21 += 40LL;
            }
            while ( v20 < a1 );
            if ( v20 == a1 )
              goto LABEL_51;
          }
          if ( v14 == KeRegisteredProcessors )
          {
            v22 = v13;
            v23 = 0;
            do
            {
              if ( (v5 & *(_DWORD *)(v17 + 4)) == (v5 & *(_DWORD *)(v22 + 3)) && *(_BYTE *)v22 )
                break;
              ++v23;
              v22 += 40LL;
            }
            while ( v23 < a1 );
            if ( v23 == a1 )
LABEL_51:
              *(_BYTE *)v17 = 0;
          }
        }
        ++v16;
        v17 += 40LL;
      }
      while ( v16 < a1 );
      v2 = (__int64)v47;
      v24 = 0;
      v25 = v47;
      do
      {
        if ( *v25 )
          break;
        ++v24;
        v25 += 40;
      }
      while ( v24 < a1 );
    }
    else
    {
      v24 = 0;
    }
    if ( v24 == a1 )
      return v42;
    v26 = 0;
    if ( a1 )
    {
      v27 = (_BYTE *)v2;
      do
      {
        if ( *v27 )
          HvlpComputeLpComparisonMetrics(a1, v2, v26);
        ++v26;
        v27 += 40;
      }
      while ( v26 < a1 );
      v15 = v44;
    }
    v28 = -1;
    for ( j = 0LL; (unsigned int)j < a1; j = (unsigned int)(j + 1) )
    {
      if ( *(_BYTE *)(v2 + 40 * j) )
      {
        v28 = j;
        break;
      }
    }
    v30 = v28 + 1;
    if ( (unsigned int)v30 < a1 )
    {
      v31 = 5 * v30;
      v32 = (_BYTE *)(v2 + 40 * v30);
      do
      {
        if ( *v32 && (unsigned int)HvlpLpComparison(v31, v2, v30, v28) == -1 )
          v28 = v30;
        LODWORD(v30) = v30 + 1;
        v32 += 40;
      }
      while ( (unsigned int)v30 < a1 );
    }
    ++v12;
    v33 = 0;
    v34 = v5 & *(_DWORD *)(v2 + 40LL * v28 + 4);
    *(_BYTE *)(v2 + 40LL * v28 + 1) = 1;
    if ( a1 )
    {
      v35 = (_DWORD *)(v2 + 4);
      do
      {
        if ( v33 != v28 && *((_BYTE *)v35 - 3) && (v5 & *v35) == v34 )
          break;
        ++v33;
        v35 += 10;
      }
      while ( v33 < a1 );
    }
    v14 = v41;
    if ( v33 == a1 )
      v14 = ++v41;
    v36 = 0;
    if ( a1 )
    {
      v37 = (_WORD *)(v2 + 8);
      do
      {
        if ( v36 != v28 && *((_BYTE *)v37 - 7) && *v37 == *(_WORD *)(v2 + 40LL * v28 + 8) )
          break;
        ++v36;
        v37 += 20;
      }
      while ( v36 < a1 );
    }
    v13 = v2 + 1;
    if ( v36 == a1 )
    {
      ++v15;
      v13 = v2 + 1;
      goto LABEL_24;
    }
  }
}
