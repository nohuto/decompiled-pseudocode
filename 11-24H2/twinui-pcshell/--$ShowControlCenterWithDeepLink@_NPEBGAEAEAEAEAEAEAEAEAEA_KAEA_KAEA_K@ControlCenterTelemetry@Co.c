/*
 * XREFs of ??$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAEAEA_KAEA_KAEA_K@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_N$$QEAPEBGAEAE222AEA_K33@Z @ 0x180372C18
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x1800555D0 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@3333AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x1800037A8 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U3@U3@U3.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E5C38 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::ShowControlCenterWithDeepLink<bool,unsigned short const *,unsigned char &,unsigned char &,unsigned char &,unsigned char &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
        _BYTE *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _BYTE v16[4]; // [rsp+7Ch] [rbp+3h] BYREF
  __int64 v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h] BYREF

  v11 = ControlCenterLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v11 > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)v11, 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v17 = 0x1000000LL;
      v18 = *a9;
      v19 = *a8;
      v20 = *a7;
      v21 = *a2;
      v16[0] = *a1;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                      v14,
                      (__int64)&unk_1807E9A74,
                      v12,
                      v13,
                      (__int64)v16,
                      &v21);
    }
  }
  return (char)v11;
}
