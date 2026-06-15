/*
 * XREFs of ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@AEAPEBG@Z @ 0x140054DC0
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021838 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14004B974 (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14004BBB4 (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140019374 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z @ 0x140054E8C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,unsigned short const * &>(
        _QWORD *a1,
        const unsigned __int16 **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v7; // edi
  __int64 v8; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v4);
  *v5 = &CLocalMmcssWorkQueue::`vftable';
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_BYTE *)v5 + 24) = 0;
  v9 = 0LL;
  v7 = CLocalMmcssWorkQueue::RuntimeClassInitialize((CLocalMmcssWorkQueue *)v5, *a2);
  v8 = *v5;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(v8 + 8))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v8 + 16))(v5);
    return (unsigned int)v7;
  }
}
