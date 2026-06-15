/*
 * XREFs of ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18009FEC0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18001EAB8 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800A331C (--1CSecurityDesc@ATL@@UEAA@XZ.c)
 *     ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x1800AADE0 (--_GCSecurityDesc@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x1800745DC (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 */

void __fastcall ATL::CSecurityDesc::Clear(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  PSID pGroup; // [rsp+20h] [rbp-20h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v6; // [rsp+60h] [rbp+20h] BYREF
  WINBOOL bOwnerDefaulted; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+30h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    v6 = 0;
    if ( ATL::CSecurityDesc::GetControl(this, &v6) && (v6 & 0x8000u) == 0 )
    {
      v2 = (void *)*((_QWORD *)this + 1);
      pOwner = 0LL;
      pGroup = 0LL;
      pDacl = 0LL;
      pSacl = 0LL;
      bOwnerDefaulted = 0;
      bDaclPresent = 0;
      GetSecurityDescriptorOwner(v2, &pOwner, &bOwnerDefaulted);
      free(pOwner);
      GetSecurityDescriptorGroup(*((PSECURITY_DESCRIPTOR *)this + 1), &pGroup, &bOwnerDefaulted);
      free(pGroup);
      GetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pDacl, &bOwnerDefaulted);
      if ( bDaclPresent )
        free(pDacl);
      GetSecurityDescriptorSacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pSacl, &bOwnerDefaulted);
      if ( bDaclPresent )
        free(pSacl);
    }
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
