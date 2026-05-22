/*
 * XREFs of ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180058DF8
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058734 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@444444444@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTempla.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

char __fastcall InputETW::InputGesture::GestureInProgress(
        const WCHAR *a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v9; // rsi
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+88h] [rbp-29h] BYREF
  __int64 v17; // [rsp+90h] [rbp-21h] BYREF
  __int64 v18; // [rsp+98h] [rbp-19h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+1Fh] BYREF
  const WCHAR *v26; // [rsp+D8h] [rbp+27h] BYREF

  v9 = a2;
  LOBYTE(v12) = InputETW::IsEnabled();
  if ( (_BYTE)v12 )
  {
    v12 = InputETW::Provider();
    if ( *(_DWORD *)v12 > 5u && (*((_BYTE *)v12 + 16) & 1) != 0 && (*((_QWORD *)v12 + 3) & 1LL) == *((_QWORD *)v12 + 3) )
    {
      v16 = a8;
      v17 = a7;
      v18 = a6;
      v19 = a5[1];
      v20 = *a5;
      v21 = a4[1];
      v22 = *a4;
      v23 = a3[1];
      v24 = *a3;
      v25 = v9;
      v26 = a1;
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                      (__int64)v12,
                      (__int64)&unk_1802162FB,
                      v13,
                      v14,
                      &v26,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16);
    }
  }
  return (char)v12;
}
