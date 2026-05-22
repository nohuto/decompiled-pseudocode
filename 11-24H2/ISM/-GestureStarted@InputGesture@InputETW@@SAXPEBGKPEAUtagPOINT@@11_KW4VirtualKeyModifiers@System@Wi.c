/*
 * XREFs of ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180146A34
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058544 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@444444444444@Z @ 0x1800072C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWr.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800365C0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

char __fastcall InputETW::InputGesture::GestureStarted(
        const WCHAR *a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rsi
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v20; // [rsp+98h] [rbp-51h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-11h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-1h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+7h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+Fh] BYREF
  const WCHAR *v33; // [rsp+100h] [rbp+17h] BYREF

  v12 = a2;
  LOBYTE(v15) = InputETW::IsEnabled();
  if ( (_BYTE)v15 )
  {
    v15 = InputETW::Provider();
    if ( *(_DWORD *)v15 > 5u )
    {
      LOBYTE(v15) = tlgKeywordOn((__int64)v15, 1LL);
      if ( (_BYTE)v15 )
      {
        v22 = a9;
        v23 = a8;
        v24 = a7;
        v25 = a6;
        v20 = a11;
        v21 = a10;
        v32 = v12;
        v33 = a1;
        v26 = a5[1];
        v27 = *a5;
        v28 = a4[1];
        v29 = *a4;
        v30 = a3[1];
        v31 = *a3;
        LOBYTE(v15) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v18,
                        (__int64)&unk_18021FBC6,
                        v16,
                        v17,
                        &v33,
                        (__int64)&v32,
                        (__int64)&v31,
                        (__int64)&v30,
                        (__int64)&v29,
                        (__int64)&v28,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20);
      }
    }
  }
  return (char)v15;
}
