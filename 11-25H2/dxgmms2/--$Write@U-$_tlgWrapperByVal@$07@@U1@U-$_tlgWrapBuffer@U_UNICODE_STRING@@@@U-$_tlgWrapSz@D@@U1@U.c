/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@3333AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001FF4
 * Callers:
 *     ?VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z @ 0x14003F438 (-VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040BE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  _BYTE v20[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  _DWORD *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]

  v43 = 16LL;
  v41 = 4LL;
  v39 = 8LL;
  v14 = *a14;
  v40 = a13;
  v38 = a12;
  v36 = a11;
  v34 = a10;
  v32 = a9;
  v42 = v14;
  v37 = 8LL;
  v35 = 8LL;
  v15 = *a8;
  v33 = 8LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_14006265C;
    v17 = 1;
  }
  v30 = v17;
  v29 = v15;
  v25 = v28;
  v31 = 0;
  v26 = 2LL;
  v18 = **a7;
  v27 = *((_QWORD *)*a7 + 1);
  v23 = a6;
  v21 = a5;
  v28[0] = v18;
  v28[1] = 0;
  v24 = 8LL;
  v22 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_140081048, a2, 0LL, 0LL, 13, v20);
}
