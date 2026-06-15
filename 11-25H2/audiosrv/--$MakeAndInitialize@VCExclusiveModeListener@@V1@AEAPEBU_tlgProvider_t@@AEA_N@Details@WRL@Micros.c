/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveModeListener@@V1@AEAPEBU_tlgProvider_t@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@AEAPEBU_tlgProvider_t@@AEA_N@Z @ 0x180131E2C
 * Callers:
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x180134F04 (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x180131F98 (--0CExclusiveModeListener@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180135CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpat.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x1801442E0 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,_tlgProvider_t const * &,bool &>(
        volatile signed __int64 **a1,
        const struct _tlgProvider_t **a2,
        void *a3)
{
  void *v5; // rax
  int v6; // edi
  volatile signed __int64 *v7; // rbx
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  void *v12; // [rsp+50h] [rbp+18h] BYREF
  void *v13; // [rsp+58h] [rbp+20h]

  v12 = a3;
  *a1 = 0LL;
  v5 = operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v13 = v5;
    v7 = (volatile signed __int64 *)CExclusiveModeListener::CExclusiveModeListener((CExclusiveModeListener *)v5);
    v12 = 0LL;
    v6 = CExclusiveModeListener::RuntimeClassInitialize(
           (CExclusiveModeListener *)v7,
           *a2,
           CSpatialProperties::s_isSpatialAudioAllowedOnPlatform);
    if ( v6 >= 0 )
    {
      if ( v7 )
      {
        v9 = *((_QWORD *)v7 + 8);
        while ( v9 >= 0 )
        {
          if ( (_DWORD)v9 != 0x7FFFFFFF )
          {
            v10 = v9;
            v9 = _InterlockedCompareExchange64(v7 + 8, v9 + 1, v9);
            if ( v10 != v9 )
              continue;
          }
          goto LABEL_13;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v8);
      }
LABEL_13:
      *a1 = v7;
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(v7);
      v6 = 0;
    }
    else if ( v7 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(v7);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v12);
  return (unsigned int)v6;
}
