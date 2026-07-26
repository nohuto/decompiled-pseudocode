/*
 * XREFs of ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004DEF0 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x140081A80 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008FBE0 (-ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092700 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098410 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisInitializeConfiguration(struct _NDIS_MINIPORT_BLOCK *a1, PCWSTR Path)
{
  const WCHAR *v2; // rsi
  _INTERFACE_TYPE IntegerData; // r14d
  unsigned int v4; // r12d
  unsigned __int16 Length; // r15
  _DWORD *Pool2; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  unsigned int v11; // esi
  PVOID *v12; // rax
  PVOID i; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ecx
  PNDIS_CONFIGURATION_PARAMETER v23; // r15
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  __int128 ConfigurationHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  const WCHAR *v31; // [rsp+68h] [rbp-98h]
  UNICODE_STRING Keyword; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v33; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v35; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v36; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 PropertyBuffer; // [rsp+D0h] [rbp-30h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v40; // [rsp+118h] [rbp+18h]
  __int128 v41; // [rsp+128h] [rbp+28h]
  __int128 v42; // [rsp+138h] [rbp+38h]
  __int128 v43; // [rsp+148h] [rbp+48h]
  __int128 v44; // [rsp+158h] [rbp+58h]
  __int128 v45; // [rsp+168h] [rbp+68h]
  __int128 v46; // [rsp+178h] [rbp+78h]

  *(_QWORD *)&v34.Length = 1310738LL;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v31 = 0LL;
  Status = 0;
  ParameterValue = 0LL;
  v34.Buffer = L"BusNumber";
  v2 = Path;
  *(_QWORD *)&v33.Length = 2097182LL;
  Keyword.Buffer = (wchar_t *)L"BusType";
  IntegerData = MaximumInterfaceType;
  *(_QWORD *)&v35.Length = 1966108LL;
  v33.Buffer = L"PnPCapabilities";
  LOWORD(v4) = 20;
  *(_QWORD *)&v37.Length = 2883626LL;
  v35.Buffer = L"RemoteBootCard";
  Length = 16;
  *(_QWORD *)&v36.Length = 2752552LL;
  v37.Buffer = L"NdisDriverVerifyFlags";
  v25 = 1;
  v36.Buffer = L"SGMapRegistersNeeded";
  ConfigurationHandle = 0LL;
  v28 = -1;
  *(_OWORD *)P = 0LL;
  ResultLength = 0;
  PropertyBuffer = 0LL;
  memset(&QueryTable, 0, sizeof(QueryTable));
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Path) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Path,
      13,
      10,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 136LL, 1751336014);
  v9 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_12;
  }
  a1->ConfigurationHandle = Pool2;
  *Pool2 = 8913162;
  v31 = v2;
  *((_QWORD *)&ConfigurationHandle + 1) = a1;
  P[0] = Pool2;
  P[1] = 0LL;
  if ( a1->OpenQueue || (Status = ndisReadBindPaths(a1, &QueryTable, v2), (v11 = Status) == 0) )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    *((_QWORD *)v9 + 3) = ndisSaveParameters;
    v9[8] = 20;
    v9[14] = 0;
    *((_QWORD *)v9 + 10) = 0LL;
    v9[22] = 0;
    *((_QWORD *)v9 + 12) = 0LL;
    *((_QWORD *)v9 + 1) = a1;
    if ( IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) >= 0 )
    {
      LODWORD(v8) = PropertyBuffer;
      v15 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
        v15 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
      if ( !v15 )
      {
        IntegerData = Internal;
        v25 = 0;
        goto LABEL_66;
      }
      v16 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
        v16 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
      if ( !v16 )
      {
        IntegerData = PCMCIABus;
        v25 = 8;
        goto LABEL_66;
      }
      v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
        v17 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
      if ( !v17 )
      {
        IntegerData = PCIBus;
        v25 = 5;
        goto LABEL_66;
      }
      v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
        v18 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
      if ( !v18 )
      {
        IntegerData = Vmcs;
        v25 = 16;
        goto LABEL_66;
      }
      v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
        v19 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
      if ( !v19 )
      {
        IntegerData = ACPIBus;
        v25 = 17;
        goto LABEL_66;
      }
      v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
        v20 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
      if ( !v20 )
      {
        IntegerData = PNPISABus;
        v25 = 14;
        goto LABEL_66;
      }
      v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
        v21 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
      if ( !v21 )
      {
        v25 = 18;
        goto LABEL_66;
      }
      v8 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
      if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
        v8 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
      if ( !v8 )
      {
        IntegerData = Eisa;
        v25 = 2;
        goto LABEL_66;
      }
    }
    else if ( v25 != 1 )
    {
      goto LABEL_8;
    }
    if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyLegacyBusType, 4u, &v25, &ResultLength) < 0 )
    {
LABEL_8:
      *((_DWORD *)P[0] + 4) |= 1u;
      NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &Keyword, NdisParameterInteger);
      *((_DWORD *)P[0] + 4) &= ~1u;
      if ( Status )
      {
        IntegerData = v25;
      }
      else
      {
        IntegerData = ParameterValue->ParameterData.IntegerData;
        v25 = IntegerData;
      }
LABEL_10:
      if ( IntegerData == PCIBus || IntegerData == PCMCIABus )
      {
        Status = ndisQueryBusInterface(a1);
        v11 = Status;
        if ( Status )
          goto LABEL_12;
        IntegerData = v25;
      }
      if ( (unsigned int)(IntegerData - 2) <= 1 )
      {
        v11 = -1073741637;
      }
      else
      {
        a1->BusType = IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v33, NdisParameterInteger);
        if ( Status )
        {
          if ( (a1->PnPFlags & 0x200000) != 0 )
          {
            a1->PnPCapabilities = ndisDefaultPnPCapabilities;
            a1->PnPCapabilities = ndisDefaultPnPCapabilities | 0x10000000;
          }
        }
        else
        {
          a1->PnPCapabilities = ParameterValue->ParameterData.IntegerData;
        }
        if ( (a1->Flags & 0x80u) != 0 )
          a1->PnPCapabilities &= 0x10000100u;
        if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyBusNumber, 4u, &v28, &ResultLength) >= 0
          || (NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v34, NdisParameterInteger), Status) )
        {
          v22 = v28;
        }
        else
        {
          v22 = ParameterValue->ParameterData.IntegerData;
          v28 = v22;
        }
        a1->BusNumber = v22;
        NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v35, NdisParameterHexInteger);
        if ( !Status && ParameterValue->ParameterData.IntegerData )
        {
          a1->Flags |= 0x40000000u;
          a1->InfoFlags |= 0x4000u;
        }
        NdisReadConfiguration(
          &Status,
          &ParameterValue,
          &ConfigurationHandle,
          &MediaDisconnectTimeOutStr,
          NdisParameterHexInteger);
        if ( !Status )
        {
          v4 = ParameterValue->ParameterData.IntegerData;
          if ( v4 )
          {
            if ( v4 > 0xFFFF )
              LOWORD(v4) = -1;
          }
          else
          {
            LOWORD(v4) = 1;
          }
        }
        a1->MediaDisconnectTimeOut = v4;
        NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
        if ( !Status && ParameterValue->ParameterData.IntegerData )
        {
          a1->FilterPnPFlags |= 0x200u;
          ndisAoAcTest = 1;
        }
        ndisReadPMRegistry(&ConfigurationHandle, a1);
        NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v36, NdisParameterInteger);
        if ( !Status )
        {
          v23 = ParameterValue;
          if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
          {
            ParameterValue->ParameterData.IntegerData = 128;
            v23 = ParameterValue;
          }
          Length = v23->ParameterData.StringData.Length;
        }
        a1->SGMapRegistersNeeded = Length;
        NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v37, NdisParameterHexInteger);
        if ( !Status )
          a1->DriverVerifyFlags = ParameterValue->ParameterData.IntegerData;
        v9[4] = 0;
        ndisReadOffloadRegistry(a1);
        ndisReadSoftwareTimestampSettings(&ConfigurationHandle, a1);
        v11 = 0;
      }
      goto LABEL_12;
    }
    IntegerData = v25;
LABEL_66:
    if ( IntegerData != Isa && IntegerData != PCMCIABus )
      goto LABEL_10;
    goto LABEL_8;
  }
LABEL_12:
  v12 = (PVOID *)P[1];
  for ( i = P[1]; P[1]; i = P[1] )
  {
    P[1] = *v12;
    ExFreePoolWithTag(i, 0);
    v12 = (PVOID *)P[1];
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      11,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  return v11;
}
