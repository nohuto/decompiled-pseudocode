/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1800061DC
 * Callers:
 *     ?LogSendOnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x18011B160 (-LogSendOnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z.c)
 *     ?LogSendRequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x18011B918 (-LogSendRequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z.c)
 *     ?LogReceiveRequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z @ 0x1801A23A0 (-LogReceiveRequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9)
{
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  __int64 v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  __int64 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  const WCHAR *v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]

  v10 = *a9;
  if ( *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &WindowName;
    v12 = 2;
  }
  v24 = v12;
  v21 = a8;
  v19 = a7;
  v17 = a6;
  v15 = a5;
  v23 = v10;
  v25 = 0;
  v22 = 8LL;
  v20 = 8LL;
  v18 = 4LL;
  v16 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7, v14);
}
