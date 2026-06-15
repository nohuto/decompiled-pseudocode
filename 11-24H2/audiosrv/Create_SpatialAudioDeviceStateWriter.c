/*
 * XREFs of Create_SpatialAudioDeviceStateWriter @ 0x180073380
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013D744 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18003C0BC (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18003D8B8 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioDeviceStateWriter(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v5; // ebx
  unsigned __int8 *v6; // rdx
  int v7; // eax
  SpatialAudioIO *v8; // rcx
  SpatialAudioIO *v10; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v11; // [rsp+48h] [rbp-8h] BYREF
  const unsigned __int16 *v12; // [rsp+70h] [rbp+20h] BYREF
  struct IPropertyStore *v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF

  v13 = a2;
  v12 = a1;
  v10 = 0LL;
  if ( !a3 )
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801D82E8 <= 2 )
      goto LABEL_10;
    v14 = -2147024809;
    v15 = 63;
    v6 = byte_1801AED30;
    goto LABEL_4;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease((__int64 *)&v10);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
         &v10,
         &v12,
         &v13);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v5 = (**((__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v10 + 71))(
           (char *)v10 + 568,
           &GUID_3927b438_dd02_4ef9_b08d_f52d17592a32,
           a3);
    if ( v5 < 0 )
      *a3 = 0LL;
  }
  else if ( (unsigned int)dword_1801D82E8 > 2 )
  {
    v14 = v7;
    v15 = 68;
    v6 = (unsigned __int8 *)&unk_1801AED6A;
LABEL_4:
    v11 = "Create_SpatialAudioDeviceStateWriter";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      v6,
      (__int64)a3,
      a4,
      &v11,
      (__int64)&v15,
      (__int64)&v14);
  }
LABEL_10:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v8 + 71) + 16LL))((__int64)v8 + 568);
  }
  return (unsigned int)v5;
}
