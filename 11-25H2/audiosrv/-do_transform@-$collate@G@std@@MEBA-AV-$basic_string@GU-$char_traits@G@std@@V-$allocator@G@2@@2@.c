/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180140B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800E3DE0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::collate<unsigned short>::do_transform(
        const _Collvec *a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned __int64 v7; // rax
  const _Collvec *v8; // rdi
  wchar_t *v9; // rax
  wchar_t *v10; // rdx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  v7 = a4 - a3;
  if ( v7 )
  {
    v8 = a1 + 1;
    do
    {
      std::wstring::resize(a2, v7);
      std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a2);
      v9 = (wchar_t *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a2);
      v7 = _Wcsxfrm(v9, v10, a3, a4, v8);
    }
    while ( v7 > *(_QWORD *)(a2 + 16) && v7 );
  }
  std::wstring::resize(a2, v7);
  return a2;
}
