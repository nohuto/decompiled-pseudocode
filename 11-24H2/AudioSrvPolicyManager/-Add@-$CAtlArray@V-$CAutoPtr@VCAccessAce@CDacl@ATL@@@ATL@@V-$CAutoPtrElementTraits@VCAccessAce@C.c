/*
 * XREFs of ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180046B14
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C84C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18001E084 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180017A70 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
          (__int64)a1,
          v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = *a2;
  result = v2;
  v7 = *a1;
  *a2 = 0LL;
  *(_QWORD *)(v7 + 8 * v2) = v5;
  ++a1[1];
  return result;
}
