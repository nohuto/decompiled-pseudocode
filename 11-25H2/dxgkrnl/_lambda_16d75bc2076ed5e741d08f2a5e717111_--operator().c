/*
 * XREFs of _lambda_16d75bc2076ed5e741d08f2a5e717111_::operator() @ 0x140082314
 * Callers:
 *     _DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082144 (_DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140004FC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

void lambda_16d75bc2076ed5e741d08f2a5e717111_::operator()()
{
  __int64 v0; // r8
  unsigned int **v1; // r9
  unsigned __int16 **v2; // rax
  unsigned __int16 *v3; // rdx
  unsigned int *v4; // rax
  unsigned int v5; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14015B5B8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14015B5B8, 512LL) )
    {
      v2 = (unsigned __int16 **)v1[1];
      v7 = 2048LL;
      v3 = *v2;
      v4 = *v1;
      v6 = v3;
      v5 = *v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v5,
        (__int64)&unk_14013C432,
        v0,
        (__int64)v1,
        (__int64)&v7,
        (__int64)&v5,
        &v6);
    }
  }
}
