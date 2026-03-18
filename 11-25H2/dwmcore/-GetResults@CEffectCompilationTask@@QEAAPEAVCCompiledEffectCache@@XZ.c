/*
 * XREFs of ?GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ @ 0x180070F00
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180070758 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180070ED4 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 * Callees:
 *     <none>
 */

struct CCompiledEffectCache *__fastcall CEffectCompilationTask::GetResults(CEffectCompilationTask *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 0);
    CloseThreadpoolWork(*((PTP_WORK *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  return (struct CCompiledEffectCache *)*((_QWORD *)this + 10);
}
