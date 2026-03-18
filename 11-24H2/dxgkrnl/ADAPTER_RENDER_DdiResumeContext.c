/*
 * XREFs of ADAPTER_RENDER_DdiResumeContext @ 0x1400554B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResumeContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RESUMECONTEXT@@@Z @ 0x14039C188 (-DdiResumeContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RESUMECONTEXT@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiResumeContext(ADAPTER_RENDER *a1, const struct _DXGKARG_RESUMECONTEXT *a2)
{
  return ADAPTER_RENDER::DdiResumeContext(a1, a2);
}
