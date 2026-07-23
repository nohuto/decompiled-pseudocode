/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1800E6880
 * Callers:
 *     RtlReplaceSidInSd @ 0x1801378C0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v4; // ax
  __int64 v6; // rax
  ACL *v7; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    *SaclPresent = 1;
    v4 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v4 & 0x10) == 0 )
    {
LABEL_4:
      *Sacl = 0LL;
      *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
      return 0;
    }
    if ( v4 >= 0 )
    {
      v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v6 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v6 )
        goto LABEL_4;
      v7 = (ACL *)((char *)SecurityDescriptor + v6);
    }
    *Sacl = v7;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  else
  {
    *SaclPresent = 0;
  }
  return 0;
}
