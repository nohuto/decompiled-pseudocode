/*
 * XREFs of ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x1800FE2FC
 * Callers:
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800FE3C0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000574C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x18001140C (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x1800FAFA0 (-GetFrameworkViewType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCTarget_UpdatedFrameworkViewType_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        int a3,
        __int64 a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  const WCHAR *FrameworkViewType; // [rsp+48h] [rbp-20h] BYREF
  struct IMPCTarget *v13; // [rsp+50h] [rbp-18h] BYREF
  ISMTracing *v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = this;
  v7 = ISMTracing::Provider();
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 1LL) )
  {
    v11 = a4;
    FrameworkViewType = ISMTracing::GetFrameworkViewType(a3);
    LODWORD(v14) = ISMTracing::GetPIDOfMPCTarget(a2);
    v13 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v8,
      (__int64)&unk_18020BAED,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v14,
      &FrameworkViewType,
      (__int64)&v11);
  }
}
