/*
 * XREFs of _lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_ @ 0x180309894
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___ @ 0x180309310 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::_CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___ @ 0x180309934 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e387f2ee55bde35d068d310edc732ad4_::__lambda_e387f2ee55bde35d068d310edc732ad4_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
