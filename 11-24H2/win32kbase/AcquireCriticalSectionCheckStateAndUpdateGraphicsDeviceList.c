/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x14008C410 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x14014EB10 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x140154530 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiGetCertificate @ 0x1401C6250 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401C63A0 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     AcquireCriticalSectionAndCheckState @ 0x14004C990 (AcquireCriticalSectionAndCheckState.c)
 *     UpdateGraphicsDeviceList @ 0x14004CAB0 (UpdateGraphicsDeviceList.c)
 *     UserGetIsSwitchInProgress @ 0x1401BE980 (UserGetIsSwitchInProgress.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    v2 = 0;
    UpdateGraphicsDeviceList(&v2);
    if ( v2 && (unsigned __int8)UserGetIsSwitchInProgress() )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCritWithNonPaged();
      return v1;
    }
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      v1 = -1071774240;
      goto LABEL_8;
    }
  }
  return result;
}
