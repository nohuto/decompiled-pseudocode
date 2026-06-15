/*
 * XREFs of ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001E808
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18001E720 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000C824 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 */

ATL::CDacl::CAccessAce *__fastcall ATL::CDacl::CAccessAce::CAccessAce(
        ATL::CDacl::CAccessAce *this,
        const struct ATL::CSid *a2,
        int a3)
{
  ATL::CDacl::CAccessAce *result; // rax

  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  ATL::CSid::CSid((ATL::CDacl::CAccessAce *)((char *)this + 8), a2);
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  result = this;
  *((_DWORD *)this + 32) = a3;
  *((_BYTE *)this + 132) = 0;
  *((_BYTE *)this + 144) = 1;
  return result;
}
