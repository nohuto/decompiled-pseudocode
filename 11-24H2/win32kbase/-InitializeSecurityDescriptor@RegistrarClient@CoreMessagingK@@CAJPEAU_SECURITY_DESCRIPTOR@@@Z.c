/*
 * XREFs of ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1400FC070
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC354 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FC5B8 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  struct _ACL *v2; // rdi
  ULONG v3; // ebx
  struct _ACL *Pool2; // rax
  struct _ACL *v5; // rsi
  NTSTATUS Acl; // ebx

  v2 = 0LL;
  v3 = RtlLengthSid(&unk_14025EA80) + 20;
  Pool2 = (struct _ACL *)ExAllocatePool2(256LL, v3, 1146309955LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v3, 2u);
    v2 = v5;
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 1u, &unk_14025EA80);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
        if ( Acl >= 0 )
        {
          Acl = 0;
          v2 = 0LL;
        }
      }
    }
  }
  else
  {
    Acl = -1073741801;
  }
  CoreMessagingK::Runtime::Free(v2, 1146309955LL);
  return (unsigned int)Acl;
}
