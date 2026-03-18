/*
 * XREFs of ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x180185884
 * Callers:
 *     ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180185670 (-clear_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurfac.c)
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x180185748 (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801858BC (-ensure_extra_capacity@-$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CVisualSurface::SourceCVI>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
}
