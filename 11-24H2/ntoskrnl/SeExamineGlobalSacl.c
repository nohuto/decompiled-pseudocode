/*
 * XREFs of SeExamineGlobalSacl @ 0x140889DD8
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DCEC0 (CmpExamineSaclForAuditEvent.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A75700 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140462E24 (SepRmAcquireGlobalSaclReadLock.c)
 *     RtlCompareUnicodeStrings @ 0x140888920 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x140889B70 (SeExamineSacl.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rsi
  BOOLEAN v8; // bl
  __int64 v13; // rdi
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN v16[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    SepRmAcquireGlobalSaclReadLock();
    v13 = SepRmGlobalSaclHead;
    if ( SepRmGlobalSaclHead )
    {
      while ( v13 )
      {
        if ( !RtlCompareUnicodeStrings(
                ObjectType->Buffer,
                (unsigned __int64)ObjectType->Length >> 1,
                *(PCWCH *)(v13 + 16),
                (unsigned __int64)*(unsigned __int16 *)(v13 + 8) >> 1,
                0) )
        {
          v14 = *(ACL **)(v13 + 24);
          if ( v14 )
          {
            LOBYTE(GenerateAudit) = 0;
            v16[0] = 0;
            SeExamineSacl(v14, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v16);
            if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
              v15 = 1;
            *v7 = v15;
            if ( GenerateAlarm )
            {
              if ( *GenerateAlarm || v16[0] )
                v8 = 1;
              *GenerateAlarm = v8;
            }
          }
          break;
        }
        v13 = *(_QWORD *)v13;
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegionThread();
  }
}
