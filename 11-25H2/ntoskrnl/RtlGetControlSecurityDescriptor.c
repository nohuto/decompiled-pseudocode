/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x140A4CA40
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14068C17C (AdtpIsSDValidSelfRelative.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
