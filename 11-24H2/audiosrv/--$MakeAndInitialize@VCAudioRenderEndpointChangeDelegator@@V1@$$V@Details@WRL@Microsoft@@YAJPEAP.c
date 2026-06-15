/*
 * XREFs of ??$MakeAndInitialize@VCAudioRenderEndpointChangeDelegator@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioRenderEndpointChangeDelegator@@@Z @ 0x1800B54D8
 * Callers:
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800BF370 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAudioRenderEndpointChangeDelegator@@QEAA@XZ @ 0x1800B6568 (--0CAudioRenderEndpointChangeDelegator@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioRenderEndpointChangeDelegator,CAudioRenderEndpointChangeDelegator,>(
        CAudioRenderEndpointChangeDelegator **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  CAudioRenderEndpointChangeDelegator *v4; // rax
  CAudioRenderEndpointChangeDelegator *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = CAudioRenderEndpointChangeDelegator::CAudioRenderEndpointChangeDelegator((CAudioRenderEndpointChangeDelegator *)v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(CAudioRenderEndpointChangeDelegator *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(CAudioRenderEndpointChangeDelegator *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v7);
  return v2;
}
