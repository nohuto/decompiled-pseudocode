/*
 * XREFs of ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x18027E4D4
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801EB52C (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x18027E3A8 (--1-$unique_ptr@VCCompiledEffectCache@@U-$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompiledEffectCache@@QEAA@XZ @ 0x18027E3C8 (--1CCompiledEffectCache@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CCompiledEffectCache>::operator()(__int64 a1, CCompiledEffectCache *a2)
{
  if ( a2 )
  {
    CCompiledEffectCache::~CCompiledEffectCache(a2);
    operator delete(a2);
  }
}
