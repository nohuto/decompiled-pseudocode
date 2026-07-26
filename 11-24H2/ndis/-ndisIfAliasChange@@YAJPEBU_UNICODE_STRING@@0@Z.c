/*
 * XREFs of ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400CC0E8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x14006DBD0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x140060190 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_ZZ @ 0x1400CC5D8 (WPP_RECORDER_SF_ZZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140135B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfAliasChange(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        int a3,
        int a4)
{
  int Length; // edx
  NTSTATUS v7; // edi
  wchar_t *Buffer; // rax
  KIRQL v9; // bl
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  struct _NDIS_IF_BLOCK *v11; // rsi
  unsigned __int8 *p_ifAlias; // r15
  unsigned __int16 v13; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v15; // bl
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]
  GUID Guid; // [rsp+68h] [rbp-18h] BYREF

  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  Length = a1->Length;
  if ( (unsigned __int16)Length < ndisDeviceStr.Length )
    goto LABEL_4;
  Buffer = a1->Buffer;
  GuidString.Length = Length - ndisDeviceStr.Length;
  GuidString.MaximumLength = Length - ndisDeviceStr.Length + 2;
  GuidString.Buffer = &Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  v7 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v7 >= 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    v11 = InterfaceByInterfaceGuid;
    if ( !InterfaceByInterfaceGuid )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
LABEL_4:
      v7 = -1073741772;
      goto LABEL_11;
    }
    p_ifAlias = (unsigned __int8 *)&InterfaceByInterfaceGuid->ifAlias;
    v13 = 512;
    if ( a2->Length <= 0x200u )
      v13 = a2->Length;
    *(_WORD *)p_ifAlias = v13;
    memmove(v11->ifAlias.String, a2->Buffer, v13);
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v11->RefCountTracker;
    v19 = 516;
    v18[0] = 0LL;
    v18[1] = p_ifAlias;
    v20 = 20;
    NdisReferenceWithTag(RefCountTracker, 0xBu);
    ++v11->Ref;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v11->NetLuid, 0x204u, 4u, p_ifAlias);
    ndisNsiNotifyClientInterfaceChange(v11, 0LL, v18, 0LL);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    IFBLOCK_DECREMENT_REF(v11, IFREF_CHALIAS);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v15);
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      22,
      17,
      (struct _GUID *)&WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
