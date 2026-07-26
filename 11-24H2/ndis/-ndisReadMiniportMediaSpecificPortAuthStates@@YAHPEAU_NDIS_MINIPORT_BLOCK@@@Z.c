/*
 * XREFs of ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140045770
 * Callers:
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400447A0 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x140043AA0 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x14005BF80 (NdisOpenProtocolConfiguration.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisReadMiniportMediaSpecificPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MiniportSpecificPortAuthStates; // esi
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-79h] BYREF
  NTSTATUS v5; // [rsp+58h] [rbp-69h] BYREF
  _UNICODE_STRING String; // [rsp+60h] [rbp-61h] BYREF
  _UNICODE_STRING v7; // [rsp+70h] [rbp-51h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+80h] [rbp-41h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-39h] BYREF
  _UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  char v11; // [rsp+A8h] [rbp-19h] BYREF
  char v12; // [rsp+D0h] [rbp+Fh] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_DWORD *)(&v7.MaximumLength + 1) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  ConfigurationHandle = 0LL;
  DestinationString = 0LL;
  Source = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      62,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)&v11;
  *(_DWORD *)&v7.Length = 2621440;
  v7.Buffer = (wchar_t *)&v12;
  if ( RtlIntegerToUnicodeString(a1->IfBlock->ifType, 0xAu, &String)
    || RtlIntegerToUnicodeString(a1->PhysicalMediumType, 0xAu, &v7)
    || (RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\"),
        RtlInitUnicodeString(&Source, L"\\"),
        Destination.Length = 0,
        Destination.MaximumLength = String.Length + v7.Length + DestinationString.Length + Source.Length + 4,
        (Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550LL)) == 0LL) )
  {
    MiniportSpecificPortAuthStates = -1073741670;
  }
  else
  {
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeStringToString(&Destination, &v7);
    v5 = RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer);
    MiniportSpecificPortAuthStates = v5;
    if ( !v5 )
    {
      NdisOpenProtocolConfiguration(&v5, &ConfigurationHandle, &Destination);
      MiniportSpecificPortAuthStates = v5;
      if ( !v5 )
      {
        MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
        NdisCloseConfiguration(ConfigurationHandle);
        if ( !MiniportSpecificPortAuthStates )
          a1->FilterPnPFlags |= 0x10u;
      }
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Fu,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      MiniportSpecificPortAuthStates);
  return MiniportSpecificPortAuthStates;
}
