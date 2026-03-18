/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009CED8
 * Callers:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009BE80 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F6E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x140038BCC (-ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int Buffer; // ebx
  __int64 v6; // r10
  __int64 v7; // r11
  struct CCompositionBuffer *v8; // rsi
  struct CCompositionBuffer *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  *a3 = 0;
  Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 7), &v10);
  if ( Buffer >= 0 )
  {
    v8 = v10;
    Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, bool *, __int64))(*(_QWORD *)v10 + 128LL))(
               v10,
               v6,
               a3,
               v7);
    if ( Buffer >= 0 && *a3 )
      CCompositionSurface::ReleaseOlderInactiveBuffers(this, v8);
  }
  return (unsigned int)Buffer;
}
