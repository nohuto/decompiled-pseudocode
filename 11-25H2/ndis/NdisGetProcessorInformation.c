/*
 * XREFs of NdisGetProcessorInformation @ 0x14006A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  bool v2; // zf
  void *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r10
  char *v9; // r9
  __int64 v10; // r11
  ULONG *p_SocketId; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r8

  if ( SystemProcessorInfo->Header.Size < 0x430u )
    return -1073676266;
  v2 = SystemProcessorInfo->RssProcessors == 0LL;
  v3 = ndisSystemProcessorInfo;
  SystemProcessorInfo->Flags = *((_DWORD *)ndisSystemProcessorInfo + 1);
  SystemProcessorInfo->ProcessorVendor = *((_DWORD *)v3 + 2);
  SystemProcessorInfo->NumPhysicalPackages = *((_DWORD *)v3 + 3);
  SystemProcessorInfo->NumCores = *((_DWORD *)v3 + 4);
  SystemProcessorInfo->NumCoresPerPhysicalPackage = *((_DWORD *)v3 + 5);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = *((_DWORD *)v3 + 6);
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  v4 = (unsigned int)ndisRssCpuCount;
  SystemProcessorInfo->RssCpuCount = ndisRssCpuCount;
  if ( !v2 )
  {
    v8 = 0LL;
    if ( (_DWORD)v4 )
    {
      v9 = (char *)ndisRssProcessors;
      v10 = v4;
      do
      {
        if ( *(_WORD *)v9 )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          SystemProcessorInfo->RssProcessors[v8] = v9[2];
          v8 = (unsigned int)(v8 + 1);
        }
        v9 += 4;
        --v10;
      }
      while ( v10 );
    }
  }
  v5 = 0LL;
  v6 = 0;
  if ( !ndisNumberOfActiveProcessorsAtBoot )
    goto LABEL_22;
  v6 = ndisNumberOfActiveProcessorsAtBoot;
  p_SocketId = &ndisCpuInfo->SocketId;
  v12 = ndisNumberOfActiveProcessorsAtBoot;
  do
  {
    if ( !*((_WORD *)p_SocketId - 2) )
    {
      v13 = 2 * (v5 + 3);
      v14 = (unsigned int)v5;
      v5 = (unsigned int)(v5 + 1);
      *((_DWORD *)&SystemProcessorInfo->Header + 2 * v13) = *((unsigned __int8 *)p_SocketId - 2);
      SystemProcessorInfo->CpuInfo[v14].PhysicalPackageId = *p_SocketId;
      SystemProcessorInfo->CpuInfo[v14].CoreId = p_SocketId[1];
      SystemProcessorInfo->CpuInfo[v14].HyperThreadID = p_SocketId[2];
    }
    p_SocketId += 5;
    --v12;
  }
  while ( v12 );
  if ( v6 < 0x40 )
  {
LABEL_22:
    do
    {
      v7 = v6++ + 3LL;
      *((_OWORD *)&SystemProcessorInfo->Header.Type + v7) = 0LL;
    }
    while ( v6 < 0x40 );
  }
  return 0;
}
