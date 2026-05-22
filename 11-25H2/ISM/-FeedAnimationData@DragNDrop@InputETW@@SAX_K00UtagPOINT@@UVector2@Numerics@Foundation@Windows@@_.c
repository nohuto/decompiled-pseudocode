/*
 * XREFs of ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x180149400
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149510 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180007470 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplat.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

char __fastcall InputETW::DragNDrop::FeedAnimationData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  int v6; // ebx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+68h] [rbp-9h] BYREF
  double v15; // [rsp+70h] [rbp-1h] BYREF
  double v16; // [rsp+78h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+88h] [rbp+17h] BYREF
  __int64 v19; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+27h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+2Fh] BYREF
  int v22; // [rsp+E4h] [rbp+73h]

  v22 = HIDWORD(a4);
  v6 = a4;
  LOBYTE(v10) = InputETW::IsEnabled();
  if ( (_BYTE)v10 )
  {
    v10 = InputETW::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)v10, 1LL);
      if ( (_BYTE)v10 )
      {
        v17 = v22;
        v18 = v6;
        v14 = a6;
        v19 = a3;
        v20 = a2;
        v21 = a1;
        v15 = *((float *)&a5 + 1);
        v16 = *(float *)&a5;
        LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                        v12,
                        (__int64)&unk_180216B1F,
                        v11,
                        v12,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16,
                        (__int64)&v15,
                        (__int64)&v14);
      }
    }
  }
  return (char)v10;
}
