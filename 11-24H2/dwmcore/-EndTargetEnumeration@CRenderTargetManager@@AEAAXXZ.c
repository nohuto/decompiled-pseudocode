/*
 * XREFs of ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0
 * Callers:
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x180102CA0 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 *     ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x180102D10 (-ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180102E70 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x18020ED1C (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x18021D4B0 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x180229708 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18025E3EC (-CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801032F8 (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     ??$_Emplace_reallocate@AEAPEAVIRenderTarget@@@?$vector@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVIRenderTarget@@@Z @ 0x1801D2A54 (--$_Emplace_reallocate@AEAPEAVIRenderTarget@@@-$vector@V-$com_ptr_t@VIRenderTarget@@Uerr_returnc.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18022939C (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vlibe.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  char *v1; // rdi
  int (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rbp
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // r15
  __int64 *v5; // rdx
  __int64 v6; // rcx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r14
  _QWORD *v8; // rax
  _QWORD *i; // rbx
  _QWORD *v10; // rdx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  CGlobalComposition *v14; // rcx
  int v15; // r8d
  __int64 trivial_8; // rax
  __int64 v17; // r8
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char *)this + 160;
  *((_BYTE *)this + 744) = 0;
  v3 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  if ( v4 == v3 )
    goto LABEL_2;
  do
  {
    v6 = *((_QWORD *)this + 17);
    v7 = *v4;
    v18 = *v4;
    if ( v6 != *((_QWORD *)this + 18) )
    {
      trivial_8 = _std_find_trivial_8(v6, *((_QWORD *)this + 18), v7);
      v17 = *((_QWORD *)this + 18);
      if ( trivial_8 != v17 )
      {
        memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v17 - (trivial_8 + 8));
        *((_QWORD *)this + 18) -= 8LL;
        goto LABEL_8;
      }
    }
    if ( *((_BYTE *)this + 744) )
    {
      if ( *((_QWORD *)v1 + 1) == *((_QWORD *)v1 + 2) )
      {
        std::vector<wil::com_ptr_t<IRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<IRenderTarget * &>(
          v1,
          *((_QWORD *)v1 + 1),
          &v18);
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)v1 + 1),
          (__int64)v7);
        *((_QWORD *)v1 + 1) += 8LL;
      }
      goto LABEL_8;
    }
    v18 = 0LL;
    if ( (**v7)(v7, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, (__int64 *)&v18) < 0 )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 11);
      for ( i = (_QWORD *)*((_QWORD *)this + 10); ; ++i )
      {
        v10 = i;
        if ( i == v8 || (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i == v7 )
          break;
      }
      if ( i != v8 )
      {
        v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i;
        v19 = 0LL;
        if ( (**v11)(v11, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, &v19) >= 0 )
          *((_BYTE *)this + 750) = 1;
        detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)this + 10,
          ((__int64)i - *((_QWORD *)this + 10)) >> 3,
          1LL);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v12 = (__int64)v18;
LABEL_21:
      if ( v12 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 16LL))(v12, v10);
      goto LABEL_8;
    }
    v13 = (_QWORD *)*((_QWORD *)this + 4);
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v12 = (__int64)v18;
    while ( v10 != v13 && (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10 != v18 )
      ++v10;
    if ( v10 == v13 )
      goto LABEL_21;
    v14 = g_pComposition;
    v15 = CCommonRegistryData::m_compositorClockPolicy;
    if ( *v10 == *(_QWORD *)this )
    {
      *(_QWORD *)this = 0LL;
      if ( !v15 )
        *((_BYTE *)v14 + 6468) = 1;
    }
    if ( *v10 == *((_QWORD *)this + 1) )
    {
      *((_QWORD *)this + 1) = 0LL;
      if ( v15 == 1 )
        *((_BYTE *)v14 + 6468) = 1;
    }
    *((_BYTE *)this + 745) = 1;
    *((_BYTE *)this + 750) = 1;
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 24,
      ((__int64)v10 - *((_QWORD *)this + 3)) >> 3,
      1LL,
      v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
LABEL_8:
    ++v4;
  }
  while ( v4 != v3 );
  v1 = (char *)this + 160;
LABEL_2:
  v5 = (__int64 *)*((_QWORD *)v1 + 1);
  if ( *(__int64 **)v1 != v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)v1,
      v5);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
}
