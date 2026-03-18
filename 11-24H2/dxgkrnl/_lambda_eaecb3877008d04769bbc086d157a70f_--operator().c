/*
 * XREFs of _lambda_eaecb3877008d04769bbc086d157a70f_::operator() @ 0x14019FFB0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_eaecb3877008d04769bbc086d157a70f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140068300 (_DXGKCALLONEXIT__lambda_eaecb3877008d04769bbc086d157a70f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1400029A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall lambda_eaecb3877008d04769bbc086d157a70f_::operator()(unsigned int **a1)
{
  unsigned int *v1; // rax
  const CHAR *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int *v6; // rax
  int v7; // ecx
  unsigned int *v8; // rax
  __int64 v10[5]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+10h] BYREF
  const CHAR *v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  if ( **a1 == 2303131 && (unsigned int)dword_14015E5A8 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000000400LL);
    v3 = 0LL;
    if ( (_BYTE)v1 )
    {
      v4 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
      if ( v4 )
        v3 = *(const CHAR **)(v4 + 96);
      v6 = a1[1];
      v13 = v3;
      v14 = 33556480LL;
      v10[0] = 1LL;
      v7 = *(unsigned __int8 *)v6;
      v8 = *a1;
      v11 = v7;
      v12 = *v8;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                     v12,
                     (int)&unk_14013C1AF,
                     v5,
                     (__int64)v10,
                     (__int64)&v14,
                     (__int64)&v12,
                     (__int64)&v11,
                     &v13);
    }
  }
  return (char)v1;
}
