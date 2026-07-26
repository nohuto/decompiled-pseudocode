/*
 * XREFs of SeUtilSecurityInfoFromSecurityDescriptor @ 0x14014DFF4
 * Callers:
 *     IopDevObjApplyPostCreationSettings @ 0x14014CEB4 (IopDevObjApplyPostCreationSettings.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x14014DB64 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SeUtilSecurityInfoFromSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN *a2,
        _DWORD *a3)
{
  NTSTATUS result; // eax
  int v7; // ebx
  PSID Owner; // [rsp+20h] [rbp-10h] BYREF
  PACL Sacl; // [rsp+28h] [rbp-8h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+58h] [rbp+28h] BYREF
  BOOLEAN SaclPresent; // [rsp+68h] [rbp+38h] BYREF

  Owner = 0LL;
  Sacl = 0LL;
  *a3 = 0;
  *a2 = 0;
  OwnerDefaulted = 0;
  SaclPresent = 0;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    v7 = Owner != 0LL;
    result = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      if ( Owner )
        v7 |= 2u;
      result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( SaclPresent )
          v7 |= 8u;
        result = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &OwnerDefaulted);
        if ( result >= 0 )
        {
          if ( SaclPresent )
            v7 |= 4u;
          *a2 = OwnerDefaulted;
          result = 0;
          *a3 = v7;
        }
      }
    }
  }
  return result;
}
