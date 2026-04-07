/*
 * XREFs of ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BFA9C
 * Callers:
 *     ??_GCDisplayExtendToDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BFB60 (--_GCDisplayExtendToDuplicateAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C778 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BC978 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ??1?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BDCDC (--1-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDisplayExtendToDuplicateAnimatedVisual::~CDisplayExtendToDuplicateAnimatedVisual(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  int v2; // eax
  __int64 *v3; // rcx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      33LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v4);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::~com_ptr_t<CTimeline<float>,wil::err_returncode_policy>((CTimelineBase **)this + 53);
  v3 = (__int64 *)*((_QWORD *)this + 50);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v3,
      *((__int64 **)this + 51));
    std::_Deallocate<16,0>(
      *((void **)this + 50),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 52) - *((_QWORD *)this + 50)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
  }
  wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)this + 49);
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
