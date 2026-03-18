/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U5@U2@U?$_tlgWrapSz@D@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@474AEBU?$_tlgWrapSz@D@@77@Z @ 0x140001C64
 * Callers:
 *     VidSchiResetEngine @ 0x140044808 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140052D48 (VidSchiResetHwEngine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040BE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  _WORD *v20; // rdx
  int v21; // ecx
  int v22; // ecx
  _BYTE v24[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  _DWORD *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  _DWORD v32[2]; // [rsp+88h] [rbp-78h] BYREF
  _WORD *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  _BYTE *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]

  v49 = a15;
  v16 = -1LL;
  v47 = a14;
  v50 = 4LL;
  v48 = 4LL;
  v17 = *a13;
  if ( *a13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_14006265C;
    v19 = 1;
  }
  v45 = v19;
  v42 = a12;
  v40 = a11;
  v38 = a10;
  v36 = a9;
  v44 = v17;
  v46 = 0;
  v43 = 8LL;
  v20 = *a8;
  v41 = 4LL;
  v39 = 8LL;
  v37 = 4LL;
  if ( v20 )
  {
    do
      ++v16;
    while ( v20[v16] );
    v21 = 2 * v16 + 2;
  }
  else
  {
    v20 = &unk_140071C10;
    v21 = 2;
  }
  v33 = v20;
  v29 = v32;
  v34 = v21;
  v30 = 2LL;
  v35 = 0;
  v22 = **a7;
  v31 = *((_QWORD *)*a7 + 1);
  v27 = a6;
  v25 = a5;
  v32[0] = v22;
  v26 = 2LL;
  v32[1] = 0;
  v28 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_140081048, a2, 0LL, 0LL, 14, v24);
}
