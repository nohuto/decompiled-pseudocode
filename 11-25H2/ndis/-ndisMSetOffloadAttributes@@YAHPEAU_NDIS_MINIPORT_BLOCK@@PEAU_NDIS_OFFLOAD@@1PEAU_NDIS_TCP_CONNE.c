/*
 * XREFs of ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x14007F760
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008CCF0 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1400B9A24 (-ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *Src,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *a4,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *Srca)
{
  size_t v8; // rbx
  unsigned int Flags; // r15d
  unsigned int v10; // r12d
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct _NDIS_MINIPORT_BLOCK *v13; // rsi
  unsigned int v14; // ebx
  size_t v15; // r15
  size_t Size; // r8
  size_t v17; // r8
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  __int64 p_MiniportInitialConfig; // rdx
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 p_MiniportHardwareCapabilities; // rdx
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  _NDIS_MINIPORT_OFFLOAD *v42; // rax
  _NDIS_MINIPORT_OFFLOAD *v43; // rax
  _NDIS_MINIPORT_OFFLOAD *v44; // rax
  _NDIS_MINIPORT_OFFLOAD *v45; // rax
  _NDIS_MINIPORT_OFFLOAD *v46; // rax
  char v48[8]; // [rsp+30h] [rbp-D0h]
  __int128 v50; // [rsp+48h] [rbp-B8h]
  __int128 v51; // [rsp+58h] [rbp-A8h]
  struct _NDIS_TCP_CONNECTION_OFFLOAD v52; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_TCP_CONNECTION_OFFLOAD v53; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v54[14]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v55[14]; // [rsp+180h] [rbp+80h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)a1,
      a2);
  v8 = 220LL;
  memset(v54, 0, 0xDCuLL);
  memset(v55, 0, 0xDCuLL);
  Flags = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v50 = 0LL;
  memset(&v52, 0, sizeof(v52));
  v51 = 0LL;
  memset(&v53, 0, sizeof(v53));
  if ( a2 && !Src )
    goto LABEL_5;
  if ( a4 )
  {
    if ( !Srca )
    {
      LOBYTE(v13) = (_BYTE)a1;
      v14 = -1073741637;
      goto LABEL_50;
    }
    v15 = 20LL;
    Size = a4->Header.Size;
    if ( a4->Header.Size >= 0x14u )
      Size = 20LL;
    memmove(&v52, a4, Size);
    if ( Srca->Header.Size < 0x14u )
      v15 = Srca->Header.Size;
    memmove(&v53, Srca, v15);
    if ( !ndisValidateConnectionOffload(&v52) )
    {
      LOBYTE(v13) = (_BYTE)a1;
      v14 = -1073741637;
      goto LABEL_50;
    }
    if ( !ndisValidateConnectionOffload(&v53) )
    {
      LOBYTE(v13) = (_BYTE)a1;
      v14 = -1073741637;
      goto LABEL_50;
    }
    v11 = *(_OWORD *)&v52.Header.Type;
    Flags = v52.Flags;
    v12 = *(_OWORD *)&v53.Header.Type;
    v10 = v53.Flags;
    v50 = *(_OWORD *)&v52.Header.Type;
    v51 = *(_OWORD *)&v53.Header.Type;
  }
  if ( a2 )
  {
    if ( a2->Header.Size >= 0xDCu )
      v17 = 220LL;
    else
      v17 = a2->Header.Size;
    memmove(v54, a2, v17);
    if ( Src->Header.Size < 0xDCu )
      v8 = Src->Header.Size;
    memmove(v55, Src, v8);
    if ( WORD1(v54[0]) < 0x70u
      || WORD1(v55[0]) < 0x70u
      || LOBYTE(v54[0]) != 0xA7
      || !BYTE1(v54[0])
      || LOBYTE(v55[0]) != 0xA7
      || !BYTE1(v55[0]) )
    {
LABEL_5:
      LOBYTE(v13) = (_BYTE)a1;
      v14 = -1073741637;
      goto LABEL_50;
    }
    v13 = a1;
    if ( (a1->DeviceFlags & 2) != 0 )
    {
      HIDWORD(v54[6]) &= 0xFFFFFFF9;
      HIDWORD(v55[6]) &= 0xFFFFFFF9;
    }
    if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a2->Header.Revision >= 2u
      && a2->IPsecV2.Encapsulation
      && !a1->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
      v14 = -1073741637;
      goto LABEL_50;
    }
    v11 = v50;
    v12 = v51;
  }
  else
  {
    v13 = a1;
  }
  Offload = v13->Offload;
  if ( !Offload )
  {
    v14 = ndisMAllocateMiniportOffload(v13);
    if ( v14 )
      goto LABEL_50;
    Offload = v13->Offload;
    if ( !Offload )
      goto LABEL_50;
    v11 = v50;
    v12 = v51;
  }
  if ( a2 )
  {
    Offload->SupportsOffload = 1;
    p_MiniportInitialConfig = (__int64)&v13->Offload->MiniportInitialConfig;
    v20 = v54[1];
    *(_OWORD *)p_MiniportInitialConfig = v54[0];
    v21 = *(_QWORD *)&v54[13];
    *(_OWORD *)(p_MiniportInitialConfig + 16) = v20;
    v22 = v54[3];
    *(_OWORD *)(p_MiniportInitialConfig + 32) = v54[2];
    *(_OWORD *)(p_MiniportInitialConfig + 48) = v22;
    v23 = v54[5];
    *(_OWORD *)(p_MiniportInitialConfig + 64) = v54[4];
    *(_OWORD *)(p_MiniportInitialConfig + 80) = v23;
    v24 = v54[8];
    *(_OWORD *)(p_MiniportInitialConfig + 96) = v54[6];
    p_MiniportInitialConfig += 128LL;
    *(_OWORD *)(p_MiniportInitialConfig - 16) = v54[7];
    *(_OWORD *)p_MiniportInitialConfig = v24;
    v25 = v54[10];
    *(_OWORD *)(p_MiniportInitialConfig + 16) = v54[9];
    *(_OWORD *)(p_MiniportInitialConfig + 32) = v25;
    v26 = v54[12];
    *(_OWORD *)(p_MiniportInitialConfig + 48) = v54[11];
    *(_OWORD *)(p_MiniportInitialConfig + 64) = v26;
    *(_QWORD *)(p_MiniportInitialConfig + 80) = v21;
    v27 = v55[0];
    *(_DWORD *)(p_MiniportInitialConfig + 88) = DWORD2(v54[13]);
    p_MiniportHardwareCapabilities = (__int64)&v13->Offload->MiniportHardwareCapabilities;
    v29 = v55[1];
    v30 = *(_QWORD *)&v55[13];
    *(_OWORD *)p_MiniportHardwareCapabilities = v27;
    v31 = v55[2];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 16) = v29;
    v32 = v55[3];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 32) = v31;
    v33 = v55[4];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 48) = v32;
    v34 = v55[5];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 64) = v33;
    v35 = v55[6];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 80) = v34;
    v36 = v55[7];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 96) = v35;
    p_MiniportHardwareCapabilities += 128LL;
    v37 = v55[8];
    *(_OWORD *)(p_MiniportHardwareCapabilities - 16) = v36;
    v38 = v55[9];
    *(_OWORD *)p_MiniportHardwareCapabilities = v37;
    v39 = v55[10];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 16) = v38;
    v40 = v55[11];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 32) = v39;
    v41 = v55[12];
    *(_OWORD *)(p_MiniportHardwareCapabilities + 48) = v40;
    *(_OWORD *)(p_MiniportHardwareCapabilities + 64) = v41;
    *(_QWORD *)(p_MiniportHardwareCapabilities + 80) = v30;
    *(_DWORD *)(p_MiniportHardwareCapabilities + 88) = DWORD2(v55[13]);
    v42 = v13->Offload;
    *(_OWORD *)&v42->MiniportCurrentConfig.Header.Type = *(_OWORD *)&v42->MiniportInitialConfig.Header.Type;
    *(_OWORD *)((char *)&v42->MiniportCurrentConfig.Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v42->MiniportInitialConfig.Checksum.IPv4Receive
                                                                                          + 4);
    *(_OWORD *)((char *)&v42->MiniportCurrentConfig.Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v42->MiniportInitialConfig.Checksum.IPv6Receive
                                                                                          + 4);
    *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v42->MiniportCurrentConfig.LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v42->MiniportInitialConfig.LsoV1.IPv4 + 12);
    *(_OWORD *)&v42->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options = *(_OWORD *)&v42->MiniportInitialConfig.IPsecV1.Supported.IPv4Options;
    *(_OWORD *)&v42->MiniportCurrentConfig.LsoV2.IPv4.Encapsulation = *(_OWORD *)&v42->MiniportInitialConfig.LsoV2.IPv4.Encapsulation;
    *(_OWORD *)&v42->MiniportCurrentConfig.LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v42->MiniportInitialConfig.LsoV2.IPv6.MaxOffLoadSize;
    *(_OWORD *)&v42->MiniportCurrentConfig.IPsecV2.Encapsulation = *(_OWORD *)&v42->MiniportInitialConfig.IPsecV2.Encapsulation;
    *(_OWORD *)&v42->MiniportCurrentConfig.IPsecV2.UdpEsp = *(_OWORD *)&v42->MiniportInitialConfig.IPsecV2.UdpEsp;
    *(_OWORD *)&v42->MiniportCurrentConfig.Rsc.IPv4.Enabled = *(_OWORD *)&v42->MiniportInitialConfig.Rsc.IPv4.Enabled;
    *(_OWORD *)&v42->MiniportCurrentConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&v42->MiniportInitialConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
    *(_OWORD *)&v42->MiniportCurrentConfig.EncapsulationTypes = *(_OWORD *)&v42->MiniportInitialConfig.EncapsulationTypes;
    v12 = v51;
    *(_OWORD *)&v42->MiniportCurrentConfig.UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&v42->MiniportInitialConfig.UdpSegmentation.IPv4.MaxOffLoadSize;
    v11 = v50;
    *((_QWORD *)&v42->MiniportCurrentConfig.UdpSegmentation.IPv6 + 1) = *((_QWORD *)&v42->MiniportInitialConfig.UdpSegmentation.IPv6
                                                                        + 1);
    *(_DWORD *)&v42->MiniportCurrentConfig.UdpRsc.Enabled = *(_DWORD *)&v42->MiniportInitialConfig.UdpRsc.Enabled;
    v43 = v13->Offload;
    v43->MiniportSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
    v43->MiniportSetEncapsulation.IPv4.Enabled = 2;
    v43->MiniportSetEncapsulation.IPv6.Enabled = 2;
    v44 = v13->Offload;
    v44->TopSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
    v44->TopSetEncapsulation.IPv4.Enabled = 2;
    v44->TopSetEncapsulation.IPv6.Enabled = 2;
  }
  if ( a4 )
  {
    v13->Offload->SupportsTcpConnectionOffload = 1;
    v45 = v13->Offload;
    *(_OWORD *)&v45->MiniportTcpConnectionOffloadCurrentConfig.Header.Type = v11;
    v45->MiniportTcpConnectionOffloadCurrentConfig.Flags = Flags;
    v46 = v13->Offload;
    *(_OWORD *)&v46->MiniportHwTcpConnectionOffloadCapabilities.Header.Type = v12;
    v46->MiniportHwTcpConnectionOffloadCapabilities.Flags = v10;
  }
  v14 = 0;
LABEL_50:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v48 = v14;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)v13,
      *(_QWORD *)v48);
  }
  return v14;
}
