/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@553AEBU?$_tlgWrapperByVal@$01@@4454@Z @ 0x180005A0C
 * Callers:
 *     _lambda_8bdb8404337a2458e15ecbdbb65afac5_::operator() @ 0x180131A44 (_lambda_8bdb8404337a2458e15ecbdbb65afac5_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        const WCHAR **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15)
{
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rcx
  const WCHAR *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  const WCHAR *v24; // rcx
  _BYTE v26[32]; // [rsp+30h] [rbp-D0h] BYREF
  const WCHAR *v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+5Ch] [rbp-A4h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  const WCHAR *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]

  v49 = a15;
  v17 = -1LL;
  v50 = 4LL;
  v48 = 16LL;
  v18 = 2;
  v46 = 4LL;
  v19 = *a14;
  v45 = a13;
  v43 = a12;
  v41 = a11;
  v47 = v19;
  v44 = 4LL;
  v42 = 2LL;
  v20 = *a10;
  if ( *a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &LocaleName;
    v22 = 2;
  }
  v39 = v22;
  v38 = v20;
  v40 = 0;
  v37 = 16LL;
  v36 = *a9;
  v35 = 16LL;
  v33 = 16LL;
  v34 = *a8;
  v31 = 4LL;
  v23 = *a7;
  v30 = a6;
  v32 = v23;
  v24 = *a5;
  if ( *a5 )
  {
    do
      ++v17;
    while ( v24[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v24 = &LocaleName;
  }
  v27 = v24;
  v28 = v18;
  v29 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 13, (__int64)v26);
}
