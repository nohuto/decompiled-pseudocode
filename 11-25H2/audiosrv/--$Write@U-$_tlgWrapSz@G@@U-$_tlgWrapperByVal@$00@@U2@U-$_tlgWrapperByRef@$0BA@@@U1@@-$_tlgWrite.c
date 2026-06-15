/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180006988
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180132874 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        const WCHAR **a9)
{
  __int64 v11; // rdx
  int v12; // r8d
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  const WCHAR *v17; // rcx
  _BYTE v19[32]; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-31h]
  int v21; // [rsp+58h] [rbp-29h]
  int v22; // [rsp+5Ch] [rbp-25h]
  __int64 v23; // [rsp+60h] [rbp-21h]
  __int64 v24; // [rsp+68h] [rbp-19h]
  __int64 v25; // [rsp+70h] [rbp-11h]
  __int64 v26; // [rsp+78h] [rbp-9h]
  __int64 v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  const WCHAR *v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+9Ch] [rbp+1Bh]

  v11 = -1LL;
  v12 = 2;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &LocaleName;
    v15 = 2;
  }
  v30 = v15;
  v29 = v13;
  v31 = 0;
  v28 = 16LL;
  v16 = *a8;
  v25 = a7;
  v23 = a6;
  v27 = v16;
  v26 = 1LL;
  v24 = 1LL;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v17[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v17 = &LocaleName;
  }
  v20 = v17;
  v21 = v12;
  v22 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 7, (__int64)v19);
}
