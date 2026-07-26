/*
 * XREFs of ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x140043AA0
 * Callers:
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140045770 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportSpecificPortAuthStates(
        struct _NDIS_MINIPORT_BLOCK *a1,
        NDIS_HANDLE ConfigurationHandle)
{
  NDIS_HANDLE v3; // rbx
  unsigned int v4; // edi
  _NDIS_PORT_CONTROL_STATE IntegerData; // r12d
  _NDIS_PORT_CONTROL_STATE v7; // r15d
  _NDIS_PORT_AUTHORIZATION_STATE v8; // r14d
  _NDIS_PORT_AUTHORIZATION_STATE v9; // ecx
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-9h] BYREF
  UNICODE_STRING v12; // [rsp+68h] [rbp+7h] BYREF
  UNICODE_STRING v13; // [rsp+78h] [rbp+17h] BYREF
  int Status; // [rsp+D8h] [rbp+77h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = ConfigurationHandle;
  *(_QWORD *)&Keyword.Length = 3276848LL;
  ParameterValue = 0LL;
  Keyword.Buffer = L"PortAuthSendControlState";
  v11.Buffer = L"PortAuthReceiveControlState";
  v12.Buffer = L"PortAuthSendAuthorizationState";
  Status = 0;
  v13.Buffer = L"PortAuthReceiveAuthorizationState";
  *(_QWORD *)&v11.Length = 3670070LL;
  *(_QWORD *)&v12.Length = 4063292LL;
  *(_QWORD *)&v13.Length = 4456514LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      13,
      60,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  NdisReadConfiguration(&Status, &ParameterValue, v3, &Keyword, NdisParameterInteger);
  v4 = Status;
  if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &v11, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, v3, &v12, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        v8 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, v3, &v13, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          v9 = ParameterValue->ParameterData.IntegerData;
          a1->DefaultPortSendAuthorizationState = v8;
          a1->DefaultPortRcvAuthorizationState = v9;
          a1->DefaultPortSendControlState = IntegerData;
          a1->DefaultPortRcvControlState = v7;
          a1->DefaultSendAuthorizationState = v8;
          a1->DefaultRcvAuthorizationState = v9;
          a1->DefaultSendControlState = IntegerData;
          a1->DefaultRcvControlState = v7;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v4);
  return v4;
}
