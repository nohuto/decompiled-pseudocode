/*
 * XREFs of ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801A8380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801A845C (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801A84B4 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A84E4 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1801A85E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall DataSourceProxy::SetBooleanValue(DataSourceProxy *this, __int64 a2, unsigned __int8 a3)
{
  int v3; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  CGlobalComposition *CurrentFrameId; // [rsp+40h] [rbp-28h] BYREF
  DataSourceProxy *v12; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+18h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a3;
  v3 = a3;
  v5 = a2;
  v6 = DataSourcePropertySet::SetProperty<bool>((char *)this + 64, a2, &v14);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v6) >= 0 )
  {
    if ( (unsigned int)dword_1803F8D18 > 5 && (byte_1803F8D28 & 4) != 0 && (qword_1803F8D30 & 4) == qword_1803F8D30 )
    {
      CurrentFrameId = GetCurrentFrameId();
      v13 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
      v15 = v3;
      v12 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v7,
        (unsigned int)&unk_1803CCC62,
        v8,
        v9,
        (__int64)&v12,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&CurrentFrameId);
    }
    DataSourceProxy::InvalidateReadersAnimationSources(this, v5);
  }
  return 0LL;
}
