/*
 * XREFs of ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x140063C10
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140070710 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1400B1C58 (-ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *Src,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *a4,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *Srca)
{
  const struct _GUID *v8; // rdx
  size_t v9; // rbx
  unsigned int Flags; // r15d
  unsigned int v11; // r12d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _NDIS_MINIPORT_BLOCK *v14; // rsi
  unsigned int v15; // ebx
  size_t v16; // r15
  size_t Size; // r8
  size_t v18; // r8
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  __int64 p_MiniportInitialConfig; // rdx
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 p_MiniportHardwareCapabilities; // rdx
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  _NDIS_MINIPORT_OFFLOAD *v43; // rax
  _NDIS_MINIPORT_OFFLOAD *v44; // rax
  _NDIS_MINIPORT_OFFLOAD *v45; // rax
  _NDIS_MINIPORT_OFFLOAD *v46; // rax
  _NDIS_MINIPORT_OFFLOAD *v47; // rax
  char v49[8]; // [rsp+30h] [rbp-D0h]
  __int128 v51; // [rsp+48h] [rbp-B8h]
  __int128 v52; // [rsp+58h] [rbp-A8h]
  struct _NDIS_TCP_CONNECTION_OFFLOAD v53; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_TCP_CONNECTION_OFFLOAD v54; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v55[14]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v56[14]; // [rsp+180h] [rbp+80h] BYREF

  v8 = &WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      13,
      10,
      (struct _GUID *)&WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids,
      (char)a1,
      (char)a2);
  }
  v9 = 220LL;
  memset(v55, 0, 0xDCuLL);
  memset(v56, 0, 0xDCuLL);
  Flags = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v51 = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0LL;
  memset(&v54, 0, sizeof(v54));
  if ( a2 && !Src )
    goto LABEL_5;
  if ( a4 )
  {
    if ( !Srca )
    {
      LOBYTE(v14) = (_BYTE)a1;
      v15 = -1073741637;
      goto LABEL_50;
    }
    v16 = 20LL;
    Size = a4->Header.Size;
    if ( a4->Header.Size >= 0x14u )
      Size = 20LL;
    memmove(&v53, a4, Size);
    if ( Srca->Header.Size < 0x14u )
      v16 = Srca->Header.Size;
    memmove(&v54, Srca, v16);
    if ( !ndisValidateConnectionOffload(&v53) )
    {
      LOBYTE(v14) = (_BYTE)a1;
      v15 = -1073741637;
      goto LABEL_50;
    }
    if ( !ndisValidateConnectionOffload(&v54) )
    {
      LOBYTE(v14) = (_BYTE)a1;
      v15 = -1073741637;
      goto LABEL_50;
    }
    v12 = *(_OWORD *)&v53.Header.Type;
    Flags = v53.Flags;
    v13 = *(_OWORD *)&v54.Header.Type;
    v11 = v54.Flags;
    v51 = *(_OWORD *)&v53.Header.Type;
    v52 = *(_OWORD *)&v54.Header.Type;
  }
  if ( a2 )
  {
    if ( a2->Header.Size >= 0xDCu )
      v18 = 220LL;
    else
      v18 = a2->Header.Size;
    memmove(v55, a2, v18);
    if ( Src->Header.Size < 0xDCu )
      v9 = Src->Header.Size;
    memmove(v56, Src, v9);
    if ( WORD1(v55[0]) < 0x70u
      || WORD1(v56[0]) < 0x70u
      || LOBYTE(v55[0]) != 0xA7
      || !BYTE1(v55[0])
      || LOBYTE(v56[0]) != 0xA7
      || !BYTE1(v56[0]) )
    {
LABEL_5:
      LOBYTE(v14) = (_BYTE)a1;
      v15 = -1073741637;
      goto LABEL_50;
    }
    v14 = a1;
    if ( (a1->DeviceFlags & 2) != 0 )
    {
      HIDWORD(v55[6]) &= 0xFFFFFFF9;
      HIDWORD(v56[6]) &= 0xFFFFFFF9;
    }
    if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a2->Header.Revision >= 2u
      && a2->IPsecV2.Encapsulation
      && !a1->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
      v15 = -1073741637;
      goto LABEL_50;
    }
    v12 = v51;
    v13 = v52;
  }
  else
  {
    v14 = a1;
  }
  Offload = v14->Offload;
  if ( !Offload )
  {
    v15 = ndisMAllocateMiniportOffload(v14);
    if ( v15 )
      goto LABEL_50;
    Offload = v14->Offload;
    if ( !Offload )
      goto LABEL_50;
    v12 = v51;
    v13 = v52;
  }
  if ( a2 )
  {
    Offload->SupportsOffload = 1;
    p_MiniportInitialConfig = (__int64)&v14->Offload->MiniportInitialConfig;
    v21 = v55[1];
    *(_OWORD *)p_MiniportInitialConfig = v55[0];
    v22 = *(_QWORD *)&v55[13];
    *(_OWORD *)(p_MiniportInitialConfig + 16) = v21;
    v23 = v55[3];
    *(_OWORD *)(p_MiniportInitialConfig + 32) = v55[2];
    *(_OWORD *)(p_MiniportInitialConfig + 48) = v23;
    v24 = v55[5];
    *(_OWORD *)(p_MiniportInitialConfig + 64) = v55[4];
    *(_OWORD *)(p_MiniportInitialConfig + 80) = v24;
    v25 = v55[8];
    *(_OWORD *)(p_MiniportInitialConfig + 96) = v55[6];
    p_MiniportInitialConfig += 128LL;
    *(_OWORD *)(p_MiniportInitialConfig - 16) = v55[7];
    *(_OWORD *)p_MiniportInitialConfig = v25;
    v26 = v55[10];
    *(_OWORD *)(p_MiniportInitialConfig + 16) = v55[9];
    *(_OWORD *)(p_MiniportInitialConfig + 32) = v26;
    v27 = v55[12];
    *(_OWORD *)(p_MiniportInitialConfig + 48) = v55[11];
    *(_OWORD *)(p_MiniportInitialConfig + 64) = v27;
    *(_QWORD *)(p_MiniportInitialConfig + 80) = v22;
    v28 = v56[0];
    *(_DWORD *)(p_MiniportInitialConfig + 88) = DWORD2(v55[13]);
    p_MiniportHardwareCapabilities = (__int64)&v14->Offload->MiniportHardwareCapabilities;
    v30 = v56[1];
    v31 = *(_QWORD *)&v56[13];
    *(_OWORD *)p_MiniportHardwareCapabilities = v28;
    v32 = v56[2];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 16) = v30;
    v33 = v56[3];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 32) = v32;
    v34 = v56[4];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 48) = v33;
    v35 = v56[5];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 64) = v34;
    v36 = v56[6];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 80) = v35;
    v37 = v56[7];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 96) = v36;
    p_MiniportHardwareCapabilities += 128LL;
    v38 = v56[8];
    *(_OWORD *)(p_MiniportHardwareCapabilities - 16) = v37;
    v39 = v56[9];
    *(_OWORD *)p_MiniportHardwareCapabilities = v38;
    v40 = v56[10];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 16) = v39;
    v41 = v56[11];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 32) = v40;
    v42 = v56[12];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 48) = v41;
    *(_OWORD *)(p_MiniportHardwareCapabilities + 64) = v42;
    *(_QWORD *)(p_MiniportHardwareCapabilities + 80) = v31;
    *(_DWORD *)(p_MiniportHardwareCapabilities + 88) = DWORD2(v56[13]);
    v43 = v14->Offload;
    *(_OWORD *)&v43->MiniportCurrentConfig.Header.Type = *(_OWORD *)&v43->MiniportInitialConfig.Header.Type;
    *(_OWORD *)((char *)&v43->MiniportCurrentConfig.Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v43->MiniportInitialConfig.Checksum.IPv4Receive
                                                                                          + 4);
    *(_OWORD *)((char *)&v43->MiniportCurrentConfig.Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v43->MiniportInitialConfig.Checksum.IPv6Receive
                                                                                          + 4);
    *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v43->MiniportCurrentConfig.LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v43->MiniportInitialConfig.LsoV1.IPv4 + 12);
    *(_OWORD *)&v43->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options = *(_OWORD *)&v43->MiniportInitialConfig.IPsecV1.Supported.IPv4Options;
    *(_OWORD *)&v43->MiniportCurrentConfig.LsoV2.IPv4.Encapsulation = *(_OWORD *)&v43->MiniportInitialConfig.LsoV2.IPv4.Encapsulation;
    *(_OWORD *)&v43->MiniportCurrentConfig.LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v43->MiniportInitialConfig.LsoV2.IPv6.MaxOffLoadSize;
    *(_OWORD *)&v43->MiniportCurrentConfig.IPsecV2.Encapsulation = *(_OWORD *)&v43->MiniportInitialConfig.IPsecV2.Encapsulation;
    *(_OWORD *)&v43->MiniportCurrentConfig.IPsecV2.UdpEsp = *(_OWORD *)&v43->MiniportInitialConfig.IPsecV2.UdpEsp;
    *(_OWORD *)&v43->MiniportCurrentConfig.Rsc.IPv4.Enabled = *(_OWORD *)&v43->MiniportInitialConfig.Rsc.IPv4.Enabled;
    *(_OWORD *)&v43->MiniportCurrentConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&v43->MiniportInitialConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
    *(_OWORD *)&v43->MiniportCurrentConfig.EncapsulationTypes = *(_OWORD *)&v43->MiniportInitialConfig.EncapsulationTypes;
    v13 = v52;
    *(_OWORD *)&v43->MiniportCurrentConfig.UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&v43->MiniportInitialConfig.UdpSegmentation.IPv4.MaxOffLoadSize;
    v12 = v51;
    *((_QWORD *)&v43->MiniportCurrentConfig.UdpSegmentation.IPv6 + 1) = *((_QWORD *)&v43->MiniportInitialConfig.UdpSegmentation.IPv6
                                                                        + 1);
    *(_DWORD *)&v43->MiniportCurrentConfig.UdpRsc.Enabled = *(_DWORD *)&v43->MiniportInitialConfig.UdpRsc.Enabled;
    v44 = v14->Offload;
    v44->MiniportSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
    v44->MiniportSetEncapsulation.IPv4.Enabled = 2;
    v44->MiniportSetEncapsulation.IPv6.Enabled = 2;
    v45 = v14->Offload;
    v45->TopSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
    v45->TopSetEncapsulation.IPv4.Enabled = 2;
    v45->TopSetEncapsulation.IPv6.Enabled = 2;
  }
  if ( a4 )
  {
    v14->Offload->SupportsTcpConnectionOffload = 1;
    v46 = v14->Offload;
    *(_OWORD *)&v46->MiniportTcpConnectionOffloadCurrentConfig.Header.Type = v12;
    v46->MiniportTcpConnectionOffloadCurrentConfig.Flags = Flags;
    v47 = v14->Offload;
    *(_OWORD *)&v47->MiniportHwTcpConnectionOffloadCapabilities.Header.Type = v13;
    v47->MiniportHwTcpConnectionOffloadCapabilities.Flags = v11;
  }
  v15 = 0;
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v49 = v15;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids,
      (char)v14,
      *(_QWORD *)v49);
  }
  return v15;
}
