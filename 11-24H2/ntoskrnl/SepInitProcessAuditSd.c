/*
 * XREFs of SepInitProcessAuditSd @ 0x140607F04
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 * Callees:
 *     RtlAddAuditAccessAce @ 0x14077FD80 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A07B00 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // eax
  ACL *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  ULONG v8; // ebp
  ACL *v9; // rax
  ACL *v10; // rsi

  v0 = 0LL;
  if ( SepProcessAuditSd )
  {
    ExFreePoolWithTag(SepProcessAuditSd, 0);
    SepProcessAuditSd = 0LL;
  }
  if ( SepProcessAccessesToAudit )
  {
    v1 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 24;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v5 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAuditAccessAce(v5, v6, (unsigned int)SepProcessAccessesToAudit);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_6;
      LOBYTE(v7) = 1;
      Acl = RtlSetSaclSecurityDescriptor(v3, v7, v5, 0LL);
      if ( Acl < 0 )
        goto LABEL_6;
      SepProcessAuditSd = v3;
      v8 = 4
         * (*((unsigned __int8 *)SeLocalSystemSid + 1)
          + *((unsigned __int8 *)SeLocalServiceSid + 1)
          + *((unsigned __int8 *)SeNetworkServiceSid + 1)
          + *((unsigned __int8 *)SeIUserSid + 1))
         + 72;
      v9 = (ACL *)ExAllocatePool2(0x100uLL);
      v0 = v9;
      if ( v9 )
      {
        v10 = v9 + 5;
        Acl = RtlCreateAcl(v9 + 5, v8, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, SeLocalServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, SeNetworkServiceSid);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, SeIUserSid);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(v0, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(v0, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      SepImportantProcessSd = (__int64)v0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_6;
      }
    }
    Acl = -1073741670;
LABEL_6:
    SepAuditFailed((unsigned int)Acl);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      SepProcessAuditSd = 0LL;
    }
    if ( v0 )
    {
      ExFreePoolWithTag(v0, 0);
      SepImportantProcessSd = 0LL;
    }
  }
}
