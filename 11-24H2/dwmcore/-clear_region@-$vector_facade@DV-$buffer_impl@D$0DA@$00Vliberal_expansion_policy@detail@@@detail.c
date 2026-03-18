/*
 * XREFs of ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801BEEB0
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801BEFD4 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEA_N@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEA_N@stdext@@_J@Z @ 0x180246CE0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEA_N@stdext@@_J@std@@YA-A_TAEAV-$checked_array.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  bool v9; // zf
  const void *v10; // rbx
  size_t v11; // rbp
  void *v12; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1[1];
  v5 = *a1;
  v7 = v3 - v5;
  v8 = a2 + a3;
  v9 = v8 == v3 - v5;
  if ( v8 > v3 - v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v9 )
  {
    if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v10 = (const void *)(v5 + v8);
    v13[0] = v5;
    v13[2] = a2;
    v11 = v3 - (v5 + v8);
    v13[1] = v7;
    v12 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<bool *> &,__int64>(v13, v11);
    memmove_0(v12, v10, v11);
  }
  a1[1] -= a3;
}
