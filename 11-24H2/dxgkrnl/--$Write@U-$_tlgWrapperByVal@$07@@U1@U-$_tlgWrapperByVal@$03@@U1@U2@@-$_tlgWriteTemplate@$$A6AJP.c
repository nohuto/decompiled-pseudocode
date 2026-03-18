/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1400013B8
 * Callers:
 *     ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x1400389A0 (-LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140060208 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-49h] BYREF
  __int64 v10; // [rsp+50h] [rbp-29h]
  __int64 v11; // [rsp+58h] [rbp-21h]
  __int64 v12; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]

  v18 = a8;
  v16 = a7;
  v14 = a6;
  v12 = a5;
  v10 = a4;
  v19 = 4LL;
  v17 = 8LL;
  v15 = 4LL;
  v13 = 8LL;
  v11 = 8LL;
  return tlgWriteAgg((int)&dword_14015E5A8, a2, 0, 7, &v9);
}
