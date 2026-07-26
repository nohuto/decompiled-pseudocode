/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1401692B0
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x140167390 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x140167EE0 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x140168300 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140168320 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x140168BD0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x140169030 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x140170A40 (ndisMiniportQueryInterfaceProperty.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400D07B0 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(__int64 a1, KRegKey *this, ACCESS_MASK a3, char a4)
{
  size_t v8; // r8
  ULONG v9; // r9d
  int v10; // edx
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  wchar_t pszSrc[256]; // [rsp+50h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2LL, a1, 0LL);
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v8, v9);
  if ( inited >= 0 )
    inited = KRegKey::Open(this, a3, &DestinationString, 0LL);
  if ( inited == -1073741772 )
  {
    if ( !*((_BYTE *)qword_140127138 + 96) )
      goto LABEL_7;
    netsetupBuildObjectPath(2LL, a1, 1LL);
    inited = KRegKey::Open(this, a3, pszSrc, 0LL);
  }
  if ( inited >= 0 )
    return 0LL;
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      a1,
      a4,
      inited);
  return (unsigned int)inited;
}
