/*
 * XREFs of SepQueryTypeString @ 0x140913780
 * Callers:
 *     SepAdtObjectReferenceAuditAlarm @ 0x14079159C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ObQueryTypeName @ 0x140914530 (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = ExAllocatePool2(0x100uLL, v7, 0x6E546553u);
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
