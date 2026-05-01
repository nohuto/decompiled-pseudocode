/*
 * XREFs of _lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_ @ 0x1803B52CC
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180246938 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::_CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___ @ 0x1803B545C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___--_CTask.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$1_0 @ 0x1806E6A06 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$1_0.c)
 * Callees:
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18018AA24 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_(__int64 a1)
{
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 48));
  std::vector<Geometry::CRect>::_Tidy(a1 + 24);
}
