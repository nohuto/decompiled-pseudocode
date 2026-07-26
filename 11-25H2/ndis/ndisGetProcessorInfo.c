/*
 * XREFs of ndisGetProcessorInfo @ 0x14019784C
 * Callers:
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14019725C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 * Callees:
 *     ndisGetLogicalProcessorInformation @ 0x140197314 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  _DWORD *Pool2; // rax
  _DWORD *v1; // r8
  int LogicalProcessorInformation; // ebx
  char *v8; // rcx
  ULONG v9; // edi
  __int64 j; // rbx
  ULONG v11; // esi
  __int64 v12; // rdi
  __int64 i; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER *v15; // rdx

  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus), 538985550);
  ndisSystemProcessorInfo = Pool2;
  v1 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = 2621824;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1970169159 )
    goto LABEL_7;
  if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    v1[2] = 1;
  else
LABEL_7:
    v1[2] = (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 ? 2 : 0;
  ndisRssProcessors = (void *)ExAllocatePool2(64LL, 4LL * ndisMaxNumRssCpus, 538985550);
  if ( ndisRssProcessors )
  {
    v8 = (char *)ndisSystemProcessorInfo;
    *((_DWORD *)ndisSystemProcessorInfo + 8) = ndisNumberOfActiveProcessorsAtBoot;
    ndisCpuInfo = (struct _NDIS_PROCESSOR_INFO_EX *)(v8 + 40);
    *((_DWORD *)v8 + 3) = 1;
    *((_DWORD *)v8 + 4) = 1;
    *((_DWORD *)v8 + 6) = 1;
    *((_DWORD *)v8 + 5) = 1;
    *((_DWORD *)v8 + 7) = 40;
    *((_DWORD *)v8 + 9) = 20;
    LogicalProcessorInformation = ndisGetLogicalProcessorInformation((__int64)v8);
    if ( LogicalProcessorInformation >= 0 )
    {
      v11 = ndisRssBaseCpu;
      v12 = 0LL;
      while ( v11 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v12 < ndisMaxNumRssCpus )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + i);
          if ( ndisCpuInfo[ProcessorIndexFromNumber].SocketId == ndisCpuInfo[v11].SocketId
            && ndisCpuInfo[ProcessorIndexFromNumber].CoreId == ndisCpuInfo[v11].CoreId )
          {
            break;
          }
        }
        if ( (_DWORD)i == (_DWORD)v12 )
        {
          v15 = (_PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * v12);
          v12 = (unsigned int)(v12 + 1);
          LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v11, v15);
        }
        ++v11;
      }
      LODWORD(ndisRssCpuCount) = v12;
    }
    else
    {
      v9 = ndisRssBaseCpu;
      for ( j = 0LL;
            v9 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)j < ndisMaxNumRssCpus;
            j = (unsigned int)(j + 1) )
      {
        KeGetProcessorNumberFromIndex(v9++, (PPROCESSOR_NUMBER)ndisRssProcessors + j);
      }
      LODWORD(ndisRssCpuCount) = j;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)LogicalProcessorInformation;
}
