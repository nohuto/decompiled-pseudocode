/*
 * XREFs of ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1400102F8
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14000E600 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14000F818 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x140010128 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400607EC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?UnPair@CompositionSurfaceObject@@QEAAJ_N@Z @ 0x140079E68 (-UnPair@CompositionSurfaceObject@@QEAAJ_N@Z.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009B6B0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1400642E8 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipExBuffer::DisableCascadedSignaling(CFlipExBuffer *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  *((_DWORD *)this + 163) = 0;
  v1 = (char *)this + 688;
  *((_QWORD *)this + 88) = 0LL;
  v3 = *((_QWORD *)this + 86);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      *((_QWORD *)this + 82),
      *((unsigned int *)this + 166),
      *((_QWORD *)this + 84),
      *((_DWORD *)this + 170),
      *((_DWORD *)this + 167));
    *((_QWORD *)this + 82) = 0LL;
    *((_DWORD *)this + 166) = 0;
    *((_QWORD *)this + 84) = 0LL;
    *((_DWORD *)this + 170) = 0;
    *((_DWORD *)this + 167) = 0;
    ReleaseInterface<IAdapter>(v1);
  }
}
