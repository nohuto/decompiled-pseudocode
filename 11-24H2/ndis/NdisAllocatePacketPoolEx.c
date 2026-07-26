/*
 * XREFs of NdisAllocatePacketPoolEx @ 0x1400421F0
 * Callers:
 *     NdisAllocatePacketPool @ 0x140042160 (NdisAllocatePacketPool.c)
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1400C5E10 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     NdisAllocatePacket @ 0x14001F5F0 (NdisAllocatePacket.c)
 *     NdisFreePacket @ 0x140042E10 (NdisFreePacket.c)
 *     NdisPacketSize @ 0x140042FD0 (NdisPacketSize.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 */

void __stdcall NdisAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v5; // rsi
  unsigned int v10; // r15d
  int v11; // edx
  UINT v12; // esi
  UINT v13; // eax
  unsigned __int16 v14; // bp
  __int64 Pool2; // rax
  __int64 v16; // rdi
  UINT v17; // eax
  KIRQL v18; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v20; // rsi
  int v21; // edx
  int v22; // eax
  KIRQL v23; // al
  _LIST_ENTRY *v24; // r8
  _LIST_ENTRY **v25; // rdx
  PVOID v26; // [rsp+30h] [rbp-38h] BYREF
  PVOID v27; // [rsp+38h] [rbp-30h] BYREF
  PNDIS_PACKET Packet; // [rsp+78h] [rbp+10h] BYREF

  v5 = *PoolHandle;
  Packet = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v10 = 1886405710;
  RtlGetCallersAddress(&v26, &v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      21,
      10,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids);
  }
  *PoolHandle = 0LL;
  if ( ((((unsigned int)v5 & 0xFFFFFF) - 5260366LL) & 0xFFFFFFFFFFDFFFFFuLL) == 0 )
    v10 = (unsigned int)v5 & 0x7FFFFFFF;
  if ( NumberOfDescriptors > 0xFFFF )
    goto LABEL_6;
  v12 = NumberOfDescriptors + NumberOfOverflowDescriptors;
  if ( NumberOfDescriptors + NumberOfOverflowDescriptors < NumberOfDescriptors )
  {
    *Status = -1073741811;
    return;
  }
  if ( v12 > 0xFFFF )
    v12 = 0xFFFF;
  v13 = NdisPacketSize(ProtocolReservedLength);
  v14 = v13;
  if ( v13 - 1 <= 0xFFFE && (Pool2 = ExAllocatePool2(64LL, 112LL, v10), (v16 = Pool2) != 0) )
  {
    *(_WORD *)(Pool2 + 4) = v14;
    *(_DWORD *)Pool2 = v10;
    *(_WORD *)(Pool2 + 6) = 0xFC0u / v14;
    if ( 0xFC0u / v14 )
    {
      *(_DWORD *)(Pool2 + 20) = 4096;
      *(_WORD *)(Pool2 + 8) = (0xFC0u / v14 + v12 - 1) / (0xFC0u / v14);
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 32));
    v17 = *(unsigned __int16 *)(v16 + 6);
    if ( v17 > v12 || !(_WORD)v17 )
    {
      v22 = v12 * *(unsigned __int16 *)(v16 + 4);
      *(_WORD *)(v16 + 6) = v12;
      *(_WORD *)(v16 + 8) = 1;
      *(_DWORD *)(v16 + 20) = v22 + 64;
    }
    *(_DWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 80) = v16 + 72;
    *(_QWORD *)(v16 + 72) = v16 + 72;
    *(_QWORD *)(v16 + 48) = v16 + 40;
    *(_QWORD *)(v16 + 40) = v16 + 40;
    *(_QWORD *)(v16 + 64) = v16 + 56;
    *(_QWORD *)(v16 + 56) = v16 + 56;
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
    Flink = ndisGlobalPacketPoolList.Flink;
    v20 = (_LIST_ENTRY *)(v16 + 88);
    if ( ndisGlobalPacketPoolList.Flink->Blink != &ndisGlobalPacketPoolList )
LABEL_18:
      __fastfail(3u);
    v20->Flink = ndisGlobalPacketPoolList.Flink;
    *(_QWORD *)(v16 + 96) = &ndisGlobalPacketPoolList;
    Flink->Blink = v20;
    ndisGlobalPacketPoolList.Flink = (_LIST_ENTRY *)(v16 + 88);
    KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v18);
    NdisAllocatePacket(Status, &Packet, (NDIS_HANDLE)v16);
    if ( *Status )
    {
      v23 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
      v24 = v20->Flink;
      if ( v20->Flink->Blink != v20 )
        goto LABEL_18;
      v25 = *(_LIST_ENTRY ***)(v16 + 96);
      if ( *v25 != v20 )
        goto LABEL_18;
      *v25 = v24;
      v24->Blink = (_LIST_ENTRY *)v25;
      KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v23);
      ExFreePoolWithTag((PVOID)v16, 0);
    }
    else
    {
      NdisFreePacket(Packet);
      *(_QWORD *)(v16 + 24) = v26;
      *PoolHandle = (PVOID)v16;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        21,
        11,
        (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
        *Status);
    }
  }
  else
  {
LABEL_6:
    *Status = -1073741670;
  }
}
