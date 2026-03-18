/*
 * XREFs of ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14002D2FC
 * Callers:
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x14002C7D0 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x14002C920 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x14009CF68 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetRenderingBuffer(CCompositionSurface *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v5; // r14

  v1 = 0LL;
  if ( *((_DWORD *)this + 34) )
  {
    v2 = *((_QWORD *)this + 16);
    v3 = (char *)this + 120;
    while ( (char *)v2 != v3 )
    {
      v5 = v2 - 24;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 24) + 24LL))(v2 - 24) )
        break;
      v2 = *(_QWORD *)(v2 + 8);
      v1 = v5;
    }
  }
  return (struct CCompositionBuffer *)v1;
}
