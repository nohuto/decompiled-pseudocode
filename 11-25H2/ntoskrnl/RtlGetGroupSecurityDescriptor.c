/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x140A75A50
 * Callers:
 *     RtlReplaceSidInSd @ 0x140771C10 (RtlReplaceSidInSd.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x14099CA18 (IopGetSecurityDescriptorInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
