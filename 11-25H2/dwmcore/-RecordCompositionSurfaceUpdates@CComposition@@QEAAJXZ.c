/*
 * XREFs of ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x18003074C
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x180031F90 (-CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::RecordCompositionSurfaceUpdates(CComposition *this)
{
  CGlobalCompositionSurfaceInfo **v1; // r14
  CGlobalCompositionSurfaceInfo **v3; // rsi
  int v4; // ebp
  void *v5; // rcx
  __int64 (*v7)(void); // rax
  int v8; // eax
  int v9; // edi

  v1 = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)this + 745);
  v3 = (CGlobalCompositionSurfaceInfo **)*((_QWORD *)this + 744);
  v4 = 0;
  while ( v3 != v1 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)*v3 + 240LL);
    if ( (char *)v7 == (char *)CGlobalCompositionSurfaceInfo::CommitRecordedStatistics )
      v8 = CGlobalCompositionSurfaceInfo::CommitRecordedStatistics(*v3);
    else
      v8 = v7();
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x334u, 0LL);
    if ( !v4 || v4 >= 0 && v9 < 0 )
      v4 = v9;
    ++v3;
  }
  v5 = (void *)*((_QWORD *)this + 744);
  if ( v5 != *((void **)this + 745) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(v5);
    *((_QWORD *)this + 745) = *((_QWORD *)this + 744);
  }
  return (unsigned int)v4;
}
