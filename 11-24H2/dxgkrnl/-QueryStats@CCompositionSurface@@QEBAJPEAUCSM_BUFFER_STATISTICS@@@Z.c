/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F470
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x140034E50 (NtQueryCompositionSurfaceStatistics.c)
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14009CDE0 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14001842C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F3D8 (-QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x14009D174 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  int Stats; // ebx
  __int64 v5; // rcx
  CCompositionBuffer *ActiveBuffer; // rax

  Stats = -1073741823;
  if ( (unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
    memset(a2, 0, 0x50uLL);
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    Stats = (*(__int64 (__fastcall **)(__int64, struct CSM_BUFFER_STATISTICS *))(*(_QWORD *)v5 + 48LL))(v5, a2);
  if ( !*((_QWORD *)this + 20) || Stats == -1073741637 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      Stats = CCompositionBuffer::QueryStats(ActiveBuffer, a2);
  }
  if ( Stats < 0 && !(unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
    memset(a2, 0, 0x50uLL);
  return (unsigned int)Stats;
}
