/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180057B28
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180057780 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002CC74 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180057E60 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180057F38 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800586E8 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180085CC0 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800A1CFC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800A1D44 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x1800A3AB0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800A3E94 (--1CSid@ATL@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  bool v3; // di
  __int64 result; // rax
  bool v5; // di
  bool v6; // r8
  unsigned __int64 SecurityDescriptorLength; // rdi
  void *v8; // rax
  const char *v9; // r9
  void **v10; // [rsp+60h] [rbp-108h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-100h]
  void **v12; // [rsp+70h] [rbp-F8h] BYREF
  void *Block; // [rsp+78h] [rbp-F0h]
  char v14; // [rsp+80h] [rbp-E8h]
  int v15; // [rsp+84h] [rbp-E4h]
  __int128 v16; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+98h] [rbp-D0h]
  int v18; // [rsp+A0h] [rbp-C8h]
  ATL::CAtlException *v19; // [rsp+A8h] [rbp-C0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v20; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v21[11]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+118h] [rbp-50h] BYREF
  __int64 v23; // [rsp+120h] [rbp-48h] BYREF
  __int64 v24; // [rsp+128h] [rbp-40h] BYREF
  __int64 v25; // [rsp+130h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  try
  {
    v10 = &ATL::CSecurityDesc::`vftable';
    pSecurityDescriptor = 0LL;
    *(_DWORD *)v20.Value = 0;
    *(_WORD *)&v20.Value[4] = 1280;
    Block = 0LL;
    v14 = 0;
    v15 = 2;
    v12 = &ATL::CDacl::`vftable';
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v2 = (const struct ATL::CSid *)ATL::CSid::CSid(
                                     (ATL::CSid *)v21,
                                     &v20,
                                     6u,
                                     80LL,
                                     -1618417719,
                                     1911656217,
                                     -1669870755,
                                     -116925420,
                                     1366760775,
                                     0LL,
                                     0LL);
    v3 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v12, v2, 0x10000000u);
    v21[0] = &ATL::CSid::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v22);
    if ( v3 )
    {
      ATL::CSid::CSid((ATL::CSid *)v21, (const struct _SID_IDENTIFIER_AUTHORITY *)&ATL::Sids::SecurityNTAuthority, 1u);
      v5 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v12, (const struct ATL::CSid *)v21, 0x1000u);
      ATL::CSid::~CSid((ATL::CSid *)v21);
      if ( v5 )
      {
        ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v10, (const struct ATL::CDacl *)&v12, v6);
        ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v10);
        ATL::CDacl::~CDacl((ATL::CDacl *)&v12);
        SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
        v8 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
        *a1 = v8;
        if ( v8 )
        {
          memcpy_0(v8, pSecurityDescriptor, SecurityDescriptorLength);
          v10 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v10);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
            (const char *)0x8007000ELL);
          v10 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v10);
          result = 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
          (const char *)0x80004005LL);
        ATL::CDacl::~CDacl((ATL::CDacl *)&v12);
        v10 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v10);
        result = 2147500037LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)0x80004005LL);
      v12 = &ATL::CDacl::`vftable';
      ATL::CDacl::RemoveAllAces((ATL::CDacl *)&v12);
      ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(&v16);
      v12 = &ATL::CAcl::`vftable';
      free(Block);
      v10 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v10);
      result = 2147500037LL;
    }
  }
  catch ( ATL::CAtlException *v19 )
  {
    v9 = (const char *)*(unsigned int *)v19;
    *(_DWORD *)v20.Value = (_DWORD)v9;
    if ( (int)v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        v9);
    v10 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v10);
    return *(unsigned int *)v20.Value;
  }
  return result;
}
