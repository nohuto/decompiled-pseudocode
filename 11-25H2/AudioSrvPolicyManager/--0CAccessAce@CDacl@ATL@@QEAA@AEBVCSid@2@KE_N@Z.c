/*
 * XREFs of ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001B384
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C71C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18001E224 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180048F68 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180014990 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001B4B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18001E2F0 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18001F9D8 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CDacl::CAccessAce *__fastcall ATL::CDacl::CAccessAce::CAccessAce(
        ATL::CDacl::CAccessAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5)
{
  _QWORD *v9; // rdi
  DWORD LengthSid; // eax
  int Error; // eax

  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  v9 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = &ATL::CSid::`vftable';
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 12) = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 11) - 24LL))
                         + 6;
  v9[12] = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 12) - 24LL))
         + 6;
  v9[13] = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 13) - 24LL))
         + 6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v9 + 14);
  if ( *((_BYTE *)a2 + 76) )
  {
    if ( !ATL::CSid::IsValid(a2) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid((char *)a2 + 8);
    if ( !CopySid(LengthSid, v9 + 1, (char *)a2 + 8) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  *((_DWORD *)this + 32) = a3;
  *((_BYTE *)this + 132) = a4;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  *((_BYTE *)this + 144) = a5;
  return this;
}
