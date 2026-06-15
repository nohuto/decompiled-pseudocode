/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C84C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800109F8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180018940 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180019658 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001B4B4 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001B5E4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetNull@CAcl@ATL@@QEAAXXZ @ 0x18001CB4C (-SetNull@CAcl@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180046748 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180046B14 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180046B78 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rdi
  DWORD i; // ebx
  unsigned int v5; // r15d
  const struct _GUID *v6; // r14
  const struct _GUID *v7; // rsi
  struct _SID *v8; // rcx
  ATL::CDacl::CAccessAce *v9; // rax
  ATL::CDacl::CAccessAce *v10; // [rsp+48h] [rbp-F0h] BYREF
  int v11; // [rsp+50h] [rbp-E8h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-E0h] BYREF
  ATL::CDacl *v13; // [rsp+60h] [rbp-D8h]
  PACL pAcl; // [rsp+68h] [rbp-D0h]
  ATL::CDacl::CAccessAce *v15; // [rsp+70h] [rbp-C8h]
  ATL::CDacl::CAccessAce *v16; // [rsp+78h] [rbp-C0h]
  __int64 pAclInformation; // [rsp+80h] [rbp-B8h] BYREF
  int v18; // [rsp+88h] [rbp-B0h]
  _QWORD v19[9]; // [rsp+90h] [rbp-A8h] BYREF
  char v20; // [rsp+DCh] [rbp-5Ch]
  int v21; // [rsp+E0h] [rbp-58h]
  __int64 v22; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+100h] [rbp-38h] BYREF

  v3 = this;
  v13 = this;
  pAcl = a2;
  if ( !a2 )
  {
    ATL::CAcl::SetNull(this);
    return;
  }
  pAclInformation = 0LL;
  v18 = 0;
  v11 = 0;
  pAce = 0LL;
  v19[0] = &ATL::CSid::`vftable';
  v20 = 0;
  v21 = 7;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v22);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  v10 = 0LL;
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  if ( !GetAclInformation(a2, &pAclInformation, 0xCu, AclSizeInformation)
    || !GetAclInformation(a2, &v11, 4u, AclRevisionInformation) )
  {
LABEL_28:
    ATL::AtlThrowLastWin32();
  }
  *((_DWORD *)v3 + 5) = v11;
  for ( i = 0; i < (unsigned int)pAclInformation; ++i )
  {
    if ( !GetAce(pAcl, i, &pAce) )
      goto LABEL_28;
    v5 = *((_DWORD *)pAce + 1);
    if ( !*(_BYTE *)pAce || *(_BYTE *)pAce == 1 )
    {
      ATL::CSid::operator=((ATL::CSid *)v19, (struct _SID *)((char *)pAce + 8));
      try
      {
        v9 = (ATL::CDacl::CAccessAce *)operator new(0x98uLL);
        v16 = v9;
        if ( v9 )
          v9 = ATL::CDacl::CAccessAce::CAccessAce(
                 v9,
                 (const struct ATL::CSid *)v19,
                 v5,
                 *((_BYTE *)pAce + 1),
                 *(_BYTE *)pAce == 0);
        v10 = v9;
      }
      catch ( ... )
      {
        v3 = v13;
        v9 = v10;
      }
    }
    else
    {
      if ( (unsigned int)*(unsigned __int8 *)pAce - 5 > 1 )
        continue;
      v6 = 0LL;
      v7 = 0LL;
      v8 = (struct _SID *)((char *)pAce + 44);
      if ( (*((_DWORD *)pAce + 2) & 1) != 0 )
        v6 = (const struct _GUID *)((char *)pAce + 12);
      else
        v8 = (struct _SID *)((char *)pAce + 28);
      if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
        v7 = (const struct _GUID *)((char *)pAce + (v6 != 0LL ? 28LL : 12LL));
      else
        v8 = (struct _SID *)((char *)v8 - 16);
      ATL::CSid::operator=((ATL::CSid *)v19, v8);
      v9 = (ATL::CDacl::CAccessAce *)operator new(0xA8uLL);
      v15 = v9;
      if ( v9 )
      {
        try
        {
          v9 = (ATL::CDacl::CAccessAce *)ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                                           v9,
                                           (const struct ATL::CSid *)v19,
                                           v5,
                                           *((_BYTE *)pAce + 1),
                                           *(_BYTE *)pAce == 5,
                                           v6,
                                           v7);
        }
        catch ( ... )
        {
          v3 = v13;
          v9 = v10;
          goto LABEL_19;
        }
      }
      v10 = v9;
    }
LABEL_19:
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (char *)v3 + 24,
      &v10);
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free((__int64 (__fastcall ****)(_QWORD, __int64))&v10);
  ATL::CSid::~CSid((ATL::CSid *)v19);
}
