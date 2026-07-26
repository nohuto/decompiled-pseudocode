/*
 * XREFs of ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050220
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x140051940 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x140051970 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 */

void __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // esi
  _PROCESSOR_NUMBER v3; // ebx
  _NDIS_RSS_PROFILE v4; // r15d
  struct _PROCESSOR_NUMBER v5; // edi
  PVOID v6; // rbx
  unsigned __int16 Group; // r13
  unsigned int v8; // r12d
  unsigned int MaxNumRssProcessors; // ecx
  struct _PROCESSOR_NUMBER *v10; // r8
  _PROCESSOR_NUMBER *v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // r10
  unsigned int IntegerData; // ecx
  unsigned __int8 Number; // dl
  struct _PROCESSOR_NUMBER v16; // r8d
  _PROCESSOR_NUMBER v17; // r8d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-48h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-40h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-38h] BYREF
  int Status; // [rsp+B0h] [rbp+38h] BYREF
  _PROCESSOR_NUMBER v22; // [rsp+B8h] [rbp+40h]
  struct _PROCESSOR_NUMBER v23; // [rsp+C0h] [rbp+48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+50h] BYREF

  v1 = 0;
  v3 = 0;
  ConfigurationHandle = 0LL;
  v4 = NdisRssProfileNumaStatic;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  if ( ndisHeterogeneousCpuSystem )
    v4 = NdisRssProfileBalanced;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  v5 = 0;
  v23 = 0;
  v22 = 0;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue, Status);
    NdisReadConfiguration(&Status, &ParameterValue, v6, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        if ( IntegerData < 7 )
          v4 = ParameterValue->ParameterData.IntegerData;
      }
    }
    if ( v4 == NdisRssProfileBalanced )
    {
      v22.Number = 63;
      v22.Group = 32;
    }
    else
    {
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
      Group = v23.Group;
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData < 0x20 )
          Group = ParameterValue->ParameterData.IntegerData;
        v23.Group = Group;
        v5 = v23;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
      if ( !Status )
      {
        Number = v23.Number;
        if ( ParameterValue->ParameterData.IntegerData < 0x40 )
          Number = ParameterValue->ParameterData.IntegerData;
        v23.Number = Number;
        v5 = v23;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
      if ( Status || (v8 = ParameterValue->ParameterData.IntegerData, v8 >= 0x20) )
      {
        LOWORD(v8) = 32;
        v22.Group = 32;
      }
      else
      {
        v22.Group = ParameterValue->ParameterData.IntegerData;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
      if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
      {
        v22.Number = 63;
      }
      else
      {
        v22.Number = ParameterValue->ParameterData.IntegerData;
        if ( (_WORD)v8 == 32 )
          v22.Group = Group;
      }
    }
    NdisCloseConfiguration(v6);
    v3 = v22;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  if ( (int)ndisCompareProcNum(ProcNumber, v5) > 0 )
    v5 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v5,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * (unsigned int)(ndisRssCpuCount - 1))) > 0 )
    v5 = *v10;
  if ( (int)ndisCompareProcNum(v3, *v10) > 0 )
    v3 = *v11;
  while ( v1 < v12 )
  {
    if ( (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v13 + 4LL * v1), v5) >= 0 )
    {
      if ( (int)ndisCompareProcNum(v16, v3) > 0 )
        v3 = v17;
      break;
    }
    ++v1;
  }
  a1->RssBaseProcessor = v5;
  a1->RssMaxProcessor = v3;
  a1->RssProfile = v4;
}
