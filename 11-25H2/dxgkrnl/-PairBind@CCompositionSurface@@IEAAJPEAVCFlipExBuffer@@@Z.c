/*
 * XREFs of ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14000F818
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x140008DC0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14000E600 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x14009ADD0 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1400102F8 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400607EC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CCompositionSurface::PairBind(CCompositionSurface *this, struct CFlipExBuffer *a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp-548h] BYREF
  _BYTE v8[1312]; // [rsp+40h] [rbp-538h] BYREF

  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CFlipExBuffer::EnableCascadedSignaling(a2, (struct CSM_BUFFER_INFO *)v8);
  if ( v4 < 0
    || (LOBYTE(v5) = 1,
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *))(**((_QWORD **)this + 15) + 24LL))(
               *((_QWORD *)this + 15),
               v8,
               v5,
               &v7),
        v4 < 0) )
  {
    CFlipExBuffer::DisableCascadedSignaling(a2);
  }
  else
  {
    *((_QWORD *)a2 + 87) = v7;
  }
  return (unsigned int)v4;
}
