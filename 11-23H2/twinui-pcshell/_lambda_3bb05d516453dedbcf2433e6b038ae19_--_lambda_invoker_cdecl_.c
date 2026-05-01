/*
 * XREFs of _lambda_3bb05d516453dedbcf2433e6b038ae19_::_lambda_invoker_cdecl_ @ 0x1801CEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BD2A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$.c)
 */

__int64 __fastcall lambda_3bb05d516453dedbcf2433e6b038ae19_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  const wchar_t *v5; // [rsp+50h] [rbp-18h] BYREF
  const wchar_t *v6; // [rsp+58h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF
  const WCHAR *v9; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_180986E18 > 5 )
  {
    v9 = *(const WCHAR **)(a1 + 24);
    v5 = *(const wchar_t **)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 64);
    v6 = *(const wchar_t **)(a1 + 56);
    v8 = *(_DWORD *)(a1 + 8);
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
             a1,
             (int)&unk_180841F7B,
             a3,
             a4,
             (__int64)&v8,
             &v6,
             (__int64)&v7,
             &v5,
             &v9);
  }
  return result;
}
