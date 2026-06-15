/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18003D8B8
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x180073380 (Create_SpatialAudioDeviceStateWriter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18003C0BC (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003C0F0 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x180165FA4 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioIO **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateWriter *v6; // rax
  int v7; // ebx
  SpatialAudioIO *v8; // rdi
  char *v10; // rbx
  SpatialAudioDeviceStateWriter *v11; // [rsp+40h] [rbp+8h] BYREF
  SpatialAudioIO *v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateWriter *)operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
    return (unsigned int)v7;
  }
  v8 = SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(v6);
  v12 = v8;
  v11 = 0LL;
  v7 = SpatialAudioIO::Initialize(v8, *a2, *a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease((__int64 *)&v12);
    goto LABEL_5;
  }
  v10 = (char *)v8 + 568;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))((__int64)v8 + 568);
  *a1 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))((__int64)v8 + 568);
  return 0LL;
}
