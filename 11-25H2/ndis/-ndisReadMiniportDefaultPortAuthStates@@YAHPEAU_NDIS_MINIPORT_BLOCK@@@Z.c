/*
 * XREFs of ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050840
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F310 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportDefaultPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MiniportMediaSpecificPortAuthStates; // ebx
  PVOID v3; // rsi
  _NDIS_PORT_CONTROL_STATE IntegerData; // r12d
  _NDIS_PORT_CONTROL_STATE v6; // r15d
  _NDIS_PORT_AUTHORIZATION_STATE v7; // r14d
  _NDIS_PORT_AUTHORIZATION_STATE v8; // ecx
  __int64 v9; // [rsp+38h] [rbp-49h]
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+68h] [rbp-19h] BYREF
  UNICODE_STRING v13; // [rsp+78h] [rbp-9h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+88h] [rbp+7h] BYREF
  int Status; // [rsp+E8h] [rbp+67h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+F0h] [rbp+6Fh] BYREF
  PVOID ConfigurationHandle; // [rsp+F8h] [rbp+77h] BYREF

  ConfigurationHandle = 0LL;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      64,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  MiniportMediaSpecificPortAuthStates = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !MiniportMediaSpecificPortAuthStates )
  {
    ParameterValue = 0LL;
    Keyword.Buffer = L"PortAuthSendControlState";
    Status = 0;
    v11.Buffer = L"PortAuthReceiveControlState";
    v12.Buffer = L"PortAuthSendAuthorizationState";
    v13.Buffer = L"PortAuthReceiveAuthorizationState";
    *(_QWORD *)&Keyword.Length = 3276848LL;
    *(_QWORD *)&v11.Length = 3670070LL;
    *(_QWORD *)&v12.Length = 4063292LL;
    *(_QWORD *)&v13.Length = 4456514LL;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        60,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1);
    v3 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    MiniportMediaSpecificPortAuthStates = Status;
    if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &v11, NdisParameterInteger);
      MiniportMediaSpecificPortAuthStates = Status;
      if ( !Status )
      {
        v6 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, v3, &v12, NdisParameterInteger);
        MiniportMediaSpecificPortAuthStates = Status;
        if ( !Status )
        {
          v7 = ParameterValue->ParameterData.IntegerData;
          NdisReadConfiguration(&Status, &ParameterValue, v3, &v13, NdisParameterInteger);
          MiniportMediaSpecificPortAuthStates = Status;
          if ( !Status )
          {
            v8 = ParameterValue->ParameterData.IntegerData;
            a1->DefaultPortSendAuthorizationState = v7;
            a1->DefaultPortRcvAuthorizationState = v8;
            a1->DefaultPortSendControlState = IntegerData;
            a1->DefaultPortRcvControlState = v6;
            a1->DefaultSendAuthorizationState = v7;
            a1->DefaultRcvAuthorizationState = v8;
            a1->DefaultSendControlState = IntegerData;
            a1->DefaultRcvControlState = v6;
          }
        }
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x3Du,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)a1,
        MiniportMediaSpecificPortAuthStates);
    if ( !MiniportMediaSpecificPortAuthStates )
    {
      a1->FilterPnPFlags |= 8u;
      NdisCloseConfiguration(v3);
      goto LABEL_13;
    }
    NdisCloseConfiguration(v3);
LABEL_12:
    MiniportMediaSpecificPortAuthStates = ndisReadMiniportMediaSpecificPortAuthStates(a1);
    if ( !MiniportMediaSpecificPortAuthStates )
      goto LABEL_13;
    goto LABEL_17;
  }
  if ( a1->MajorNdisVersion < 6u )
    goto LABEL_12;
LABEL_17:
  a1->DefaultPortSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
  a1->DefaultPortRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
  a1->DefaultPortSendControlState = ndisGlobalPortSendControlState;
  a1->DefaultPortRcvControlState = ndisGlobalPortReceiveControlState;
  a1->DefaultSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
  a1->DefaultRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
  a1->DefaultSendControlState = ndisGlobalPortSendControlState;
  a1->DefaultRcvControlState = ndisGlobalPortReceiveControlState;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = MiniportMediaSpecificPortAuthStates;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v9);
  }
  return MiniportMediaSpecificPortAuthStates;
}
