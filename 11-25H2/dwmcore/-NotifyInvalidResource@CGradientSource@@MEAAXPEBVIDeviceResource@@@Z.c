/*
 * XREFs of ?NotifyInvalidResource@CGradientSource@@MEAAXPEBVIDeviceResource@@@Z @ 0x1802AC350
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019F8C0 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGradientSource::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 *v2; // rdi
  _QWORD *i; // rbx

  v2 = (__int64 *)(this + 16);
  for ( i = *(_QWORD **)(this + 16); i != *(_QWORD **)(this + 24); ++i )
  {
    if ( (const struct IDeviceResource *)*i == a2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 80LL))(
        *i,
        this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
      detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        ((__int64)i - *v2) >> 3,
        1LL);
      return;
    }
  }
}
