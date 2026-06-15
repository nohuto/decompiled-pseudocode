/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140014878
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140014804 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140014C2C (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager,>(
        GraphStreamingResourceManager **a1)
{
  GraphStreamingResourceManager *v2; // rax
  GraphStreamingResourceManager *v3; // rax
  GraphStreamingResourceManager *v4; // rbx
  GraphStreamingResourceManager *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (GraphStreamingResourceManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v3 = GraphStreamingResourceManager::GraphStreamingResourceManager(v2);
    v4 = v3;
    if ( v3 )
      (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = v4;
    if ( v4 )
      (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v6);
    return 2147942414LL;
  }
}
