/*
 * XREFs of ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x1801FB42C
 * Callers:
 *     ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x1801FB3E0 (--_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(
        CCompositionSwapchainStatistics *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CCompositionSwapchainStatistics::`vftable';
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 5) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
}
