/*
 * XREFs of AMLIIterateParentNext @ 0x140016084
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceEnum @ 0x1400297A0 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 *     GetOpRegionScopeWorker @ 0x140049280 (GetOpRegionScopeWorker.c)
 *     AcpiHandleInternalNotify @ 0x140064954 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}
