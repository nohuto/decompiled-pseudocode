/*
 * XREFs of ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014B904
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014B9D0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000787C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800365C0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::DragNDrop::GetDragManager(
        struct tagPOINT a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int v4; // edi
  LONG x; // ebx
  int v6; // esi
  __int64 v7; // rbp
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF
  LONG y; // [rsp+84h] [rbp+Ch]

  y = a1.y;
  v4 = a4;
  x = a1.x;
  v6 = a3;
  v7 = a2;
  if ( InputETW::IsEnabled() )
  {
    v8 = InputETW::Provider();
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v14 = y;
      v15 = x;
      v12 = v4;
      v13 = v6;
      v16 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_180220900,
        v10,
        v11,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
