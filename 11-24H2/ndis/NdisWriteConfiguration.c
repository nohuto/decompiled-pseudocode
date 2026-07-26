/*
 * XREFs of NdisWriteConfiguration @ 0x1400622A0
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAMETER@@@Z @ 0x1400621F0 (-ndisWriteConfigurationIfPresent@@YAXPEAHPEAXPEAU_UNICODE_STRING@@PEAU_NDIS_CONFIGURATION_PARAME.c)
 *     ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1400B61F4 (-ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400BF930 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DFBA0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401403FC (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x140162E90 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v6; // bp
  const struct _GUID *v9; // rdx
  wchar_t *Buffer; // r15
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r12
  ULONG ValueLength; // edi
  ULONG v13; // r13d
  __int64 Length; // rdx
  const WCHAR *v15; // rdx
  ULONG v16; // ecx
  wchar_t *Pool2; // rax

  v6 = 0;
  v9 = &WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      8,
      33,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigurationHandle);
    v9 = &WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids;
  }
  *Status = 0;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType <= (unsigned int)NdisParameterHexInteger )
  {
    ValueData = &ParameterValue->ParameterData;
    ValueLength = 4;
    v13 = 4;
LABEL_5:
    Length = Keyword->Length;
    if ( (unsigned int)Length < 2 || Buffer[((unsigned __int64)Keyword->Length >> 1) - 1] )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(66LL, Length + 2, 538985550LL);
      Buffer = Pool2;
      if ( !Pool2 )
      {
        *Status = -1073741670;
LABEL_12:
        v9 = &WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids;
        goto LABEL_13;
      }
      v6 = 1;
      memmove(Pool2, Keyword->Buffer, Keyword->Length);
      Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
    }
    if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
    {
      v15 = (const WCHAR *)*((_QWORD *)ConfigurationHandle + 4);
      v16 = 0x40000000;
    }
    else
    {
      v15 = (const WCHAR *)((char *)ConfigurationHandle + 176);
      v16 = 1;
    }
    *Status = RtlWriteRegistryValue(v16, v15, (PCWSTR)Buffer, v13, ValueData, ValueLength);
    if ( v6 )
      ExFreePoolWithTag(Buffer, 0);
    goto LABEL_12;
  }
  switch ( ParameterValue->ParameterType )
  {
    case NdisParameterString:
      ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
      v13 = 1;
      ValueLength = ParameterValue->ParameterData.StringData.Length + 2;
      goto LABEL_5;
    case NdisParameterMultiString:
      ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
      v13 = 7;
      ValueLength = ParameterValue->ParameterData.StringData.Length;
      goto LABEL_5;
    case NdisParameterBinary:
      ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
      v13 = 3;
      ValueLength = ParameterValue->ParameterData.StringData.Length;
      goto LABEL_5;
  }
  *Status = -1073741637;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      8,
      34,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigurationHandle);
  }
}
