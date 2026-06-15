/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400229B8
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400409D8 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140041008 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemoryManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022420 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMem.c)
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x140022A6C (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 *     ??0CCrossProcessMemoryManager@@QEAA@XZ @ 0x140022B20 (--0CCrossProcessMemoryManager@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
        CCrossProcessMemoryManager **a1,
        const unsigned __int16 **a2)
{
  CCrossProcessMemoryManager *v4; // rax
  CCrossProcessMemoryManager *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  volatile int *v8; // rdx
  CCrossProcessMemoryManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCrossProcessMemoryManager *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = CCrossProcessMemoryManager::CCrossProcessMemoryManager(v4);
  v10 = 0LL;
  v7 = CCrossProcessMemoryManager::RuntimeClassInitialize(v5, *a2);
  if ( v7 < 0 )
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::Release(
        (__int64)v5,
        v6);
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v10);
    return (unsigned int)v7;
  }
  else
  {
    *a1 = v5;
    (*(void (__fastcall **)(CCrossProcessMemoryManager *))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::Release(
        (__int64)v5,
        v8);
    return 0LL;
  }
}
