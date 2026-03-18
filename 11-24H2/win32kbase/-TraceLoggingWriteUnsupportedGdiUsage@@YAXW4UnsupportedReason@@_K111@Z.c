/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14019DF94
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     EngAssociateSurface @ 0x1400C6970 (EngAssociateSurface.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x140003AE0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  int v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
  {
    v11 = a5;
    v12 = v7;
    v13 = v6;
    v14 = v8;
    v15 = 0x2000000LL;
    v10 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_1402765A9,
      v6,
      v7,
      (__int64)&v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
