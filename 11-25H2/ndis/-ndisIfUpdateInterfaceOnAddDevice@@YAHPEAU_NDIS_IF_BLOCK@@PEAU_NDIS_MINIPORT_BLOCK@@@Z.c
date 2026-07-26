/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006DCE0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1400107F0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     NdisAllocateRefCount @ 0x14006E5D0 (NdisAllocateRefCount.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140140B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x14016C740 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  struct _NDIS_IF_BLOCK *v4; // rdi
  _IF_COUNTED_STRING_LH *p_ifDescr; // r14
  bool v6; // r12
  struct NDIS_REFCOUNT_HANDLE__ *RefCount; // rsi
  KIRQL v8; // al
  KIRQL v9; // r15
  unsigned __int16 Length; // cx
  unsigned __int16 v12; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  char v14[4]; // [rsp+38h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  void *p_ifAdminStatus; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = a2;
  v4 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      a2);
  p_ifDescr = &v4->ifDescr;
  if ( v4->ifDescr.Length )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v4->ifDescr.String);
    v6 = RtlCompareUnicodeString(&DestinationString, v3->pAdapterInstanceName, 1u) != 0;
  }
  else
  {
    v6 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(a1) = 30;
  RefCount = (struct NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v9 = v8;
  if ( v4->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
    NdisDereferenceWithTag((ULONG_PTR)RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
    goto LABEL_7;
  }
  if ( v6 )
  {
    memset(&v4->ifDescr, 0, sizeof(v4->ifDescr));
    Length = v3->pAdapterInstanceName->Length;
    v12 = 512;
    if ( Length > 0x200u )
    {
      p_ifDescr->Length = 512;
LABEL_15:
      memmove(v4->ifDescr.String, v3->pAdapterInstanceName->Buffer, v12);
      goto LABEL_16;
    }
    p_ifDescr->Length = Length;
    v12 = Length;
    if ( Length )
      goto LABEL_15;
  }
LABEL_16:
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v4->RefCountTracker;
  v4->ifAdminStatus = v3->AdminStatus;
  *(_QWORD *)&v4->ifOperStatus = 2LL;
  NdisReferenceWithTag(RefCountTracker, 0xCu);
  ++v4->Ref;
  v4->LastMiniportFatalErrorReason = NdisMEvent_Unknown;
  KeAcquireSpinLockAtDpcLevel(&SpinLock);
  v4->MiniportAvailable = 1;
  v4->MiniportLinkReference = 1;
  v4->Miniport = v3;
  v4->MpRefCountTracker = RefCount;
  v3->IfBlock = v4;
  v3->IfBlockAvailable = 1;
  KeReleaseSpinLockFromDpcLevel(&SpinLock);
  v3->IfIndex = v4->ifIndex;
  v3->NetLuid.Value = v4->NetLuid.Value;
  v3->OperStatus = v4->ifOperStatus;
  v3->OperStatusFlags = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  if ( v6 )
  {
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v4->NetLuid, 0x204u, 0x208u, (unsigned __int8 *)&v4->ifDescr);
    v16 = 2LL;
    p_ifAdminStatus = &v4->ifDescr;
    v18 = 516;
    v19 = 4;
    ndisNsiNotifyClientInterfaceChange(v4, 0LL, &v16, 1LL);
  }
  v16 = 0LL;
  p_ifAdminStatus = &v4->ifAdminStatus;
  v18 = 4;
  v19 = 16;
  ndisNsiNotifyClientInterfaceChange(v4, 0LL, &v16, 0LL);
  ndisNsiSyncMiniportOperStatusNotification(v3);
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v2;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)v4,
      (char)v3,
      *(_DWORD *)v14,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v2;
}
