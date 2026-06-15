/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800104EC
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045024 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180049400 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180010960 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180010AF0 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180010C98 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180010D94 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180010EB0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180016320 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180019090 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18001B240 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C71C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetNull@CAcl@ATL@@QEAAXXZ @ 0x18001CA1C (-SetNull@CAcl@ATL@@QEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18001CF38 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18001CF80 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x18001CFE8 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18001E224 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetEmpty@CAcl@ATL@@QEAAXXZ @ 0x180049AD4 (-SetEmpty@CAcl@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r14
  unsigned int v5; // edi
  struct _ACL *v6; // rax
  LSTATUS KeySecurity; // eax
  PSECURITY_DESCRIPTOR v8; // rcx
  const struct _ACL *v9; // r15
  struct _ACL *PACL; // r15
  const struct ATL::CSid *v11; // rdx
  unsigned int v12; // r8d
  unsigned __int8 v13; // r9
  bool v14; // r8
  unsigned __int64 SecurityDescriptorLength; // r15
  void *v16; // rax
  void **v18; // [rsp+60h] [rbp-178h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-170h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-168h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+74h] [rbp-164h] BYREF
  WINBOOL bDaclPresent; // [rsp+78h] [rbp-160h] BYREF
  PACL pDacl[2]; // [rsp+80h] [rbp-158h] BYREF
  void **v24; // [rsp+90h] [rbp-148h] BYREF
  void *v25; // [rsp+98h] [rbp-140h]
  char v26; // [rsp+A0h] [rbp-138h]
  int v27; // [rsp+A4h] [rbp-134h]
  __int128 v28; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-120h]
  int v30; // [rsp+C0h] [rbp-118h]
  void **v31; // [rsp+C8h] [rbp-110h] BYREF
  void *Block; // [rsp+D0h] [rbp-108h]
  char v33; // [rsp+D8h] [rbp-100h]
  int v34; // [rsp+DCh] [rbp-FCh]
  __int128 v35; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-E8h]
  int v37; // [rsp+F8h] [rbp-E0h]
  void **v38; // [rsp+100h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v40[128]; // [rsp+120h] [rbp-B8h] BYREF

  v38 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _ACL *)operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (struct _SECURITY_DESCRIPTOR *)v6;
    pDacl[1] = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        if ( KeySecurity > 0 )
          v5 = (unsigned __int16)KeySecurity | 0x80070000;
        else
          v5 = KeySecurity;
      }
      else
      {
        v18 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v25 = 0LL;
        v26 = 0;
        v27 = 2;
        v24 = &ATL::CDacl::`vftable';
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        v8 = 0LL;
        if ( v4 )
        {
          ((void (__fastcall *)(void ***))v18[1])(&v18);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v18, v4);
          v8 = pSecurityDescriptor;
        }
        pDacl[0] = 0LL;
        bDaclPresent = 0;
        bDaclDefaulted = 0;
        if ( v8 && GetSecurityDescriptorDacl(v8, &bDaclPresent, pDacl, &bDaclDefaulted) )
        {
          if ( bDaclPresent )
          {
            v9 = pDacl[0];
            if ( pDacl[0] )
            {
              ((void (__fastcall *)(void ***))v24[2])(&v24);
              ATL::CDacl::Copy((ATL::CDacl *)&v24, v9);
            }
            else
            {
              ATL::CAcl::SetNull((ATL::CAcl *)&v24);
            }
          }
          else
          {
            ATL::CAcl::SetEmpty((ATL::CAcl *)&v24);
          }
        }
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)&v24);
        EditAppContainerMask(PACL);
        Block = 0LL;
        v33 = 0;
        v34 = 2;
        v31 = &ATL::CDacl::`vftable';
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)&v31, PACL);
        v11 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v40, &pIdentifierAuthority, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v31, v11, v12, v13);
        ATL::CSid::~CSid((ATL::CSid *)v40);
        if ( (_BYTE)PACL )
        {
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v18, (const struct ATL::CDacl *)&v31, v14);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v18);
          ATL::CDacl::~CDacl((ATL::CDacl *)&v31);
          ATL::CDacl::~CDacl((ATL::CDacl *)&v24);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v16 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v16;
          if ( v16 )
            memcpy_0(v16, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v18 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v18);
        }
        else
        {
          v5 = -2147467259;
          v31 = &ATL::CDacl::`vftable';
          ATL::CDacl::RemoveAllAces((ATL::CDacl *)&v31);
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(&v35);
          v31 = &ATL::CAcl::`vftable';
          free(Block);
          v24 = &ATL::CDacl::`vftable';
          ATL::CDacl::RemoveAllAces((ATL::CDacl *)&v24);
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(&v28);
          v24 = &ATL::CAcl::`vftable';
          free(v25);
          v18 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v18);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  operator delete(v4);
  return v5;
}
