/*
 * XREFs of _lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_ @ 0x1804B1E84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::_scalar_deleting_destructor_ @ 0x1804B25E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___--_scala.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1804B4CE0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1804B1FF0 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
