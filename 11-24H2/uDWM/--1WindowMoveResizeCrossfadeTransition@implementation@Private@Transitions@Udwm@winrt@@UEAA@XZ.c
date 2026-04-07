/*
 * XREFs of ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E3DC8
 * Callers:
 *     ??_E?$heap_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E3E80 (--_E-$heap_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B084 (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E3DA8 (--1-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::~WindowMoveResizeCrossfadeTransition(
        CAnimationResource **this)
{
  *this = (CAnimationResource *)&winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::`vftable';
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::Cancel((winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *)this);
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::~com_ptr_t<CAnimationResource,wil::err_returncode_policy>(this + 8);
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::~com_ptr_t<CAnimationResource,wil::err_returncode_policy>(this + 7);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(this + 5));
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(this + 4));
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(this + 3));
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::~root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>();
}
