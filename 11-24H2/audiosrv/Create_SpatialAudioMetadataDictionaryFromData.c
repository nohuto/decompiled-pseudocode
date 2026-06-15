/*
 * XREFs of Create_SpatialAudioMetadataDictionaryFromData @ 0x18012D0F0
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180128050 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$CopyTo@UISpatialAudioMetadataDictionary@@@?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@QEBAJPEAPEAUISpatialAudioMetadataDictionary@@@Z @ 0x18012C3A8 (--$CopyTo@UISpatialAudioMetadataDictionary@@@-$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Micr.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18012C4CC (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEA_ea_18012C4CC.c)
 */

__int64 __fastcall Create_SpatialAudioMetadataDictionaryFromData(
        const struct _GUID *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  int v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v12; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v13; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int8 *v14; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v11 = 0LL;
  v5 = (__int64)a5;
  if ( a5 )
  {
    *a5 = 0LL;
    a5 = 0LL;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
           &v11,
           a1,
           &v13,
           (const unsigned __int16 **)&a5,
           &v14,
           &v15);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v6 = Microsoft::WRL::ComPtr<SpatialAudioMetadataDictionary>::CopyTo<ISpatialAudioMetadataDictionary>(&v11, v5);
      goto LABEL_9;
    }
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      LODWORD(a5) = v8;
      v7 = (unsigned __int8 *)&unk_1801AED6A;
      v10 = 112;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      LODWORD(a5) = -2147024809;
      v7 = byte_1801AED30;
      v10 = 107;
LABEL_4:
      v12 = "Create_SpatialAudioMetadataDictionaryFromData";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)a1,
        v7,
        (__int64)a3,
        a4,
        &v12,
        (__int64)&v10,
        (__int64)&a5);
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
  return v6;
}
