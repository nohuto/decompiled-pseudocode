/*
 * XREFs of ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x1801ABD20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AC2E8 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801AC3C0 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

void __fastcall CVisualTree::FinalRelease(CVisualTree *this)
{
  __int64 v1; // rbx
  CVisualTree **i; // rdx
  _QWORD *v4; // rax

  v1 = *((_QWORD *)this + 3);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 360));
  for ( i = *(CVisualTree ***)(v1 + 400); i != *(CVisualTree ***)(v1 + 408); ++i )
  {
    if ( *i == this )
    {
      if ( *(_BYTE *)(v1 + 5664) )
      {
        v4 = (_QWORD *)detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                         v1 + 552,
                         (__int64)(*(_QWORD *)(v1 + 560) - *(_QWORD *)(v1 + 552)) >> 3);
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          v4,
          (__int64)this);
      }
      else
      {
        detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
          v1 + 400,
          ((__int64)i - *(_QWORD *)(v1 + 400)) >> 3);
      }
      break;
    }
  }
  if ( v1 != -360 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 360));
}
