/*
 * XREFs of ?DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@_K2@Z @ 0x1801492AC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A8E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4444444444@Z @ 0x180007310 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTem.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

char __fastcall InputETW::InputGesture::DropTargetChanged(
        const WCHAR *a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rsi
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v18; // [rsp+88h] [rbp-31h] BYREF
  __int64 v19; // [rsp+90h] [rbp-29h] BYREF
  __int64 v20; // [rsp+98h] [rbp-21h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+1Fh] BYREF
  const WCHAR *v29; // [rsp+E0h] [rbp+27h] BYREF

  v10 = a2;
  LOBYTE(v13) = InputETW::IsEnabled();
  if ( (_BYTE)v13 )
  {
    v13 = InputETW::Provider();
    if ( *(_DWORD *)v13 > 5u )
    {
      LOBYTE(v13) = tlgKeywordOn((__int64)v13, 1LL);
      if ( (_BYTE)v13 )
      {
        v20 = a7;
        v21 = a6;
        v18 = a9;
        v19 = a8;
        v28 = v10;
        v29 = a1;
        v22 = a5[1];
        v23 = *a5;
        v24 = a4[1];
        v25 = *a4;
        v26 = a3[1];
        v27 = *a3;
        LOBYTE(v13) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v16,
                        (__int64)&unk_180216EC8,
                        v14,
                        v15,
                        &v29,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18);
      }
    }
  }
  return (char)v13;
}
