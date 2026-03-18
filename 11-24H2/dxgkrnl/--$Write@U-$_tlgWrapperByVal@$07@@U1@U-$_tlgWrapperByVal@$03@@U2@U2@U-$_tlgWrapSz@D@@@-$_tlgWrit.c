/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x14000565C
 * Callers:
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x14008A0B8 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140060208 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const CHAR **a9)
{
  const CHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-61h] BYREF
  __int64 v14; // [rsp+50h] [rbp-41h]
  __int64 v15; // [rsp+58h] [rbp-39h]
  __int64 v16; // [rsp+60h] [rbp-31h]
  __int64 v17; // [rsp+68h] [rbp-29h]
  __int64 v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  __int64 v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  __int64 v22; // [rsp+90h] [rbp-1h]
  __int64 v23; // [rsp+98h] [rbp+7h]
  const CHAR *v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+ACh] [rbp+1Bh]

  v9 = *a9;
  if ( *a9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = File;
    v11 = 1;
  }
  v25 = v11;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v24 = v9;
  v16 = a5;
  v14 = a4;
  v17 = 8LL;
  v15 = 8LL;
  v26 = 0;
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  return tlgWriteAgg((int)&dword_14015E5A8, a2, 0, 8, &v13);
}
