/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4_____lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803AE62C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803AF434 (Windows--Internal--ComTaskPool--QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1803B48EC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4_____lambda_d3a26e949cca22f756fde8979863d6a4___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  *(_BYTE *)(a1 + 352) = *(_BYTE *)(a2 + 336);
  *(_BYTE *)(a1 + 353) = *(_BYTE *)(a2 + 337);
  *(_QWORD *)a1 = &off_180735CE8;
  return a1;
}
