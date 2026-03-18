/*
 * XREFs of SeExamineGlobalSacl @ 0x14092EC88
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407CD700 (CmpExamineSaclForAuditEvent.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14092E770 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A730B0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepRmAcquireGlobalSaclReadLock @ 0x1402053DC (SepRmAcquireGlobalSaclReadLock.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
