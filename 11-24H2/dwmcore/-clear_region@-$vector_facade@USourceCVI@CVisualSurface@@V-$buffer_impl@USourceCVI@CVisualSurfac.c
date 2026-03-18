/*
 * XREFs of ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18018E27C
 * Callers:
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18006F300 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?clear@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18018E254 (-clear@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 * Callees:
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x18018E490 (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x1801FABCC (--$move@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iterator@PEAUSourc.c)
 */

__int64 __fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v10; // rdi
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v8 = (a1[1] - *a1) >> 4;
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_11;
  }
  v3 = v5 + 16 * v8;
  if ( v7 != v8 )
  {
    if ( !v6 )
      goto LABEL_8;
    if ( !v5 )
      goto LABEL_9;
    if ( v6 >= 0 )
    {
      if ( v8 < v6 )
LABEL_9:
        _invalid_parameter_noinfo_noreturn();
LABEL_8:
      v12[0] = v5;
      v12[2] = v6;
      v12[1] = v8;
      ((void (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
        v13,
        v5 + 16 * v7,
        v3,
        v12);
      goto LABEL_3;
    }
LABEL_11:
    if ( v6 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_3:
  v10 = 16 * a3;
  result = detail::destruct_range<CVisualSurface::SourceCVI>((void *)(v3 - v10));
  a1[1] -= v10;
  return result;
}
