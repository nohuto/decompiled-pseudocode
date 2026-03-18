/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x140154530
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14008DF80 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, 1LL, a2);
    UserSessionSwitchLeaveCritWithNonPaged();
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v5;
  }
  return result;
}
