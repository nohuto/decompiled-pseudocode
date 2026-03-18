/*
 * XREFs of HvlpSelectLpSet @ 0x1405849F0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x140541620 (HalEnumerateProcessors.c)
 *     HvlpComputeLpComparisonMetrics @ 0x140583FA4 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1405847B8 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140584920 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x140663B88 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // r9
  unsigned int i; // r14d
  int ApicIdAndNumaNode; // eax
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rbx
  int v16; // r11d
  int v17; // r14d
  unsigned int v18; // r10d
  __int64 v19; // r8
  int v20; // esi
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // ebx
  _BYTE *v29; // r14
  __int64 j; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rbx
  unsigned int v34; // ecx
  int v35; // r8d
  _DWORD *v36; // rdx
  unsigned int v37; // ecx
  _WORD *v38; // rdx
  unsigned __int16 v40[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v41; // [rsp+24h] [rbp-3Ch] BYREF
  int v42; // [rsp+28h] [rbp-38h]
  unsigned int v43; // [rsp+2Ch] [rbp-34h]
  unsigned int v44; // [rsp+30h] [rbp-30h] BYREF
  int v45; // [rsp+34h] [rbp-2Ch]
  int v46; // [rsp+38h] [rbp-28h] BYREF
  int v47; // [rsp+3Ch] [rbp-24h]
  _BYTE *v48; // [rsp+40h] [rbp-20h]
  __int128 v49; // [rsp+48h] [rbp-18h] BYREF

  v48 = (_BYTE *)a2;
  v40[0] = 0;
  v2 = a2;
  v44 = 0;
  v41 = 0;
  v46 = 0;
  v43 = 0;
  v49 = 0LL;
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
  HviGetImplementationLimits(&v49);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( (unsigned int)v49 < 0x40 )
    v4 = v49;
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 && !KeRootProcNumaNodesSpecified )
    v4 = KeRootProcSpecified;
  v47 = HalEnumerateProcessors(KeRegisteredProcessors);
  for ( i = 0; i < a1; ++i )
  {
    *(_BYTE *)(v2 + 40LL * i) = 1;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(i, (_DWORD *)(v2 + 4 + 40LL * i), v40, v6);
    v43 = ApicIdAndNumaNode;
    v9 = ApicIdAndNumaNode;
    if ( ApicIdAndNumaNode == -1073741275 )
    {
      v43 = 0;
      *(_BYTE *)(v2 + 40LL * i) = 0;
    }
    else
    {
      if ( ApicIdAndNumaNode < 0 )
        return v9;
      v10 = HvlpQueryProximityId;
      v11 = v40[0];
      *(_WORD *)(v2 + 40LL * i + 8) = v40[0];
      if ( v10 )
      {
        if ( (int)guard_dispatch_icall_no_overrides(v11, &v46, &v44, v6) < 0
          || !HvlpQueryProximityNode
          || (v13 = guard_dispatch_icall_no_overrides(v44, &v41, v12, v6), LOWORD(v11) = v41, v13 < 0) )
        {
          LOWORD(v11) = v40[0];
        }
      }
      *(_WORD *)(v2 + 40LL * i + 10) = v11;
      *(_WORD *)(v2 + 40LL * i + 12) = v11;
    }
  }
  v14 = 1;
  v15 = v2 + 1;
  *(_BYTE *)(v2 + 1) = 1;
  v16 = 1;
  v42 = 1;
  v17 = 1;
LABEL_24:
  v45 = v17;
  while ( 1 )
  {
    v18 = 0;
    if ( a1 )
    {
      v19 = v2;
      v20 = v47;
      do
      {
        if ( *(_BYTE *)v19 )
        {
          if ( *(_BYTE *)(v19 + 1) )
            goto LABEL_51;
          v21 = *(unsigned __int16 *)(v19 + 8);
          if ( (unsigned __int16)v21 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v21] + 10) & 2) == 0
            || v14 == 2048
            || v14 == v20
            || KeBootprocSpecified && v14 == KeBootprocSpecified )
          {
            goto LABEL_51;
          }
          if ( KeNumprocSpecified && v18 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v14 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_51;
          }
          if ( v17 == v4 )
          {
            v22 = 0;
            v23 = v15;
            do
            {
              if ( *(_WORD *)(v23 + 7) == (_WORD)v21 && *(_BYTE *)v23 )
                break;
              ++v22;
              v23 += 40LL;
            }
            while ( v22 < a1 );
            if ( v22 == a1 )
              goto LABEL_51;
          }
          if ( v16 == KeRegisteredProcessors )
          {
            v24 = v15;
            v6 = v5 & *(_DWORD *)(v19 + 4);
            v25 = 0;
            do
            {
              if ( (_DWORD)v6 == (v5 & *(_DWORD *)(v24 + 3)) && *(_BYTE *)v24 )
                break;
              ++v25;
              v24 += 40LL;
            }
            while ( v25 < a1 );
            if ( v25 == a1 )
LABEL_51:
              *(_BYTE *)v19 = 0;
          }
        }
        ++v18;
        v19 += 40LL;
      }
      while ( v18 < a1 );
      v2 = (__int64)v48;
      v26 = 0;
      v27 = v48;
      do
      {
        if ( *v27 )
          break;
        ++v26;
        v27 += 40;
      }
      while ( v26 < a1 );
    }
    else
    {
      v26 = 0;
    }
    if ( v26 == a1 )
      return v43;
    v28 = 0;
    if ( a1 )
    {
      v29 = (_BYTE *)v2;
      do
      {
        if ( *v29 )
          HvlpComputeLpComparisonMetrics(a1, v2, v28, v6);
        ++v28;
        v29 += 40;
      }
      while ( v28 < a1 );
      v17 = v45;
    }
    v6 = 0xFFFFFFFFLL;
    for ( j = 0LL; (unsigned int)j < a1; j = (unsigned int)(j + 1) )
    {
      if ( *(_BYTE *)(v2 + 40 * j) )
      {
        v6 = (unsigned int)j;
        break;
      }
    }
    v31 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v31 < a1 )
    {
      v32 = 5 * v31;
      v33 = (_BYTE *)(v2 + 40 * v31);
      do
      {
        if ( *v33 && (unsigned int)HvlpLpComparison(v32, v2, v31, v6) == -1 )
          v6 = (unsigned int)v31;
        LODWORD(v31) = v31 + 1;
        v33 += 40;
      }
      while ( (unsigned int)v31 < a1 );
    }
    ++v14;
    v34 = 0;
    v35 = v5 & *(_DWORD *)(v2 + 40LL * (unsigned int)v6 + 4);
    *(_BYTE *)(v2 + 40LL * (unsigned int)v6 + 1) = 1;
    if ( a1 )
    {
      v36 = (_DWORD *)(v2 + 4);
      do
      {
        if ( v34 != (_DWORD)v6 && *((_BYTE *)v36 - 3) && (v5 & *v36) == v35 )
          break;
        ++v34;
        v36 += 10;
      }
      while ( v34 < a1 );
    }
    v16 = v42;
    if ( v34 == a1 )
      v16 = ++v42;
    v37 = 0;
    if ( a1 )
    {
      v38 = (_WORD *)(v2 + 8);
      do
      {
        if ( v37 != (_DWORD)v6 && *((_BYTE *)v38 - 7) && *v38 == *(_WORD *)(v2 + 40LL * (unsigned int)v6 + 8) )
          break;
        ++v37;
        v38 += 20;
      }
      while ( v37 < a1 );
    }
    v15 = v2 + 1;
    if ( v37 == a1 )
    {
      ++v17;
      v15 = v2 + 1;
      goto LABEL_24;
    }
  }
}
