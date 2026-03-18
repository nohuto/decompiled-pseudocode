/*
 * XREFs of ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180101E68
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180101830 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18029C678 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180101FE0 (--$_Emplace_reallocate@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct ISwapChainRealization *a2)
{
  __int64 v4; // rax
  unsigned int (__fastcall *v5)(CMILRefCountImpl *__hidden); // rax
  _QWORD *v6; // rdx
  struct ISwapChainRealization *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISwapChainRealization *, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
    a2,
    (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL),
    -*(_QWORD *)this);
  v4 = *(_QWORD *)a2;
  v7 = a2;
  v5 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(v4 + 8);
  if ( v5 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(a2);
  else
    v5(a2);
  v6 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v6 == *((_QWORD **)this + 11) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
      (char *)this + 72,
      v6,
      &v7);
    if ( v7 )
      (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    *v6 = a2;
    *((_QWORD *)this + 10) += 8LL;
  }
  if ( *((_QWORD *)this + 10) - *((_QWORD *)this + 9) == 8LL )
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct ISwapChainRealization **))(*(_QWORD *)a2 + 64LL))(
                                                  a2,
                                                  &v7);
}
