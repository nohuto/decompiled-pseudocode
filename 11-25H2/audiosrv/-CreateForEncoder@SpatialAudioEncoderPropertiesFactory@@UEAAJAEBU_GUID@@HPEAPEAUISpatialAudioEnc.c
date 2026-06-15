/*
 * XREFs of ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x18003C380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C52C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 *     ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x18003C860 (--0SpatialAudioEncoderProperties@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioEncoderPropertiesFactory::CreateForEncoder(
        SpatialAudioEncoderPropertiesFactory *this,
        const struct _GUID *a2,
        int a3,
        struct ISpatialAudioEncoderProperties **a4)
{
  SpatialAudioEncoderProperties *v7; // rax
  SpatialAudioEncoderProperties *v8; // rbx
  int v9; // edi
  int v10; // ebx
  __int64 v11; // rcx
  void *v13; // rdx
  int v14; // [rsp+40h] [rbp-20h] BYREF
  SpatialAudioEncoderProperties *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+50h] [rbp-10h] BYREF
  SpatialAudioEncoderProperties *v17; // [rsp+98h] [rbp+38h] BYREF

  v15 = 0LL;
  if ( !a4 )
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_10;
    LODWORD(v17) = -2147024809;
    v14 = 159;
    v13 = &unk_1801A3DAF;
    goto LABEL_15;
  }
  *a4 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
  v15 = 0LL;
  v7 = (SpatialAudioEncoderProperties *)operator new(0x480uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    v9 = -2147024882;
LABEL_18:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v17);
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_10;
    LODWORD(v17) = v9;
    v14 = 164;
    v13 = &unk_1801A3DE9;
LABEL_15:
    v16[0] = (__int64)"SpatialAudioEncoderPropertiesFactory::CreateForEncoder";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)this,
      (_DWORD)v13,
      a3,
      (_DWORD)a4,
      (__int64)v16,
      (__int64)&v14,
      (__int64)&v17);
    goto LABEL_10;
  }
  v8 = SpatialAudioEncoderProperties::SpatialAudioEncoderProperties(v7);
  v16[0] = (__int64)v8;
  v17 = 0LL;
  v9 = SpatialAudioEncoderProperties::RuntimeClassInitialize(v8, a2, a3);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v16);
    v10 = v9;
    goto LABEL_18;
  }
  if ( v8 )
    (*(void (__fastcall **)(SpatialAudioEncoderProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  v15 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(SpatialAudioEncoderProperties *))(*(_QWORD *)v8 + 16LL))(v8);
    v8 = v15;
  }
  v10 = (**(__int64 (__fastcall ***)(SpatialAudioEncoderProperties *, GUID *, struct ISpatialAudioEncoderProperties **))v8)(
          v8,
          &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9,
          a4);
  if ( v10 < 0 )
    *a4 = 0LL;
LABEL_10:
  v11 = (__int64)v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v10;
}
