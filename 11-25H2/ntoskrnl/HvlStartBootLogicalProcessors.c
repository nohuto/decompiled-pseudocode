/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140580328
 * Callers:
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140580B90 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x140580D68 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140581170 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x140581240 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x14058167C (HvlpSelectVpSet.c)
 *     HvlpUpdateLpcbIndex @ 0x1405820E8 (HvlpUpdateLpcbIndex.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584234 (HvlNotifyAllProcessorsStarted.c)
 *     HvlpApplyIoCachePolicy @ 0x140588B4C (HvlpApplyIoCachePolicy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvlpDiscoverTopologyLocal @ 0x14070320C (HvlpDiscoverTopologyLocal.c)
 *     MmAllocateIndependentPages @ 0x140A85070 (MmAllocateIndependentPages.c)
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
  unsigned __int64 v8; // r14
  signed int ApicIdAndNumaNode; // edi
  size_t v10; // rdi
  void *v11; // rax
  _OWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned __int16 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // r10
  __int64 LpcbByApicId; // rax
  char v23; // r11
  unsigned int i; // ebx
  _DWORD *v25; // rax
  unsigned __int16 v26; // bx
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-29h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  __int128 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+60h] [rbp-9h]
  __int128 v32; // [rsp+70h] [rbp+7h]
  __int64 v33; // [rsp+80h] [rbp+17h]
  __int64 v34; // [rsp+88h] [rbp+1Fh]
  int v35; // [rsp+D8h] [rbp+6Fh]

  v0 = KiMaximumGroupSize;
  v33 = 0LL;
  LOWORD(v34) = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  guard_dispatch_icall_no_overrides(11LL);
  HvlpQueryProcessorNode = 0LL;
  HvlpQueryProximityId = 0LL;
  HvlpQueryProximityNode = 0LL;
  HvlpQueryNodeDistance = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v3 = MaximumProcessorCount;
  v4 = 104 * MaximumProcessorCount;
  v5 = 40 * MaximumProcessorCount;
  v35 = 104 * MaximumProcessorCount;
  v6 = 40 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPages(v6, 0xFFFFFFFFLL);
  v8 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, v6);
    v10 = v4;
    v11 = (void *)MmAllocateIndependentPages(v4, 0xFFFFFFFFLL);
    HvlpLogicalProcessorRegions = v11;
    v12 = v11;
    if ( v11 )
    {
      memset_0(v11, 0, v10);
      CurrentPrcb = KeGetCurrentPrcb();
      *v12 = xmmword_140E3EA20;
      HvlpLogicalProcessorRegionsCount = v3;
      v12[1] = xmmword_140E3EA30;
      v12[2] = xmmword_140E3EA40;
      v12[3] = xmmword_140E3EA50;
      v12[4] = xmmword_140E3EA60;
      v12[5] = xmmword_140E3EA70;
      *((_QWORD *)v12 + 12) = qword_140E3EA80;
      *((_DWORD *)v12 + 1) = 0;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, (char *)v12 + 8, (char *)v12 + 2);
      if ( ApicIdAndNumaNode >= 0 )
      {
        v14 = *((unsigned int *)v12 + 2);
        v15 = *(unsigned __int16 *)(KeNodeBlock[*((unsigned __int16 *)v12 + 1)] + 2);
        *((_WORD *)v12 + 48) = v15;
        *((_QWORD *)v12 + 3) = CurrentPrcb->StatisticsPage;
        *((_DWORD *)v12 + 5) = CurrentPrcb->Number;
        HvlpCpuVendor = CurrentPrcb->CpuVendor;
        HvlpDiscoverTopologyLocal(v15, v14, (char *)v12 + 12, v12 + 1);
        LODWORD(HvlpLogicalProcessorCount) = 1;
        *(_BYTE *)v12 = 1;
        ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v8);
        if ( ApicIdAndNumaNode >= 0 )
        {
          v16 = 1;
          if ( (unsigned int)v3 > 1 )
          {
            v17 = (unsigned __int16 *)(v8 + 48);
            do
            {
              if ( *((_BYTE *)v17 - 7) )
              {
                if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v17 - 1), *v17) < 0 )
                  break;
                LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
                *((_BYTE *)v17 - 6) = 1;
              }
              ++v16;
              v17 += 20;
            }
            while ( v16 < (unsigned int)v3 );
          }
          ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v3, v8, v0);
          if ( ApicIdAndNumaNode >= 0 )
          {
            if ( (_DWORD)v3 )
            {
              v20 = v8 + 1;
              v21 = v3;
              do
              {
                if ( *(_BYTE *)v20 || *(_BYTE *)(v20 + 2) )
                {
                  LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v20 + 3));
                  if ( v23 )
                    *(_BYTE *)(LpcbByApicId + 1) = 1;
                  if ( *(_BYTE *)(v20 + 2) )
                  {
                    ++HvlpActiveProcessorCount;
                    *(_BYTE *)(LpcbByApicId + 98) = 1;
                  }
                }
                v20 += 40LL;
                --v21;
              }
              while ( v21 );
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
            v28 = 0LL;
            LODWORD(v29) = 0;
            v27 = 0LL;
            v25 = HvlpAcquireHypercallPage((__int64)&v27, 1, 0LL, 8LL);
            v25[1] = HvlpActiveProcessorCount;
            *v25 = 5;
            v26 = HvcallInitiateHypercall(135);
            HvlpReleaseHypercallPage((unsigned int *)&v27);
            v19 = v26;
            LOWORD(v19) = -v26;
            ApicIdAndNumaNode = v26 != 0 ? 0xC0000001 : 0;
            if ( !v26 )
            {
LABEL_32:
              ApicIdAndNumaNode = 0;
              if ( !KeDynamicPartitioningSupported )
                HvlNotifyAllProcessorsStarted(v19, v18, v20);
              HvlpApplyIoCachePolicy(v19, v18, v20);
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
    MmFreeIndependentPages(v8, v5);
    if ( ApicIdAndNumaNode >= 0 )
      return (unsigned int)ApicIdAndNumaNode;
    v4 = v35;
  }
  else
  {
    ApicIdAndNumaNode = -1073741670;
  }
  if ( HvlpLogicalProcessorRegions )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpLogicalProcessorRegions, v4);
    HvlpLogicalProcessorRegions = 0LL;
    HvlpLogicalProcessorRegionsCount = 0;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
