/*
 * XREFs of ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B950C
 * Callers:
 *     ??_GCDisplayDuplicateToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B9640 (--_GCDisplayDuplicateToExtendAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B6C38 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

void __fastcall CDisplayDuplicateToExtendAnimatedVisual::~CDisplayDuplicateToExtendAnimatedVisual(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  CBaseObject *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CDWMDisplay *v10; // rcx
  CDWMDisplay *v11; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayDuplicateToExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v12);
  v3 = *((_QWORD *)this + 63);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 62);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = *((_QWORD *)this + 61);
  if ( v7 )
    CBaseObject::Release((CBaseObject *)(v7 + 8));
  v8 = *((_QWORD *)this + 58);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v8,
      *((_QWORD *)this + 59));
    std::_Deallocate<16,0>(
      *((void **)this + 58),
      (*((_QWORD *)this + 60) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  v9 = *((_QWORD *)this + 57);
  if ( v9 )
    CBaseObject::Release((CBaseObject *)(v9 + 8));
  v10 = (CDWMDisplay *)*((_QWORD *)this + 56);
  if ( v10 )
    CDWMDisplay::Release(v10);
  v11 = (CDWMDisplay *)*((_QWORD *)this + 55);
  if ( v11 )
    CDWMDisplay::Release(v11);
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
