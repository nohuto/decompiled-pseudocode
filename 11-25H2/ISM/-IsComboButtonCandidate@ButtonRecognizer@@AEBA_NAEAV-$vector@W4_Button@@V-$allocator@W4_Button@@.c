/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x18019EE84
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x18019E7DC (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x18019D9E8 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18019DE5C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019E260 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, __int64 *a2)
{
  char v4; // di
  __int64 i; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int **v8; // r8
  unsigned int *v9; // rax
  __int64 v10; // r10
  int **v11; // rdx
  unsigned int *v12; // rcx
  int *v13; // rax
  int *v15; // [rsp+20h] [rbp-28h] BYREF
  int *v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v15, (__int64)a2);
  v4 = 0;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v15, v16, v16 - v15, 0);
  v7 = **(_QWORD **)(a1 + 32);
  v17 = v7;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = (unsigned int **)(v7 + 48);
    if ( *(_BYTE *)(v7 + 40) )
    {
      v9 = *v8;
      i = (a2[1] - *a2) >> 2;
      if ( v8[1] - *v8 < i )
        goto LABEL_24;
      v10 = (__int64)&v8[1][-i];
      v6 = (__int64)v9 - *a2;
LABEL_6:
      for ( i = *a2; i != a2[1]; i += 4LL )
      {
        if ( *(_DWORD *)(v6 + i) != *(_DWORD *)i )
        {
          if ( v9 == (unsigned int *)v10 )
            goto LABEL_24;
          ++v9;
          v6 += 4LL;
          goto LABEL_6;
        }
      }
      if ( v9 == v8[1] )
        goto LABEL_24;
      v11 = (int **)a2;
    }
    else
    {
      v12 = *v8;
      v13 = v15;
      while ( v12 != v8[1] )
      {
        if ( v13 == v16 )
          goto LABEL_22;
        i = *v12;
        if ( *v13 < (int)i )
          goto LABEL_24;
        if ( *v13 <= (int)i )
          ++v13;
        ++v12;
      }
      if ( v13 != v16 )
        goto LABEL_24;
LABEL_22:
      v11 = &v15;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)v8, v11) )
    {
      v4 = 1;
      break;
    }
LABEL_24:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
      &v17,
      i,
      (__int64)v8,
      v6);
    v7 = v17;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v15);
  return v4;
}
