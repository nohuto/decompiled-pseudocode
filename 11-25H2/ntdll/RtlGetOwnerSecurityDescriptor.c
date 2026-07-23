/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1800EDE40
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x18013AE00 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v3; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else if ( *((_DWORD *)SecurityDescriptor + 1) )
  {
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  *Owner = v3;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
