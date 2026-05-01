/*
 * XREFs of ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x18056B6A0
 * Callers:
 *     ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1805705F0 (-TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHS.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180171E58 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180208910 (-Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::TerminateAppRequested<unsigned short const *,unsigned char &>(
        const WCHAR **a1,
        _BYTE *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  const WCHAR *v10; // [rsp+40h] [rbp-18h] BYREF
  bool v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = AppUsageTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *a2 == 0;
      v10 = *a1;
      v11 = !v8;
      v12 = 0x2000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v5,
                     byte_18081143D,
                     v6,
                     v7,
                     &v10,
                     (__int64)&v11,
                     (__int64)&v12);
    }
  }
  return (char)v4;
}
