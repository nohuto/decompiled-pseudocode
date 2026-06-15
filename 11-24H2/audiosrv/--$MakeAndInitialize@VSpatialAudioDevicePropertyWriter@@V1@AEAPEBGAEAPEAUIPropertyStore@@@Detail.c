/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18012AD90
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18012C16C (Create_SpatialAudioDevicePropertyWriter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x18012AE48 (--0SpatialAudioDevicePropertyWriter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18012B5A0 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  void *v6; // rax
  int v7; // edi
  SpatialAudioDevicePropertyWriter *v8; // rbx
  SpatialAudioDevicePropertyWriter *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v8 = SpatialAudioDevicePropertyWriter::SpatialAudioDevicePropertyWriter((SpatialAudioDevicePropertyWriter *)v6);
    v10 = v8;
    v11 = 0LL;
    v7 = SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
      v7 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return (unsigned int)v7;
}
