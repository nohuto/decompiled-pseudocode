/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x180142068
 * Callers:
 *     ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180027F68 (-ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180143830 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x18002360C (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // r10
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rbx

  v5 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
         (__int64)a1,
         a3 + 16);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  std::_Deallocate<16,0>((char *)v6, (const struct std::nothrow_t *)0x28);
  *a2 = v10;
  return a2;
}
