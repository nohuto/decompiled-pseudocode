/*
 * XREFs of _lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x18040FAEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::_CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___ @ 0x18040FB44 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___--_CTask.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180412280 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x18040FC28 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
