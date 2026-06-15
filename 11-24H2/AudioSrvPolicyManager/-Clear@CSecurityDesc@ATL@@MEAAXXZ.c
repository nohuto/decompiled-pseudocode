/*
 * XREFs of ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180010C10
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x18001F73C (--1CSecurityDesc@ATL@@UEAA@XZ.c)
 *     ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x180046A70 (--_GCSecurityDesc@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::Clear(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  PSID pGroup; // [rsp+20h] [rbp-28h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-20h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-18h] BYREF
  WORD pControl; // [rsp+60h] [rbp+18h] BYREF
  DWORD dwRevision; // [rsp+68h] [rbp+20h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+28h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+30h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    dwRevision = 0;
    pControl = 0;
    if ( GetSecurityDescriptorControl(v2, &pControl, &dwRevision) && (pControl & 0x8000u) == 0 )
    {
      v3 = (void *)*((_QWORD *)this + 1);
      pOwner = 0LL;
      pGroup = 0LL;
      pDacl = 0LL;
      pSacl = 0LL;
      dwRevision = 0;
      bDaclPresent = 0;
      GetSecurityDescriptorOwner(v3, &pOwner, (LPBOOL)&dwRevision);
      free(pOwner);
      GetSecurityDescriptorGroup(*((PSECURITY_DESCRIPTOR *)this + 1), &pGroup, (LPBOOL)&dwRevision);
      free(pGroup);
      GetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pDacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pDacl);
      GetSecurityDescriptorSacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pSacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pSacl);
    }
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
