/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x18003B1F0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003BD30 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18003B458 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003B48C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003BC60 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioDeviceStateReader(
        unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        int a4)
{
  char *v7; // rax
  char *v8; // rdi
  char *v9; // r15
  int v10; // esi
  int v11; // ebx
  char *v12; // rcx
  void *v14; // rdx
  char *v15; // [rsp+40h] [rbp-10h] BYREF
  const char *v16; // [rsp+48h] [rbp-8h] BYREF
  char *v17; // [rsp+90h] [rbp+40h] BYREF
  char *v18; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  if ( !a3 )
  {
    v11 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_10;
    LODWORD(v17) = -2147024809;
    LODWORD(v18) = 49;
    v14 = &unk_1801A3DAF;
    goto LABEL_15;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v15);
  v15 = 0LL;
  v7 = (char *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v17 = v7;
  if ( !v7 )
  {
    v11 = -2147024882;
    v10 = -2147024882;
LABEL_18:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v17);
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_10;
    LODWORD(v17) = v10;
    LODWORD(v18) = 54;
    v14 = &unk_1801A3DE9;
LABEL_15:
    v16 = "Create_SpatialAudioDeviceStateReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)a1,
      (_DWORD)v14,
      (_DWORD)a3,
      a4,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&v17);
    goto LABEL_10;
  }
  memset_0(v7 + 8, 0, 0x208uLL);
  *((_QWORD *)v8 + 66) = 0LL;
  *((_QWORD *)v8 + 67) = 0LL;
  *(_QWORD *)v8 = &SpatialAudioStateIO::`vftable';
  *((_OWORD *)v8 + 34) = 0LL;
  *((_QWORD *)v8 + 70) = 0LL;
  v9 = v8 + 568;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 576));
  *((_DWORD *)v8 + 153) = 1;
  *((_QWORD *)v8 + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
  *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &SpatialAudioDeviceStateReader::`vftable';
  *(_QWORD *)v9 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
  *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v18 = v8;
  v17 = 0LL;
  v10 = SpatialAudioIO::Initialize((SpatialAudioIO *)v8, a1, a2);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v18);
    v11 = v10;
    goto LABEL_18;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v8 + 568);
  v15 = v8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v8 + 568);
  v11 = (**((__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15 + 71))(
          (__int64)(v15 + 568),
          &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
          a3);
  if ( v11 < 0 )
    *a3 = 0LL;
LABEL_10:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v12 + 71) + 16LL))(v12 + 568);
  }
  return (unsigned int)v11;
}
