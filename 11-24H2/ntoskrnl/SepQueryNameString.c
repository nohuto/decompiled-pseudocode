/*
 * XREFs of SepQueryNameString @ 0x1408F2B48
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1407915CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryNameString(__int64 a1, PVOID *a2)
{
  int NameStringMode; // eax
  int v5; // ebx
  __int64 Pool2; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&v10, 0);
  v5 = NameStringMode;
  if ( NameStringMode == -1073741820 || NameStringMode == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v5 = ObQueryNameStringMode(a1, Pool2, v10, (unsigned int)&v10, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, (__int64 *)a2, v8, v9);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
