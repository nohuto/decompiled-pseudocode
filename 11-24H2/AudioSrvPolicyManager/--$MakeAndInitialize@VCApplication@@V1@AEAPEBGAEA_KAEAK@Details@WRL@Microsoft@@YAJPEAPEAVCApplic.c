/*
 * XREFs of ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x180035C74
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000DA10 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x1800340AC (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ??0CApplication@@QEAA@XZ @ 0x180035F34 (--0CApplication@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplication,CApplication,unsigned short const * &,unsigned __int64 &,unsigned long &>(
        CApplication **a1,
        const unsigned __int16 **a2,
        __int64 *a3,
        int *a4)
{
  void *v8; // rax
  int v9; // edi
  CApplication *v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x2D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v10 = CApplication::CApplication((CApplication *)v8);
    v13 = 0LL;
    v9 = CApplication::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CApplication *)((char *)v10 + 12), v11);
      *a1 = v10;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
          (__int64)v10,
          v11);
      v9 = 0;
    }
    else if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
        (__int64)v10,
        v11);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v13);
  return (unsigned int)v9;
}
