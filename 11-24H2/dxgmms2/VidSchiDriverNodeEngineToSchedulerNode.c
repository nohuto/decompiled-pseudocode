/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x14003827C
 * Callers:
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1400A71D0 (VidSchInitializeComponentPowerManagement.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchQueryProcessNodeStatistics @ 0x1400EF460 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchQueryNodeStatistics @ 0x1400F0520 (VidSchQueryNodeStatistics.c)
 *     VidSchCreateContext @ 0x140101950 (VidSchCreateContext.c)
 *     VidSchCreateHwContext @ 0x140103EC0 (VidSchCreateHwContext.c)
 *     VidSchiPreemptEngineNodes @ 0x140110AD8 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
