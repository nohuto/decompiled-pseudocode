/*
 * XREFs of ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1801203B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180120DD0 (-GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@.c)
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x180125450 (Create_SpatialAudioMetadataDictionaryFromData.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::CreateMetadataDictionary(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        struct ISpatialAudioMetadataDictionaryData **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  signed int v10; // ebx
  unsigned __int8 *v11; // rdx
  signed int PropertyIndexForMetadataFormatID; // eax
  signed int v13; // eax
  int v14; // edi
  int v15; // ebx
  signed int SpatialAudioMetadataDictionaryFromData; // eax
  unsigned __int16 v18[2]; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-15h] BYREF
  const CHAR *v20; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct ISpatialAudioMetadataDictionaryData **); // [rsp+50h] [rbp-9h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v23; // [rsp+68h] [rbp+Fh]
  __int128 v24; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+27h]

  v19 = 0;
  v18[0] = 0;
  v21 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( a3 )
  {
    *a3 = 0LL;
    PropertyIndexForMetadataFormatID = SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
                                         this,
                                         a2,
                                         v18,
                                         &v19);
    v10 = PropertyIndexForMetadataFormatID;
    if ( PropertyIndexForMetadataFormatID < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_22;
      v19 = PropertyIndexForMetadataFormatID;
      *(_DWORD *)v18 = 571;
      v11 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_7;
    }
    v24 = PKEY_SpatialAudio_Metadata_Dictionary_Array;
    v25 = v19 + 2;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
            *((_QWORD *)this + 51),
            &v24,
            pvar);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_22;
      v19 = v13;
      *(_DWORD *)v18 = 577;
      v11 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_7;
    }
    if ( LOWORD(pvar[0]) != 65 )
    {
      v10 = -2147418113;
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_22;
      *(_DWORD *)v18 = 579;
      v11 = byte_1801A3DAF;
      goto LABEL_6;
    }
    v14 = v23;
    v15 = (int)pvar[1];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
    SpatialAudioMetadataDictionaryFromData = Create_SpatialAudioMetadataDictionaryFromData(
                                               (_DWORD)a2,
                                               v18[0],
                                               v14,
                                               v15,
                                               (__int64)&v21);
    v10 = SpatialAudioMetadataDictionaryFromData;
    if ( SpatialAudioMetadataDictionaryFromData < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        goto LABEL_22;
      v19 = SpatialAudioMetadataDictionaryFromData;
      *(_DWORD *)v18 = 585;
      v11 = (unsigned __int8 *)&unk_1801A3DE9;
      goto LABEL_7;
    }
    v10 = (**v21)(v21, &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf, a3);
    if ( v10 < 0 )
      *a3 = 0LL;
  }
  else
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      *(_DWORD *)v18 = 566;
      v11 = byte_1801A3DAF;
LABEL_6:
      v19 = v10;
LABEL_7:
      v20 = "SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        v11,
        v8,
        v9,
        &v20,
        (__int64)v18,
        (__int64)&v19);
    }
  }
LABEL_22:
  PropVariantClear(pvar);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v10;
}
