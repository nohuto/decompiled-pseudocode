/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x14015C360
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015A870 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015B3C0 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x14015B7E0 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401698A0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016A990 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400C9764 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015C2F0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
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
    if ( !*((_BYTE *)qword_14011D088 + 96) )
      goto LABEL_7;
    netsetupBuildObjectPath(2LL, a1, 1LL);
    inited = KRegKey::Open(this, a3, pszSrc, 0LL);
  }
  if ( inited >= 0 )
    return 0LL;
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      a1,
      a4,
      inited);
  return (unsigned int)inited;
}
