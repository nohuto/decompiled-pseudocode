/*
 * XREFs of ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x18039168C
 * Callers:
 *     _lambda_219695f63e651180cfc7ae358f81f100_::operator() @ 0x18038EFC0 (_lambda_219695f63e651180cfc7ae358f81f100_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x180003C44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 *     ?Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B67AC (-Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

void __fastcall StartMenuExperienceTelemetry::PendingCloakingStatus_(StartMenuExperienceTelemetry *this, char a2)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rdx
  const struct _tlgProvider_t *v5; // rcx

  if ( a2 )
  {
    v2 = StartMenuExperienceLogging::Provider((__int64)this);
    if ( *(_DWORD *)v2 > 2u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v4 = &unk_1807ED952;
LABEL_8:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        v3,
        (__int64)v4);
    }
  }
  else
  {
    v5 = StartMenuExperienceLogging::Provider((__int64)this);
    if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      v4 = &unk_1807ED859;
      goto LABEL_8;
    }
  }
}
