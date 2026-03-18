/*
 * XREFs of ?clear_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18024EFC8
 * Callers:
 *     ?erase_unchecked@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@0@Z @ 0x18024EF54 (-erase_unchecked@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice.c)
 *     ?clear@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180254DB0 (-clear@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 * Callees:
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x18024F364 (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x18024F55C (--$move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCDelayU.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a1[1] - *a1;
  v6 = a2 + a3;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 3);
  v9 = a2;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = v3 + 24 * v8;
  if ( !v10 )
  {
    if ( v9 && (!v3 || v9 < 0 || v8 < v9) )
      _invalid_parameter_noinfo_noreturn();
    v14[1] = v8;
    v14[0] = v3;
    v14[2] = v9;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>)(
      v15,
      v3 + 24 * v6,
      v11,
      v14);
  }
  v12 = 24 * a3;
  result = detail::destruct_range<CD3DDevice::CDelayUnpin>((void *)(v11 - v12));
  a1[1] -= v12;
  return result;
}
