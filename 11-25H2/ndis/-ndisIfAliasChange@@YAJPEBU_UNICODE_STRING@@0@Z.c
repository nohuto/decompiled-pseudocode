/*
 * XREFs of ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D36C8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x140089FC0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x14007C0C0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_ZZ @ 0x1400D3BC4 (WPP_RECORDER_SF_ZZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140140B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x14016C740 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfAliasChange(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        int a3,
        int a4)
{
  NTSTATUS v6; // edi
  unsigned __int16 v7; // ax
  KIRQL v8; // bl
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  struct _NDIS_IF_BLOCK *v10; // rsi
  unsigned __int8 *p_ifAlias; // r15
  unsigned __int16 Length; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v14; // bl
  char v16[8]; // [rsp+28h] [rbp-58h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]
  GUID Guid; // [rsp+68h] [rbp-18h] BYREF

  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v16[4] = HIDWORD(a1);
    WPP_RECORDER_SF_ZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  }
  if ( ndisNDPQualityWinter25IsEnabled && a1->Length < ndisDeviceStr.Length )
    goto LABEL_5;
  v7 = a1->Length - ndisDeviceStr.Length;
  GuidString.Buffer = &a1->Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  GuidString.Length = v7;
  GuidString.MaximumLength = v7 + 2;
  v6 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v6 >= 0 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    v10 = InterfaceByInterfaceGuid;
    if ( !InterfaceByInterfaceGuid )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
LABEL_5:
      v6 = -1073741772;
      goto LABEL_12;
    }
    p_ifAlias = (unsigned __int8 *)&InterfaceByInterfaceGuid->ifAlias;
    Length = 512;
    if ( a2->Length <= 0x200u )
      Length = a2->Length;
    *(_WORD *)p_ifAlias = Length;
    memmove(v10->ifAlias.String, a2->Buffer, Length);
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v10->RefCountTracker;
    v19 = 516;
    v18[0] = 0LL;
    v18[1] = p_ifAlias;
    v20 = 20;
    NdisReferenceWithTag(RefCountTracker, 0xBu);
    ++v10->Ref;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v10->NetLuid, 0x204u, 4u, p_ifAlias);
    ndisNsiNotifyClientInterfaceChange(v10, 0LL, v18, 0LL);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    IFBLOCK_DECREMENT_REF((char *)v10, 0xBu);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v14);
  }
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v6;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_f1054d40bcb63b47024375fafc740b75_Traceguids,
      *(_QWORD *)v16);
  }
  return (unsigned int)v6;
}
