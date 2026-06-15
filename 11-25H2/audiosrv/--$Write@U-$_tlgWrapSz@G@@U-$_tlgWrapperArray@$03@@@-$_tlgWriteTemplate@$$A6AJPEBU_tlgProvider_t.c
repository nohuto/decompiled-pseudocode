/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x180074128
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005A990 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005AE08 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 *a6)
{
  int v7; // ecx
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _DWORD v12[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-19h] BYREF
  int v15; // [rsp+58h] [rbp-11h]
  int v16; // [rsp+5Ch] [rbp-Dh]
  unsigned __int8 *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  const WCHAR *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  __int64 *v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]
  __int64 v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]

  v24 = 2LL;
  v27 = 0;
  v7 = 4 * *((unsigned __int16 *)a6 + 4);
  v23 = a6 + 1;
  v25 = *a6;
  v26 = v7;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &LocaleName;
    v10 = 2;
  }
  v21 = v10;
  v12[0] = *a2 << 24;
  v20 = v8;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v22 = 0;
  v13 = *(_QWORD *)(a2 + 3);
  v14 = *(unsigned __int16 **)(a1 + 8);
  v15 = *v14;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v16 = 2;
  v19 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v12, 0LL, 0LL, 5, &v14);
}
