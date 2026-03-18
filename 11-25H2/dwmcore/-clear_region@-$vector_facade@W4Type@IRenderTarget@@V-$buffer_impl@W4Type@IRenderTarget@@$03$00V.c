/*
 * XREFs of ?clear_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18021DC30
 * Callers:
 *     ?clear@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18022B15C (-clear@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802717A4 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAW4Type@IRenderTarget@@@std@@V?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@V?$move_iterator@PEAW4Type@IRenderTarget@@@0@0V12@@Z @ 0x180252220 (--$move@V-$move_iterator@PEAW4Type@IRenderTarget@@@std@@V-$checked_array_iterator@PEAW4Type@IRen.c)
 */

__int64 __fastcall detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 2;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v3 + 4 * v7;
    if ( a2 + a3 == v7 )
      goto LABEL_3;
  }
  if ( v6 && (!v3 || v6 < 0 || v7 < v6) )
    _invalid_parameter_noinfo_noreturn();
  v11[1] = v7;
  v11[2] = v6;
  v11[0] = v3;
  result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
             v12,
             v3 + 4 * v8,
             v9,
             v11);
LABEL_3:
  a1[1] += -4 * a3;
  return result;
}
