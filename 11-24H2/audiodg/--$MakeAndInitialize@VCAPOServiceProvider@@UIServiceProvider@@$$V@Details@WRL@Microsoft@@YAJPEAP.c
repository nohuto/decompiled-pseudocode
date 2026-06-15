/*
 * XREFs of ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140037210
 * Callers:
 *     ?GetServiceProvider@CAPOProcessingHostObject@@QEAAJPEAPEAUIServiceProvider@@@Z @ 0x140037198 (-GetServiceProvider@CAPOProcessingHostObject@@QEAAJPEAPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0CAPOServiceProvider@@QEAA@XZ @ 0x1400372CC (--0CAPOServiceProvider@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOServiceProvider@@QEAAJXZ @ 0x140037334 (-RuntimeClassInitialize@CAPOServiceProvider@@QEAAJXZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOServiceProvider,IServiceProvider,>(_QWORD *a1)
{
  CAPOServiceProvider *v2; // rax
  CAPOServiceProvider *v3; // rdi
  int v4; // ebx
  CAPOServiceProvider *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CAPOServiceProvider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v3 = CAPOServiceProvider::CAPOServiceProvider(v2);
  v6 = 0LL;
  v4 = CAPOServiceProvider::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    if ( v3 )
      (*(void (__fastcall **)(CAPOServiceProvider *))(*(_QWORD *)v3 + 16LL))(v3);
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v6);
  }
  else
  {
    v4 = (**(__int64 (__fastcall ***)(CAPOServiceProvider *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           a1);
    (*(void (__fastcall **)(CAPOServiceProvider *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v4;
}
