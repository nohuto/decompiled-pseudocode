/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F10
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x140006E40 (NdisAllocateRefCount.c)
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x140013540 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140135B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  _IF_COUNTED_STRING_LH *p_ifDescr; // r14
  bool v6; // r12
  __int64 RefCount; // rsi
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r15
  int v11; // edx
  unsigned __int16 Length; // cx
  unsigned __int16 v14; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  char v16; // [rsp+30h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  void *p_ifAdminStatus; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      14,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      v16);
  }
  p_ifDescr = &a1->ifDescr;
  if ( a1->ifDescr.Length )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)a1->ifDescr.String);
    v6 = RtlCompareUnicodeString(&DestinationString, v3->pAdapterInstanceName, 1u) != 0;
  }
  else
  {
    v6 = 1;
  }
  RefCount = NdisAllocateRefCount(0x1Eu, 2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v10 = v8;
  if ( a1->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
    NdisDereferenceWithTag(RefCount);
    NdisFreeRefCount(RefCount);
    goto LABEL_7;
  }
  if ( v6 )
  {
    memset(&a1->ifDescr, 0, sizeof(a1->ifDescr));
    Length = v3->pAdapterInstanceName->Length;
    v14 = 512;
    if ( Length > 0x200u )
    {
      p_ifDescr->Length = 512;
LABEL_15:
      memmove(a1->ifDescr.String, v3->pAdapterInstanceName->Buffer, v14);
      goto LABEL_16;
    }
    p_ifDescr->Length = Length;
    v14 = Length;
    if ( Length )
      goto LABEL_15;
  }
LABEL_16:
  RefCountTracker = a1->RefCountTracker;
  LOBYTE(v9) = 12;
  a1->ifAdminStatus = v3->AdminStatus;
  *(_QWORD *)&a1->ifOperStatus = 2LL;
  NdisReferenceWithTag(RefCountTracker, v9);
  ++a1->Ref;
  a1->LastMiniportFatalErrorReason = NdisMEvent_Unknown;
  KeAcquireSpinLockAtDpcLevel(&SpinLock);
  a1->MiniportAvailable = 1;
  a1->MiniportLinkReference = 1;
  a1->Miniport = v3;
  a1->MpRefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)RefCount;
  v3->IfBlock = a1;
  v3->IfBlockAvailable = 1;
  KeReleaseSpinLockFromDpcLevel(&SpinLock);
  v3->IfIndex = a1->ifIndex;
  v3->NetLuid.Value = a1->NetLuid.Value;
  v3->OperStatus = a1->ifOperStatus;
  v3->OperStatusFlags = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
  if ( v6 )
  {
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&a1->NetLuid, 0x204u, 0x208u, (unsigned __int8 *)&a1->ifDescr);
    v18 = 2LL;
    p_ifAdminStatus = &a1->ifDescr;
    v20 = 516;
    v21 = 4;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v18, 1LL);
  }
  v18 = 0LL;
  p_ifAdminStatus = &a1->ifAdminStatus;
  v20 = 4;
  v21 = 16;
  ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v18, 0LL);
  ndisNsiSyncMiniportOperStatusNotification(v3);
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      22,
      15,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)v3,
      v2);
  }
  return v2;
}
