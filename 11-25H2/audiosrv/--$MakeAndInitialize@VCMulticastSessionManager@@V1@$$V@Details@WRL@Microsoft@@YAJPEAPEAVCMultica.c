/*
 * XREFs of ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x1800FC058
 * Callers:
 *     ?InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1800FD31C (-InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMulticastSessionManager@@QEAA@XZ @ 0x1800FC430 (--0CMulticastSessionManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessio.c)
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x1800FD5E0 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMulticastSessionManager,CMulticastSessionManager,>(
        CMulticastSessionManager **a1)
{
  void *v2; // rax
  int v3; // edi
  CMulticastSessionManager *v4; // rbx
  volatile int *v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  CMulticastSessionManager *v8; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = CMulticastSessionManager::CMulticastSessionManager((CMulticastSessionManager *)v2);
    v8 = v4;
    v7 = 0LL;
    v3 = CMulticastSessionManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CMulticastSessionManager *)((char *)v4 + 20), v5);
      *a1 = v4;
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(v4);
      v3 = 0;
    }
    else if ( v4 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v7);
  return (unsigned int)v3;
}
