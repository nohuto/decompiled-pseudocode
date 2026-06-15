/*
 * XREFs of ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x18010B35C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??0CAudioStream@@QEAA@XZ @ 0x1800806B4 (--0CAudioStream@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x1800C9358 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
        CAudioStream **a1,
        __int64 *a2,
        _BYTE *a3,
        int *a4,
        __int64 *a5,
        int *a6,
        __int64 *a7,
        const WCHAR **a8)
{
  void *v12; // rax
  int v13; // edi
  CAudioStream *v14; // rbx
  __int64 v15; // r8
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = operator new(0x2B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v12;
  if ( v12 )
  {
    v14 = CAudioStream::CAudioStream((CAudioStream *)v12);
    v17 = 0LL;
    v15 = *a7;
    LOBYTE(v15) = *a3;
    v13 = CAudioStream::RuntimeClassInitialize((__int64)v14, *a2, v15, *a4, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      if ( v14 )
        (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = 0;
    }
    else if ( v14 )
    {
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v13 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v17);
  return (unsigned int)v13;
}
