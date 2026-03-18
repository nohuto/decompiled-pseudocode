/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x140039538
 * Callers:
 *     VidSchiResetEngines @ 0x1400A508C (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1400A5950 (VidSchInitializeComponentPowerManagement.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchQueryProcessNodeStatistics @ 0x1400F42E0 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchQueryNodeStatistics @ 0x1400F4C60 (VidSchQueryNodeStatistics.c)
 *     VidSchCreateContext @ 0x1401029F0 (VidSchCreateContext.c)
 *     VidSchCreateHwContext @ 0x140106080 (VidSchCreateHwContext.c)
 *     VidSchiPreemptEngineNodes @ 0x140111D60 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
