/*
 * XREFs of ViInitializeLocalSystemDescriptor @ 0x140B83708
 * Callers:
 *     VfUtilIsLocalSystem @ 0x140B83404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PSECURITY_DESCRIPTOR ViInitializeLocalSystemDescriptor()
{
  void *Pool2; // rax
  void *v1; // rdi
  ULONG v2; // ebx
  ACL *v3; // rax
  ACL *v4; // rsi
  NTSTATUS Acl; // ebx

  if ( !ViLocalSystemDescriptor )
  {
    if ( SeLocalSystemSid )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x55667256uLL);
      v1 = Pool2;
      if ( Pool2 )
      {
        if ( RtlCreateSecurityDescriptor(Pool2, 1u) < 0 )
          goto LABEL_12;
        v2 = RtlLengthSid(SeLocalSystemSid) + 20;
        v3 = (ACL *)ExAllocatePool2(0x100uLL, v2, 0x55667256uLL);
        v4 = v3;
        if ( !v3 )
          goto LABEL_12;
        Acl = RtlCreateAcl(v3, v2, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v4, 2u, 1u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(v1, 1u, v4, 0);
            if ( Acl >= 0 )
            {
              if ( !_InterlockedCompareExchange64(
                      (volatile signed __int64 *)&ViLocalSystemDescriptor,
                      (signed __int64)v1,
                      0LL) )
                return ViLocalSystemDescriptor;
              Acl = -1073741595;
            }
          }
        }
        ExFreePoolWithTag(v4, 0x55667256u);
        if ( Acl < 0 )
LABEL_12:
          ExFreePoolWithTag(v1, 0x55667256u);
      }
    }
  }
  return ViLocalSystemDescriptor;
}
