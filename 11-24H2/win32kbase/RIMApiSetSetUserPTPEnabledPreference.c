/*
 * XREFs of RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1328 (RIMApplyPTPConfigRemedyWorker.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     AccessPTPEnabledStatus @ 0x1400A8AA0 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1401DCC70 (RIMFindConfigDeviceForInput.c)
 */

__int64 __fastcall RIMApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct RIMDEV *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 1;
  result = RIMIsRunningOnDesktop();
  if ( (_DWORD)result )
  {
    AccessPTPEnabledStatus(0LL, 1LL, &v10);
    UserSessionState = W32GetUserSessionState(v7);
    *(_DWORD *)(UserSessionState + 328) = v10;
    result = RIMFindConfigDeviceForInput(a3, a2, a1, &v9);
    if ( (_DWORD)result )
      return RIMDeliverConfigRequest(v9);
  }
  return result;
}
