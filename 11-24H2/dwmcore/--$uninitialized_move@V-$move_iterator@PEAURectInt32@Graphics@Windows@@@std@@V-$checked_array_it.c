/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@0@0V12@@Z @ 0x180243B8C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180243980 (-ensure_extra_capacity@-$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_polic.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x180243D14 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<Windows::Graphics::RectInt32 *>,stdext::checked_array_iterator<Windows::Graphics::RectInt32 *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 4);
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v8 + v5 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
