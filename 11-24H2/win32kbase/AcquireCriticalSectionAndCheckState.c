/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x14004C990
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSessionSwitchEnterCrit @ 0x14004C9C0 (UserSessionSwitchEnterCrit.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax

  result = UserSessionSwitchEnterCrit();
  if ( (int)result >= 0 )
  {
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      UserSessionSwitchLeaveCritWithNonPaged();
      return 3223193056LL;
    }
  }
  return result;
}
