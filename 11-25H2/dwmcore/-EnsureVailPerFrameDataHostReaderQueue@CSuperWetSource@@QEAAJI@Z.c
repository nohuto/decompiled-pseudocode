/*
 * XREFs of ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x18029B0F0
 * Callers:
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x18029B274 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x1802A5A80 (-EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x1801D5AF8 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     ??$?8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z @ 0x1802068E0 (--$-8VCBrushRenderingGraph@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VCBrushRenderingGraph@@@01@$$T@Z.c)
 *     ??$out_param@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@Z @ 0x18029AF5C (--$out_param@V-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueu.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18029AF74 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@.c)
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x18029B060 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(CSuperWetSource *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  void *v7; // rax
  int v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( Microsoft::WRL::operator==<CBrushRenderingGraph>((_QWORD *)this + 14) )
  {
    v3 = wil::out_param<std::unique_ptr<CSharedCircularQueueProducer>>((__int64)v10, v2);
    if ( !*((_QWORD *)this + 17) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v9 = *((_QWORD *)this + 17);
    *(_QWORD *)v8 = 4096LL;
    v4 = CSharedCircularQueueProducer::Create((__int64 *)v8, 0x80u, (volatile __int32 ***)(v3 + 8));
    wil::details::out_param_t<std::unique_ptr<CSharedCircularQueue>>::~out_param_t<std::unique_ptr<CSharedCircularQueue>>((__int64)v10);
    if ( v4 < 0 )
    {
      v5 = 43LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v7 = MIDL_user_allocate(0x80uLL);
    std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((void **)this + 15, v7);
    if ( !*((_QWORD *)this + 15) )
    {
      v4 = -2147024882;
      v5 = 49LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
