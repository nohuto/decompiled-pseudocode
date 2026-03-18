/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@0@0V12@@Z @ 0x1802C778C
 * Callers:
 *     ?reserve_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURectInt32@Graphics@Windows@@_K0@Z @ 0x18024C7A4 (-reserve_region@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x18024CC4C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<Windows::Graphics::RectInt32 *>,stdext::checked_array_iterator<Windows::Graphics::RectInt32 *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
         a4,
         -((a3 - (__int64)a2) >> 4));
  a4[2] = ((__int64)memmove_0((void *)(v8 - v5), a2, v5) - *a4) >> 4;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
