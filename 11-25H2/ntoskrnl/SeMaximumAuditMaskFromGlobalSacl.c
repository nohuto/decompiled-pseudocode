/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x140A6A02C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     SepRmAcquireGlobalSaclReadLock @ 0x1402053DC (SepRmAcquireGlobalSaclReadLock.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     SeMaximumAuditMask @ 0x14049EFEC (SeMaximumAuditMask.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    SepRmAcquireGlobalSaclReadLock();
    v8 = SepRmGlobalSaclHead;
    if ( SepRmGlobalSaclHead )
    {
      while ( v8 )
      {
        if ( !RtlCompareUnicodeStrings(
                ObjectTypeName->Buffer,
                (unsigned __int64)ObjectTypeName->Length >> 1,
                *(PCWCH *)(v8 + 16),
                (unsigned __int64)*(unsigned __int16 *)(v8 + 8) >> 1,
                0) )
        {
          v9 = *(_QWORD *)(v8 + 24);
          v10 = 0;
          SeMaximumAuditMask(v9, GrantedAccess, (__int64)Token, &v10);
          *AuditMask |= v10;
          break;
        }
        v8 = *(_QWORD *)v8;
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
