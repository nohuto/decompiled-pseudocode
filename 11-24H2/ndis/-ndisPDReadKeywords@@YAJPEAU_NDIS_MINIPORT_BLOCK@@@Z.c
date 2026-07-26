/*
 * XREFs of ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140169140
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1400545B0 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_RECORDER_SF_qcL @ 0x1400A55F0 (WPP_RECORDER_SF_qcL.c)
 */

__int64 __fastcall ndisPDReadKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // ebx
  NDIS_STATUS v3; // eax
  PVOID v4; // rdi
  __int64 Pool2; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  PNDIS_CONFIGURATION_PARAMETER v10; // rax
  int ParameterType; // [rsp+20h] [rbp-29h]
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp+7h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp+17h] BYREF
  int Status; // [rsp+B0h] [rbp+67h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+6Fh] BYREF
  PVOID ConfigurationHandle; // [rsp+C0h] [rbp+77h] BYREF

  v1 = 0;
  ConfigObject.NdisHandle = a1;
  Keyword.Buffer = L"*PacketDirect";
  ConfigurationHandle = 0LL;
  v14.Buffer = L"*PacketDirectDomain";
  *(_QWORD *)&ConfigObject.Header.Type = 1311145LL;
  *(_QWORD *)&ConfigObject.Flags = 0LL;
  ParameterValue = 0LL;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  *(_QWORD *)&v14.Length = 2621478LL;
  v3 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  Status = v3;
  if ( v3 )
  {
    v1 = NdisConvertNdisStatusToNtStatus(v3);
  }
  else
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( !Status )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1648444494LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        a1->PDBlock = (struct _NDIS_PD_BLOCK *)Pool2;
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_OWORD *)(Pool2 + 64) = 0LL;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        *(_QWORD *)Pool2 = a1;
        *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
        *(_QWORD *)(Pool2 + 40) = Pool2 + 40;
        v10 = ParameterValue;
        *(_DWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 64) = 0LL;
        *(_QWORD *)(v9 + 56) = 0LL;
        if ( v10->ParameterData.IntegerData )
        {
          *(_BYTE *)(v9 + 12) = 1;
          NdisReadConfiguration(&Status, &ParameterValue, v4, &v14, NdisParameterInteger);
          if ( !Status )
            *(_DWORD *)(v9 + 16) = ParameterValue->ParameterData.IntegerData;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qcL(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v7, v8, ParameterType);
      }
      else
      {
        v1 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            29,
            11,
            (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids);
        }
      }
    }
  }
  if ( v4 )
    NdisCloseConfiguration(v4);
  return v1;
}
