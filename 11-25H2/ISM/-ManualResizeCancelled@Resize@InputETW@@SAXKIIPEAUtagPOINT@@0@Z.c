/*
 * XREFs of ?ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x18014F220
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180150278 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180007690 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::Resize::ManualResizeCancelled(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 y; // rcx
  __int64 v12; // [rsp+68h] [rbp+Fh] BYREF
  __int64 x; // [rsp+70h] [rbp+17h] BYREF
  __int64 v14; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+27h] BYREF
  __int64 v16; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+37h] BYREF
  __int64 v18; // [rsp+98h] [rbp+3Fh] BYREF

  v6 = a2;
  v7 = a1;
  if ( InputETW::IsEnabled() )
  {
    v8 = InputETW::Provider();
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v16 = 0LL;
      v17 = v6;
      v18 = v7;
      y = a5->y;
      x = a5->x;
      v14 = a4->y;
      v15 = a4->x;
      v12 = y;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v9,
        (__int64)&unk_180217668,
        v9,
        v10,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&x,
        (__int64)&v12);
    }
  }
}
