/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140007230
 * Callers:
 *     ?LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ @ 0x1403BC20C (-LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140060208 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const CHAR **a6)
{
  const CHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  const CHAR *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v6 = *a6;
  if ( *a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = File;
    v8 = 1;
  }
  v16 = v8;
  v13 = a5;
  v15 = v6;
  v11 = a4;
  v17 = 0;
  v14 = 8LL;
  v12 = 8LL;
  return tlgWriteAgg((int)&dword_14015E5A8, a2, 0, 5, &v10);
}
