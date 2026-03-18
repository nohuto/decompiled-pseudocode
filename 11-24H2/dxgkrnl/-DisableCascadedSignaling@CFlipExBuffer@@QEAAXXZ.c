/*
 * XREFs of ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14001F788
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14001DAE0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14001ECA8 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14001F5B8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400610A4 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x14009D098 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009D8E0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x140063F08 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
