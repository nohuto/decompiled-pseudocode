/*
 * XREFs of MigrateSpatialProperties @ 0x18007A020
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801349D4 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180007288 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002DE10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18002DE10.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1801244CC (Create_SpatialAudioDevicePropertyWriter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MigrateSpatialProperties(_DWORD *a1, __int64 a2, const WCHAR *a3)
{
  char v6; // r15
  char v7; // r14
  char v8; // r13
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // r8
  int v13; // edx
  int v14; // ebx
  unsigned int i; // r8d
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r10
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  const WCHAR *v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v32[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+ACh] [rbp-54h]
  __int128 v34; // [rsp+BCh] [rbp-44h]
  int v35; // [rsp+DCh] [rbp-24h]
  BOOL v36; // [rsp+E4h] [rbp-1Ch]
  unsigned __int16 v37[256]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v38[128]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v39; // [rsp+3F0h] [rbp+2F0h]
  int v40; // [rsp+400h] [rbp+300h]
  int v41; // [rsp+404h] [rbp+304h]
  int v42; // [rsp+408h] [rbp+308h]
  int v43; // [rsp+40Ch] [rbp+30Ch]
  int v44; // [rsp+410h] [rbp+310h]
  int v45; // [rsp+414h] [rbp+314h]
  int v46; // [rsp+418h] [rbp+318h]
  __int128 v47; // [rsp+41Ch] [rbp+31Ch]
  __int16 v48; // [rsp+42Ch] [rbp+32Ch]
  __int16 v49; // [rsp+42Eh] [rbp+32Eh]
  __int16 v50; // [rsp+430h] [rbp+330h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  memset_0(v32, 0, 0x48uLL);
  memset_0(v37, 0, 0x342uLL);
  v29 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar) < 0 )
    goto LABEL_40;
  v9 = 1LL;
  if ( LOWORD(pvar[0]) != 65 )
  {
    if ( !LOWORD(pvar[0]) )
      goto LABEL_11;
    if ( *a1 > 2u && tlgKeywordOn((__int64)a1, 16LL) )
    {
      v24 = v21;
      v27 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v20,
        byte_1801A73F0,
        v21,
        v9,
        &v27,
        (__int64)&v24);
      LOBYTE(v9) = 1;
    }
    v8 = v9;
    goto LABEL_28;
  }
  v10 = v26;
  if ( *(_DWORD *)v26 != 1509949441 )
  {
    if ( *(_DWORD *)v26 == 1509949442 )
    {
      v6 = 1;
LABEL_11:
      v14 = v9;
      goto LABEL_12;
    }
    v8 = 1;
    if ( *a1 <= 2u || !tlgKeywordOn((__int64)a1, 16LL) )
      goto LABEL_11;
    v24 = v19;
    v27 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v18,
      byte_1801A7427,
      v19,
      v9,
      &v27,
      (__int64)&v24);
LABEL_28:
    v14 = 1;
    goto LABEL_12;
  }
  if ( *a1 > 4u && tlgKeywordOn((__int64)a1, 16LL) )
  {
    v30 = v10 + 32;
    v31 = v10 + 16;
    v13 = *(_DWORD *)(v10 + 68);
    v28 = v13 & 0xFFFFFF7F;
    v24 = v13;
    v27 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
      v11,
      (int)&unk_1801A7484,
      v12,
      v9,
      &v27,
      (__int64)&v24,
      (__int64)&v28,
      &v31,
      &v30);
  }
  *(_DWORD *)v10 = 1509949442;
  *(_DWORD *)(v10 + 68) &= ~0x80u;
  *(_OWORD *)(v10 + 32) = *(_OWORD *)(v10 + 16);
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar,
         v9) < 0 )
    goto LABEL_40;
  v14 = 1;
  v6 = 1;
LABEL_12:
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
         a2,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         pvar) >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      v7 = v14;
    if ( !v6
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) >= 0x50
      && (int)Create_SpatialAudioDevicePropertyWriter(a3, a2, &v29) >= 0 )
    {
      for ( i = 0; i < *(_DWORD *)(v26 + 68); i += v14 )
      {
        v16 = v26 + 842LL * i + 80;
        v17 = *(_QWORD *)(v16 + 776) - *(_QWORD *)(v26 + 20);
        if ( !v17 )
          v17 = *(_QWORD *)(v16 + 784) - *(_QWORD *)(v26 + 28);
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_38;
          break;
        }
      }
      if ( *(_DWORD *)(v26 + 8) || !*(_DWORD *)(v26 + 68) )
        goto LABEL_40;
      v16 = v26 + 80;
LABEL_38:
      v32[0] = *(_DWORD *)(v26 + 8);
      v35 = *(_DWORD *)(v26 + 72);
      v32[1] = *(_DWORD *)(v26 + 12);
      v32[2] = *(_DWORD *)(v26 + 16);
      v36 = *(_DWORD *)(v26 + 16) != 0;
      v33 = *(_OWORD *)(v26 + 20);
      v34 = *(_OWORD *)(v26 + 20);
      v39 = *(_OWORD *)(v16 + 776);
      v40 = *(_DWORD *)(v16 + 792);
      v41 = *(_DWORD *)(v16 + 796);
      v42 = *(_DWORD *)(v16 + 800);
      v43 = *(_DWORD *)(v16 + 804);
      v44 = *(_DWORD *)(v16 + 808);
      v45 = *(_DWORD *)(v16 + 812);
      v46 = *(_DWORD *)(v16 + 816);
      v47 = *(_OWORD *)(v16 + 820);
      v48 = *(_WORD *)(v16 + 836);
      v49 = *(_WORD *)(v16 + 838);
      v50 = *(_WORD *)(v16 + 840);
      StringCchCopyW((char *)v37, 256LL, (char *)(v16 + 8));
      StringCchCopyW((char *)v38, 128LL, (char *)(v22 + 520));
      v6 = 0;
      if ( (*(int (__fastcall **)(__int64, _DWORD *, unsigned __int16 *, __int64))(*(_QWORD *)v29 + 64LL))(
             v29,
             v32,
             v37,
             834LL) >= 0 )
        v6 = v14;
    }
  }
LABEL_40:
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
      a2,
      &PKEY_RS2_SpatialAudioEndpoint_Settings,
      pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
      a2,
      &PKEY_SpatialAudio_Endpoint_Settings,
      pvar);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  PropVariantClear(pvar);
  return v6;
}
