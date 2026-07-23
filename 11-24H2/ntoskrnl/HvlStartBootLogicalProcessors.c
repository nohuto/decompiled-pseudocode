/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140580E58
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405816C0 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x140581898 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140581CA0 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x140581D70 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1405821AC (HvlpSelectVpSet.c)
 *     HvlpUpdateLpcbIndex @ 0x140582C18 (HvlpUpdateLpcbIndex.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584D34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpApplyIoCachePolicy @ 0x1405894AC (HvlpApplyIoCachePolicy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvlpDiscoverTopologyLocal @ 0x14070CC7C (HvlpDiscoverTopologyLocal.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 */

__int64 HvlStartBootLogicalProcessors()
{
  unsigned int v0; // r12d
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v5; // r15d
  size_t v6; // rdi
  void *IndependentPages; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  signed int ApicIdAndNumaNode; // edi
  size_t v11; // rdi
  void *v12; // rax
  __int64 v13; // r8
  _OWORD *v14; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned __int16 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 LpcbByApicId; // rax
  char v24; // r11
  unsigned int i; // ebx
  _DWORD *v26; // rax
  unsigned __int16 v27; // bx
  __int128 v28; // [rsp+30h] [rbp-39h] BYREF
  __int64 v29; // [rsp+40h] [rbp-29h]
  __int64 v30; // [rsp+48h] [rbp-21h]
  __int128 v31; // [rsp+50h] [rbp-19h]
  __int128 v32; // [rsp+60h] [rbp-9h]
  __int128 v33; // [rsp+70h] [rbp+7h]
  __int64 v34; // [rsp+80h] [rbp+17h]
  __int64 v35; // [rsp+88h] [rbp+1Fh]
  int v36; // [rsp+D8h] [rbp+6Fh]

  v0 = KiMaximumGroupSize;
  v34 = 0LL;
  LOWORD(v35) = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  guard_dispatch_icall_no_overrides(11LL, 64LL);
  HvlpQueryProcessorNode = 0LL;
  HvlpQueryProximityId = 0LL;
  HvlpQueryProximityNode = 0LL;
  HvlpQueryNodeDistance = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v3 = MaximumProcessorCount;
  v4 = 104 * MaximumProcessorCount;
  v5 = 40 * MaximumProcessorCount;
  v36 = 104 * MaximumProcessorCount;
  v6 = 40 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPages(v6, 0xFFFFFFFFLL);
  v9 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, v6);
    v11 = v4;
    v12 = (void *)MmAllocateIndependentPages(v4, 0xFFFFFFFFLL);
    HvlpLogicalProcessorRegions = v12;
    v14 = v12;
    if ( v12 )
    {
      memset_0(v12, 0, v11);
      CurrentPrcb = KeGetCurrentPrcb();
      *v14 = xmmword_140E3EDA0;
      HvlpLogicalProcessorRegionsCount = v3;
      v14[1] = xmmword_140E3EDB0;
      v14[2] = xmmword_140E3EDC0;
      v14[3] = xmmword_140E3EDD0;
      v14[4] = xmmword_140E3EDE0;
      v14[5] = xmmword_140E3EDF0;
      *((_QWORD *)v14 + 12) = qword_140E3EE00;
      *((_DWORD *)v14 + 1) = 0;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, (char *)v14 + 8, (char *)v14 + 2);
      if ( ApicIdAndNumaNode >= 0 )
      {
        v16 = *((unsigned int *)v14 + 2);
        v17 = *(unsigned __int16 *)(KeNodeBlock[*((unsigned __int16 *)v14 + 1)] + 2);
        *((_WORD *)v14 + 48) = v17;
        *((_QWORD *)v14 + 3) = CurrentPrcb->StatisticsPage;
        *((_DWORD *)v14 + 5) = CurrentPrcb->Number;
        HvlpCpuVendor = CurrentPrcb->CpuVendor;
        HvlpDiscoverTopologyLocal(v17, v16, (char *)v14 + 12, v14 + 1);
        LODWORD(HvlpLogicalProcessorCount) = 1;
        *(_BYTE *)v14 = 1;
        ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v9);
        if ( ApicIdAndNumaNode >= 0 )
        {
          v18 = 1;
          if ( (unsigned int)v3 > 1 )
          {
            v19 = (unsigned __int16 *)(v9 + 48);
            do
            {
              if ( *((_BYTE *)v19 - 7) )
              {
                if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v19 - 1), *v19) < 0 )
                  break;
                LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
                *((_BYTE *)v19 - 6) = 1;
              }
              ++v18;
              v19 += 20;
            }
            while ( v18 < (unsigned int)v3 );
          }
          ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v3, v9, v0);
          if ( ApicIdAndNumaNode >= 0 )
          {
            if ( (_DWORD)v3 )
            {
              v13 = v9 + 1;
              v22 = v3;
              do
              {
                if ( *(_BYTE *)v13 || *(_BYTE *)(v13 + 2) )
                {
                  LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v13 + 3));
                  if ( v24 )
                    *(_BYTE *)(LpcbByApicId + 1) = 1;
                  if ( *(_BYTE *)(v13 + 2) )
                  {
                    ++HvlpActiveProcessorCount;
                    *(_BYTE *)(LpcbByApicId + 98) = 1;
                  }
                }
                v13 += 40LL;
                --v22;
              }
              while ( v22 );
            }
            if ( (HvlpRootFlags & 0x800) == 0 )
              goto LABEL_32;
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
                  goto LABEL_35;
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
            v21 = v27;
            LOWORD(v21) = -v27;
            ApicIdAndNumaNode = v27 != 0 ? 0xC0000001 : 0;
            if ( !v27 )
            {
LABEL_32:
              ApicIdAndNumaNode = 0;
              if ( !KeDynamicPartitioningSupported )
                HvlNotifyAllProcessorsStarted(v21, v20, v13);
              HvlpApplyIoCachePolicy(v21, v20, v13);
            }
          }
        }
      }
    }
    else
    {
      ApicIdAndNumaNode = -1073741670;
    }
LABEL_35:
    MmFreeIndependentPages(v9, v5, v13);
    if ( ApicIdAndNumaNode >= 0 )
      return (unsigned int)ApicIdAndNumaNode;
    v4 = v36;
  }
  else
  {
    ApicIdAndNumaNode = -1073741670;
  }
  if ( HvlpLogicalProcessorRegions )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpLogicalProcessorRegions, v4, v8);
    HvlpLogicalProcessorRegions = 0LL;
    HvlpLogicalProcessorRegionsCount = 0;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
