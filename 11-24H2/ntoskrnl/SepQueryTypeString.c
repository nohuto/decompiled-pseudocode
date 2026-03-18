/*
 * XREFs of SepQueryTypeString @ 0x1408F23FC
 * Callers:
 *     SepAdtObjectReferenceAuditAlarm @ 0x1407915CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     ObQueryTypeName @ 0x1408F2EF0 (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  result = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, unsigned int *))ObQueryTypeName)(a1, &v6, 0LL, &v7);
  if ( (_DWORD)result == -1073741820 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      result = ObQueryTypeName(a1, Pool2, v7, &v7, v6, *((_QWORD *)&v6 + 1));
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
