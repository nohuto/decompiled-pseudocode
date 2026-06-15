/*
 * XREFs of ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x1800C72CC
 * Callers:
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x1800C77F8 (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x1800C7414 (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ @ 0x180126A30 (-RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(
        DynamicAudioEndpointManager **a1)
{
  void *v2; // rax
  int v3; // edi
  DynamicAudioEndpointManager *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  DynamicAudioEndpointManager *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x2A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (DynamicAudioEndpointManager *)v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = DynamicAudioEndpointManager::DynamicAudioEndpointManager((DynamicAudioEndpointManager *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = DynamicAudioEndpointManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      if ( v4 )
        (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v4 + 16LL))(v4);
      v3 = 0;
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v6);
  return (unsigned int)v3;
}
