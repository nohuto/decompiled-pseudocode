/*
 * XREFs of ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E3DA8
 * Callers:
 *     ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E3DC8 (--1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180074A40 (-Release@CAnimationResource@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::~com_ptr_t<CAnimationResource,wil::err_returncode_policy>(
        CAnimationResource **a1)
{
  CAnimationResource *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CAnimationResource::Release(v1);
  return result;
}
