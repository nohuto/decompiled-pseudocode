/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x180074A40
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004A680 (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B358 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x1800747CC (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x18007CFB4 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E3DA8 (--1-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1CAnimationResource@@IEAA@XZ @ 0x180074A84 (--1CAnimationResource@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    CAnimationResource::~CAnimationResource(this);
    DefaultHeap::Free(this);
  }
  return v2;
}
