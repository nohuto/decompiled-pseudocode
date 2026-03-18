/*
 * XREFs of ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x1800F245C
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x1800F3950 (-CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::RecordCompositionSurfaceUpdates(CComposition *this)
{
  CGlobalCompositionSurfaceInfo **v1; // r14
  CGlobalCompositionSurfaceInfo **v3; // rsi
  int v4; // ebp
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 (*v8)(void); // rax
  int v9; // eax
  int v10; // edi

  v1 = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)this + 745);
  v3 = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)this + 744);
  v4 = 0;
  while ( v3 != v1 )
  {
    v8 = *(__int64 (**)(void))(*(_QWORD *)*v3 + 240LL);
    if ( (char *)v8 == (char *)CGlobalCompositionSurfaceInfo::CommitRecordedStatistics )
      v9 = CGlobalCompositionSurfaceInfo::CommitRecordedStatistics(*v3);
    else
      v9 = v8();
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x33Bu, 0LL);
    if ( !v4 || v4 >= 0 && v10 < 0 )
      v4 = v10;
    ++v3;
  }
  v5 = (__int64 *)*((_QWORD *)this + 744);
  v6 = (__int64 *)*((_QWORD *)this + 745);
  if ( v5 != v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v5,
      v6);
    *((_QWORD *)this + 745) = *((_QWORD *)this + 744);
  }
  return (unsigned int)v4;
}
