/*
 * XREFs of SepInitProcessAuditSd @ 0x140605560
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 * Callees:
 *     RtlAddAuditAccessAce @ 0x14077FCB0 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // eax
  ACL *v5; // rsi
  ULONG v6; // edx
  void *v7; // r9
  int v8; // r9d
  ULONG v9; // ebp
  ACL *v10; // rax
  ACL *v11; // rsi
  BOOLEAN v12; // [rsp+20h] [rbp-28h]
  BOOLEAN v13; // [rsp+28h] [rbp-20h]

  v0 = 0LL;
  if ( SepProcessAuditSd )
  {
    ExFreePoolWithTag(SepProcessAuditSd, 0);
    SepProcessAuditSd = 0LL;
  }
  if ( SepProcessAccessesToAudit )
  {
    v1 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 24;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, 4 * (unsigned int)*((unsigned __int8 *)SeWorldSid + 1) + 64, 0x64536553u);
    v3 = Pool2;
    if ( Pool2 )
    {
      v5 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAuditAccessAce(v5, v6, SepProcessAccessesToAudit, v7, v12, v13);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlSetSaclSecurityDescriptor(v3, 1u, v5, 0);
      if ( Acl < 0 )
        goto LABEL_6;
      SepProcessAuditSd = v3;
      v8 = *((unsigned __int8 *)SeLocalSystemSid + 1)
         + *((unsigned __int8 *)SeLocalServiceSid + 1)
         + *((unsigned __int8 *)SeNetworkServiceSid + 1)
         + *((unsigned __int8 *)SeIUserSid + 1);
      v9 = 4 * v8 + 72;
      v10 = (ACL *)ExAllocatePool2(0x100uLL, (unsigned int)(4 * v8 + 112), 0x64536553u);
      v0 = v10;
      if ( v10 )
      {
        v11 = v10 + 5;
        Acl = RtlCreateAcl(v10 + 5, v9, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeLocalServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeNetworkServiceSid);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeIUserSid);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(v0, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(v0, 1u, v11, 0);
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
