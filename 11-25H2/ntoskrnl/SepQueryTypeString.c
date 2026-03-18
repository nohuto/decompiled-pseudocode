/*
 * XREFs of SepQueryTypeString @ 0x1409837B4
 * Callers:
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078230C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14092E770 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ObQueryTypeName @ 0x140982F3C (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0;
  v6 = 0LL;
  result = ObQueryTypeName(a1, (__int64)&v6, 0, &v7);
  if ( (_DWORD)result == -1073741820 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      result = ObQueryTypeName(a1, Pool2, v7, &v7);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
