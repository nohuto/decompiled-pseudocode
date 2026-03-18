/*
 * XREFs of _lambda_90ed363b99280d3fe97ccba0f2c3e6a8_::operator() @ 0x140082DC8
 * Callers:
 *     _DXGKCALLONEXIT__lambda_90ed363b99280d3fe97ccba0f2c3e6a8____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082930 (_DXGKCALLONEXIT__lambda_90ed363b99280d3fe97ccba0f2c3e6a8____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140004E38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_U_ea_140004E38.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083A1C (-Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 */

void __fastcall lambda_90ed363b99280d3fe97ccba0f2c3e6a8_::operator()(int **a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 **v4; // rax
  unsigned __int16 *v5; // rcx
  int *v6; // rax
  int *v7; // rax
  DISPLAY_MUX_DEVICE *v8; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 512LL) )
  {
    v4 = (unsigned __int16 **)a1[2];
    v12 = 2048LL;
    v5 = *v4;
    v6 = a1[1];
    v11 = v5;
    LODWORD(v5) = *v6;
    v7 = *a1;
    v9 = (int)v5;
    v10 = *v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
      v10,
      (__int64)&unk_14013F75A,
      v2,
      v3,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9,
      &v11);
  }
  if ( **a1 >= 0 )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 1255;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)*a1[1], **a1);
    v8 = (DISPLAY_MUX_DEVICE *)a1[3];
    WdLogGlobalForLineNumber = 1248;
    DISPLAY_MUX_DEVICE::Cleanup(v8);
  }
}
