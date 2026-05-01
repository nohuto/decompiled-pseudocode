/*
 * XREFs of ??$_Uninitialized_copy_n@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@_KPEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1805710DC
 * Callers:
 *     ??$_Insert_counted_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@_K@Z @ 0x180570EE8 (--$_Insert_counted_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18014AEF8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

__int64 __fastcall std::_Uninitialized_copy_n<std::move_iterator<std::wstring *>>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8

  v3 = a3;
  if ( a2 )
  {
    v4 = (_QWORD *)(a1 + 24);
    v5 = a3 - a1;
    do
    {
      *(_OWORD *)v3 = 0LL;
      *(_QWORD *)((char *)v4 + v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + v5) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v4 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      v3 += 32LL;
      *v4 = 7LL;
      *((_WORD *)v4 - 12) = 0;
      v4 += 4;
      --a2;
    }
    while ( a2 );
  }
  std::_Destroy_range<std::allocator<std::wstring>>((void **)v3, (void **)v3);
  return v3;
}
