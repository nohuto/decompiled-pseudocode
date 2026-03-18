/*
 * XREFs of ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1801AC234
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AC2E8 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801AC3C0 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

void __fastcall CComposition::RemoveVisualTree(struct _RTL_CRITICAL_SECTION *this, const struct CVisualTree *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const struct CVisualTree **i; // rdx
  _QWORD *v6; // rax

  v2 = this + 9;
  EnterCriticalSection(this + 9);
  for ( i = (const struct CVisualTree **)this[10].DebugInfo; i != *(const struct CVisualTree ***)&this[10].LockCount; ++i )
  {
    if ( *i == a2 )
    {
      if ( LOBYTE(this[141].LockSemaphore) )
      {
        v6 = (_QWORD *)detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                         &this[13].SpinCount,
                         (__int64)((__int64)this[14].DebugInfo - this[13].SpinCount) >> 3);
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          v6,
          (__int64)a2);
      }
      else
      {
        detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
          &this[10],
          ((char *)i - (char *)this[10].DebugInfo) >> 3);
      }
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
