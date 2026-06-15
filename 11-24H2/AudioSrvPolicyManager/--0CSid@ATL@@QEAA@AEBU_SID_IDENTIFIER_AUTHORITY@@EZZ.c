/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18001B370
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001B5E4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18001B61C (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180046B78 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, UCHAR a3, ...)
{
  DWORD v5; // edi
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v7; // ebx
  struct _SID Sid[6]; // [rsp+30h] [rbp-88h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+18h] BYREF

  nSubAuthorityCount = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  v5 = 0;
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 88);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 96);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 104);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 112);
  if ( !nSubAuthorityCount || GetSidLengthRequired(nSubAuthorityCount) > 0x44 )
    ATL::AtlThrowImpl(-2147024809);
  if ( !InitializeSid(Sid, pIdentifierAuthority, nSubAuthorityCount) )
    ATL::AtlThrowLastWin32();
  if ( nSubAuthorityCount )
  {
    p_nSubAuthorityCount = &nSubAuthorityCount;
    do
    {
      p_nSubAuthorityCount += 8;
      v7 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v5++) = v7;
    }
    while ( v5 < nSubAuthorityCount );
  }
  ATL::CSid::Copy(this, Sid);
  *((_DWORD *)this + 20) = 8;
  return this;
}
