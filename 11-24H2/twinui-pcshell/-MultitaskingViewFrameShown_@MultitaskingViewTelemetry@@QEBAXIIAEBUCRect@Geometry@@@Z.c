/*
 * XREFs of ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x1804BCEE8
 * Callers:
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804BD960 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180147EEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        const struct Geometry::CRect *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // ecx
  int v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+64h] [rbp-1Ch] BYREF
  int v14; // [rsp+68h] [rbp-18h] BYREF
  int v15; // [rsp+6Ch] [rbp-14h] BYREF
  int v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF
  MultitaskingViewTelemetry *v18; // [rsp+90h] [rbp+10h] BYREF

  v18 = this;
  v7 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v11 = *((_DWORD *)a4 + 3);
      v12 = *((_DWORD *)a4 + 2);
      v13 = *((_DWORD *)a4 + 1);
      v14 = *(_DWORD *)a4;
      LODWORD(v18) = v11;
      v17 = 0x1000000LL;
      v15 = a3;
      v16 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        byte_180805F15,
        v8,
        v9,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
}
