/*
 * XREFs of ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400BFACC
 * Callers:
 *     ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BCE50 (-ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1400621F0 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1400B9BFC (-ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD_PARAMETERS *a2,
        int a3)
{
  struct _NDIS_OFFLOAD_PARAMETERS *v4; // rsi
  _QWORD *v5; // r15
  UCHAR IPsecV2; // r13
  UCHAR IPsecV2IPv4; // r10
  unsigned __int8 v8; // bl
  UCHAR Type; // r12
  UCHAR v10; // r11
  UCHAR Revision; // cl
  unsigned __int8 v12; // al
  UCHAR IPv4Checksum; // al
  char v14; // r14
  UCHAR TCPIPv4Checksum; // cl
  UCHAR TCPIPv6Checksum; // r8
  UCHAR UDPIPv4Checksum; // dl
  UCHAR v18; // r9
  unsigned int v19; // ebx
  NDIS_STATUS v20; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v21; // xmm6
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  unsigned int Value; // eax
  unsigned int v36; // eax
  int LsoV2IPv4; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  int LsoV2IPv6; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  int TcpConnectionIPv4; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  int TcpConnectionIPv6; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned __int8 v54; // si
  int v55; // ecx
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  UCHAR v61; // si
  int v62; // eax
  UCHAR v63; // si
  int v64; // eax
  int Status; // [rsp+38h] [rbp-69h] BYREF
  UCHAR LsoV1; // [rsp+3Ch] [rbp-65h]
  UCHAR IPsecV1; // [rsp+3Dh] [rbp-64h]
  struct _NDIS_CONFIGURATION_PARAMETER v69; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int8 v70; // [rsp+58h] [rbp-49h]
  int v71; // [rsp+5Ch] [rbp-45h]
  int v72; // [rsp+60h] [rbp-41h]
  PVOID ConfigurationHandle; // [rsp+68h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+70h] [rbp-31h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v75; // [rsp+88h] [rbp-19h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp-9h] BYREF
  UCHAR v77; // [rsp+108h] [rbp+67h]
  UCHAR v78; // [rsp+110h] [rbp+6Fh]
  unsigned __int8 v79; // [rsp+118h] [rbp+77h]
  UCHAR UDPIPv6Checksum; // [rsp+120h] [rbp+7Fh]

  *(_QWORD *)&v75.IntegerData = 262146LL;
  ConfigurationHandle = 0LL;
  v4 = a2;
  ParameterValue = 0LL;
  v75.StringData.Buffer = (wchar_t *)L"0";
  LOBYTE(a2) = 0;
  v78 = 0;
  LOBYTE(a3) = 0;
  v70 = 0;
  v5 = 0LL;
  v79 = 0;
  memset(&v69, 0, sizeof(v69));
  IPsecV2 = 0;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  UDPIPv6Checksum = 0;
  IPsecV2IPv4 = 0;
  LsoV1 = 0;
  v8 = 0;
  v71 = (int)a2;
  Type = 0;
  v72 = a3;
  v10 = 0;
  v77 = 0;
  IPsecV1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      190,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1);
    LOBYTE(a2) = v71;
    LOBYTE(a3) = v72;
    IPsecV2IPv4 = 0;
    v10 = 0;
  }
  Revision = v4->Header.Revision;
  if ( Revision >= 2u && v4->Header.Size >= 0x16u )
  {
    IPsecV2IPv4 = v4->IPsecV2IPv4;
    IPsecV2 = v4->IPsecV2;
    v78 = IPsecV2IPv4;
  }
  if ( Revision >= 3u && v4->Header.Size >= 0x1Au )
  {
    v8 = *(&v4->IPsecV2IPv4 + 1);
    v12 = *(&v4->IPsecV2IPv4 + 2);
    v10 = v4[1].Header.Revision;
    Type = v4[1].Header.Type;
    v70 = v8;
    v79 = v12;
    v77 = v10;
  }
  if ( Revision >= 4u && v4->Header.Size >= 0x20u )
  {
    LODWORD(a2) = (unsigned __int8)a2;
    if ( (v10 & 1) != 0 )
      LODWORD(a2) = Type;
    a3 = (unsigned __int8)a3;
    v71 = (int)a2;
    if ( (v10 & 2) != 0 )
      a3 = Type;
    v72 = a3;
  }
  if ( Revision >= 5u && v4->Header.Size >= 0x22u )
  {
    UDPIPv6Checksum = v4[1].UDPIPv6Checksum;
    LsoV1 = v4[1].LsoV1;
  }
  if ( Revision >= 6u && v4->Header.Size >= 0x23u )
    IPsecV1 = v4[1].IPsecV1;
  IPv4Checksum = v4->IPv4Checksum;
  v14 = a1->Offload->MiniportHardwareCapabilities.Flags & 1;
  if ( IPv4Checksum > 4u )
    goto LABEL_229;
  TCPIPv4Checksum = v4->TCPIPv4Checksum;
  if ( TCPIPv4Checksum > 4u )
    goto LABEL_229;
  TCPIPv6Checksum = v4->TCPIPv6Checksum;
  if ( TCPIPv6Checksum > 4u )
    goto LABEL_229;
  UDPIPv4Checksum = v4->UDPIPv4Checksum;
  if ( UDPIPv4Checksum > 4u )
    goto LABEL_229;
  v18 = v4->UDPIPv6Checksum;
  if ( v18 > 4u
    || v4->LsoV1 > 2u
    || v4->LsoV2IPv4 > 2u
    || v4->LsoV2IPv6 > 2u
    || v4->IPsecV1 > 4u
    || v4->TcpConnectionIPv4 > 2u
    || v4->TcpConnectionIPv6 > 2u
    || IPsecV2 > 4u
    || IPsecV2IPv4 > 4u
    || v8 > 2u
    || v79 > 2u
    || Type > 2u
    || v10 > 3u
    || Type && !v10 )
  {
    goto LABEL_229;
  }
  if ( UDPIPv6Checksum > 2u || LsoV1 > 2u || IPsecV1 > 2u )
    goto LABEL_229;
  if ( IPsecV2 && IPsecV2IPv4 )
    return (unsigned int)-1073676267;
  if ( v14 && (IPv4Checksum != TCPIPv4Checksum || IPv4Checksum != UDPIPv4Checksum || TCPIPv6Checksum != v18) )
    return (unsigned int)-1073741811;
  a1->OffloadRegistry.Value |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v20 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = ConfigurationHandle;
  v19 = v20;
  Status = v20;
  if ( v20 )
    goto LABEL_230;
  v21 = v75;
  if ( v14 )
  {
    v22 = v4->IPv4Checksum;
    if ( (_BYTE)v22 )
    {
      v69.ParameterType = NdisParameterString;
      v69.ParameterData = v75;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v22 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_230;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPUDPChecksumOffloadIPv4Str, &v69);
    }
    v23 = v4->TCPIPv6Checksum;
    if ( (_BYTE)v23 )
    {
      v69.ParameterType = NdisParameterString;
      v69.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v23 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_230;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPUDPChecksumOffloadIPv6Str, &v69);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v24 = v4->IPv4Checksum;
  if ( (_BYTE)v24 )
  {
    if ( !v14 )
    {
      v69.ParameterType = NdisParameterString;
      v69.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v24 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_230;
      ndisWriteConfigurationIfPresent(&Status, v5, &IPXsumIPv4Str, &v69);
    }
    if ( v4->IPv4Checksum == 1 )
    {
      a1->OffloadRegistry.Value |= 3u;
    }
    else
    {
      if ( v4->IPv4Checksum == 2 )
      {
        v25 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
      }
      else
      {
        if ( v4->IPv4Checksum != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFFC;
          goto LABEL_73;
        }
        v25 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
      }
      a1->OffloadRegistry.Value = v25;
    }
  }
LABEL_73:
  v26 = v4->TCPIPv4Checksum;
  if ( !(_BYTE)v26 )
    goto LABEL_85;
  if ( !v14 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v26 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPXsumIPv4Str, &v69);
  }
  if ( v4->TCPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xCu;
  }
  else
  {
    if ( v4->TCPIPv4Checksum == 2 )
    {
      v27 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
    }
    else
    {
      if ( v4->TCPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFF3;
        goto LABEL_85;
      }
      v27 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
    }
    a1->OffloadRegistry.Value = v27;
  }
LABEL_85:
  v28 = v4->TCPIPv6Checksum;
  if ( !(_BYTE)v28 )
    goto LABEL_97;
  if ( !v14 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v28 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPXsumIPv6Str, &v69);
  }
  if ( v4->TCPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0xC0u;
  }
  else
  {
    if ( v4->TCPIPv6Checksum == 2 )
    {
      v29 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
    }
    else
    {
      if ( v4->TCPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFF3F;
        goto LABEL_97;
      }
      v29 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
    }
    a1->OffloadRegistry.Value = v29;
  }
LABEL_97:
  v30 = v4->UDPIPv4Checksum;
  if ( !(_BYTE)v30 )
    goto LABEL_109;
  if ( !v14 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v30 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &UDPXsumIPv4Str, &v69);
  }
  if ( v4->UDPIPv4Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x30u;
  }
  else
  {
    if ( v4->UDPIPv4Checksum == 2 )
    {
      v31 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
    }
    else
    {
      if ( v4->UDPIPv4Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFFCF;
        goto LABEL_109;
      }
      v31 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
    }
    a1->OffloadRegistry.Value = v31;
  }
LABEL_109:
  v32 = v4->UDPIPv6Checksum;
  if ( !(_BYTE)v32 )
    goto LABEL_121;
  if ( !v14 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v32 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &UDPXsumIPv6Str, &v69);
  }
  if ( v4->UDPIPv6Checksum == 1 )
  {
    a1->OffloadRegistry.Value |= 0x300u;
  }
  else
  {
    if ( v4->UDPIPv6Checksum == 2 )
    {
      v33 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
    }
    else
    {
      if ( v4->UDPIPv6Checksum != 3 )
      {
        a1->OffloadRegistry.Value &= 0xFFFFFCFF;
        goto LABEL_121;
      }
      v33 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
    }
    a1->OffloadRegistry.Value = v33;
  }
LABEL_121:
  v34 = v4->LsoV1;
  if ( (_BYTE)v34 )
  {
    if ( (unsigned __int8)v34 > 2u )
      goto LABEL_229;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v34 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV1IPv4Str, &v69);
    Value = a1->OffloadRegistry.Value;
    if ( v4->LsoV1 == 1 )
      v36 = Value | 0x400;
    else
      v36 = Value & 0xFFFFFBFF;
    a1->OffloadRegistry.Value = v36;
  }
  LsoV2IPv4 = v4->LsoV2IPv4;
  if ( (_BYTE)LsoV2IPv4 )
  {
    if ( (unsigned __int8)LsoV2IPv4 > 2u )
      goto LABEL_229;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, LsoV2IPv4 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV2IPv4Str, &v69);
    v38 = a1->OffloadRegistry.Value;
    if ( v4->LsoV2IPv4 == 1 )
      v39 = v38 | 0x800;
    else
      v39 = v38 & 0xFFFFF7FF;
    a1->OffloadRegistry.Value = v39;
  }
  LsoV2IPv6 = v4->LsoV2IPv6;
  if ( (_BYTE)LsoV2IPv6 )
  {
    if ( (unsigned __int8)LsoV2IPv6 > 2u )
      goto LABEL_229;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, LsoV2IPv6 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &LsoV2IPv6Str, &v69);
    v41 = a1->OffloadRegistry.Value;
    if ( v4->LsoV2IPv6 == 1 )
      v42 = v41 | 0x1000;
    else
      v42 = v41 & 0xFFFFEFFF;
    a1->OffloadRegistry.Value = v42;
  }
  v43 = v4->IPsecV1;
  if ( (_BYTE)v43 )
  {
    if ( (unsigned __int8)v43 > 4u )
      goto LABEL_229;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, v43 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &IPsecIPv4Str, &v69);
    if ( v4->IPsecV1 == 1 )
    {
      a1->OffloadRegistry.Value |= 0x6000u;
    }
    else
    {
      if ( v4->IPsecV1 == 2 )
      {
        v44 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
      }
      else
      {
        if ( v4->IPsecV1 != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFFF9FFF;
          goto LABEL_153;
        }
        v44 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
      }
      a1->OffloadRegistry.Value = v44;
    }
  }
LABEL_153:
  if ( IPsecV2 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)IPsecV2 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &IPsecV2Str, &v69);
    v45 = a1->OffloadRegistry.Value;
    switch ( IPsecV2 )
    {
      case 1u:
        v46 = v45 | 0xC0000;
        break;
      case 2u:
        v46 = v45 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v46 = v45 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v46 = v45 & 0xFFF3FFFF;
        break;
    }
    a1->OffloadRegistry.Value = v46;
  }
  else
  {
    if ( !v78 )
      goto LABEL_163;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)v78 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &IPsecV2IPv4Str, &v69);
    if ( v78 == 1 )
    {
      a1->OffloadRegistry.Value |= 0x300000u;
    }
    else
    {
      if ( v78 == 2 )
      {
        v50 = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x200000;
      }
      else
      {
        if ( v78 != 3 )
        {
          a1->OffloadRegistry.Value &= 0xFFCFFFFF;
          goto LABEL_163;
        }
        v50 = a1->OffloadRegistry.Value & 0xFFCFFFFF | 0x100000;
      }
      a1->OffloadRegistry.Value = v50;
    }
  }
LABEL_163:
  TcpConnectionIPv4 = v4->TcpConnectionIPv4;
  if ( (_BYTE)TcpConnectionIPv4 )
  {
    if ( (unsigned __int8)TcpConnectionIPv4 > 2u )
      goto LABEL_229;
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, TcpConnectionIPv4 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &TCPConnectionOffloadIPv4Str, &v69);
    v48 = a1->OffloadRegistry.Value;
    if ( v4->TcpConnectionIPv4 == 1 )
      v49 = v48 | 0x8000;
    else
      v49 = v48 & 0xFFFF7FFF;
    a1->OffloadRegistry.Value = v49;
  }
  TcpConnectionIPv6 = v4->TcpConnectionIPv6;
  if ( (_BYTE)TcpConnectionIPv6 )
  {
    if ( (unsigned __int8)TcpConnectionIPv6 <= 2u )
    {
      v69.ParameterType = NdisParameterString;
      v69.ParameterData = v21;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, TcpConnectionIPv6 - 1);
      v19 = Status;
      if ( Status )
        goto LABEL_230;
      ndisWriteConfigurationIfPresent(&Status, v5, &TCPConnectionOffloadIPv6Str, &v69);
      v52 = a1->OffloadRegistry.Value;
      if ( v4->TcpConnectionIPv6 == 1 )
        v53 = v52 | 0x10000;
      else
        v53 = v52 & 0xFFFEFFFF;
      a1->OffloadRegistry.Value = v53;
      goto LABEL_187;
    }
LABEL_229:
    v19 = -1073676267;
    goto LABEL_230;
  }
LABEL_187:
  v54 = v70;
  if ( v70 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)v70 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &RscIPv4Str, &v69);
    v55 = 0;
    if ( v54 == 1 )
      v55 = 0x800000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFF7FFFFF | v55;
  }
  if ( v79 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)v79 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &RscIPv6Str, &v69);
    v56 = 0;
    if ( v79 == 1 )
      v56 = 0x1000000;
    a1->OffloadRegistry.Value = a1->OffloadRegistry.Value & 0xFEFFFFFF | v56;
  }
  if ( Type )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, Type == 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    if ( Type == 2 && v77 == 3 || Type == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadStr, &v69);
      v57 = 0;
      if ( Type == 2 )
        v57 = 0x2000000;
      a1->OffloadRegistry.Value = v57 | a1->OffloadRegistry.Value & 0xFDFFFFFF;
    }
    if ( (v77 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadNvgreStr, &v69);
      v58 = 0;
      if ( (_BYTE)v71 == 2 )
        v58 = 0x4000000;
      a1->OffloadRegistry.Value = v58 | a1->OffloadRegistry.Value & 0xFBFFFFFF;
    }
    if ( (v77 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v5, &EncapsulatedPacketTaskOffloadVxlanStr, &v69);
      v59 = 0;
      if ( (_BYTE)v72 == 2 )
        v59 = 0x8000000;
      a1->OffloadRegistry.Value = v59 | a1->OffloadRegistry.Value & 0xF7FFFFFF;
    }
  }
  if ( UDPIPv6Checksum )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString(
               (struct _UNICODE_STRING *)&v69.ParameterData,
               (unsigned int)UDPIPv6Checksum - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &UsoIPv4Str, &v69);
    v60 = 0;
    if ( UDPIPv6Checksum == 1 )
      v60 = 0x10000000;
    a1->OffloadRegistry.Value = v60 | a1->OffloadRegistry.Value & 0xEFFFFFFF;
  }
  v61 = LsoV1;
  if ( LsoV1 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)LsoV1 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &UsoIPv6Str, &v69);
    v62 = 0;
    if ( v61 == 1 )
      v62 = 0x20000000;
    a1->OffloadRegistry.Value = v62 | a1->OffloadRegistry.Value & 0xDFFFFFFF;
  }
  v63 = IPsecV1;
  if ( IPsecV1 )
  {
    v69.ParameterType = NdisParameterString;
    v69.ParameterData = v21;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v69.ParameterData, (unsigned int)IPsecV1 - 1);
    v19 = Status;
    if ( Status )
      goto LABEL_230;
    ndisWriteConfigurationIfPresent(&Status, v5, &UdpRscStr, &v69);
    v64 = 0;
    if ( v63 == 1 )
      v64 = 0x40000000;
    a1->OffloadRegistry.Value = v64 | a1->OffloadRegistry.Value & 0xBFFFFFFF;
  }
  v19 = 0;
LABEL_230:
  if ( v5 )
    NdisCloseConfiguration(v5);
  return v19;
}
