/*
 * XREFs of ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U6@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@855@Z @ 0x180002DB8
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180021574 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const WCHAR *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  _BYTE v19[32]; // [rsp+30h] [rbp-C1h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-A1h]
  __int64 v21; // [rsp+58h] [rbp-99h]
  __int64 v22; // [rsp+60h] [rbp-91h]
  int v23; // [rsp+68h] [rbp-89h]
  int v24; // [rsp+6Ch] [rbp-85h]
  __int64 v25; // [rsp+70h] [rbp-81h]
  __int64 v26; // [rsp+78h] [rbp-79h]
  __int64 v27; // [rsp+80h] [rbp-71h]
  __int64 v28; // [rsp+88h] [rbp-69h]
  __int64 v29; // [rsp+90h] [rbp-61h]
  __int64 v30; // [rsp+98h] [rbp-59h]
  const WCHAR *v31; // [rsp+A0h] [rbp-51h]
  int v32; // [rsp+A8h] [rbp-49h]
  int v33; // [rsp+ACh] [rbp-45h]
  __int64 v34; // [rsp+B0h] [rbp-41h]
  __int64 v35; // [rsp+B8h] [rbp-39h]
  __int64 v36; // [rsp+C0h] [rbp-31h]
  __int64 v37; // [rsp+C8h] [rbp-29h]
  __int64 v38; // [rsp+D0h] [rbp-21h]
  __int64 v39; // [rsp+D8h] [rbp-19h]
  __int64 v40; // [rsp+E0h] [rbp-11h]
  __int64 v41; // [rsp+E8h] [rbp-9h]

  v40 = a13;
  v38 = a12;
  v36 = a11;
  v34 = a10;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 4LL;
  v14 = *a9;
  v35 = 4LL;
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &LocaleName;
    v16 = 2;
  }
  v32 = v16;
  v31 = v14;
  v33 = 0;
  v30 = 16LL;
  v17 = *a8;
  v27 = a7;
  v25 = a6;
  v29 = v17;
  v28 = 8LL;
  v26 = 1LL;
  v21 = 2LL;
  v22 = *a5;
  v23 = 4 * *((unsigned __int16 *)a5 + 4);
  v20 = a5 + 1;
  v24 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 12, (__int64)v19);
}
