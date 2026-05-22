/*
 * XREFs of ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x1800FC004
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FB010 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000549C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTe.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x1800FAFA0 (-GetFrameworkViewType@ISMTracing@@SAPEBGI@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FB3D0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int PIDOfTarget; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  const WCHAR *FrameworkViewType; // [rsp+60h] [rbp-18h] BYREF
  struct IInputTarget *v15; // [rsp+68h] [rbp-10h] BYREF
  ISMTracing *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = this;
  v8 = ISMTracing::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
  {
    v13 = a5;
    FrameworkViewType = ISMTracing::GetFrameworkViewType(a4);
    LODWORD(v16) = a3;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v9,
      (__int64)&unk_18020B89C,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&PIDOfTarget,
      (__int64)&v16,
      &FrameworkViewType,
      (__int64)&v13);
  }
}
