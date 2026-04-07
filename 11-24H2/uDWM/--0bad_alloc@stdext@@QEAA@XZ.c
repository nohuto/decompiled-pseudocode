/*
 * XREFs of ??0bad_alloc@stdext@@QEAA@XZ @ 0x18009AF80
 * Callers:
 *     ??$get_weak@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x18004A874 (--$get_weak@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E3994 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800E4A88 (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 * Callees:
 *     <none>
 */

stdext::bad_alloc *__fastcall stdext::bad_alloc::bad_alloc(stdext::bad_alloc *this)
{
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &stdext::bad_alloc::`vftable';
  return this;
}
