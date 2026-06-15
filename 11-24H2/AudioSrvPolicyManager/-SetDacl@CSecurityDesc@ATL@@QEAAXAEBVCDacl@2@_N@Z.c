/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800106C0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180010850 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18001E4A4 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18001E5DC (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E7E0 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18001F930 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800211E6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180046B78 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180046F6C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180048BAC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2, char a3)
{
  PSECURITY_DESCRIPTOR v5; // rcx
  BOOL v6; // ebx
  size_t Length; // r14
  struct _ACL *v8; // rbp
  const struct _ACL *PACL; // rax
  int v10; // r14d
  int Error; // ebx
  WINBOOL bDaclPresent; // [rsp+50h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+60h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute((ATL::CSecurityDesc *)this);
  v5 = this[1];
  v6 = 0;
  pDacl = 0LL;
  if ( v5 )
  {
    bDaclDefaulted = 0;
    bDaclPresent = 0;
    if ( !GetSecurityDescriptorDacl(v5, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor((ATL::CSecurityDesc *)this);
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v8 = 0LL;
  }
  else
  {
    Length = ATL::CAcl::GetLength(a2);
    v8 = (struct _ACL *)malloc(Length);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    if ( Length )
    {
      if ( PACL )
      {
        memcpy_0(v8, PACL, Length);
        v10 = 0;
      }
      else
      {
        memset_0(v8, 0, Length);
        v10 = 22;
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
      }
      ATL::AtlCrtErrorCheck(v10);
    }
    else
    {
      ATL::AtlCrtErrorCheck(0);
    }
  }
  if ( *((_BYTE *)a2 + 16) || v8 )
    v6 = 1;
  if ( !SetSecurityDescriptorDacl(this[1], v6, v8, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v8);
    ATL::AtlThrowImpl(Error);
  }
  free(pDacl);
}
