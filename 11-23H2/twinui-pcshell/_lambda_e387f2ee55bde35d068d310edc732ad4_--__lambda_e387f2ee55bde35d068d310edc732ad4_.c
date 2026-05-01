/*
 * XREFs of _lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_ @ 0x1801D78E8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___ @ 0x1801D7810 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::_CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___ @ 0x1801D7938 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
