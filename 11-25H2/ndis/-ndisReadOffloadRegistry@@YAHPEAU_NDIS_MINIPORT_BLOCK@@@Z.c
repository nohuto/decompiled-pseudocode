/*
 * XREFs of ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092700
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008E270 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID v6; // rsi
  unsigned int v7; // edi
  unsigned int IntegerData; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int Value; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // eax
  PNDIS_CONFIGURATION_PARAMETER v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+A0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A8h] [rbp+48h] BYREF
  PVOID ConfigurationHandle; // [rsp+B0h] [rbp+50h] BYREF

  ParameterValue = 0LL;
  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      66,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v6 = ConfigurationHandle;
  v7 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &IPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v9 = IntegerData - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFFC;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 3u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v10 = ParameterValue->ParameterData.IntegerData;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFF3;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0xCu;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v12 = ParameterValue->ParameterData.IntegerData;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFFCF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x30u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v14 = ParameterValue->ParameterData.IntegerData;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFF3F;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0xC0u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v16 = ParameterValue->ParameterData.IntegerData;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
          else
            a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x300u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v19 = Value & 0xFFFFEFFF;
      else
        v19 = Value | 0x1000;
      a1->OffloadRegistry.Value = v19;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v20 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v21 = v20 & 0xFFFFF7FF;
      else
        v21 = v20 | 0x800;
      a1->OffloadRegistry.Value = v21;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v22 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v23 = v22 & 0xFFFFFBFF;
      else
        v23 = v22 | 0x400;
      a1->OffloadRegistry.Value = v23;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v24 = ParameterValue->ParameterData.IntegerData;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
            a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
          else
            a1->OffloadRegistry.Value &= 0xFFFF9FFF;
        }
        else
        {
          a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x6000u;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v26 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v27 = v26 & 0xFFFF7FFF;
      else
        v27 = v26 | 0x8000;
      a1->OffloadRegistry.Value = v27;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v28 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v29 = v28 & 0xFFFEFFFF;
      else
        v29 = v28 | 0x10000;
      a1->OffloadRegistry.Value = v29;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v6, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v34 = ParameterValue;
        v35 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v35;
        v36 = v34->ParameterData.IntegerData;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 == 1 )
              v38 = v35 & 0xFFCFFFFF | 0x100000;
            else
              v38 = v35 & 0xFFCFFFFF;
          }
          else
          {
            v38 = v35 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v38 = v35 | 0x300000;
        }
        a1->OffloadRegistry.Value = v38;
      }
    }
    else
    {
      v30 = a1->OffloadRegistry.Value;
      v31 = ParameterValue->ParameterData.IntegerData;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
            v33 = v30 & 0xFFF3FFFF | 0x40000;
          else
            v33 = v30 & 0xFFF3FFFF;
          a1->OffloadRegistry.Value = v33;
        }
        else
        {
          a1->OffloadRegistry.Value = v30 & 0xFFF3FFFF | 0x80000;
        }
      }
      else
      {
        a1->OffloadRegistry.Value = v30 | 0xC0000;
      }
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v39 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v40 = v39 & 0xFF7FFFFF;
      else
        v40 = v39 | 0x800000;
      a1->OffloadRegistry.Value = v40;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v41 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v42 = v41 & 0xFEFFFFFF;
      else
        v42 = v41 | 0x1000000;
      a1->OffloadRegistry.Value = v42;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v43 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v44 = v43 & 0xFDFFFFFF;
      else
        v44 = v43 | 0x2000000;
      a1->OffloadRegistry.Value = v44;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v45 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v46 = v45 & 0xFBFFFFFF;
      else
        v46 = v45 | 0x4000000;
      a1->OffloadRegistry.Value = v46;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    if ( !Status )
    {
      v47 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v48 = v47 & 0xF7FFFFFF;
      else
        v48 = v47 | 0x8000000;
      a1->OffloadRegistry.Value = v48;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &UsoIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v49 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v50 = v49 & 0xEFFFFFFF;
      else
        v50 = v49 | 0x10000000;
      a1->OffloadRegistry.Value = v50;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &UsoIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v51 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v52 = v51 & 0xDFFFFFFF;
      else
        v52 = v51 | 0x20000000;
      a1->OffloadRegistry.Value = v52;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &UdpRscStr, NdisParameterInteger);
    v7 = Status;
    if ( !Status )
    {
      v53 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v54 = v53 & 0xBFFFFFFF;
      else
        v54 = v53 | 0x40000000;
      a1->OffloadRegistry.Value = v54;
    }
  }
  if ( v6 )
    NdisCloseConfiguration(v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x43u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v7,
      a1->OffloadRegistry.Value);
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1, v3, v4, v5);
  return v7;
}
