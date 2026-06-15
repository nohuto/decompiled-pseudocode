/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180132874
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180132F2C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180133E1C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013615C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180136D7C (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180006988 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWrite.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U4@U2@U4@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@44464645@Z @ 0x1800658B8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapp.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180071544 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     IsHrtfEncoder @ 0x1800A2B3C (IsHrtfEncoder.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x1800A5330 (GetPreferredSpatialAudioEncoderId.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int64 v11; // r14
  unsigned __int8 v13; // si
  __int128 *PreferredSpatialAudioEncoderId; // rax
  unsigned __int8 v15; // r13
  unsigned int v16; // r10d
  unsigned __int8 v17; // r15
  __int128 v18; // xmm1
  __int64 v19; // r11
  __int64 v20; // r12
  char v21; // al
  int v22; // eax
  char v23; // cl
  _DWORD *v24; // rcx
  int v25; // ecx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // r13
  _QWORD *v29; // r14
  int v30; // eax
  __int128 v31; // xmm0
  char *v32; // rax
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned int v36; // r8d
  unsigned int v37; // r12d
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _DWORD *v42; // rcx
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // [rsp+90h] [rbp-80h]
  unsigned __int8 v47; // [rsp+91h] [rbp-7Fh] BYREF
  unsigned __int8 v48; // [rsp+92h] [rbp-7Eh] BYREF
  char v49; // [rsp+93h] [rbp-7Dh] BYREF
  unsigned __int8 v50; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v51; // [rsp+95h] [rbp-7Bh] BYREF
  unsigned __int8 v52; // [rsp+96h] [rbp-7Ah] BYREF
  unsigned __int8 v53; // [rsp+97h] [rbp-79h] BYREF
  char v54[4]; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+9Ch] [rbp-74h]
  unsigned int v56; // [rsp+A0h] [rbp-70h]
  int v57; // [rsp+A4h] [rbp-6Ch] BYREF
  unsigned int v58; // [rsp+A8h] [rbp-68h] BYREF
  const WCHAR *v59; // [rsp+B0h] [rbp-60h]
  unsigned int v60; // [rsp+B8h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+BCh] [rbp-54h] BYREF
  const WCHAR *v62; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-48h] BYREF
  const WCHAR *v64; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-38h]
  __int64 v66; // [rsp+E0h] [rbp-30h]
  __int64 v67; // [rsp+E8h] [rbp-28h]
  __int64 v68; // [rsp+F0h] [rbp-20h]
  __int128 *v69; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v70; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v71[40]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v72; // [rsp+138h] [rbp+28h] BYREF
  char v73[16]; // [rsp+148h] [rbp+38h] BYREF

  v11 = a5;
  v66 = a6;
  *(_DWORD *)(a10 + 1) = 151587081;
  *a10 = 9;
  v68 = a3;
  v65 = a5;
  v67 = a9;
  if ( !CSpatialProperties::s_isSpatialAudioAllowedOnPlatform )
  {
    *(_DWORD *)(a1 + 7700) = 3;
    return 0LL;
  }
  v46 = g_ListOfSpatialTech[0];
  v13 = 0;
  v59 = *(const WCHAR **)(*(_QWORD *)(a1 + 40) + 48LL);
  v56 = -1;
  v55 = -1;
  PreferredSpatialAudioEncoderId = GetPreferredSpatialAudioEncoderId(&v70, a4, a3);
  v15 = v46;
  v16 = 0;
  v17 = 0;
  v18 = *PreferredSpatialAudioEncoderId;
  *((_QWORD *)&v70 + 1) = v19;
  *(_QWORD *)&v70 = &AudioEndpointInfo::`vftable';
  v72 = v18;
  if ( v46 )
  {
    while ( 1 )
    {
      v49 = v16;
      v58 = v16;
      memset(v71, 0, sizeof(v71));
      if ( v17 >= (unsigned int)g_ListOfSpatialTech[0] )
        goto LABEL_52;
      v20 = qword_1801CF648[v17];
      if ( !v20 )
        goto LABEL_52;
      v21 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v20 + 40LL))(
              v20,
              &v70,
              v11,
              v66,
              a8,
              &v58,
              &v49,
              v71);
      v16 = 0;
      if ( !v21 )
        goto LABEL_52;
      v22 = *(_DWORD *)(a1 + 7700);
      if ( v22 != 2 )
        break;
      if ( *(_WORD *)&v71[2] != 2 )
        goto LABEL_19;
      v23 = dword_1801D0924++;
      if ( (v23 & 0xF) != 0 )
        goto LABEL_52;
      v24 = *(_DWORD **)(a1 + 48);
      if ( *v24 <= 4u || !tlgKeywordOn((__int64)v24, 16LL) )
        goto LABEL_52;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v25,
        (int)&unk_1801A704F);
LABEL_51:
      v16 = 0;
LABEL_52:
      if ( ++v17 >= v15 )
        goto LABEL_53;
    }
    if ( !v22
      && v11
      && *(_WORD *)(v11 + 2) == 8
      && *(_WORD *)&v71[2] == 2
      && (unsigned int)CEndpointCharacteristics::FormFactor(*(CEndpointCharacteristics **)(a1 + 40)) != 9 )
    {
      v26 = *(_OWORD *)v71;
      *(_DWORD *)(a1 + 7700) = 1;
      v27 = *(_OWORD *)&v71[16];
      *(_OWORD *)(a1 + 7704) = v26;
      *(_QWORD *)&v26 = *(_QWORD *)&v71[32];
      *(_OWORD *)(a1 + 7720) = v27;
      *(_QWORD *)(a1 + 7736) = v26;
    }
LABEL_19:
    v57 = (*(__int64 (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v20 + 32LL))(v20, v59);
    v28 = v67 + 834LL * v13;
    *(_DWORD *)(v28 + 784) = v57 >= 0;
    v29 = (_QWORD *)(v28 + 768);
    *(_OWORD *)(v28 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 16LL))(v20, v73);
    *(_DWORD *)(v28 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
    *(_DWORD *)(v28 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
    *(_DWORD *)(v28 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20);
    v31 = *(_OWORD *)&v71[24];
    *(_DWORD *)(v28 + 800) = v30;
    *(_DWORD *)(v28 + 804) = *(_DWORD *)&v71[4];
    *(_DWORD *)(v28 + 808) = *(_DWORD *)&v71[20];
    *(_WORD *)(v28 + 828) = *(_WORD *)&v71[2];
    *(_WORD *)(v28 + 830) = *(_WORD *)&v71[14];
    *(_WORD *)(v28 + 832) = *(_WORD *)&v71[18];
    *(_OWORD *)(v28 + 812) = v31;
    v32 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    StringCchCopyW((char *)v28, 256LL, v32);
    v33 = (char *)(*(__int64 (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v20 + 24LL))(v20, v59);
    StringCchCopyW((char *)(v28 + 512), 128LL, v33);
    if ( *(_QWORD *)(v28 + 768) != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      || *(_QWORD *)(v28 + 776) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      v34 = -1LL;
      v16 = 0;
      do
        ++v34;
      while ( *(_WORD *)(v28 + 2 * v34) );
      if ( v34 )
      {
        if ( *(_OWORD *)(v28 + 768) == v72 )
          *a10 = v13;
        v35 = v68;
        if ( *v29 == *(_QWORD *)(v68 + 12) && *(_QWORD *)(v28 + 776) == *(_QWORD *)(v68 + 20) )
          a10[1] = v13;
        if ( *v29 == *(_QWORD *)(v35 + 28) && *(_QWORD *)(v28 + 776) == *(_QWORD *)(v35 + 36) )
          a10[2] = v13;
        if ( *(_DWORD *)(v28 + 784) && (v36 = v58) != 0 )
        {
          if ( v49 && v58 < v56 && (!IsHrtfEncoder((_QWORD *)(v28 + 768)) || (a7 & 8) != 0) )
          {
            v56 = v36;
            a10[3] = v13;
          }
          v37 = v55;
          if ( v36 < v55 && a10[3] != v13 )
          {
            v37 = v36;
            v55 = v36;
            a10[4] = v13;
          }
        }
        else
        {
          v37 = v55;
        }
        v38 = *(_DWORD **)(a1 + 48);
        if ( *v38 > 4u && tlgKeywordOn((__int64)v38, 16LL) )
        {
          v60 = v37;
          v69 = &v72;
          v50 = a10[4];
          v51 = a10[3];
          v61 = v56;
          v52 = a10[1];
          v53 = *a10;
          v54[0] = a10[2];
          v64 = v59;
          v62 = (const WCHAR *)v28;
          v63 = v28 + 768;
          v47 = v13;
          v48 = v17;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
            v39,
            byte_1801A6ED5,
            v40,
            v41,
            &v64,
            (__int64)&v48,
            (__int64)&v47,
            &v63,
            &v62,
            (__int64)&v57,
            (__int64)v54,
            (__int64)&v53,
            (__int64)&v52,
            (__int64)&v61,
            (__int64)&v51,
            (__int64)&v60,
            (__int64)&v50,
            (__int64 *)&v69);
          v16 = 0;
        }
        v11 = v65;
        ++v13;
        v15 = v46;
        goto LABEL_52;
      }
    }
    v42 = *(_DWORD **)(a1 + 48);
    if ( *v42 > 2u && tlgKeywordOn((__int64)v42, 16LL) )
    {
      v62 = v59;
      v64 = (const WCHAR *)v28;
      v63 = v28 + 768;
      v48 = v13;
      v47 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v43,
        (int)&unk_1801A6FEF,
        v44,
        v45,
        &v62,
        (__int64)&v47,
        (__int64)&v48,
        &v63,
        &v64);
    }
    memset_0((void *)v28, 0, 0x342uLL);
    v11 = v65;
    v15 = v46;
    goto LABEL_51;
  }
LABEL_53:
  if ( *(_DWORD *)(a1 + 7700) == v16 )
    *(_DWORD *)(a1 + 7700) = 3;
  return v13;
}
