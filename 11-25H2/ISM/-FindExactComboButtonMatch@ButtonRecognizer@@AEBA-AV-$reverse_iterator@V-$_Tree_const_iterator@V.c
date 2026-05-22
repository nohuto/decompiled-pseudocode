/*
 * XREFs of ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x18019EAEC
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x18019E7DC (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x18019D9E8 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18019DE5C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019E260 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18019E5F8 (--C-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ButtonRecognizer::FindExactComboButtonMatch(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // r11
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 i; // rax
  int *v13; // [rsp+20h] [rbp-28h] BYREF
  int *v14; // [rsp+28h] [rbp-20h]
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v13, (__int64)a3);
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v13, v14, v14 - v13, 0);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)v6;
  *a2 = *(_QWORD *)v6;
LABEL_2:
  v15 = (__int64 *)v6;
  while ( v6 != v7 )
  {
    v8 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator->(&v15);
    v9 = (__int64)(v8 + 2);
    if ( *((_BYTE *)v8 + 8) )
    {
      if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v9, a3) )
      {
        *a2 = v6;
        break;
      }
    }
    else if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v9, &v13) )
    {
      *a2 = v6;
    }
    if ( *(_BYTE *)(v6 + 25) )
    {
      v6 = *(_QWORD *)(v6 + 16);
      goto LABEL_2;
    }
    v11 = *(_QWORD *)v6;
    if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
    {
      do
      {
        v6 = v11;
        v11 = *(_QWORD *)(v11 + 16);
      }
      while ( !*(_BYTE *)(v11 + 25) );
      goto LABEL_2;
    }
    for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v6 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
    {
      v6 = i;
      v15 = (__int64 *)i;
    }
    if ( !*(_BYTE *)(v6 + 25) )
    {
      v6 = i;
      v15 = (__int64 *)i;
    }
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v13);
  return a2;
}
