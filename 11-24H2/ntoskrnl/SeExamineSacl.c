/*
 * XREFs of SeExamineSacl @ 0x14088DA20
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DD410 (CmpExamineSaclForAuditEvent.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A6FBA0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v7; // rbp
  PACCESS_TOKEN v9; // r13
  PACL v10; // r10
  char v12; // si
  _WORD *v13; // rcx
  unsigned int v14; // ecx
  PACL v15; // rbx
  char Sbz1; // di
  int v17; // eax
  ACL *v18; // r15
  unsigned int v19; // r13d
  signed int v20; // r10d
  _QWORD *v21; // rax
  void *v22; // r9
  void *v23; // rcx
  void *v24; // rdx
  void *v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+60h] [rbp-58h] BYREF
  unsigned int AceCount; // [rsp+64h] [rbp-54h]
  __int64 v29[10]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int Size; // [rsp+C0h] [rbp+8h]
  unsigned int GenerateAudita; // [rsp+E8h] [rbp+30h]
  int GenerateAlarma; // [rsp+F0h] [rbp+38h]

  v27 = -1;
  v7 = 0LL;
  v9 = Token;
  v29[0] = 0LL;
  v10 = ResourceSacl;
  Size = 0;
  *GenerateAudit = 0;
  *GenerateAlarm = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    if ( AceCount )
    {
      v12 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v12 = AccessGranted != 0 ? 64 : 0x80;
      v13 = (_WORD *)**((_QWORD **)Token + 19);
      if ( *v13 == *(_WORD *)SeAnonymousLogonSid )
      {
        v17 = memcmp(v13, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v10 = ResourceSacl;
        if ( !v17 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v14 = 0;
      v15 = Sacl + 1;
      GenerateAudita = 0;
      while ( 1 )
      {
        if ( *GenerateAudit )
        {
LABEL_17:
          if ( v7 )
          {
            AuthzBasepFreeSecurityAttributesList(v7);
            ExFreePoolWithTag(v7, 0);
          }
          return;
        }
        Sbz1 = v15->Sbz1;
        if ( (Sbz1 & 8) == 0 )
        {
          if ( v15->AclRevision == 2 )
          {
            if ( !SepSidInToken((__int64)v9, 0LL, (unsigned __int8 *)&v15[1], 1, 0, 0)
              && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)&v15[1].AclRevision || memcmp(SeWorldSid, &v15[1], Size)) )
            {
              goto LABEL_23;
            }
            if ( (*(_DWORD *)&v15->AceCount & DesiredAccess) == 0 )
            {
              v14 = GenerateAudita;
              if ( ((unsigned __int8)v12 & (unsigned __int8)Sbz1) != 0 )
                *GenerateAudit = 1;
              goto LABEL_16;
            }
            goto LABEL_21;
          }
          if ( v15->AclRevision == 13 )
          {
            v18 = v15 + 1;
            v19 = 4 * v15[1].Sbz1 + 8;
            GenerateAlarma = *(_DWORD *)&v15->AceCount;
            if ( v10 && !v7 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl((__int64)v10, v29);
              v14 = GenerateAudita;
              v7 = (_DWORD *)v29[0];
            }
            v20 = v15->AclSize - v19 - 8;
            if ( v20 <= 0 )
            {
              v9 = Token;
              goto LABEL_16;
            }
            v21 = (_QWORD *)*((_QWORD *)Token + 137);
            if ( v21 )
            {
              v22 = (void *)v21[72];
              v23 = (void *)v21[74];
              v24 = (void *)v21[73];
              v25 = (void *)v21[75];
            }
            else
            {
              v22 = 0LL;
              v23 = 0LL;
              v24 = 0LL;
              v25 = 0LL;
            }
            v26 = v19;
            v9 = Token;
            AuthzBasepEvaluateAceCondition(
              Token,
              *((void **)Token + 97),
              v7,
              v22,
              v23,
              v24,
              v25,
              (ACL *)((char *)v18 + v26),
              v20,
              1u,
              0,
              &v27);
            if ( ((v27 + 1) & 0xFFFFFFFD) != 0
              || !SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)&v15[1], 1, 0, 0)
              && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)&v18->AclRevision || memcmp(SeWorldSid, &v15[1], Size)) )
            {
              goto LABEL_23;
            }
            if ( (DesiredAccess & GenerateAlarma) == 0 )
            {
              if ( ((unsigned __int8)v12 & (unsigned __int8)Sbz1) != 0 )
                goto LABEL_46;
              goto LABEL_23;
            }
LABEL_21:
            if ( (Sbz1 & 0x40) != 0 && AccessGranted || Sbz1 < 0 && !AccessGranted )
LABEL_46:
              *GenerateAudit = 1;
LABEL_23:
            v14 = GenerateAudita;
          }
        }
LABEL_16:
        ++v14;
        v10 = ResourceSacl;
        v15 = (PACL)((char *)v15 + v15->AclSize);
        GenerateAudita = v14;
        if ( v14 >= AceCount )
          goto LABEL_17;
      }
    }
  }
}
