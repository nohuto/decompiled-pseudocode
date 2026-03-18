/*
 * XREFs of ?clear_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C3550
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEA_N@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEA_N@stdext@@_J@Z @ 0x180246CE0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEA_N@stdext@@_J@std@@YA-A_TAEAV-$checked_array.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  const void *v9; // rbx
  size_t v10; // rbp
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1[1];
  v5 = *a1;
  v7 = v3 - v5;
  v8 = a2 + a3;
  if ( v8 > v3 - v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_3;
  }
  if ( v8 != v3 - v5 )
  {
    if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
LABEL_3:
      _invalid_parameter_noinfo_noreturn();
    v9 = (const void *)(v5 + v8);
    v12[0] = v5;
    v12[2] = a2;
    v10 = v3 - (v5 + v8);
    v12[1] = v7;
    v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<bool *> &,__int64>(v12, v10);
    memmove_0(v11, v9, v10);
  }
  a1[1] -= a3;
}
