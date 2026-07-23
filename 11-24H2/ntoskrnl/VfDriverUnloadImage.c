/*
 * XREFs of VfDriverUnloadImage @ 0x140B8C5C0
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9CF44 (VfSuspectDriversUnloadCallback.c)
 *     VfFreeMemoryNotification @ 0x140BA9A7C (VfFreeMemoryNotification.c)
 *     VfThunkCheckDriverUnloading @ 0x140BAAF14 (VfThunkCheckDriverUnloading.c)
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
