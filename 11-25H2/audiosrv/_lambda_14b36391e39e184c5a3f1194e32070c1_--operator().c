/*
 * XREFs of _lambda_14b36391e39e184c5a3f1194e32070c1_::operator() @ 0x180147290
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::Run @ 0x180149840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___--Run.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180007AE4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180147C0C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180148A3C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

__int64 __fastcall lambda_14b36391e39e184c5a3f1194e32070c1_::operator()(__int64 a1)
{
  const unsigned __int16 **v1; // rax
  const WCHAR *v2; // rbx
  const unsigned __int16 *v4; // rdx
  const unsigned __int16 **v5; // rdx
  const unsigned __int16 *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const WCHAR **v11; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(const unsigned __int16 ***)(a1 + 8);
  v2 = 0LL;
  if ( v1 )
    v4 = *v1;
  else
    v4 = 0LL;
  AtmosCheck::AddArrayToLicenseMap(*(AtmosCheck **)a1, v4);
  v5 = *(const unsigned __int16 ***)(a1 + 8);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  result = AtmosCheck::PerformLicenseCheckForEndpoint(*(AtmosCheck **)a1, v6, (bool *)&v12);
  if ( (unsigned int)CallbackContext > 5 )
  {
    v12 = result;
    v11 = *(const WCHAR ***)(a1 + 8);
    if ( v11 )
      v2 = *v11;
    v13 = v2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             v8,
             (__int64)&unk_1801A823C,
             v9,
             v10,
             &v13,
             (__int64)&v12);
  }
  return result;
}
