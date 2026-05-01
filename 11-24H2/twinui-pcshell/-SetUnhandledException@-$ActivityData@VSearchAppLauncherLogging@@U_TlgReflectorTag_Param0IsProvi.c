/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1803BFB44
 * Callers:
 *     ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803B5CC8 (--1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManage.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = -2147024322;
  if ( (int)a1[22] < 0 )
    v2 = a1[22];
  v3 = a1[62];
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  v4 = a1[18];
  if ( v4 >= 0 )
  {
    a1[18] = v2;
    v4 = v2;
  }
  a1[62] = v3 - 1;
  return (unsigned int)v4;
}
