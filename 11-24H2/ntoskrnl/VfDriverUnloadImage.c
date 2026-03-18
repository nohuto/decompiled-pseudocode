/*
 * XREFs of VfDriverUnloadImage @ 0x140B8A5C0
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9AF44 (VfSuspectDriversUnloadCallback.c)
 *     VfFreeMemoryNotification @ 0x140BA7A7C (VfFreeMemoryNotification.c)
 *     VfThunkCheckDriverUnloading @ 0x140BA8F14 (VfThunkCheckDriverUnloading.c)
 */

__int64 *__fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 *result; // rax

  if ( (unsigned int)VfIsVerifierEnabled() )
  {
    DifObjTrkQeuryInvokeDeleteRange(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), 0LL, 0);
    VfFreeMemoryNotification(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
  }
  VfThunkCheckDriverUnloading(a1);
  result = (__int64 *)VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    result = (__int64 *)VfSuspectDriversUnloadCallback(a1);
  if ( VfDifRunningWithoutReboot )
  {
    result = &VfSuspectDriversList;
    if ( (__int64 *)VfSuspectDriversList == &VfSuspectDriversList )
      return (__int64 *)VfVolatileClearDifRuleClass();
  }
  return result;
}
