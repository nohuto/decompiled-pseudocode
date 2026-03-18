/*
 * XREFs of _lambda_4f1b21fdf227c274fd119a17c5b036b5_::operator() @ 0x1402775B4
 * Callers:
 *     _DXGKCALLONEXIT__lambda_4f1b21fdf227c274fd119a17c5b036b5____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140091618 (_DXGKCALLONEXIT__lambda_4f1b21fdf227c274fd119a17c5b036b5____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44344@Z @ 0x140006E88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

unsigned int *__fastcall lambda_4f1b21fdf227c274fd119a17c5b036b5_::operator()(unsigned int **a1)
{
  __int64 v2; // r9
  unsigned int *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned int *v6; // rax
  __int64 v7; // rcx
  unsigned int *result; // rax
  int v9; // [rsp+60h] [rbp+27h] BYREF
  __int64 v10; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11[4]; // [rsp+70h] [rbp+37h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+67h] BYREF
  int v13; // [rsp+A8h] [rbp+6Fh] BYREF
  int v14; // [rsp+B0h] [rbp+77h] BYREF
  unsigned int v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( !**a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 268;
  }
  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000001000LL) )
  {
    v3 = *a1;
    v4 = *(_QWORD *)a1[1];
    v12 = (*a1)[1];
    v5 = *(_QWORD *)a1[3];
    v13 = *(_DWORD *)(v5 + 32);
    v10 = *(_QWORD *)(v5 + 24);
    v6 = a1[2];
    v9 = 1;
    v11[0] = 16779264LL;
    v7 = *v6;
    v15 = *v3;
    v14 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_140140B57,
      v4,
      v2,
      (__int64)v11,
      (__int64)&v9,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  result = a1[2];
  if ( (*result & 0x80000000) != 0 )
  {
    DxgkLogCodePointPacket(0x7Cu, *result, **a1, (*a1)[1], *(_QWORD *)(*(_QWORD *)a1[3] + 24LL));
    result = (unsigned int *)WdLogSingleEntry2(2LL, **a1, (int)*a1[2]);
    WdLogGlobalForLineNumber = 289;
  }
  return result;
}
