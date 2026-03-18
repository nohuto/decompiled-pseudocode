/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x1801D4174
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801D408C (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ??1?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D4204 (--1-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    *(_QWORD *)(v1 + 32) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 80LL))(
      *v3,
      ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    ++v3;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>((char *)this + 24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
