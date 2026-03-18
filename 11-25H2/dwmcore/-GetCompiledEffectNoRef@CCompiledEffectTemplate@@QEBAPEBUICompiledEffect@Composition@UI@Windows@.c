/*
 * XREFs of ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180070ED4
 * Callers:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180071124 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 * Callees:
 *     ?GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ @ 0x180070F00 (-GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ.c)
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CCompiledEffectTemplate::GetCompiledEffectNoRef(
        CCompiledEffectTemplate *this)
{
  CEffectCompilationTask *v1; // rcx
  const struct Windows::UI::Composition::ICompiledEffect *result; // rax

  v1 = (CEffectCompilationTask *)*((_QWORD *)this + 10);
  result = 0LL;
  if ( v1 )
  {
    if ( *((_DWORD *)v1 + 18) == 3 )
      return (const struct Windows::UI::Composition::ICompiledEffect *)*((_QWORD *)CEffectCompilationTask::GetResults(v1)
                                                                       + 4);
  }
  return result;
}
