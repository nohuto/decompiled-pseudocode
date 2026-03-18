/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140002590
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x14002DD70 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     _tlgWriteAgg @ 0x14003C640 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v11; // rcx
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 *v15; // rax
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v19; // [rsp+50h] [rbp-81h]
  __int64 v20; // [rsp+58h] [rbp-79h]
  __int64 v21; // [rsp+60h] [rbp-71h]
  __int64 v22; // [rsp+68h] [rbp-69h]
  __int64 v23; // [rsp+70h] [rbp-61h]
  __int64 v24; // [rsp+78h] [rbp-59h]
  _DWORD *v25; // [rsp+80h] [rbp-51h]
  __int64 v26; // [rsp+88h] [rbp-49h]
  __int64 v27; // [rsp+90h] [rbp-41h]
  _DWORD v28[2]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-31h]
  __int64 v30; // [rsp+A8h] [rbp-29h]
  _BYTE *v31; // [rsp+B0h] [rbp-21h]
  int v32; // [rsp+B8h] [rbp-19h]
  int v33; // [rsp+BCh] [rbp-15h]
  __int64 v34; // [rsp+C0h] [rbp-11h]
  __int64 v35; // [rsp+C8h] [rbp-9h]
  __int64 v36; // [rsp+D0h] [rbp-1h]
  __int64 v37; // [rsp+D8h] [rbp+7h]

  v37 = 16LL;
  v35 = 4LL;
  v11 = *a11;
  v34 = a10;
  v36 = v11;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_14006265C;
    v14 = 1;
  }
  v32 = v14;
  v29 = a8;
  v25 = v28;
  v31 = v12;
  v33 = 0;
  v30 = 8LL;
  v15 = *a7;
  v26 = 2LL;
  v16 = *v15;
  v27 = *((_QWORD *)v15 + 1);
  v23 = a6;
  v21 = a5;
  v28[0] = v16;
  v19 = a4;
  v28[1] = 0;
  v24 = 8LL;
  v22 = 4LL;
  v20 = 8LL;
  return tlgWriteAgg((int)&dword_140081048, a2, 0, 11, &v18);
}
