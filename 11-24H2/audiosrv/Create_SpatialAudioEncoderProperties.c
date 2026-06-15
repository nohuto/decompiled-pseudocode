/*
 * XREFs of Create_SpatialAudioEncoderProperties @ 0x18003BB94
 * Callers:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18003B95C (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderPropertiesFactory@@@Z @ 0x18003BC94 (--$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioEncoderProperties(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int8 *v10; // rdx
  const CHAR *v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  v14 = 0LL;
  if ( !a3 )
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_4;
    v12 = -2147024809;
    v13 = 181;
    v10 = (unsigned __int8 *)&unk_1801AED30;
    goto LABEL_9;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderPropertiesFactory,SpatialAudioEncoderPropertiesFactory,>(&v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)v14 + 24LL))(v14, a1, 0LL, a3);
    goto LABEL_4;
  }
  if ( (unsigned int)dword_1801D82E8 > 2 )
  {
    v12 = v6;
    v13 = 186;
    v10 = (unsigned __int8 *)&unk_1801AED6A;
LABEL_9:
    v11 = "Create_SpatialAudioEncoderProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      v10,
      (__int64)a3,
      a4,
      &v11,
      (__int64)&v13,
      (__int64)&v12);
  }
LABEL_4:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
