/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140012898
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140012ABC (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x140012944 (-RuntimeClassInitialize@CpuManager@@QEAAJXZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x1400129EC (--0CpuManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  CpuManager *v2; // rax
  CpuManager *v4; // rbx
  int v5; // esi

  *a1 = 0LL;
  v2 = (CpuManager *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v4 = CpuManager::CpuManager(v2);
  v5 = CpuManager::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    if ( v4 )
      (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 16LL))(v4);
    return (unsigned int)v5;
  }
}
