/*
 * XREFs of ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B8CDC
 * Callers:
 *     ??_ECDisplayDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B8DC0 (--_ECDisplayDuplicateAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B6C38 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

void __fastcall CDisplayDuplicateAnimatedVisual::~CDisplayDuplicateAnimatedVisual(
        CDisplayDuplicateAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayDuplicateAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v8);
  v3 = *((_QWORD *)this + 59);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = *((_QWORD *)this + 56);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v6,
      *((_QWORD *)this + 57));
    std::_Deallocate<16,0>(
      *((void **)this + 56),
      (*((_QWORD *)this + 58) - *((_QWORD *)this + 56)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
  }
  v7 = *((_QWORD *)this + 55);
  if ( v7 )
    CBaseObject::Release((CBaseObject *)(v7 + 8));
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
