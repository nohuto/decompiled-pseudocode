/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1800E25D0
 * Callers:
 *     RtlReplaceSidInSd @ 0x1801378C0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v4; // ax
  __int64 v6; // rax
  ACL *v7; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v4 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v4 & 4) == 0 )
    {
LABEL_4:
      *Dacl = 0LL;
      *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
      return 0;
    }
    if ( v4 >= 0 )
    {
      v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
    }
    else
    {
      v6 = *((unsigned int *)SecurityDescriptor + 4);
      if ( !(_DWORD)v6 )
        goto LABEL_4;
      v7 = (ACL *)((char *)SecurityDescriptor + v6);
    }
    *Dacl = v7;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
