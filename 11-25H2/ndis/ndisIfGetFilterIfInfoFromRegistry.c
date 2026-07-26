/*
 * XREFs of ndisIfGetFilterIfInfoFromRegistry @ 0x14016F1C0
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400772A0 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 */

__int64 __fastcall ndisIfGetFilterIfInfoFromRegistry(_QWORD *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  NDIS_STATUS v6; // eax
  PVOID v7; // rdi
  unsigned int v8; // ebx
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-58h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-48h] BYREF
  int Status; // [rsp+A0h] [rbp+8h] BYREF
  PVOID ConfigurationHandle; // [rsp+B0h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  Keyword.Buffer = L"InterfaceGuid";
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      a2);
  v5 = a1[2];
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 336) + 40LL) & 2) != 0 )
    v2 = 1;
  ConfigObject.Flags = v2;
  v6 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v7 = ConfigurationHandle;
  v8 = v6;
  Status = v6;
  if ( !v6 )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterBinary);
    v8 = Status;
    if ( !Status )
      *a2 = *(_OWORD *)ParameterValue->ParameterData.StringData.Buffer;
  }
  if ( v7 )
    NdisCloseConfiguration(v7);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      (char)a2,
      v8,
      *(_QWORD *)&Keyword.Length,
      Keyword.Buffer,
      *(_QWORD *)&ConfigObject.Header.Type,
      ConfigObject.NdisHandle);
  return v8;
}
