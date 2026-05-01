/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x18020730C
 * Callers:
 *     _wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&__::_1_::dtor$0 @ 0x1806CC428 (_wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$6 @ 0x1806F1DF2 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
