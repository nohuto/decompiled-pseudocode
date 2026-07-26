/*
 * XREFs of ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D3908
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14004B090 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140140B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x14016C740 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfSetIfDescr(const WCHAR *a1)
{
  unsigned int updated; // esi
  bool v3; // r15
  unsigned __int64 v4; // rbx
  KIRQL v5; // r12
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v7; // rdi
  _IF_COUNTED_STRING_LH *p_ifDescr; // rbx
  unsigned __int16 v9; // ax
  KIRQL v10; // bl
  _UNICODE_STRING String2; // [rsp+40h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  updated = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      14,
      (struct _GUID *)&WPP_f1054d40bcb63b47024375fafc740b75_Traceguids,
      (char)a1);
  if ( a1 )
  {
    v4 = (*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*((unsigned __int16 *)a1 + 2) << 24)) << 24;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v4);
    v7 = InterfaceByNetLuid;
    p_ifDescr = &InterfaceByNetLuid->ifDescr;
    if ( InterfaceByNetLuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid->RefCountTracker, 0xDu);
      ++v7->Ref;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
      if ( p_ifDescr->Length )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v7->ifDescr.String);
        RtlInitUnicodeString(&String2, a1 + 5);
        v3 = RtlCompareUnicodeString(&DestinationString, &String2, 1u) != 0;
      }
      else
      {
        v3 = 1;
      }
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      if ( v3 )
      {
        memset(p_ifDescr, 0, sizeof(_IF_COUNTED_STRING_LH));
        v9 = 512;
        if ( a1[4] <= 0x200u )
          v9 = a1[4];
        p_ifDescr->Length = v9;
        if ( a1[4] )
          memmove(v7->ifDescr.String, a1 + 5, v9);
      }
    }
    else
    {
      updated = -1073741772;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
    if ( !updated && v3 )
    {
      if ( v7->bNdisIsProvider )
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&v7->NetLuid,
                    0x204u,
                    0x208u,
                    (unsigned __int8 *)p_ifDescr);
      v14[0] = 2LL;
      v14[1] = p_ifDescr;
      v15 = 516;
      v16 = 4;
      ndisNsiNotifyClientInterfaceChange(v7, 0LL, v14, 1LL);
    }
    if ( v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      IFBLOCK_DECREMENT_REF((char *)v7, 0xDu);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
    }
  }
  else
  {
    updated = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_f1054d40bcb63b47024375fafc740b75_Traceguids,
      (char)a1,
      updated);
  return updated;
}
