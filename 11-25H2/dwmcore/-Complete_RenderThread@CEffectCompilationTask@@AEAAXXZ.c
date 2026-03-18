/*
 * XREFs of ?Complete_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x18003DF70
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18003DFC8 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 */

void __fastcall CEffectCompilationTask::Complete_RenderThread(CEffectCompilationTask *this)
{
  __int64 v1; // rsi

  v1 = 0LL;
  for ( *((_BYTE *)this + 96) = 1; (unsigned int)v1 < *((_DWORD *)this + 12); v1 = (unsigned int)(v1 + 1) )
    CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*((_QWORD *)this + 3) + 8 * v1));
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 8LL);
}
