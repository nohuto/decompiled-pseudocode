/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180149600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800E8840 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rdx

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
      v10 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a2, v9);
      v11 = (wchar_t *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(
                         a2,
                         v10 + 2LL * *(_QWORD *)(a2 + 16));
      v7 = _Wcsxfrm(v11, v12, a3, a4, v8);
    }
    while ( v7 > *(_QWORD *)(a2 + 16) && v7 );
  }
  std::wstring::resize(a2, v7);
  return a2;
}
