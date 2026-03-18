/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C
 * Callers:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x1800C1E54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ @ 0x18013ED90 (-AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C2FDC (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct IRenderTarget *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  int (__fastcall ***v5)(struct IRenderTarget *, GUID *, __int64 *); // rdx
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  char *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  struct IRenderTarget *v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = a2;
  if ( *((_BYTE *)this + 744) || (CurrentFrameId = GetCurrentFrameId(), *((_QWORD *)this + 92) == CurrentFrameId) )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 18);
    v10 = (char *)this + 136;
    if ( v9 == *((_QWORD **)this + 19) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v10,
        v9,
        &v12);
    }
    else
    {
      *v9 = a2;
      *((_QWORD *)this + 18) += 8LL;
    }
  }
  else
  {
    v11 = 0LL;
    if ( (**v5)(a2, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v11) < 0 )
    {
      v13 = 0LL;
      if ( (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e,
             &v13) >= 0 )
        *((_BYTE *)this + 750) = 1;
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)this + 80,
                   (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3) = a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      v6 = (char *)this + 24;
      *((_BYTE *)this + 745) = 1;
      *((_BYTE *)this + 750) = 1;
      v7 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
      v8 = v11;
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   v6,
                   v7 >> 3) = v8;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
