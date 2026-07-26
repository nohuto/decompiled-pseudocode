/*
 * XREFs of ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EFD0 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x14005AAB0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140140B50 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x140167390 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x14016C6A0 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x140172C30 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a3)
{
  unsigned int IntegerData; // esi
  struct _NDIS_IF_BLOCK *v5; // rbx
  NDIS_STATUS v7; // eax
  int v8; // edx
  PVOID v9; // r12
  unsigned int v10; // edi
  int v11; // ecx
  size_t v12; // rsi
  size_t MacAddressLength; // rdi
  size_t v14; // r8
  size_t v15; // r8
  unsigned __int16 v16; // r15
  __int16 v17; // ax
  size_t v18; // r8
  unsigned __int16 v19; // ax
  _NDIS_MEDIUM MediaType; // eax
  char v21; // si
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  unsigned __int8 ifDeviceWakeUpEnable; // r13
  KIRQL v24; // di
  KIRQL v26; // [rsp+50h] [rbp-68h]
  int Status; // [rsp+54h] [rbp-64h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-60h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-58h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-50h] BYREF
  char v31; // [rsp+C0h] [rbp+8h]
  char v32; // [rsp+D8h] [rbp+20h]

  v32 = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  LOBYTE(IntegerData) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  v5 = a2;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  v31 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      16,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)v5,
      (char)a3);
  }
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v7 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v9 = ConfigurationHandle;
  v10 = v7;
  Status = v7;
  if ( v7 )
    goto LABEL_42;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
  if ( !Status )
    IntegerData = ParameterValue->ParameterData.IntegerData;
  Status = 0;
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v11 = 0;
  v5->AccessType = a3->AccessType;
  v5->DirectionType = a3->DirectionType;
  v5->ifConnectorPresent = a3->IfConnectorPresent;
  v5->ConnectionType = a3->ConnectionType;
  v5->ifMtu = a3->MtuSize;
  v5->Flags = 0;
  if ( (a1->PnPFlags & 0x200000) != 0 )
  {
    v5->Flags = 1;
    v11 = 1;
  }
  if ( (a1->PnPFlags & 0x8000000) != 0 )
  {
    v11 |= 2u;
    v5->Flags = v11;
  }
  if ( (a1->PnPFlags & 0x400000) != 0 )
  {
    v11 |= 0x20u;
    v5->Flags = v11;
  }
  if ( (IntegerData & 1) != 0 )
  {
    v11 |= 0x40u;
    v5->Flags = v11;
  }
  if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
  {
    v11 |= 0x100u;
    v5->Flags = v11;
  }
  v5->ifFlags = v11;
  v12 = 32LL;
  MacAddressLength = a3->MacAddressLength;
  if ( v5->ifPhysAddress.Length == (_WORD)MacAddressLength )
  {
    v14 = a3->MacAddressLength;
    if ( (unsigned int)MacAddressLength >= 0x20 )
      v14 = 32LL;
    if ( !memcmp(v5->ifPhysAddress.Address, a3->CurrentMacAddress, v14) )
    {
      if ( (unsigned int)MacAddressLength >= 0x20 )
        v15 = 32LL;
      else
        v15 = MacAddressLength;
      v16 = MacAddressLength;
      if ( !memcmp(v5->PermanentPhysAddress.Address, a3->PermanentMacAddress, v15) )
        goto LABEL_24;
    }
    else
    {
      v16 = MacAddressLength;
    }
  }
  else
  {
    v16 = a3->MacAddressLength;
  }
  v31 = 1;
LABEL_24:
  v17 = 32;
  if ( (unsigned int)MacAddressLength < 0x20 )
    v17 = v16;
  v5->ifPhysAddress.Length = v17;
  if ( a3->MacAddressLength >= 0x20u )
    v18 = 32LL;
  else
    v18 = a3->MacAddressLength;
  memmove(v5->ifPhysAddress.Address, a3->CurrentMacAddress, v18);
  v19 = 32;
  if ( a3->MacAddressLength < 0x20u )
    v19 = a3->MacAddressLength;
  v5->PermanentPhysAddress.Length = v19;
  if ( a3->MacAddressLength < 0x20u )
    v12 = a3->MacAddressLength;
  memmove(v5->PermanentPhysAddress.Address, a3->PermanentMacAddress, v12);
  v5->XmitLinkSpeed = a3->XmitLinkSpeed;
  v5->RcvLinkSpeed = a3->RcvLinkSpeed;
  v5->MediaConnectState = a3->MediaConnectState;
  v5->MediaDuplexState = a3->MediaDuplexState;
  v5->SupportedStatistics = a3->SupportedStatistics;
  MediaType = a3->MediaType;
  if ( v5->MediaType == MediaType )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v5->MediaType = MediaType;
    v32 = 1;
  }
  PhysicalMediumType = a3->PhysicalMediumType;
  if ( v5->PhysicalMediumType != PhysicalMediumType )
  {
    v21 = 1;
    v5->PhysicalMediumType = PhysicalMediumType;
    v32 = 1;
  }
  ifDeviceWakeUpEnable = v5->ifDeviceWakeUpEnable;
  v5->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v26);
  ndisIfUpdateInterfaceHiddenFlag(v5, (a1->PnPFlags & 0x1000) != 0);
  if ( v5->Source == NdisIfBlockSourcePersistedNetSetup )
  {
    if ( (v21 || v31) && (int)ndisIfWriteBackPersistedInterface(v5) < 0 )
    {
      v10 = -1073741823;
      goto LABEL_42;
    }
  }
  else
  {
    if ( v32 )
    {
      Status = ndisIfUpdatePersistedInterfaceInfo(
                 (unsigned __int8 *)&v5->NetLuid,
                 8u,
                 0x434u,
                 (unsigned __int8 *)&v5->MediaType);
      v10 = Status;
      if ( Status )
        goto LABEL_42;
    }
    if ( v31 )
    {
      Status = ndisIfUpdatePersistedInterfaceInfo(
                 (unsigned __int8 *)&v5->NetLuid,
                 0x44u,
                 0x440u,
                 (unsigned __int8 *)&v5->ifPhysAddress);
      v10 = Status;
      if ( Status )
        goto LABEL_42;
    }
  }
  v24 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ndisIfSetInterfaceState(a1, 0, v24);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v24);
  ndisNsiSyncMiniportOperStatusNotification(a1);
  ndisNsiSyncMiniportMediaConnectStateNotification(a1);
  ndisIfGetRcvAddressFromMiniport(a1);
  if ( ifDeviceWakeUpEnable != v5->ifDeviceWakeUpEnable )
    ndisNsiScheduleIfBlockRodChangeNotification(v5, &v5->ifDeviceWakeUpEnable, 1u, 0x281u);
  v10 = Status;
  v9 = ConfigurationHandle;
LABEL_42:
  if ( v9 )
    NdisCloseConfiguration(v9);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)v5,
      (char)a3,
      v10);
  return v10;
}
