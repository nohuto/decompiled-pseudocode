/*
 * XREFs of ndisIfSetFilterIfInfoInRegistry @ 0x140162E90
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14005C760 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1400622A0 (NdisWriteConfiguration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisIfSetFilterIfInfoInRegistry(_QWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int64 v5; // rax
  NDIS_STATUS v6; // eax
  PVOID v7; // rbx
  unsigned int v8; // edi
  int Status; // [rsp+40h] [rbp-39h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-31h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING Keyword; // [rsp+68h] [rbp-11h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-1h] BYREF
  __int128 v15; // [rsp+90h] [rbp+17h] BYREF

  v2 = *a2;
  v3 = 0;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v15 = v2;
  *(&ConfigObject.Flags + 1) = 0;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  Keyword.Buffer = L"InterfaceGuid";
  ConfigurationHandle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      12,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1);
  }
  v5 = a1[2];
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 336) + 40LL) & 2) != 0 )
    v3 = 1;
  ConfigObject.Flags = v3;
  v6 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v7 = ConfigurationHandle;
  v8 = v6;
  Status = v6;
  if ( !v6 )
  {
    ParameterValue.ParameterType = NdisParameterBinary;
    ParameterValue.ParameterData.StringData.Length = 16;
    ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)&v15;
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    v8 = Status;
    if ( Status )
    {
      if ( Status != -1073741772 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
  }
  if ( v7 )
    NdisCloseConfiguration(v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      v8);
  return v8;
}
