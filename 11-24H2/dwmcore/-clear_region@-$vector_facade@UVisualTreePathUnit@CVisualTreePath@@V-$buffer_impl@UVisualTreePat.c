/*
 * XREFs of ?clear_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180007B40
 * Callers:
 *     ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x180007AE4 (-RemoveLast@CVisualTreePath@@QEAAJXZ.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@0@0V12@@Z @ 0x18017B52C (--$move@V-$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V-$checked_array_iterator.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v4 = a2 + a3;
  v7 = a2;
  v8 = (a1[1] - *a1) >> 4;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v3 + 16 * v8;
    if ( v4 == v8 )
      goto LABEL_3;
  }
  if ( v7 && (!v3 || v7 < 0 || v8 < v7) )
    _invalid_parameter_noinfo_noreturn();
  v11[0] = v3;
  v11[1] = v8;
  v11[2] = v7;
  result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
             v12,
             v3 + 16 * v4,
             v9,
             v11);
LABEL_3:
  a1[1] += -16 * a3;
  return result;
}
