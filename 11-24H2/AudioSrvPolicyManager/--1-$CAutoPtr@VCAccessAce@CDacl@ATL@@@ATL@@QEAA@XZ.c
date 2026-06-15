/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18001FBFC
 * Callers:
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x180049DE6 (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x180049F68 (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  return ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
}
