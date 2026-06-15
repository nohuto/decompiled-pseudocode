/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180017750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 */

__int64 __fastcall std::_Ref_count_obj2<std::wstring>::_Destroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = (_QWORD *)(a1 + 16);
  result = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1 + 16, a2, a3, a4);
  if ( (_BYTE)result )
    result = std::wstring::_Deallocate_for_capacity(v6, *v4, v4[3]);
  v4[2] = 0LL;
  *(_WORD *)v4 = 0;
  v4[3] = 7LL;
  return result;
}
