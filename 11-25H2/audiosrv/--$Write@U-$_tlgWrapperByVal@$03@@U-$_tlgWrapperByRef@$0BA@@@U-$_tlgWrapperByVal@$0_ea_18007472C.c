/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U1@U1@U1@U2@U?$_tlgWrapperByVal@$01@@U4@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@5553334AEBU?$_tlgWrapperByVal@$01@@66AEBU?$_tlgWrapSz@G@@7@Z @ 0x18007472C
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180133E1C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180136D7C (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        const WCHAR **a18,
        const WCHAR **a19)
{
  __int64 v20; // rcx
  const WCHAR *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const WCHAR *v25; // rdx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD v30[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 *v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+6Ch] [rbp-94h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  const WCHAR *v64; // [rsp+140h] [rbp+40h]
  int v65; // [rsp+148h] [rbp+48h]
  int v66; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v67; // [rsp+150h] [rbp+50h]
  int v68; // [rsp+158h] [rbp+58h]
  int v69; // [rsp+15Ch] [rbp+5Ch]

  v20 = -1LL;
  v22 = *a19;
  if ( *a19 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &LocaleName;
    v24 = 2;
  }
  v68 = v24;
  v67 = v22;
  v69 = 0;
  v25 = *a18;
  if ( *a18 )
  {
    do
      ++v20;
    while ( v25[v20] );
    v26 = 2 * v20 + 2;
  }
  else
  {
    v25 = &LocaleName;
    v26 = 2;
  }
  v62 = a17;
  v60 = a16;
  v58 = a15;
  v65 = v26;
  v64 = v25;
  v66 = 0;
  v27 = *a14;
  v54 = a13;
  v52 = a12;
  v50 = a11;
  v48 = a10;
  v46 = a9;
  v44 = a8;
  v42 = a7;
  v56 = v27;
  v63 = 2LL;
  v61 = 2LL;
  v28 = *a6;
  v38 = a5;
  v30[0] = *a2 << 24;
  v40 = v28;
  v30[1] = *(unsigned __int16 *)(a2 + 1);
  v59 = 2LL;
  v57 = 16LL;
  v55 = 4LL;
  v31 = *(_QWORD *)(a2 + 3);
  v32 = *(unsigned __int16 **)(a1 + 8);
  v53 = 4LL;
  v51 = 4LL;
  v49 = 1LL;
  v47 = 1LL;
  v45 = 1LL;
  v43 = 1LL;
  v41 = 16LL;
  v39 = 4LL;
  v33 = *v32;
  v36 = *(unsigned __int16 *)(a2 + 11);
  v35 = a2 + 11;
  v34 = 2;
  v37 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v30, 0LL, 0LL, 17, &v32);
}
