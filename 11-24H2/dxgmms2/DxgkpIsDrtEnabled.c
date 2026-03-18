/*
 * XREFs of DxgkpIsDrtEnabled @ 0x14004B784
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 DxgkpIsDrtEnabled()
{
  return ((__int64 (*)(void))DxgCoreInterface[6])();
}
