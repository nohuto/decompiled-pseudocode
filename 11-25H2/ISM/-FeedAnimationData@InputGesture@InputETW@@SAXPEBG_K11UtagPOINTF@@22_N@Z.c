/*
 * XREFs of ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x180039DC4
 * Callers:
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180058B30 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@44444444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180007120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::InputGesture::FeedAnimationData(
        const unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINTF a5,
        struct tagPOINTF a6,
        struct tagPOINTF a7,
        bool a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL v15; // [rsp+88h] [rbp-29h] BYREF
  double y; // [rsp+90h] [rbp-21h] BYREF
  double x; // [rsp+98h] [rbp-19h] BYREF
  double v18; // [rsp+A0h] [rbp-11h] BYREF
  double v19; // [rsp+A8h] [rbp-9h] BYREF
  double v20; // [rsp+B0h] [rbp-1h] BYREF
  double v21; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+1Fh] BYREF
  const WCHAR *v25; // [rsp+D8h] [rbp+27h] BYREF

  if ( InputETW::IsEnabled() )
  {
    v12 = InputETW::Provider();
    if ( *(_DWORD *)v12 > 5u && (*((_BYTE *)v12 + 16) & 1) != 0 && (*((_QWORD *)v12 + 3) & 1LL) == *((_QWORD *)v12 + 3) )
    {
      v15 = a8;
      v22 = a4;
      v23 = a3;
      v24 = a2;
      v25 = a1;
      y = a7.y;
      x = a7.x;
      v18 = a6.y;
      v19 = a6.x;
      v20 = a5.y;
      v21 = a5.x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (__int64)&unk_180216470,
        v13,
        v14,
        &v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&x,
        (__int64)&y,
        (__int64)&v15);
    }
  }
}
