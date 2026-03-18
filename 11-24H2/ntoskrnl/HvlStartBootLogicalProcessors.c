/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140583AD8
 * Callers:
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140584340 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x140584518 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140584920 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1405849F0 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140584E2C (HvlpSelectVpSet.c)
 *     HvlpUpdateLpcbIndex @ 0x140585898 (HvlpUpdateLpcbIndex.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405879B4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpApplyIoCachePolicy @ 0x14058C1BC (HvlpApplyIoCachePolicy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvlpDiscoverTopologyLocal @ 0x14070F0EC (HvlpDiscoverTopologyLocal.c)
 *     MmAllocateIndependentPages @ 0x140A88F50 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int v1; // r12d
  unsigned int MaximumProcessorCount; // eax
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r15d
  size_t v7; // rdi
  void *IndependentPages; // rax
  unsigned __int64 v9; // r14
  signed int ApicIdAndNumaNode; // edi
  size_t v11; // rdi
  void *v12; // rax
  _OWORD *v13; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int16 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r10
  __int64 LpcbByApicId; // rax
  char v24; // r11
  unsigned int i; // ebx
  _DWORD *v26; // rax
  unsigned __int16 v27; // bx
  __int128 v28; // [rsp+30h] [rbp-39h] BYREF
  __int64 v29; // [rsp+40h] [rbp-29h]
  __int64 v30; // [rsp+48h] [rbp-21h]
  __int128 v31; // [rsp+50h] [rbp-19h] BYREF
  __int128 v32; // [rsp+60h] [rbp-9h]
  __int128 v33; // [rsp+70h] [rbp+7h]
  __int64 v34; // [rsp+80h] [rbp+17h]
  __int64 v35; // [rsp+88h] [rbp+1Fh]
  int v36; // [rsp+D0h] [rbp+67h] BYREF
  int v37; // [rsp+D8h] [rbp+6Fh]

  v36 = a1;
  v1 = KiMaximumGroupSize;
  v34 = 0LL;
  LOWORD(v35) = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v36 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(11LL, 64LL, &v31, &v36) >= 0 && v36 == 64 )
  {
    HvlpQueryProcessorNode = *((_QWORD *)&v31 + 1);
    HvlpQueryProximityId = *((_QWORD *)&v33 + 1);
    HvlpQueryProximityNode = *((_QWORD *)&v32 + 1);
    HvlpQueryNodeDistance = v35;
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v4 = MaximumProcessorCount;
  v5 = 104 * MaximumProcessorCount;
  v6 = 40 * MaximumProcessorCount;
  v37 = 104 * MaximumProcessorCount;
  v7 = 40 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPages(v7, 0xFFFFFFFFLL);
  v9 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, v7);
    v11 = v5;
    v12 = (void *)MmAllocateIndependentPages(v5, 0xFFFFFFFFLL);
    HvlpLogicalProcessorRegions = v12;
    v13 = v12;
    if ( v12 )
    {
      memset_0(v12, 0, v11);
      CurrentPrcb = KeGetCurrentPrcb();
      *v13 = xmmword_140E3EC60;
      HvlpLogicalProcessorRegionsCount = v4;
      v13[1] = xmmword_140E3EC70;
      v13[2] = xmmword_140E3EC80;
      v13[3] = xmmword_140E3EC90;
      v13[4] = xmmword_140E3ECA0;
      v13[5] = xmmword_140E3ECB0;
      *((_QWORD *)v13 + 12) = qword_140E3ECC0;
      *((_DWORD *)v13 + 1) = 0;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, (char *)v13 + 8, (char *)v13 + 2);
      if ( ApicIdAndNumaNode >= 0 )
      {
        v15 = *((unsigned int *)v13 + 2);
        v16 = *(unsigned __int16 *)(KeNodeBlock[*((unsigned __int16 *)v13 + 1)] + 2);
        *((_WORD *)v13 + 48) = v16;
        *((_QWORD *)v13 + 3) = CurrentPrcb->StatisticsPage;
        *((_DWORD *)v13 + 5) = CurrentPrcb->Number;
        HvlpCpuVendor = CurrentPrcb->CpuVendor;
        HvlpDiscoverTopologyLocal(v16, v15, (char *)v13 + 12, v13 + 1);
        LODWORD(HvlpLogicalProcessorCount) = 1;
        *(_BYTE *)v13 = 1;
        ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v4, v9);
        if ( ApicIdAndNumaNode >= 0 )
        {
          v17 = 1;
          if ( (unsigned int)v4 > 1 )
          {
            v18 = (unsigned __int16 *)(v9 + 48);
            do
            {
              if ( *((_BYTE *)v18 - 7) )
              {
                if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v18 - 1), *v18) < 0 )
                  break;
                LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
                *((_BYTE *)v18 - 6) = 1;
              }
              ++v17;
              v18 += 20;
            }
            while ( v17 < (unsigned int)v4 );
          }
          ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v4, v9, v1);
          if ( ApicIdAndNumaNode >= 0 )
          {
            if ( (_DWORD)v4 )
            {
              v21 = v9 + 1;
              v22 = v4;
              do
              {
                if ( *(_BYTE *)v21 || *(_BYTE *)(v21 + 2) )
                {
                  LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v21 + 3));
                  if ( v24 )
                    *(_BYTE *)(LpcbByApicId + 1) = 1;
                  if ( *(_BYTE *)(v21 + 2) )
                  {
                    ++HvlpActiveProcessorCount;
                    *(_BYTE *)(LpcbByApicId + 98) = 1;
                  }
                }
                v21 += 40LL;
                --v22;
              }
              while ( v22 );
            }
            if ( (HvlpRootFlags & 0x800) == 0 )
              goto LABEL_36;
            if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
            {
              qsort(
                HvlpLogicalProcessorRegions,
                (unsigned int)HvlpLogicalProcessorCount,
                0x68uLL,
                HvlpCompareActiveLpcbs);
              for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
              {
                ApicIdAndNumaNode = HvlpUpdateLpcbIndex((char *)HvlpLogicalProcessorRegions + 104 * i, i);
                if ( ApicIdAndNumaNode < 0 )
                  goto LABEL_39;
              }
            }
            v29 = 0LL;
            LODWORD(v30) = 0;
            v28 = 0LL;
            v26 = HvlpAcquireHypercallPage((__int64)&v28, 1, 0LL, 8LL);
            v26[1] = HvlpActiveProcessorCount;
            *v26 = 5;
            v27 = HvcallInitiateHypercall(135);
            HvlpReleaseHypercallPage((unsigned int *)&v28);
            v20 = v27;
            LOWORD(v20) = -v27;
            ApicIdAndNumaNode = v27 != 0 ? 0xC0000001 : 0;
            if ( !v27 )
            {
LABEL_36:
              ApicIdAndNumaNode = 0;
              if ( !KeDynamicPartitioningSupported )
                HvlNotifyAllProcessorsStarted(v20, v19, v21);
              HvlpApplyIoCachePolicy(v20, v19, v21);
            }
          }
        }
      }
    }
    else
    {
      ApicIdAndNumaNode = -1073741670;
    }
LABEL_39:
    MmFreeIndependentPages(v9, v6);
    if ( ApicIdAndNumaNode >= 0 )
      return (unsigned int)ApicIdAndNumaNode;
    v5 = v37;
  }
  else
  {
    ApicIdAndNumaNode = -1073741670;
  }
  if ( HvlpLogicalProcessorRegions )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpLogicalProcessorRegions, v5);
    HvlpLogicalProcessorRegions = 0LL;
    HvlpLogicalProcessorRegionsCount = 0;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
