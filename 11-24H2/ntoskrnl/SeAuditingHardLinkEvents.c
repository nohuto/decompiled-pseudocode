/*
 * XREFs of SeAuditingHardLinkEvents @ 0x140791EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingHardLinkEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // ax
  __int64 v3; // rax
  char *v4; // rax

  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v2 & 0x10) == 0 )
    return 0;
  if ( v2 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v3 )
      return 0;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 && *((_WORD *)v4 + 2) )
  {
    if ( byte_140F048E4 && AccessGranted )
      return 1;
    if ( byte_140F048E5 )
      return AccessGranted == 0;
  }
  return 0;
}
