/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x1800A256C
 * Callers:
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x180108A3C (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800683D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBas.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x18006EBA0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microso.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessKSMemory,ICrossProcessMemory,>(
        volatile signed __int32 **a1)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rdi
  const struct _GUID *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v7 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>(v3);
    *(_QWORD *)v4 = &CCrossProcessKSMemory::`vftable';
    v7 = 0LL;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_910f47db_d25f_4cf9_995e_f86c161b3eef, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v5, v5) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v2 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::Release(v4);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v7);
  return v2;
}
