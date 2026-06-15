/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x180004D04
 * Callers:
 *     ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x1801300B8 (-UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v9; // rcx
  int v10; // r8d
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const WCHAR *v17; // rdx
  _BYTE v19[32]; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  const WCHAR *v26; // [rsp+70h] [rbp-28h]
  int v27; // [rsp+78h] [rbp-20h]
  int v28; // [rsp+7Ch] [rbp-1Ch]

  v9 = -1LL;
  v10 = 2;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v27 = v13;
  v26 = v11;
  v28 = 0;
  v14 = *a6;
  if ( *a6 )
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
  v24 = v16;
  v23 = v14;
  v25 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v17[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v17 = &LocaleName;
  }
  v20 = v17;
  v21 = v10;
  v22 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 5, (__int64)v19);
}
