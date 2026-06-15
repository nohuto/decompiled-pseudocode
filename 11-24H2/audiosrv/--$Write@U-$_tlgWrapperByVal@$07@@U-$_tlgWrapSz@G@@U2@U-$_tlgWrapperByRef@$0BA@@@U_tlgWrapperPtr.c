/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@66666@Z @ 0x180005E78
 * Callers:
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x180135D88 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 *a13,
        __int64 *a14)
{
  int v16; // r8d
  __int64 v17; // rcx
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const WCHAR *v21; // rdx
  _BYTE v23[32]; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-A9h]
  __int64 v25; // [rsp+58h] [rbp-A1h]
  const WCHAR *v26; // [rsp+60h] [rbp-99h]
  int v27; // [rsp+68h] [rbp-91h]
  int v28; // [rsp+6Ch] [rbp-8Dh]
  const WCHAR *v29; // [rsp+70h] [rbp-89h]
  int v30; // [rsp+78h] [rbp-81h]
  int v31; // [rsp+7Ch] [rbp-7Dh]
  __int64 v32; // [rsp+80h] [rbp-79h]
  __int64 v33; // [rsp+88h] [rbp-71h]
  __int64 v34; // [rsp+90h] [rbp-69h]
  int v35; // [rsp+98h] [rbp-61h]
  int v36; // [rsp+9Ch] [rbp-5Dh]
  __int64 v37; // [rsp+A0h] [rbp-59h]
  int v38; // [rsp+A8h] [rbp-51h]
  int v39; // [rsp+ACh] [rbp-4Dh]
  __int64 v40; // [rsp+B0h] [rbp-49h]
  int v41; // [rsp+B8h] [rbp-41h]
  int v42; // [rsp+BCh] [rbp-3Dh]
  __int64 v43; // [rsp+C0h] [rbp-39h]
  int v44; // [rsp+C8h] [rbp-31h]
  int v45; // [rsp+CCh] [rbp-2Dh]
  __int64 v46; // [rsp+D0h] [rbp-29h]
  int v47; // [rsp+D8h] [rbp-21h]
  int v48; // [rsp+DCh] [rbp-1Dh]
  __int64 v49; // [rsp+E0h] [rbp-19h]
  int v50; // [rsp+E8h] [rbp-11h]
  int v51; // [rsp+ECh] [rbp-Dh]

  v33 = 16LL;
  v51 = 0;
  v48 = 0;
  v45 = 0;
  v16 = 2;
  v49 = *a14;
  v50 = *((_DWORD *)a14 + 2);
  v42 = 0;
  v39 = 0;
  v46 = *a13;
  v47 = *((_DWORD *)a13 + 2);
  v36 = 0;
  v43 = *a12;
  v44 = *((_DWORD *)a12 + 2);
  v40 = *a11;
  v41 = *((_DWORD *)a11 + 2);
  v37 = *a10;
  v38 = *((_DWORD *)a10 + 2);
  v34 = *a9;
  v35 = *((_DWORD *)a9 + 2);
  v32 = *a8;
  v17 = -1LL;
  v18 = *a7;
  if ( *a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &LocaleName;
    v20 = 2;
  }
  v30 = v20;
  v29 = v18;
  v31 = 0;
  v21 = *a6;
  if ( *a6 )
  {
    do
      ++v17;
    while ( v21[v17] );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v21 = &LocaleName;
  }
  v24 = a5;
  v26 = v21;
  v27 = v16;
  v28 = 0;
  v25 = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 12, (__int64)v23);
}
