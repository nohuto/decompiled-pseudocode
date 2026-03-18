/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x140228640
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EA648 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA8E4 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140006470 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140264714 (-Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(InkFeedbackServer *this, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  InkFeedbackServer *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  const char *v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = this;
  ListEntry::Unlink((ListEntry *)&a2->Blink, a2);
  if ( (unsigned int)dword_140398C98 > 4 )
  {
    v5 = *(_QWORD *)(v3 + 48);
    LODWORD(v7) = 0;
    v9 = v5;
    v10 = "Removed ink feedback provider";
    v8 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v2,
      (__int64)&unk_1403696F4,
      v3,
      v4,
      (__int64)&v7,
      &v10,
      &v9);
  }
  return 0LL;
}
