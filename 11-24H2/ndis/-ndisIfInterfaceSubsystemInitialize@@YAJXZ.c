/*
 * XREFs of ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x14018E6A0
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1400545B0 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisOpenProtocolConfiguration @ 0x14005BF80 (NdisOpenProtocolConfiguration.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x14008E4B0 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 ndisIfInterfaceSubsystemInitialize(void)
{
  unsigned int v1; // ecx
  __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r9
  size_t v5; // r8
  _UNICODE_STRING v6; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-10h] BYREF
  int Status; // [rsp+70h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+18h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  ConfigurationHandle = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  *(_QWORD *)&v6.Length = 655368LL;
  v6.Buffer = L"Ndis";
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v6);
  if ( Status )
    return NdisConvertNdisStatusToNtStatus(Status);
  ParameterValue = 0LL;
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  *(_QWORD *)&Keyword.Length = 2883626LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts(
          (const wchar_t *)ParameterValue->ParameterData.StringData.Length,
          ParameterValue->ParameterData.StringData.Length) )
  {
    word_14011D100 = 54;
    wmemcpy((wchar_t *)&xmmword_14011D102, L"Software Loopback Interface", 27);
  }
  else
  {
    word_14011D100 = v1;
    memmove(&xmmword_14011D102, *(const void **)(v2 + 16), v1);
  }
  v8.Buffer = L"DefaultIfLoopbackAlias";
  *(_QWORD *)&v8.Length = 3014700LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v8, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts(
          (const wchar_t *)ParameterValue->ParameterData.StringData.Length,
          ParameterValue->ParameterData.StringData.Length) )
  {
    word_14011D310 = 50;
    wmemcpy((wchar_t *)&xmmword_14011D312, L"Loopback Pseudo-Interface", 25);
  }
  else
  {
    v5 = 512LL;
    word_14011D310 = v3;
    if ( (unsigned __int16)v3 <= 0x200u )
      v5 = v3;
    memmove(&xmmword_14011D312, *(const void **)(v4 + 16), v5);
  }
  NdisCloseConfiguration(ConfigurationHandle);
  return 0LL;
}
