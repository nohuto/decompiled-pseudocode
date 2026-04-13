/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180003CE8
 * Callers:
 *     ??$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAIAEBQEB_W@Z @ 0x1800AB12C (--$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@Creati.c)
 *     ??$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAI$$QEAPEB_W@Z @ 0x1800AB1A0 (--$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeF.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  const wchar_t *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &word_1800E78BC;
    v9 = 2;
  }
  v15 = v9;
  v14 = v7;
  v12 = a5;
  v13 = 4LL;
  v16 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 4u, &v11);
}
