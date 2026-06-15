/*
 * XREFs of ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x1800A57DC
 * Callers:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CEndpointStore@@QEAA@XZ @ 0x18007A540 (--0CEndpointStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointStore,CEndpointStore,unsigned short const * &>(
        CEndpointStore **a1,
        const unsigned __int16 **a2)
{
  CEndpointStore *v4; // rax
  CEndpointStore *v6; // rbx
  volatile int *v7; // rdx
  int v8; // edi
  CEndpointStore *v9; // [rsp+30h] [rbp+8h] BYREF
  CEndpointStore *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CEndpointStore *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CEndpointStore::CEndpointStore(v4);
  v10 = v6;
  v9 = 0LL;
  v8 = CEndpointStore::RuntimeClassInitialize(v6, *a2);
  if ( v8 >= 0 )
  {
    if ( v6 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CEndpointStore *)((char *)v6 + 12), v7);
    *a1 = v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
    v8 = 0;
  }
  else if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v9);
  return (unsigned int)v8;
}
