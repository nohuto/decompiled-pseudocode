/*
 * XREFs of ??$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAI$$QEAPEB_W@Z @ 0x1800AAE80
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800ADC3C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180003CE8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@_W@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ @ 0x1800554C0 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::TargetedContentTilesExtracted<unsigned int,wchar_t const *>(
        __int64 a1,
        int *a2,
        const wchar_t **a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  int v8; // edx
  const GUID *v9; // r8
  int v11; // [rsp+40h] [rbp+8h] BYREF
  const wchar_t *v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider(a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a2;
    v12 = *a3;
    v9 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
    v11 = v8;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
                    (__int64)v6,
                    byte_180161D8C,
                    v9,
                    v7,
                    (__int64)&v11,
                    &v12);
  }
  return (int)v6;
}
