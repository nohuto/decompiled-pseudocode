/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004D400
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BBFB0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x18010BEA0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJXZ @ 0x18010D5E0 (-PreStartStream@CVADServer@@UEAAJXZ.c)
 *     ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x18010EB8C (-StartStream_Internal@CVADServer@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7)
{
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _DWORD v12[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-21h]
  int v15; // [rsp+58h] [rbp-19h]
  int v16; // [rsp+5Ch] [rbp-15h]
  unsigned __int8 *v17; // [rsp+60h] [rbp-11h]
  int v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+6Ch] [rbp-5h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  const WCHAR *v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+8Ch] [rbp+1Bh]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  __int64 v26; // [rsp+98h] [rbp+27h]

  v25 = a7;
  v26 = 4LL;
  v8 = *a6;
  if ( *a6 )
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
  v23 = v10;
  v20 = a5;
  v12[0] = *a2 << 24;
  v22 = v8;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v13 = *(_QWORD *)(a2 + 3);
  v14 = *(unsigned __int16 **)(a1 + 8);
  v24 = 0;
  v21 = 8LL;
  v15 = *v14;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v16 = 2;
  v19 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v12, 0LL, 0LL);
}
