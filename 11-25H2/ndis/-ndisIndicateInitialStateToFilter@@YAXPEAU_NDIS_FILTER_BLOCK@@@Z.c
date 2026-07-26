/*
 * XREFs of ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140057FB0 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400580A0 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058B60 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140059F50 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005A010 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069810 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x140088AF0 (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  _NDIS_FILTER_BLOCK *HigherFilter; // r15
  _NDIS_FILTER_BLOCK *LowerFilter; // r13
  int v5; // edx
  unsigned __int64 *p_Lock; // rsi
  KIRQL v7; // al
  KIRQL i; // r12
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  __int128 v11; // xmm0
  _NDIS_FILTER_TASK_OFFLOAD *v12; // rdx
  char v13; // r15
  void (__fastcall *v14)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  unsigned __int8 XState; // al
  void (__stdcall *v18)(PVOID); // rax
  void (__fastcall *v19)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  int v20; // edx
  _NDIS_TIMESTAMP_CAPABILITIES *v21; // rax
  KIRQL v22; // dl
  _NDIS_FILTER_TASK_OFFLOAD *v23; // rdx
  void (__fastcall *v24)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  void *v25; // rax
  KIRQL v26; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax
  KIRQL v28; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  KIRQL v30; // dl
  KIRQL v31; // dl
  KIRQL v32; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v33; // rax
  __int128 v34; // xmm0
  unsigned int *p_UdpEsp; // rdx
  _NDIS_FILTER_TASK_OFFLOAD *v36; // rdx
  void *v37; // rax
  KIRQL v38; // dl
  KIRQL v39; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v40; // rax
  void *v41; // rax
  KIRQL v42; // dl
  KIRQL v43; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v44; // rax
  unsigned __int8 v45; // [rsp+30h] [rbp-D0h] BYREF
  char v46; // [rsp+31h] [rbp-CFh]
  struct _NDIS_STATUS_INDICATION v47; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // [rsp+ECh] [rbp-14h]
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F4h] [rbp-Ch]
  unsigned __int64 XmitLinkSpeed; // [rsp+F8h] [rbp-8h]
  unsigned __int64 RcvLinkSpeed; // [rsp+100h] [rbp+0h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions; // [rsp+108h] [rbp+8h]
  unsigned int AutoNegotiationFlags; // [rsp+10Ch] [rbp+Ch]
  _OWORD v60[14]; // [rsp+110h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  HigherFilter = a1->HigherFilter;
  LowerFilter = a1->LowerFilter;
  v45 = 0;
  memset(&v47, 0, sizeof(v47));
  memset(v60, 0, 0xDCuLL);
  v46 = 1;
  v48 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      74,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
  p_Lock = &a1->Lock;
  v55 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  for ( i = v7; FILTER_TEST_FLAG(a1, 0x2000); a1->LockThread = KeGetCurrentThread() )
  {
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, i);
    if ( KeGetCurrentIrql() == 2 )
      KeStallExecutionProcessor(1u);
    else
      NdisMSleep(0x32u);
    i = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  FILTER_SET_FLAG(a1, 0x2000);
  a1->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  MediaConnectState = a1->MediaConnectState;
  MediaDuplexState = a1->MediaDuplexState;
  XmitLinkSpeed = a1->XmitLinkSpeed;
  RcvLinkSpeed = a1->RcvLinkSpeed;
  PauseFunctions = a1->PauseFunctions;
  AutoNegotiationFlags = a1->AutoNegotiationFlags;
  v52 = 2621824;
  if ( !HigherFilter )
  {
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    Offload = Miniport->Offload;
    if ( Offload && Offload->SupportsOffload )
    {
      p_TopCapabilities = &Offload->TopCapabilities;
      v60[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v60[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v60[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v60[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v60[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v60[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v60[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v11 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v60[7] = v11;
      v60[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v60[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v60[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v60[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v60[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v60[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      DWORD2(v60[13]) = p_TopCapabilities->LsoV2.IPv4.MinSegmentCount;
      if ( !a1->Offload && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v13 = 0;
        goto LABEL_10;
      }
      v12 = a1->Offload;
      *(_OWORD *)&v12->OffloadCaps.Header.Type = v60[0];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv4Receive + 4) = v60[1];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv6Receive + 4) = v60[2];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v12->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v60[3];
      *(_OWORD *)&v12->OffloadCaps.IPsecV1.Supported.IPv4Options = v60[4];
      *(_OWORD *)&v12->OffloadCaps.LsoV2.IPv4.Encapsulation = v60[5];
      *(_OWORD *)&v12->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v60[6];
      v12 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v12 + 128);
      *(_OWORD *)&v12[-1].OffloadCaps.UdpSegmentation.IPv6.MaxOffLoadSize = v60[7];
      *(_OWORD *)&v12->OffloadCaps.Header.Type = v60[8];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv4Receive + 4) = v60[9];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv6Receive + 4) = v60[10];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v12->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v60[11];
      *(_OWORD *)&v12->OffloadCaps.IPsecV1.Supported.IPv4Options = v60[12];
      *(_QWORD *)&v12->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v60[13];
      v12->OffloadCaps.LsoV2.IPv4.MinSegmentCount = DWORD2(v60[13]);
      v47.StatusBuffer = v60;
      v47.Header = (_NDIS_OBJECT_HEADER)7340440;
      v47.SourceHandle = Miniport;
      v47.StatusCode = 1073872902;
      v47.StatusBufferSize = 220;
      ndisMReleaseStInLockAndSpinLock(Miniport, v45);
      ndisFIndicateStatusToFilter(a1, &v47);
      ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    }
    v13 = 1;
LABEL_10:
    MediaConnectState = Miniport->MediaConnectState;
    MediaDuplexState = Miniport->MediaDuplexState;
    XmitLinkSpeed = Miniport->XmitLinkSpeed;
    RcvLinkSpeed = Miniport->RcvLinkSpeed;
    v14 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( Miniport->MediaConnectState != MediaConnectStateConnected )
      v14 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v14;
    *((_DWORD *)&v47.Header + 1) = 0;
    v47.Header = (_NDIS_OBJECT_HEADER)7340440;
    memset(&v47.Guid, 0, 52);
    v47.StatusBuffer = &v52;
    memset(&v47.PortNumber, 0, 32);
    v47.SourceHandle = Miniport;
    v47.StatusCode = 1073807383;
    v47.StatusBufferSize = 40;
    ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    ndisFIndicateStatusToFilter(a1, &v47);
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    TopHwTimestampCapabilities = Miniport->TopHwTimestampCapabilities;
    if ( TopHwTimestampCapabilities )
    {
      v48 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
      v49 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
      v50 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
      v51 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( a1->HwTimestampCapabilities
        || (v21 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopHwTimestampCapabilities),
            (a1->HwTimestampCapabilities = v21) != 0LL) )
      {
        if ( v13 )
        {
          *((_DWORD *)&v47.Header + 1) = 0;
          v47.Header = (_NDIS_OBJECT_HEADER)7340440;
          memset(&v47.Guid, 0, 52);
          v47.SourceHandle = Miniport;
          memset(&v47.PortNumber, 0, 32);
          v47.StatusCode = 1074073600;
          v47.StatusBuffer = &v48;
          v47.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v45);
          ndisFIndicateStatusToFilter(a1, &v47);
        }
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    TopTimestampConfig = Miniport->TopTimestampConfig;
    if ( TopTimestampConfig )
    {
      v48 = *(_OWORD *)&TopTimestampConfig->Header.Type;
      v49 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
      v50 = *(_OWORD *)&TopTimestampConfig->Reserved2;
      v51 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
      if ( a1->HwTimestampCurrentConfig
        || (v44 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopTimestampConfig),
            (a1->HwTimestampCurrentConfig = v44) != 0LL) )
      {
        if ( v13 )
        {
          *((_DWORD *)&v47.Header + 1) = 0;
          v47.Header = (_NDIS_OBJECT_HEADER)7340440;
          memset(&v47.Guid, 0, 52);
          v47.SourceHandle = Miniport;
          memset(&v47.PortNumber, 0, 32);
          v47.StatusCode = 1074073601;
          v47.StatusBuffer = &v48;
          v47.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v45);
          ndisFIndicateStatusToFilter(a1, &v47);
        }
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    }
    goto LABEL_16;
  }
  v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  for ( HigherFilter->LockThread = KeGetCurrentThread();
        FILTER_TEST_FLAG(HigherFilter, 0x2000);
        HigherFilter->LockThread = KeGetCurrentThread() )
  {
    v22 = v45;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v22);
    if ( KeGetCurrentIrql() == 2 )
      KeStallExecutionProcessor(1u);
    else
      NdisMSleep(0x32u);
    v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  v23 = HigherFilter->Offload;
  if ( v23 )
  {
    v60[0] = *(_OWORD *)&v23->OffloadCaps.Header.Type;
    v60[1] = *(_OWORD *)((char *)&v23->OffloadCaps.Checksum.IPv4Receive + 4);
    v60[2] = *(_OWORD *)((char *)&v23->OffloadCaps.Checksum.IPv6Receive + 4);
    v60[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v23->OffloadCaps.LsoV1.IPv4 + 12);
    v60[4] = *(_OWORD *)&v23->OffloadCaps.IPsecV1.Supported.IPv4Options;
    v60[5] = *(_OWORD *)&v23->OffloadCaps.LsoV2.IPv4.Encapsulation;
    v60[6] = *(_OWORD *)&v23->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize;
    v34 = *(_OWORD *)&v23->OffloadCaps.IPsecV2.Encapsulation;
    p_UdpEsp = &v23->OffloadCaps.IPsecV2.UdpEsp;
    v60[7] = v34;
    v60[8] = *(_OWORD *)p_UdpEsp;
    v60[9] = *((_OWORD *)p_UdpEsp + 1);
    v60[10] = *((_OWORD *)p_UdpEsp + 2);
    v60[11] = *((_OWORD *)p_UdpEsp + 3);
    v60[12] = *((_OWORD *)p_UdpEsp + 4);
    *(_QWORD *)&v60[13] = *((_QWORD *)p_UdpEsp + 10);
    DWORD2(v60[13]) = p_UdpEsp[22];
    if ( a1->Offload || !(unsigned int)ndisFAllocateFilterOffload(a1) )
    {
      v36 = a1->Offload;
      *(_OWORD *)&v36->OffloadCaps.Header.Type = v60[0];
      *(_OWORD *)((char *)&v36->OffloadCaps.Checksum.IPv4Receive + 4) = v60[1];
      *(_OWORD *)((char *)&v36->OffloadCaps.Checksum.IPv6Receive + 4) = v60[2];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v36->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v60[3];
      *(_OWORD *)&v36->OffloadCaps.IPsecV1.Supported.IPv4Options = v60[4];
      *(_OWORD *)&v36->OffloadCaps.LsoV2.IPv4.Encapsulation = v60[5];
      *(_OWORD *)&v36->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v60[6];
      v36 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v36 + 128);
      *(_OWORD *)&v36[-1].OffloadCaps.UdpSegmentation.IPv6.MaxOffLoadSize = v60[7];
      *(_OWORD *)&v36->OffloadCaps.Header.Type = v60[8];
      *(_OWORD *)((char *)&v36->OffloadCaps.Checksum.IPv4Receive + 4) = v60[9];
      *(_OWORD *)((char *)&v36->OffloadCaps.Checksum.IPv6Receive + 4) = v60[10];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v36->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v60[11];
      *(_OWORD *)&v36->OffloadCaps.IPsecV1.Supported.IPv4Options = v60[12];
      *(_QWORD *)&v36->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v60[13];
      v36->OffloadCaps.LsoV2.IPv4.MinSegmentCount = DWORD2(v60[13]);
      v37 = Miniport;
      if ( LowerFilter )
        v37 = LowerFilter;
      v47.Header = (_NDIS_OBJECT_HEADER)7340440;
      v47.SourceHandle = v37;
      v47.StatusBuffer = v60;
      v47.StatusCode = 1073872902;
      v47.StatusBufferSize = 220;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
      FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
      v38 = v45;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v38);
      ndisFIndicateStatusToFilter(a1, &v47);
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
      if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
      {
        do
        {
          v39 = v45;
          HigherFilter->LockThread = 0LL;
          KeReleaseSpinLock(&HigherFilter->Lock, v39);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
        }
        while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
        p_Lock = &a1->Lock;
      }
      FILTER_SET_FLAG(HigherFilter, 0x2000);
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    }
    else
    {
      v46 = 0;
    }
  }
  v24 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
  if ( HigherFilter->MediaConnectState != MediaConnectStateConnected )
    v24 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
  a1->FilterIndicateReceiveNetBufferListsHandler = v24;
  *(_OWORD *)&v47.Header.Type = 0LL;
  v25 = Miniport;
  v47.Header = (_NDIS_OBJECT_HEADER)7340440;
  if ( LowerFilter )
    v25 = LowerFilter;
  memset(&v47.Guid, 0, 52);
  v47.SourceHandle = v25;
  memset(&v47.PortNumber, 0, 32);
  v47.StatusBuffer = &v52;
  v47.StatusCode = 1073807383;
  v47.StatusBufferSize = 40;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
  FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
  v26 = v45;
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLock(&HigherFilter->Lock, v26);
  ndisFIndicateStatusToFilter(a1, &v47);
  v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  HigherFilter->LockThread = KeGetCurrentThread();
  if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
  {
    do
    {
      v31 = v45;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v31);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
      v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
    p_Lock = &a1->Lock;
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  HwTimestampCapabilities = HigherFilter->HwTimestampCapabilities;
  if ( HwTimestampCapabilities )
  {
    v48 = *(_OWORD *)&HwTimestampCapabilities->Header.Type;
    v49 = *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp;
    v50 = *(_OWORD *)&HwTimestampCapabilities->Reserved2;
    v51 = *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw;
    if ( a1->HwTimestampCapabilities
      || (v40 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCapabilities),
          (a1->HwTimestampCapabilities = v40) != 0LL) )
    {
      if ( v46 )
      {
        *(_OWORD *)&v47.Header.Type = 0LL;
        v41 = Miniport;
        if ( LowerFilter )
          v41 = LowerFilter;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        memset(&v47.Guid, 0, 52);
        v47.SourceHandle = v41;
        memset(&v47.PortNumber, 0, 32);
        v47.StatusBuffer = &v48;
        v47.StatusCode = 1074073600;
        v47.StatusBufferSize = 56;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
        FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
        v42 = v45;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v42);
        ndisFIndicateStatusToFilter(a1, &v47);
      }
    }
    else
    {
      v46 = 0;
    }
  }
  else
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
    FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
    v28 = v45;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v28);
  }
  v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  HigherFilter->LockThread = KeGetCurrentThread();
  if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
  {
    do
    {
      v32 = v45;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v32);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
      v45 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
    p_Lock = &a1->Lock;
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  HwTimestampCurrentConfig = HigherFilter->HwTimestampCurrentConfig;
  if ( HwTimestampCurrentConfig )
  {
    v48 = *(_OWORD *)&HwTimestampCurrentConfig->Header.Type;
    v49 = *(_OWORD *)&HwTimestampCurrentConfig->CrossTimestamp;
    v50 = *(_OWORD *)&HwTimestampCurrentConfig->Reserved2;
    v51 = *(_QWORD *)&HwTimestampCurrentConfig->TimestampFlags.AllReceiveHw;
    if ( a1->HwTimestampCurrentConfig
      || (v33 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCurrentConfig),
          (a1->HwTimestampCurrentConfig = v33) != 0LL) )
    {
      if ( v46 )
      {
        *(_OWORD *)&v47.Header.Type = 0LL;
        *(_OWORD *)&v47.StatusBuffer = 0LL;
        if ( LowerFilter )
          Miniport = (_NDIS_MINIPORT_BLOCK *)LowerFilter;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        memset(&v47.PortNumber, 0, 32);
        v47.SourceHandle = Miniport;
        v47.StatusCode = 1074073601;
        memset(&v47.Guid.Data2, 0, 48);
        v47.StatusBuffer = &v48;
        v47.StatusBufferSize = 56;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
        FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
        v43 = v45;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v43);
        ndisFIndicateStatusToFilter(a1, &v47);
      }
    }
  }
  else
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
    FILTER_CLEAR_FLAG(HigherFilter, 0x2000);
    v30 = v45;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v30);
  }
LABEL_16:
  XState = a1->XState;
  if ( a1->MediaConnectState == MediaConnectStateConnected )
  {
    v19 = ndisFilterSendNetBufferLists;
    a1->XState = XState & 0xFE;
    v18 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    a1->XState = XState | 1;
    ndisUpdateFilterFakeStatus(a1);
    v18 = NdisQueryOffloadState;
    v19 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
  }
  a1->FilterSendNetBufferListsHandler = v19;
  a1->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v18;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(a1);
  FILTER_CLEAR_FLAG(a1, 0x2000);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, i);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      1,
      75,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
}
